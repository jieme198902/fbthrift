package gotest

import (
	"fmt"
	"net"
	"reflect"
	"testing"
	"thrift/lib/go/thrift"
	"thrift/test/go/if/thrifttest"
	"time"
)

const localConnTimeout = time.Second * 1
const testCallString = "this is a fairly lengthy test string \\ that ' has \x20 some 东西奇怪的"

// createTestHeaderServer Create and bind a test server to localhost
func createTestHeaderServer(handler thrifttest.ThriftTest) (*thrift.TSimpleServer, net.Addr, error) {
	processor := thrifttest.NewThriftTestProcessor(handler)
	transportFactory := thrift.NewTHeaderTransportFactory(thrift.NewTTransportFactory())
	protocolFactory := thrift.NewTHeaderProtocolFactory()

	transport, err := thrift.NewTServerSocket("[::]:0")
	if err != nil {
		return nil, nil, fmt.Errorf("failed to open test socket: %s", err)
	}

	err = transport.Listen()
	if err != nil {
		return nil, nil, fmt.Errorf("failed to listen on socket: %s", err)
	}
	taddr := transport.Addr()

	server := thrift.NewTSimpleServer4(processor, transport, transportFactory, protocolFactory)
	go func(server *thrift.TSimpleServer) {
		err = server.Serve()
		if err != nil {
			panic(fmt.Errorf("failed to begin serving test socket: %s", err))
		}
	}(server)

	conn, err := net.DialTimeout(taddr.Network(), taddr.String(), localConnTimeout)
	if err != nil {
		return nil, nil, fmt.Errorf(
			"failed to connect to test socket: %s:%s", taddr.Network(), taddr.String(),
		)
	}
	conn.Close()

	return server, taddr, nil
}

// connectTestHeaderServer Create a client and connect to a test server
func connectTestHeaderServer(
	addr net.Addr,
	transportFactory thrift.TTransportFactory,
	protocolFactory thrift.TProtocolFactory,
) (*thrifttest.ThriftTestClient, error) {
	var trans thrift.TTransport = thrift.NewTSocketFromAddrTimeout(addr, localConnTimeout)
	err := trans.Open()

	if err != nil {
		return nil, err
	}

	if transportFactory != nil {
		trans = transportFactory.GetTransport(trans)
	}

	prot := protocolFactory.GetProtocol(trans)
	return thrifttest.NewThriftTestClientProtocol(trans, prot, prot), nil
}

func doClientTest(t *testing.T, transportFactory thrift.TTransportFactory, protocolFactory thrift.TProtocolFactory) {
	handler := &testHandler{}
	serv, addr, err := createTestHeaderServer(handler)
	if err != nil {
		t.Fatalf("failed to create test server: %s", err.Error())
	}
	defer serv.Stop()

	client, err := connectTestHeaderServer(addr, transportFactory, protocolFactory)
	if err != nil {
		t.Fatalf("failed to connect to test server: %s", err.Error())
	}
	defer client.Transport.Close()

	res, err := client.DoTestString(testCallString)
	if err != nil {
		t.Fatalf("failed to query test server: %s", err.Error())
	}

	if res != testCallString {
		t.Fatalf("server query compare failed")
	}

	// Try sending a lot of requests
	for i := 0; i < 1000; i++ {
		res, err = client.DoTestString(testCallString)
		if err != nil {
			t.Fatalf("failed to query test server: %s", err.Error())
		}
		if res != testCallString {
			t.Fatalf("server query compare failed")
		}
	}

	// Try getting an application Exception
	exp1 := thrifttest.NewXception()
	exp1.ErrorCode = 5
	exp1.Message = testCallString
	handler.ReturnError = exp1

	err = client.DoTestException(testCallString)
	if texp, ok := err.(*thrifttest.Xception); ok && texp != nil {
		if texp.ErrorCode != 5 || texp.Message != testCallString {
			t.Fatalf("application exception values incorrect: got=%s", texp.String())
		}
	} else {
		t.Fatalf("application exception type incorrect: got=%v", err)
	}
	handler.ReturnError = nil

	// Make a large-ish struct
	insanity := thrifttest.NewInsanity()
	insanity.UserMap = map[thrifttest.Numberz]thrifttest.UserId{}
	insanity.Str2str = map[string]string{}
	for i := 0; i < 50000; i++ {
		insanity.UserMap[thrifttest.Numberz_SIX] = thrifttest.UserId(i)
		insanity.Xtructs = append(insanity.Xtructs, &thrifttest.Xtruct{
			StringThing: testCallString, ByteThing: 5, I32Thing: 50, I64Thing: 100,
		})
		insanity.Str2str[fmt.Sprintf("%d", i)] = testCallString
	}

	// Try sending a lot of large things
	for i := 0; i < 10; i++ {
		resp, terr := client.DoTestInsanity(insanity)
		if terr != nil {
			t.Fatalf("failed to query test server: %s", err.Error())
		}

		num, ok := resp[thrifttest.UserId(3)]
		if !ok {
			t.Fatalf("incorrect response from server on insanity")
		}

		data, ok := num[thrifttest.Numberz_EIGHT]
		if !ok {
			t.Fatalf("incorrect response from server on insanity")
		}

		if !reflect.DeepEqual(data, insanity) {
			t.Fatalf("incorrect response from server on insanity")
		}
	}
}

func TestMultiTransportToHeader(t *testing.T) {
	clientCombos := []struct {
		clientType       thrift.ClientType
		transportFactory thrift.TTransportFactory
		protocolFactory  thrift.TProtocolFactory
	}{
		{
			thrift.HeaderClientType,
			thrift.NewTHeaderTransportFactory(thrift.NewTTransportFactory()),
			thrift.NewTHeaderProtocolFactory(),
		},
		{
			thrift.FramedDeprecated,
			thrift.NewTFramedTransportFactory(thrift.NewTTransportFactory()),
			thrift.NewTBinaryProtocolFactoryDefault(),
		},
		{
			thrift.FramedCompact,
			thrift.NewTFramedTransportFactory(thrift.NewTTransportFactory()),
			thrift.NewTCompactProtocolFactory(),
		},
		{
			thrift.UnframedCompactDeprecated,
			thrift.NewTBufferedTransportFactory(1024),
			thrift.NewTCompactProtocolFactory(),
		},
		// FIXME: This one is broken (times out)
		// {
		// 	thrift.UnframedDeprecated,
		// 	thrift.NewTBufferedTransportFactory(1024),
		// 	thrift.NewTBinaryProtocolFactoryDefault(),
		// },
	}

	for _, combo := range clientCombos {
		t.Run(combo.clientType.String(), func(t *testing.T) {
			doClientTest(t, combo.transportFactory, combo.protocolFactory)
		})
	}
}
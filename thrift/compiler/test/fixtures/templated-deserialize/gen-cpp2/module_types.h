/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/Cursor.h>

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>



namespace cpp2 {

class containerStruct;

class containerStruct : private apache::thrift::detail::st::ComparisonOperators<containerStruct> {
 public:

  containerStruct() :
      fieldA(0),
      fieldC(std::initializer_list<int32_t>{1,
  2,
  3,
  4}),
      fieldE(apache::thrift::StringTraits< std::string>::fromStringLiteral("somestring")),
      fieldI(true),
      fieldJ(std::initializer_list<std::pair<const std::string, std::vector<int32_t>>>{{apache::thrift::StringTraits< std::string>::fromStringLiteral("subfieldA"), std::initializer_list<int32_t>{1,
  4,
  8,
  12}},
  {apache::thrift::StringTraits< std::string>::fromStringLiteral("subfieldB"), std::initializer_list<int32_t>{2,
  5,
  9,
  13}}}) {}
  // FragileConstructor for use in initialization lists only

  containerStruct(apache::thrift::FragileConstructor, bool fieldA__arg, std::map<std::string, bool> fieldB__arg, std::set<int32_t> fieldC__arg, std::string fieldD__arg, std::string fieldE__arg, std::vector<std::vector<std::vector<int32_t>>> fieldF__arg, std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>> fieldG__arg, std::vector<std::set<int32_t>> fieldH__arg, bool fieldI__arg, std::map<std::string, std::vector<int32_t>> fieldJ__arg, std::vector<std::vector<std::vector<std::vector<int32_t>>>> fieldK__arg, std::set<std::set<std::set<bool>>> fieldL__arg, std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>> fieldM__arg) :
      fieldA(std::move(fieldA__arg)),
      fieldB(std::move(fieldB__arg)),
      fieldC(std::move(fieldC__arg)),
      fieldD(std::move(fieldD__arg)),
      fieldE(std::move(fieldE__arg)),
      fieldF(std::move(fieldF__arg)),
      fieldG(std::move(fieldG__arg)),
      fieldH(std::move(fieldH__arg)),
      fieldI(std::move(fieldI__arg)),
      fieldJ(std::move(fieldJ__arg)),
      fieldK(std::move(fieldK__arg)),
      fieldL(std::move(fieldL__arg)),
      fieldM(std::move(fieldM__arg)) {
    __isset.fieldA = true;
    __isset.fieldB = true;
    __isset.fieldC = true;
    __isset.fieldD = true;
    __isset.fieldE = true;
    __isset.fieldF = true;
    __isset.fieldG = true;
    __isset.fieldH = true;
    __isset.fieldI = true;
    __isset.fieldJ = true;
    __isset.fieldK = true;
    __isset.fieldL = true;
    __isset.fieldM = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  containerStruct(::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    containerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldA = arg.move();
    __isset.fieldA = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  containerStruct(::apache::thrift::detail::argument_wrapper<2, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    containerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldB = arg.move();
    __isset.fieldB = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  containerStruct(::apache::thrift::detail::argument_wrapper<3, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    containerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldC = arg.move();
    __isset.fieldC = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  containerStruct(::apache::thrift::detail::argument_wrapper<4, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    containerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldD = arg.move();
    __isset.fieldD = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  containerStruct(::apache::thrift::detail::argument_wrapper<5, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    containerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldE = arg.move();
    __isset.fieldE = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  containerStruct(::apache::thrift::detail::argument_wrapper<6, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    containerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldF = arg.move();
    __isset.fieldF = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  containerStruct(::apache::thrift::detail::argument_wrapper<7, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    containerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldG = arg.move();
    __isset.fieldG = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  containerStruct(::apache::thrift::detail::argument_wrapper<8, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    containerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldH = arg.move();
    __isset.fieldH = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  containerStruct(::apache::thrift::detail::argument_wrapper<9, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    containerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldI = arg.move();
    __isset.fieldI = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  containerStruct(::apache::thrift::detail::argument_wrapper<10, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    containerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldJ = arg.move();
    __isset.fieldJ = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  containerStruct(::apache::thrift::detail::argument_wrapper<11, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    containerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldK = arg.move();
    __isset.fieldK = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  containerStruct(::apache::thrift::detail::argument_wrapper<12, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    containerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldL = arg.move();
    __isset.fieldL = true;
  }
  template <typename T__ThriftWrappedArgument__Ctor, typename... Args__ThriftWrappedArgument__Ctor>
  containerStruct(::apache::thrift::detail::argument_wrapper<13, T__ThriftWrappedArgument__Ctor> arg, Args__ThriftWrappedArgument__Ctor&&... args):
    containerStruct(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    fieldM = arg.move();
    __isset.fieldM = true;
  }

  containerStruct(containerStruct&&) = default;

  containerStruct(const containerStruct&) = default;

  containerStruct& operator=(containerStruct&&) = default;

  containerStruct& operator=(const containerStruct&) = default;
  void __clear();

  virtual ~containerStruct() throw() {}

  bool fieldA;
  std::map<std::string, bool> fieldB;
  std::set<int32_t> fieldC;
  std::string fieldD;
  std::string fieldE;
  std::vector<std::vector<std::vector<int32_t>>> fieldF;
  std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>> fieldG;
  std::vector<std::set<int32_t>> fieldH;
  bool fieldI;
  std::map<std::string, std::vector<int32_t>> fieldJ;
  std::vector<std::vector<std::vector<std::vector<int32_t>>>> fieldK;
  std::set<std::set<std::set<bool>>> fieldL;
  std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>> fieldM;

  struct __isset {
    void __clear() {
      fieldA = false;
      fieldB = false;
      fieldC = false;
      fieldD = false;
      fieldE = false;
      fieldF = false;
      fieldG = false;
      fieldH = false;
      fieldI = false;
      fieldJ = false;
      fieldK = false;
      fieldL = false;
      fieldM = false;
    }

    bool fieldA = false;
    bool fieldB = false;
    bool fieldC = false;
    bool fieldD = false;
    bool fieldE = false;
    bool fieldF = false;
    bool fieldG = false;
    bool fieldH = false;
    bool fieldI = false;
    bool fieldJ = false;
    bool fieldK = false;
    bool fieldL = false;
    bool fieldM = false;
  } __isset;
  bool operator==(const containerStruct& rhs) const;

  bool operator < (const containerStruct& rhs) const {
    if (!(fieldA == rhs.fieldA)) {
      return fieldA < rhs.fieldA;
    }
    if (!(fieldB == rhs.fieldB)) {
      return fieldB < rhs.fieldB;
    }
    if (!(fieldC == rhs.fieldC)) {
      return fieldC < rhs.fieldC;
    }
    if (!(fieldD == rhs.fieldD)) {
      return fieldD < rhs.fieldD;
    }
    if (!(fieldE == rhs.fieldE)) {
      return fieldE < rhs.fieldE;
    }
    if (!(fieldF == rhs.fieldF)) {
      return fieldF < rhs.fieldF;
    }
    if (!(fieldG == rhs.fieldG)) {
      return fieldG < rhs.fieldG;
    }
    if (!(fieldH == rhs.fieldH)) {
      return fieldH < rhs.fieldH;
    }
    if (!(fieldI == rhs.fieldI)) {
      return fieldI < rhs.fieldI;
    }
    if (!(fieldJ == rhs.fieldJ)) {
      return fieldJ < rhs.fieldJ;
    }
    if (!(fieldK == rhs.fieldK)) {
      return fieldK < rhs.fieldK;
    }
    if (!(fieldL == rhs.fieldL)) {
      return fieldL < rhs.fieldL;
    }
    if (!(fieldM == rhs.fieldM)) {
      return fieldM < rhs.fieldM;
    }
    (void)rhs;
    return false;
  }

  bool get_fieldA() const {
    return fieldA;
  }

  bool& set_fieldA(bool fieldA_) {
    fieldA = fieldA_;
    __isset.fieldA = true;
    return fieldA;
  }
  const std::map<std::string, bool>& get_fieldB() const&;
  std::map<std::string, bool> get_fieldB() &&;
  template <typename T_containerStruct_fieldB_struct_setter>
  std::map<std::string, bool>& set_fieldB(T_containerStruct_fieldB_struct_setter&& fieldB_);
  const std::set<int32_t>& get_fieldC() const&;
  std::set<int32_t> get_fieldC() &&;
  template <typename T_containerStruct_fieldC_struct_setter>
  std::set<int32_t>& set_fieldC(T_containerStruct_fieldC_struct_setter&& fieldC_);

  const std::string& get_fieldD() const& {
    return fieldD;
  }

  std::string get_fieldD() && {
    return std::move(fieldD);
  }

  template <typename T_containerStruct_fieldD_struct_setter>
  std::string& set_fieldD(T_containerStruct_fieldD_struct_setter&& fieldD_) {
    fieldD = std::forward<T_containerStruct_fieldD_struct_setter>(fieldD_);
    __isset.fieldD = true;
    return fieldD;
  }

  const std::string& get_fieldE() const& {
    return fieldE;
  }

  std::string get_fieldE() && {
    return std::move(fieldE);
  }

  template <typename T_containerStruct_fieldE_struct_setter>
  std::string& set_fieldE(T_containerStruct_fieldE_struct_setter&& fieldE_) {
    fieldE = std::forward<T_containerStruct_fieldE_struct_setter>(fieldE_);
    __isset.fieldE = true;
    return fieldE;
  }
  const std::vector<std::vector<std::vector<int32_t>>>& get_fieldF() const&;
  std::vector<std::vector<std::vector<int32_t>>> get_fieldF() &&;
  template <typename T_containerStruct_fieldF_struct_setter>
  std::vector<std::vector<std::vector<int32_t>>>& set_fieldF(T_containerStruct_fieldF_struct_setter&& fieldF_);
  const std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>>& get_fieldG() const&;
  std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>> get_fieldG() &&;
  template <typename T_containerStruct_fieldG_struct_setter>
  std::map<std::string, std::map<std::string, std::map<std::string, int32_t>>>& set_fieldG(T_containerStruct_fieldG_struct_setter&& fieldG_);
  const std::vector<std::set<int32_t>>& get_fieldH() const&;
  std::vector<std::set<int32_t>> get_fieldH() &&;
  template <typename T_containerStruct_fieldH_struct_setter>
  std::vector<std::set<int32_t>>& set_fieldH(T_containerStruct_fieldH_struct_setter&& fieldH_);

  bool get_fieldI() const {
    return fieldI;
  }

  bool& set_fieldI(bool fieldI_) {
    fieldI = fieldI_;
    __isset.fieldI = true;
    return fieldI;
  }
  const std::map<std::string, std::vector<int32_t>>& get_fieldJ() const&;
  std::map<std::string, std::vector<int32_t>> get_fieldJ() &&;
  template <typename T_containerStruct_fieldJ_struct_setter>
  std::map<std::string, std::vector<int32_t>>& set_fieldJ(T_containerStruct_fieldJ_struct_setter&& fieldJ_);
  const std::vector<std::vector<std::vector<std::vector<int32_t>>>>& get_fieldK() const&;
  std::vector<std::vector<std::vector<std::vector<int32_t>>>> get_fieldK() &&;
  template <typename T_containerStruct_fieldK_struct_setter>
  std::vector<std::vector<std::vector<std::vector<int32_t>>>>& set_fieldK(T_containerStruct_fieldK_struct_setter&& fieldK_);
  const std::set<std::set<std::set<bool>>>& get_fieldL() const&;
  std::set<std::set<std::set<bool>>> get_fieldL() &&;
  template <typename T_containerStruct_fieldL_struct_setter>
  std::set<std::set<std::set<bool>>>& set_fieldL(T_containerStruct_fieldL_struct_setter&& fieldL_);
  const std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>>& get_fieldM() const&;
  std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>> get_fieldM() &&;
  template <typename T_containerStruct_fieldM_struct_setter>
  std::map<std::set<std::vector<int32_t>>, std::map<std::vector<std::set<std::string>>, std::string>>& set_fieldM(T_containerStruct_fieldM_struct_setter&& fieldM_);

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;
};

void swap(containerStruct& a, containerStruct& b);
extern template uint32_t containerStruct::read<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t containerStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t containerStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t containerStruct::read<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t containerStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t containerStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t containerStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::containerStruct>::clear( ::cpp2::containerStruct* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::containerStruct>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::containerStruct>::write(Protocol* proto,  ::cpp2::containerStruct const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::containerStruct>::read(Protocol* proto,  ::cpp2::containerStruct* obj) {
  return obj->read(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::containerStruct>::serializedSize(Protocol const* proto,  ::cpp2::containerStruct const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::containerStruct>::serializedSizeZC(Protocol const* proto,  ::cpp2::containerStruct const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
namespace cpp2 {

} // cpp2
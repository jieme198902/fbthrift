/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <gen-cpp2/HsTestService.h>

#include <folly/Try.h>
#include <folly/Unit.h>
#include <folly/io/async/EventBase.h>

#include <Python.h>

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <set>
#include <vector>

namespace cpp2 {

class HsTestServiceClientWrapper {
  protected:
    std::shared_ptr<cpp2::HsTestServiceAsyncClient> async_client;
    std::shared_ptr<folly::EventBase> event_base;
  public:
    explicit HsTestServiceClientWrapper(
      std::shared_ptr<cpp2::HsTestServiceAsyncClient> async_client,
      std::shared_ptr<folly::EventBase> event_base);
    virtual ~HsTestServiceClientWrapper();
    void init(
      int64_t arg_int1,
      std::function<void(PyObject*, folly::Try<int64_t>)> callback,
      PyObject* py_future);
};


} // namespace cpp2

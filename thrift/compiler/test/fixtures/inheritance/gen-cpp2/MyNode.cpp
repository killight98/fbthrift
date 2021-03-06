/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyNode.h"
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/MyNode.tcc"
#include "thrift/compiler/test/fixtures/inheritance/gen-cpp2/module_metadata.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

namespace cpp2 {
std::unique_ptr<apache::thrift::AsyncProcessor> MyNodeSvIf::getProcessor() {
  return std::make_unique<MyNodeAsyncProcessor>(this);
}


void MyNodeSvIf::do_mid() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("do_mid");
}

folly::SemiFuture<folly::Unit> MyNodeSvIf::semifuture_do_mid() {
  return apache::thrift::detail::si::semifuture([&] { return do_mid(); });
}

folly::Future<folly::Unit> MyNodeSvIf::future_do_mid() {
  return apache::thrift::detail::si::future(semifuture_do_mid(), getThreadManager());
}


void MyNodeSvIf::async_tm_do_mid(std::unique_ptr<apache::thrift::HandlerCallback<void>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_do_mid(); });
}

void MyNodeSvNull::do_mid() {
  return;
}

const char* MyNodeAsyncProcessor::getServiceName() {
  return "MyNode";
}

void MyNodeAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<MyNodeSvIf>::gen(response.metadata, response.context);
}

void MyNodeAsyncProcessor::processSerializedRequest(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedRequest&& serializedRequest, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(serializedRequest), protType, context, eb, tm);
}

std::shared_ptr<folly::RequestContext> MyNodeAsyncProcessor::getBaseContextForRequest() {
  return iface_->getBaseContextForRequest();
}

const MyNodeAsyncProcessor::ProcessMap& MyNodeAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const MyNodeAsyncProcessor::ProcessMap MyNodeAsyncProcessor::binaryProcessMap_ {
  {"do_mid", &MyNodeAsyncProcessor::_processInThread_do_mid<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const MyNodeAsyncProcessor::ProcessMap& MyNodeAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const MyNodeAsyncProcessor::ProcessMap MyNodeAsyncProcessor::compactProcessMap_ {
  {"do_mid", &MyNodeAsyncProcessor::_processInThread_do_mid<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

} // cpp2

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game_client.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "game_client.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace protocols {
namespace common {

namespace {

const ::google::protobuf::Descriptor* HeartBeatRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HeartBeatRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* HeartBeatResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  HeartBeatResponse_reflection_ = NULL;
const ::google::protobuf::Descriptor* InitConnectionRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InitConnectionRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* InitConnectionResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  InitConnectionResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_game_5fclient_2eproto() {
  protobuf_AddDesc_game_5fclient_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "game_client.proto");
  GOOGLE_CHECK(file != NULL);
  HeartBeatRequest_descriptor_ = file->message_type(0);
  static const int HeartBeatRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartBeatRequest, value_),
  };
  HeartBeatRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      HeartBeatRequest_descriptor_,
      HeartBeatRequest::default_instance_,
      HeartBeatRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartBeatRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartBeatRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(HeartBeatRequest));
  HeartBeatResponse_descriptor_ = file->message_type(1);
  static const int HeartBeatResponse_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartBeatResponse, value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartBeatResponse, server_time_),
  };
  HeartBeatResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      HeartBeatResponse_descriptor_,
      HeartBeatResponse::default_instance_,
      HeartBeatResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartBeatResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(HeartBeatResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(HeartBeatResponse));
  InitConnectionRequest_descriptor_ = file->message_type(2);
  static const int InitConnectionRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitConnectionRequest, ver_),
  };
  InitConnectionRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      InitConnectionRequest_descriptor_,
      InitConnectionRequest::default_instance_,
      InitConnectionRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitConnectionRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitConnectionRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(InitConnectionRequest));
  InitConnectionResponse_descriptor_ = file->message_type(3);
  static const int InitConnectionResponse_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitConnectionResponse, error_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitConnectionResponse, begin_seq_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitConnectionResponse, server_time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitConnectionResponse, server_id_),
  };
  InitConnectionResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      InitConnectionResponse_descriptor_,
      InitConnectionResponse::default_instance_,
      InitConnectionResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitConnectionResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(InitConnectionResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(InitConnectionResponse));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_game_5fclient_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    HeartBeatRequest_descriptor_, &HeartBeatRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    HeartBeatResponse_descriptor_, &HeartBeatResponse::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    InitConnectionRequest_descriptor_, &InitConnectionRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    InitConnectionResponse_descriptor_, &InitConnectionResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_game_5fclient_2eproto() {
  delete HeartBeatRequest::default_instance_;
  delete HeartBeatRequest_reflection_;
  delete HeartBeatResponse::default_instance_;
  delete HeartBeatResponse_reflection_;
  delete InitConnectionRequest::default_instance_;
  delete InitConnectionRequest_reflection_;
  delete InitConnectionResponse::default_instance_;
  delete InitConnectionResponse_reflection_;
}

void protobuf_AddDesc_game_5fclient_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\021game_client.proto\022\020protocols.common\"!\n"
    "\020HeartBeatRequest\022\r\n\005value\030\001 \001(\005\"7\n\021Hear"
    "tBeatResponse\022\r\n\005value\030\001 \001(\005\022\023\n\013server_t"
    "ime\030\002 \001(\003\"$\n\025InitConnectionRequest\022\013\n\003ve"
    "r\030\001 \001(\005\"g\n\026InitConnectionResponse\022\022\n\nerr"
    "or_code\030\001 \001(\005\022\021\n\tbegin_seq\030\002 \001(\005\022\023\n\013serv"
    "er_time\030\003 \001(\003\022\021\n\tserver_id\030\004 \001(\005", 272);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "game_client.proto", &protobuf_RegisterTypes);
  HeartBeatRequest::default_instance_ = new HeartBeatRequest();
  HeartBeatResponse::default_instance_ = new HeartBeatResponse();
  InitConnectionRequest::default_instance_ = new InitConnectionRequest();
  InitConnectionResponse::default_instance_ = new InitConnectionResponse();
  HeartBeatRequest::default_instance_->InitAsDefaultInstance();
  HeartBeatResponse::default_instance_->InitAsDefaultInstance();
  InitConnectionRequest::default_instance_->InitAsDefaultInstance();
  InitConnectionResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_game_5fclient_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_game_5fclient_2eproto {
  StaticDescriptorInitializer_game_5fclient_2eproto() {
    protobuf_AddDesc_game_5fclient_2eproto();
  }
} static_descriptor_initializer_game_5fclient_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int HeartBeatRequest::kValueFieldNumber;
#endif  // !_MSC_VER

HeartBeatRequest::HeartBeatRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void HeartBeatRequest::InitAsDefaultInstance() {
}

HeartBeatRequest::HeartBeatRequest(const HeartBeatRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void HeartBeatRequest::SharedCtor() {
  _cached_size_ = 0;
  value_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HeartBeatRequest::~HeartBeatRequest() {
  SharedDtor();
}

void HeartBeatRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void HeartBeatRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HeartBeatRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HeartBeatRequest_descriptor_;
}

const HeartBeatRequest& HeartBeatRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_game_5fclient_2eproto();
  return *default_instance_;
}

HeartBeatRequest* HeartBeatRequest::default_instance_ = NULL;

HeartBeatRequest* HeartBeatRequest::New() const {
  return new HeartBeatRequest;
}

void HeartBeatRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    value_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool HeartBeatRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 value = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &value_)));
          set_has_value();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void HeartBeatRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 value = 1;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->value(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* HeartBeatRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 value = 1;
  if (has_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->value(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int HeartBeatRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 value = 1;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->value());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HeartBeatRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const HeartBeatRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const HeartBeatRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void HeartBeatRequest::MergeFrom(const HeartBeatRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_value()) {
      set_value(from.value());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void HeartBeatRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HeartBeatRequest::CopyFrom(const HeartBeatRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HeartBeatRequest::IsInitialized() const {

  return true;
}

void HeartBeatRequest::Swap(HeartBeatRequest* other) {
  if (other != this) {
    std::swap(value_, other->value_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata HeartBeatRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HeartBeatRequest_descriptor_;
  metadata.reflection = HeartBeatRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int HeartBeatResponse::kValueFieldNumber;
const int HeartBeatResponse::kServerTimeFieldNumber;
#endif  // !_MSC_VER

HeartBeatResponse::HeartBeatResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void HeartBeatResponse::InitAsDefaultInstance() {
}

HeartBeatResponse::HeartBeatResponse(const HeartBeatResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void HeartBeatResponse::SharedCtor() {
  _cached_size_ = 0;
  value_ = 0;
  server_time_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

HeartBeatResponse::~HeartBeatResponse() {
  SharedDtor();
}

void HeartBeatResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void HeartBeatResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* HeartBeatResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return HeartBeatResponse_descriptor_;
}

const HeartBeatResponse& HeartBeatResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_game_5fclient_2eproto();
  return *default_instance_;
}

HeartBeatResponse* HeartBeatResponse::default_instance_ = NULL;

HeartBeatResponse* HeartBeatResponse::New() const {
  return new HeartBeatResponse;
}

void HeartBeatResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    value_ = 0;
    server_time_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool HeartBeatResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 value = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &value_)));
          set_has_value();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_server_time;
        break;
      }

      // optional int64 server_time = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_server_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &server_time_)));
          set_has_server_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void HeartBeatResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 value = 1;
  if (has_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->value(), output);
  }

  // optional int64 server_time = 2;
  if (has_server_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->server_time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* HeartBeatResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 value = 1;
  if (has_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->value(), target);
  }

  // optional int64 server_time = 2;
  if (has_server_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->server_time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int HeartBeatResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 value = 1;
    if (has_value()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->value());
    }

    // optional int64 server_time = 2;
    if (has_server_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->server_time());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void HeartBeatResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const HeartBeatResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const HeartBeatResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void HeartBeatResponse::MergeFrom(const HeartBeatResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_value()) {
      set_value(from.value());
    }
    if (from.has_server_time()) {
      set_server_time(from.server_time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void HeartBeatResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void HeartBeatResponse::CopyFrom(const HeartBeatResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HeartBeatResponse::IsInitialized() const {

  return true;
}

void HeartBeatResponse::Swap(HeartBeatResponse* other) {
  if (other != this) {
    std::swap(value_, other->value_);
    std::swap(server_time_, other->server_time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata HeartBeatResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = HeartBeatResponse_descriptor_;
  metadata.reflection = HeartBeatResponse_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int InitConnectionRequest::kVerFieldNumber;
#endif  // !_MSC_VER

InitConnectionRequest::InitConnectionRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void InitConnectionRequest::InitAsDefaultInstance() {
}

InitConnectionRequest::InitConnectionRequest(const InitConnectionRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void InitConnectionRequest::SharedCtor() {
  _cached_size_ = 0;
  ver_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

InitConnectionRequest::~InitConnectionRequest() {
  SharedDtor();
}

void InitConnectionRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void InitConnectionRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InitConnectionRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InitConnectionRequest_descriptor_;
}

const InitConnectionRequest& InitConnectionRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_game_5fclient_2eproto();
  return *default_instance_;
}

InitConnectionRequest* InitConnectionRequest::default_instance_ = NULL;

InitConnectionRequest* InitConnectionRequest::New() const {
  return new InitConnectionRequest;
}

void InitConnectionRequest::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    ver_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool InitConnectionRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 ver = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ver_)));
          set_has_ver();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void InitConnectionRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 ver = 1;
  if (has_ver()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->ver(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* InitConnectionRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 ver = 1;
  if (has_ver()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->ver(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int InitConnectionRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 ver = 1;
    if (has_ver()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->ver());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InitConnectionRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const InitConnectionRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const InitConnectionRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void InitConnectionRequest::MergeFrom(const InitConnectionRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_ver()) {
      set_ver(from.ver());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void InitConnectionRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InitConnectionRequest::CopyFrom(const InitConnectionRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InitConnectionRequest::IsInitialized() const {

  return true;
}

void InitConnectionRequest::Swap(InitConnectionRequest* other) {
  if (other != this) {
    std::swap(ver_, other->ver_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata InitConnectionRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InitConnectionRequest_descriptor_;
  metadata.reflection = InitConnectionRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int InitConnectionResponse::kErrorCodeFieldNumber;
const int InitConnectionResponse::kBeginSeqFieldNumber;
const int InitConnectionResponse::kServerTimeFieldNumber;
const int InitConnectionResponse::kServerIdFieldNumber;
#endif  // !_MSC_VER

InitConnectionResponse::InitConnectionResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void InitConnectionResponse::InitAsDefaultInstance() {
}

InitConnectionResponse::InitConnectionResponse(const InitConnectionResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void InitConnectionResponse::SharedCtor() {
  _cached_size_ = 0;
  error_code_ = 0;
  begin_seq_ = 0;
  server_time_ = GOOGLE_LONGLONG(0);
  server_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

InitConnectionResponse::~InitConnectionResponse() {
  SharedDtor();
}

void InitConnectionResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void InitConnectionResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* InitConnectionResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return InitConnectionResponse_descriptor_;
}

const InitConnectionResponse& InitConnectionResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_game_5fclient_2eproto();
  return *default_instance_;
}

InitConnectionResponse* InitConnectionResponse::default_instance_ = NULL;

InitConnectionResponse* InitConnectionResponse::New() const {
  return new InitConnectionResponse;
}

void InitConnectionResponse::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    error_code_ = 0;
    begin_seq_ = 0;
    server_time_ = GOOGLE_LONGLONG(0);
    server_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool InitConnectionResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 error_code = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &error_code_)));
          set_has_error_code();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_begin_seq;
        break;
      }

      // optional int32 begin_seq = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_begin_seq:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &begin_seq_)));
          set_has_begin_seq();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_server_time;
        break;
      }

      // optional int64 server_time = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_server_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &server_time_)));
          set_has_server_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_server_id;
        break;
      }

      // optional int32 server_id = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_server_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &server_id_)));
          set_has_server_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void InitConnectionResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 error_code = 1;
  if (has_error_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->error_code(), output);
  }

  // optional int32 begin_seq = 2;
  if (has_begin_seq()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->begin_seq(), output);
  }

  // optional int64 server_time = 3;
  if (has_server_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(3, this->server_time(), output);
  }

  // optional int32 server_id = 4;
  if (has_server_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->server_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* InitConnectionResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 error_code = 1;
  if (has_error_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->error_code(), target);
  }

  // optional int32 begin_seq = 2;
  if (has_begin_seq()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->begin_seq(), target);
  }

  // optional int64 server_time = 3;
  if (has_server_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(3, this->server_time(), target);
  }

  // optional int32 server_id = 4;
  if (has_server_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->server_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int InitConnectionResponse::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 error_code = 1;
    if (has_error_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->error_code());
    }

    // optional int32 begin_seq = 2;
    if (has_begin_seq()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->begin_seq());
    }

    // optional int64 server_time = 3;
    if (has_server_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->server_time());
    }

    // optional int32 server_id = 4;
    if (has_server_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->server_id());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void InitConnectionResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const InitConnectionResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const InitConnectionResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void InitConnectionResponse::MergeFrom(const InitConnectionResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_error_code()) {
      set_error_code(from.error_code());
    }
    if (from.has_begin_seq()) {
      set_begin_seq(from.begin_seq());
    }
    if (from.has_server_time()) {
      set_server_time(from.server_time());
    }
    if (from.has_server_id()) {
      set_server_id(from.server_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void InitConnectionResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void InitConnectionResponse::CopyFrom(const InitConnectionResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InitConnectionResponse::IsInitialized() const {

  return true;
}

void InitConnectionResponse::Swap(InitConnectionResponse* other) {
  if (other != this) {
    std::swap(error_code_, other->error_code_);
    std::swap(begin_seq_, other->begin_seq_);
    std::swap(server_time_, other->server_time_);
    std::swap(server_id_, other->server_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata InitConnectionResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = InitConnectionResponse_descriptor_;
  metadata.reflection = InitConnectionResponse_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace common
}  // namespace protocols

// @@protoc_insertion_point(global_scope)

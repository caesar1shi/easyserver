// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtoOnlineRewards.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ProtoOnlineRewards.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace Protocol {

void protobuf_ShutdownFile_ProtoOnlineRewards_2eproto() {
  delete NotifyOnlineRewardsUpdateInfo::default_instance_;
  delete RequestOnlineRewardsTakeAward::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_ProtoOnlineRewards_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_ProtoOnlineRewards_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ::protobuf_AddDesc_ProtoGameData_2eproto();
  NotifyOnlineRewardsUpdateInfo::default_instance_ = new NotifyOnlineRewardsUpdateInfo();
  RequestOnlineRewardsTakeAward::default_instance_ = new RequestOnlineRewardsTakeAward();
  NotifyOnlineRewardsUpdateInfo::default_instance_->InitAsDefaultInstance();
  RequestOnlineRewardsTakeAward::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ProtoOnlineRewards_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_ProtoOnlineRewards_2eproto_once_);
void protobuf_AddDesc_ProtoOnlineRewards_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_ProtoOnlineRewards_2eproto_once_,
                 &protobuf_AddDesc_ProtoOnlineRewards_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ProtoOnlineRewards_2eproto {
  StaticDescriptorInitializer_ProtoOnlineRewards_2eproto() {
    protobuf_AddDesc_ProtoOnlineRewards_2eproto();
  }
} static_descriptor_initializer_ProtoOnlineRewards_2eproto_;
#endif
bool OnlineRewardsOpCode_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int NotifyOnlineRewardsUpdateInfo::kDataFieldNumber;
#endif  // !_MSC_VER

NotifyOnlineRewardsUpdateInfo::NotifyOnlineRewardsUpdateInfo()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void NotifyOnlineRewardsUpdateInfo::InitAsDefaultInstance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  data_ = const_cast< ::OnlineRewardsData*>(
      ::OnlineRewardsData::internal_default_instance());
#else
  data_ = const_cast< ::OnlineRewardsData*>(&::OnlineRewardsData::default_instance());
#endif
}

NotifyOnlineRewardsUpdateInfo::NotifyOnlineRewardsUpdateInfo(const NotifyOnlineRewardsUpdateInfo& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void NotifyOnlineRewardsUpdateInfo::SharedCtor() {
  _cached_size_ = 0;
  data_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

NotifyOnlineRewardsUpdateInfo::~NotifyOnlineRewardsUpdateInfo() {
  SharedDtor();
}

void NotifyOnlineRewardsUpdateInfo::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
    delete data_;
  }
}

void NotifyOnlineRewardsUpdateInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const NotifyOnlineRewardsUpdateInfo& NotifyOnlineRewardsUpdateInfo::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoOnlineRewards_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoOnlineRewards_2eproto();
#endif
  return *default_instance_;
}

NotifyOnlineRewardsUpdateInfo* NotifyOnlineRewardsUpdateInfo::default_instance_ = NULL;

NotifyOnlineRewardsUpdateInfo* NotifyOnlineRewardsUpdateInfo::New() const {
  return new NotifyOnlineRewardsUpdateInfo;
}

void NotifyOnlineRewardsUpdateInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_data()) {
      if (data_ != NULL) data_->::OnlineRewardsData::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool NotifyOnlineRewardsUpdateInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .OnlineRewardsData data = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_data()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void NotifyOnlineRewardsUpdateInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional .OnlineRewardsData data = 1;
  if (has_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      1, this->data(), output);
  }

}

int NotifyOnlineRewardsUpdateInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .OnlineRewardsData data = 1;
    if (has_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->data());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NotifyOnlineRewardsUpdateInfo::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const NotifyOnlineRewardsUpdateInfo*>(&from));
}

void NotifyOnlineRewardsUpdateInfo::MergeFrom(const NotifyOnlineRewardsUpdateInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_data()) {
      mutable_data()->::OnlineRewardsData::MergeFrom(from.data());
    }
  }
}

void NotifyOnlineRewardsUpdateInfo::CopyFrom(const NotifyOnlineRewardsUpdateInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NotifyOnlineRewardsUpdateInfo::IsInitialized() const {

  return true;
}

void NotifyOnlineRewardsUpdateInfo::Swap(NotifyOnlineRewardsUpdateInfo* other) {
  if (other != this) {
    std::swap(data_, other->data_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string NotifyOnlineRewardsUpdateInfo::GetTypeName() const {
  return "Protocol.NotifyOnlineRewardsUpdateInfo";
}


// ===================================================================

#ifndef _MSC_VER
const int RequestOnlineRewardsTakeAward::kIdFieldNumber;
#endif  // !_MSC_VER

RequestOnlineRewardsTakeAward::RequestOnlineRewardsTakeAward()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void RequestOnlineRewardsTakeAward::InitAsDefaultInstance() {
}

RequestOnlineRewardsTakeAward::RequestOnlineRewardsTakeAward(const RequestOnlineRewardsTakeAward& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void RequestOnlineRewardsTakeAward::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RequestOnlineRewardsTakeAward::~RequestOnlineRewardsTakeAward() {
  SharedDtor();
}

void RequestOnlineRewardsTakeAward::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void RequestOnlineRewardsTakeAward::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const RequestOnlineRewardsTakeAward& RequestOnlineRewardsTakeAward::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoOnlineRewards_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoOnlineRewards_2eproto();
#endif
  return *default_instance_;
}

RequestOnlineRewardsTakeAward* RequestOnlineRewardsTakeAward::default_instance_ = NULL;

RequestOnlineRewardsTakeAward* RequestOnlineRewardsTakeAward::New() const {
  return new RequestOnlineRewardsTakeAward;
}

void RequestOnlineRewardsTakeAward::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool RequestOnlineRewardsTakeAward::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RequestOnlineRewardsTakeAward::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

}

int RequestOnlineRewardsTakeAward::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RequestOnlineRewardsTakeAward::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const RequestOnlineRewardsTakeAward*>(&from));
}

void RequestOnlineRewardsTakeAward::MergeFrom(const RequestOnlineRewardsTakeAward& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
  }
}

void RequestOnlineRewardsTakeAward::CopyFrom(const RequestOnlineRewardsTakeAward& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestOnlineRewardsTakeAward::IsInitialized() const {

  return true;
}

void RequestOnlineRewardsTakeAward::Swap(RequestOnlineRewardsTakeAward* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string RequestOnlineRewardsTakeAward::GetTypeName() const {
  return "Protocol.RequestOnlineRewardsTakeAward";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)

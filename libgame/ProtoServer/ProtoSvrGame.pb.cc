// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtoSvrGame.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ProtoSvrGame.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace GameCmd {

void protobuf_ShutdownFile_ProtoSvrGame_2eproto() {
  delete GatewayForwardCmd::default_instance_;
  delete GatewayEnterGame::default_instance_;
  delete GatewayUnregGameUser::default_instance_;
  delete GatewayKickGameUser::default_instance_;
  delete GatewayShutdownGame::default_instance_;
  delete GatewayServerPing::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_ProtoSvrGame_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_ProtoSvrGame_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  GatewayForwardCmd::default_instance_ = new GatewayForwardCmd();
  GatewayEnterGame::default_instance_ = new GatewayEnterGame();
  GatewayUnregGameUser::default_instance_ = new GatewayUnregGameUser();
  GatewayKickGameUser::default_instance_ = new GatewayKickGameUser();
  GatewayShutdownGame::default_instance_ = new GatewayShutdownGame();
  GatewayServerPing::default_instance_ = new GatewayServerPing();
  GatewayForwardCmd::default_instance_->InitAsDefaultInstance();
  GatewayEnterGame::default_instance_->InitAsDefaultInstance();
  GatewayUnregGameUser::default_instance_->InitAsDefaultInstance();
  GatewayKickGameUser::default_instance_->InitAsDefaultInstance();
  GatewayShutdownGame::default_instance_->InitAsDefaultInstance();
  GatewayServerPing::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ProtoSvrGame_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_ProtoSvrGame_2eproto_once_);
void protobuf_AddDesc_ProtoSvrGame_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_ProtoSvrGame_2eproto_once_,
                 &protobuf_AddDesc_ProtoSvrGame_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ProtoSvrGame_2eproto {
  StaticDescriptorInitializer_ProtoSvrGame_2eproto() {
    protobuf_AddDesc_ProtoSvrGame_2eproto();
  }
} static_descriptor_initializer_ProtoSvrGame_2eproto_;
#endif
bool SvrGateway2GameOpCode_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 100:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#ifndef _MSC_VER
const int GatewayForwardCmd::kClientTaskidFieldNumber;
const int GatewayForwardCmd::kCharidFieldNumber;
const int GatewayForwardCmd::kForwardCmdFieldNumber;
#endif  // !_MSC_VER

GatewayForwardCmd::GatewayForwardCmd()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GatewayForwardCmd::InitAsDefaultInstance() {
}

GatewayForwardCmd::GatewayForwardCmd(const GatewayForwardCmd& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GatewayForwardCmd::SharedCtor() {
  _cached_size_ = 0;
  client_taskid_ = 0;
  charid_ = 0;
  forward_cmd_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GatewayForwardCmd::~GatewayForwardCmd() {
  SharedDtor();
}

void GatewayForwardCmd::SharedDtor() {
  if (forward_cmd_ != &::google::protobuf::internal::kEmptyString) {
    delete forward_cmd_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GatewayForwardCmd::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GatewayForwardCmd& GatewayForwardCmd::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSvrGame_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSvrGame_2eproto();
#endif
  return *default_instance_;
}

GatewayForwardCmd* GatewayForwardCmd::default_instance_ = NULL;

GatewayForwardCmd* GatewayForwardCmd::New() const {
  return new GatewayForwardCmd;
}

void GatewayForwardCmd::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    client_taskid_ = 0;
    charid_ = 0;
    if (has_forward_cmd()) {
      if (forward_cmd_ != &::google::protobuf::internal::kEmptyString) {
        forward_cmd_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GatewayForwardCmd::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 client_taskid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &client_taskid_)));
          set_has_client_taskid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_charid;
        break;
      }

      // optional int32 charid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_charid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &charid_)));
          set_has_charid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_forward_cmd;
        break;
      }

      // optional bytes forward_cmd = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_forward_cmd:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_forward_cmd()));
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

void GatewayForwardCmd::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 client_taskid = 1;
  if (has_client_taskid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->client_taskid(), output);
  }

  // optional int32 charid = 2;
  if (has_charid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->charid(), output);
  }

  // optional bytes forward_cmd = 3;
  if (has_forward_cmd()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->forward_cmd(), output);
  }

}

int GatewayForwardCmd::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 client_taskid = 1;
    if (has_client_taskid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->client_taskid());
    }

    // optional int32 charid = 2;
    if (has_charid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->charid());
    }

    // optional bytes forward_cmd = 3;
    if (has_forward_cmd()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->forward_cmd());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GatewayForwardCmd::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GatewayForwardCmd*>(&from));
}

void GatewayForwardCmd::MergeFrom(const GatewayForwardCmd& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_client_taskid()) {
      set_client_taskid(from.client_taskid());
    }
    if (from.has_charid()) {
      set_charid(from.charid());
    }
    if (from.has_forward_cmd()) {
      set_forward_cmd(from.forward_cmd());
    }
  }
}

void GatewayForwardCmd::CopyFrom(const GatewayForwardCmd& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GatewayForwardCmd::IsInitialized() const {

  return true;
}

void GatewayForwardCmd::Swap(GatewayForwardCmd* other) {
  if (other != this) {
    std::swap(client_taskid_, other->client_taskid_);
    std::swap(charid_, other->charid_);
    std::swap(forward_cmd_, other->forward_cmd_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GatewayForwardCmd::GetTypeName() const {
  return "GameCmd.GatewayForwardCmd";
}


// ===================================================================

#ifndef _MSC_VER
const int GatewayEnterGame::kClientTaskidFieldNumber;
const int GatewayEnterGame::kCharidFieldNumber;
const int GatewayEnterGame::kAccountFieldNumber;
#endif  // !_MSC_VER

GatewayEnterGame::GatewayEnterGame()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GatewayEnterGame::InitAsDefaultInstance() {
}

GatewayEnterGame::GatewayEnterGame(const GatewayEnterGame& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GatewayEnterGame::SharedCtor() {
  _cached_size_ = 0;
  client_taskid_ = 0;
  charid_ = 0;
  account_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GatewayEnterGame::~GatewayEnterGame() {
  SharedDtor();
}

void GatewayEnterGame::SharedDtor() {
  if (account_ != &::google::protobuf::internal::kEmptyString) {
    delete account_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GatewayEnterGame::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GatewayEnterGame& GatewayEnterGame::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSvrGame_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSvrGame_2eproto();
#endif
  return *default_instance_;
}

GatewayEnterGame* GatewayEnterGame::default_instance_ = NULL;

GatewayEnterGame* GatewayEnterGame::New() const {
  return new GatewayEnterGame;
}

void GatewayEnterGame::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    client_taskid_ = 0;
    charid_ = 0;
    if (has_account()) {
      if (account_ != &::google::protobuf::internal::kEmptyString) {
        account_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GatewayEnterGame::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 client_taskid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &client_taskid_)));
          set_has_client_taskid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_charid;
        break;
      }

      // optional int32 charid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_charid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &charid_)));
          set_has_charid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_account;
        break;
      }

      // optional string account = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_account:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_account()));
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

void GatewayEnterGame::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 client_taskid = 1;
  if (has_client_taskid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->client_taskid(), output);
  }

  // optional int32 charid = 2;
  if (has_charid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->charid(), output);
  }

  // optional string account = 3;
  if (has_account()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->account(), output);
  }

}

int GatewayEnterGame::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 client_taskid = 1;
    if (has_client_taskid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->client_taskid());
    }

    // optional int32 charid = 2;
    if (has_charid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->charid());
    }

    // optional string account = 3;
    if (has_account()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->account());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GatewayEnterGame::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GatewayEnterGame*>(&from));
}

void GatewayEnterGame::MergeFrom(const GatewayEnterGame& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_client_taskid()) {
      set_client_taskid(from.client_taskid());
    }
    if (from.has_charid()) {
      set_charid(from.charid());
    }
    if (from.has_account()) {
      set_account(from.account());
    }
  }
}

void GatewayEnterGame::CopyFrom(const GatewayEnterGame& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GatewayEnterGame::IsInitialized() const {

  return true;
}

void GatewayEnterGame::Swap(GatewayEnterGame* other) {
  if (other != this) {
    std::swap(client_taskid_, other->client_taskid_);
    std::swap(charid_, other->charid_);
    std::swap(account_, other->account_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GatewayEnterGame::GetTypeName() const {
  return "GameCmd.GatewayEnterGame";
}


// ===================================================================

#ifndef _MSC_VER
const int GatewayUnregGameUser::kClientTaskidFieldNumber;
const int GatewayUnregGameUser::kCharidFieldNumber;
#endif  // !_MSC_VER

GatewayUnregGameUser::GatewayUnregGameUser()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GatewayUnregGameUser::InitAsDefaultInstance() {
}

GatewayUnregGameUser::GatewayUnregGameUser(const GatewayUnregGameUser& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GatewayUnregGameUser::SharedCtor() {
  _cached_size_ = 0;
  client_taskid_ = 0;
  charid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GatewayUnregGameUser::~GatewayUnregGameUser() {
  SharedDtor();
}

void GatewayUnregGameUser::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GatewayUnregGameUser::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GatewayUnregGameUser& GatewayUnregGameUser::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSvrGame_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSvrGame_2eproto();
#endif
  return *default_instance_;
}

GatewayUnregGameUser* GatewayUnregGameUser::default_instance_ = NULL;

GatewayUnregGameUser* GatewayUnregGameUser::New() const {
  return new GatewayUnregGameUser;
}

void GatewayUnregGameUser::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    client_taskid_ = 0;
    charid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GatewayUnregGameUser::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 client_taskid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &client_taskid_)));
          set_has_client_taskid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_charid;
        break;
      }

      // optional int32 charid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_charid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &charid_)));
          set_has_charid();
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

void GatewayUnregGameUser::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 client_taskid = 1;
  if (has_client_taskid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->client_taskid(), output);
  }

  // optional int32 charid = 2;
  if (has_charid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->charid(), output);
  }

}

int GatewayUnregGameUser::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 client_taskid = 1;
    if (has_client_taskid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->client_taskid());
    }

    // optional int32 charid = 2;
    if (has_charid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->charid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GatewayUnregGameUser::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GatewayUnregGameUser*>(&from));
}

void GatewayUnregGameUser::MergeFrom(const GatewayUnregGameUser& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_client_taskid()) {
      set_client_taskid(from.client_taskid());
    }
    if (from.has_charid()) {
      set_charid(from.charid());
    }
  }
}

void GatewayUnregGameUser::CopyFrom(const GatewayUnregGameUser& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GatewayUnregGameUser::IsInitialized() const {

  return true;
}

void GatewayUnregGameUser::Swap(GatewayUnregGameUser* other) {
  if (other != this) {
    std::swap(client_taskid_, other->client_taskid_);
    std::swap(charid_, other->charid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GatewayUnregGameUser::GetTypeName() const {
  return "GameCmd.GatewayUnregGameUser";
}


// ===================================================================

#ifndef _MSC_VER
const int GatewayKickGameUser::kClientTaskidFieldNumber;
const int GatewayKickGameUser::kCharidFieldNumber;
#endif  // !_MSC_VER

GatewayKickGameUser::GatewayKickGameUser()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GatewayKickGameUser::InitAsDefaultInstance() {
}

GatewayKickGameUser::GatewayKickGameUser(const GatewayKickGameUser& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GatewayKickGameUser::SharedCtor() {
  _cached_size_ = 0;
  client_taskid_ = 0;
  charid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GatewayKickGameUser::~GatewayKickGameUser() {
  SharedDtor();
}

void GatewayKickGameUser::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GatewayKickGameUser::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GatewayKickGameUser& GatewayKickGameUser::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSvrGame_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSvrGame_2eproto();
#endif
  return *default_instance_;
}

GatewayKickGameUser* GatewayKickGameUser::default_instance_ = NULL;

GatewayKickGameUser* GatewayKickGameUser::New() const {
  return new GatewayKickGameUser;
}

void GatewayKickGameUser::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    client_taskid_ = 0;
    charid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GatewayKickGameUser::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 client_taskid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &client_taskid_)));
          set_has_client_taskid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_charid;
        break;
      }

      // optional int32 charid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_charid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &charid_)));
          set_has_charid();
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

void GatewayKickGameUser::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 client_taskid = 1;
  if (has_client_taskid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->client_taskid(), output);
  }

  // optional int32 charid = 2;
  if (has_charid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->charid(), output);
  }

}

int GatewayKickGameUser::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 client_taskid = 1;
    if (has_client_taskid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->client_taskid());
    }

    // optional int32 charid = 2;
    if (has_charid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->charid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GatewayKickGameUser::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GatewayKickGameUser*>(&from));
}

void GatewayKickGameUser::MergeFrom(const GatewayKickGameUser& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_client_taskid()) {
      set_client_taskid(from.client_taskid());
    }
    if (from.has_charid()) {
      set_charid(from.charid());
    }
  }
}

void GatewayKickGameUser::CopyFrom(const GatewayKickGameUser& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GatewayKickGameUser::IsInitialized() const {

  return true;
}

void GatewayKickGameUser::Swap(GatewayKickGameUser* other) {
  if (other != this) {
    std::swap(client_taskid_, other->client_taskid_);
    std::swap(charid_, other->charid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GatewayKickGameUser::GetTypeName() const {
  return "GameCmd.GatewayKickGameUser";
}


// ===================================================================

#ifndef _MSC_VER
const int GatewayShutdownGame::kClientTaskidFieldNumber;
const int GatewayShutdownGame::kCharidFieldNumber;
#endif  // !_MSC_VER

GatewayShutdownGame::GatewayShutdownGame()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GatewayShutdownGame::InitAsDefaultInstance() {
}

GatewayShutdownGame::GatewayShutdownGame(const GatewayShutdownGame& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GatewayShutdownGame::SharedCtor() {
  _cached_size_ = 0;
  client_taskid_ = 0;
  charid_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GatewayShutdownGame::~GatewayShutdownGame() {
  SharedDtor();
}

void GatewayShutdownGame::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GatewayShutdownGame::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GatewayShutdownGame& GatewayShutdownGame::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSvrGame_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSvrGame_2eproto();
#endif
  return *default_instance_;
}

GatewayShutdownGame* GatewayShutdownGame::default_instance_ = NULL;

GatewayShutdownGame* GatewayShutdownGame::New() const {
  return new GatewayShutdownGame;
}

void GatewayShutdownGame::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    client_taskid_ = 0;
    charid_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GatewayShutdownGame::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 client_taskid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &client_taskid_)));
          set_has_client_taskid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_charid;
        break;
      }

      // optional int32 charid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_charid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &charid_)));
          set_has_charid();
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

void GatewayShutdownGame::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 client_taskid = 1;
  if (has_client_taskid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->client_taskid(), output);
  }

  // optional int32 charid = 2;
  if (has_charid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->charid(), output);
  }

}

int GatewayShutdownGame::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 client_taskid = 1;
    if (has_client_taskid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->client_taskid());
    }

    // optional int32 charid = 2;
    if (has_charid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->charid());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GatewayShutdownGame::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GatewayShutdownGame*>(&from));
}

void GatewayShutdownGame::MergeFrom(const GatewayShutdownGame& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_client_taskid()) {
      set_client_taskid(from.client_taskid());
    }
    if (from.has_charid()) {
      set_charid(from.charid());
    }
  }
}

void GatewayShutdownGame::CopyFrom(const GatewayShutdownGame& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GatewayShutdownGame::IsInitialized() const {

  return true;
}

void GatewayShutdownGame::Swap(GatewayShutdownGame* other) {
  if (other != this) {
    std::swap(client_taskid_, other->client_taskid_);
    std::swap(charid_, other->charid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GatewayShutdownGame::GetTypeName() const {
  return "GameCmd.GatewayShutdownGame";
}


// ===================================================================

#ifndef _MSC_VER
const int GatewayServerPing::kTimestampFieldNumber;
#endif  // !_MSC_VER

GatewayServerPing::GatewayServerPing()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void GatewayServerPing::InitAsDefaultInstance() {
}

GatewayServerPing::GatewayServerPing(const GatewayServerPing& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void GatewayServerPing::SharedCtor() {
  _cached_size_ = 0;
  timestamp_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GatewayServerPing::~GatewayServerPing() {
  SharedDtor();
}

void GatewayServerPing::SharedDtor() {
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void GatewayServerPing::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const GatewayServerPing& GatewayServerPing::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSvrGame_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSvrGame_2eproto();
#endif
  return *default_instance_;
}

GatewayServerPing* GatewayServerPing::default_instance_ = NULL;

GatewayServerPing* GatewayServerPing::New() const {
  return new GatewayServerPing;
}

void GatewayServerPing::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    timestamp_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool GatewayServerPing::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 timestamp = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &timestamp_)));
          set_has_timestamp();
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

void GatewayServerPing::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 timestamp = 1;
  if (has_timestamp()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->timestamp(), output);
  }

}

int GatewayServerPing::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 timestamp = 1;
    if (has_timestamp()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->timestamp());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GatewayServerPing::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const GatewayServerPing*>(&from));
}

void GatewayServerPing::MergeFrom(const GatewayServerPing& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_timestamp()) {
      set_timestamp(from.timestamp());
    }
  }
}

void GatewayServerPing::CopyFrom(const GatewayServerPing& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GatewayServerPing::IsInitialized() const {

  return true;
}

void GatewayServerPing::Swap(GatewayServerPing* other) {
  if (other != this) {
    std::swap(timestamp_, other->timestamp_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string GatewayServerPing::GetTypeName() const {
  return "GameCmd.GatewayServerPing";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace GameCmd

// @@protoc_insertion_point(global_scope)
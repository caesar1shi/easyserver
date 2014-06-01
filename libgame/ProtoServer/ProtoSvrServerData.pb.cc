// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtoSvrServerData.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ProtoSvrServerData.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

void protobuf_ShutdownFile_ProtoSvrServerData_2eproto() {
  delete ServerInfo::default_instance_;
  delete SvrZoneCharInfo::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_ProtoSvrServerData_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_ProtoSvrServerData_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  ServerInfo::default_instance_ = new ServerInfo();
  SvrZoneCharInfo::default_instance_ = new SvrZoneCharInfo();
  ServerInfo::default_instance_->InitAsDefaultInstance();
  SvrZoneCharInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ProtoSvrServerData_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_ProtoSvrServerData_2eproto_once_);
void protobuf_AddDesc_ProtoSvrServerData_2eproto() {
  ::google::protobuf::::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_ProtoSvrServerData_2eproto_once_,
                 &protobuf_AddDesc_ProtoSvrServerData_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ProtoSvrServerData_2eproto {
  StaticDescriptorInitializer_ProtoSvrServerData_2eproto() {
    protobuf_AddDesc_ProtoSvrServerData_2eproto();
  }
} static_descriptor_initializer_ProtoSvrServerData_2eproto_;
#endif

// ===================================================================

#ifndef _MSC_VER
const int ServerInfo::kUniqueidFieldNumber;
const int ServerInfo::kServeridFieldNumber;
const int ServerInfo::kNameFieldNumber;
const int ServerInfo::kTypeFieldNumber;
const int ServerInfo::kIpFieldNumber;
const int ServerInfo::kPortFieldNumber;
const int ServerInfo::kOnlinenumFieldNumber;
const int ServerInfo::kMaxnumFieldNumber;
const int ServerInfo::kGroupFieldNumber;
const int ServerInfo::kStateFieldNumber;
const int ServerInfo::kFlagFieldNumber;
const int ServerInfo::kIpStrFieldNumber;
#endif  // !_MSC_VER

ServerInfo::ServerInfo()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void ServerInfo::InitAsDefaultInstance() {
}

ServerInfo::ServerInfo(const ServerInfo& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void ServerInfo::SharedCtor() {
  _cached_size_ = 0;
  uniqueid_ = GOOGLE_ULONGLONG(0);
  serverid_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  type_ = 0;
  ip_ = 0;
  port_ = 0;
  onlinenum_ = 0;
  maxnum_ = 0;
  group_ = 0;
  state_ = 0;
  flag_ = 0;
  ip_str_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ServerInfo::~ServerInfo() {
  SharedDtor();
}

void ServerInfo::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void ServerInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ServerInfo& ServerInfo::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSvrServerData_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSvrServerData_2eproto();
#endif
  return *default_instance_;
}

ServerInfo* ServerInfo::default_instance_ = NULL;

ServerInfo* ServerInfo::New() const {
  return new ServerInfo;
}

void ServerInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    uniqueid_ = GOOGLE_ULONGLONG(0);
    serverid_ = 0;
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    type_ = 0;
    ip_ = 0;
    port_ = 0;
    onlinenum_ = 0;
    maxnum_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    group_ = 0;
    state_ = 0;
    flag_ = 0;
    ip_str_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool ServerInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint64 uniqueid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &uniqueid_)));
          set_has_uniqueid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_serverid;
        break;
      }

      // optional int32 serverid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_serverid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &serverid_)));
          set_has_serverid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_name;
        break;
      }

      // optional string name = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_type;
        break;
      }

      // optional int32 type = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_ip;
        break;
      }

      // optional int32 ip = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ip:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ip_)));
          set_has_ip();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_port;
        break;
      }

      // optional int32 port = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &port_)));
          set_has_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_onlinenum;
        break;
      }

      // optional int32 onlinenum = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_onlinenum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &onlinenum_)));
          set_has_onlinenum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_maxnum;
        break;
      }

      // optional int32 maxnum = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_maxnum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &maxnum_)));
          set_has_maxnum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_group;
        break;
      }

      // optional int32 group = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_group:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &group_)));
          set_has_group();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_state;
        break;
      }

      // optional int32 state = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_state:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &state_)));
          set_has_state();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_flag;
        break;
      }

      // optional int32 flag = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_flag:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &flag_)));
          set_has_flag();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(160)) goto parse_ip_str;
        break;
      }

      // optional int32 ip_str = 20;
      case 20: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_ip_str:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &ip_str_)));
          set_has_ip_str();
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

void ServerInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional uint64 uniqueid = 1;
  if (has_uniqueid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->uniqueid(), output);
  }

  // optional int32 serverid = 2;
  if (has_serverid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->serverid(), output);
  }

  // optional string name = 3;
  if (has_name()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->name(), output);
  }

  // optional int32 type = 4;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->type(), output);
  }

  // optional int32 ip = 5;
  if (has_ip()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->ip(), output);
  }

  // optional int32 port = 6;
  if (has_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->port(), output);
  }

  // optional int32 onlinenum = 7;
  if (has_onlinenum()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->onlinenum(), output);
  }

  // optional int32 maxnum = 8;
  if (has_maxnum()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->maxnum(), output);
  }

  // optional int32 group = 9;
  if (has_group()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(9, this->group(), output);
  }

  // optional int32 state = 10;
  if (has_state()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->state(), output);
  }

  // optional int32 flag = 11;
  if (has_flag()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(11, this->flag(), output);
  }

  // optional int32 ip_str = 20;
  if (has_ip_str()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(20, this->ip_str(), output);
  }

}

int ServerInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional uint64 uniqueid = 1;
    if (has_uniqueid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->uniqueid());
    }

    // optional int32 serverid = 2;
    if (has_serverid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->serverid());
    }

    // optional string name = 3;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // optional int32 type = 4;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

    // optional int32 ip = 5;
    if (has_ip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->ip());
    }

    // optional int32 port = 6;
    if (has_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->port());
    }

    // optional int32 onlinenum = 7;
    if (has_onlinenum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->onlinenum());
    }

    // optional int32 maxnum = 8;
    if (has_maxnum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->maxnum());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int32 group = 9;
    if (has_group()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->group());
    }

    // optional int32 state = 10;
    if (has_state()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->state());
    }

    // optional int32 flag = 11;
    if (has_flag()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->flag());
    }

    // optional int32 ip_str = 20;
    if (has_ip_str()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->ip_str());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ServerInfo::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const ServerInfo*>(&from));
}

void ServerInfo::MergeFrom(const ServerInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_uniqueid()) {
      set_uniqueid(from.uniqueid());
    }
    if (from.has_serverid()) {
      set_serverid(from.serverid());
    }
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_ip()) {
      set_ip(from.ip());
    }
    if (from.has_port()) {
      set_port(from.port());
    }
    if (from.has_onlinenum()) {
      set_onlinenum(from.onlinenum());
    }
    if (from.has_maxnum()) {
      set_maxnum(from.maxnum());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_group()) {
      set_group(from.group());
    }
    if (from.has_state()) {
      set_state(from.state());
    }
    if (from.has_flag()) {
      set_flag(from.flag());
    }
    if (from.has_ip_str()) {
      set_ip_str(from.ip_str());
    }
  }
}

void ServerInfo::CopyFrom(const ServerInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerInfo::IsInitialized() const {

  return true;
}

void ServerInfo::Swap(ServerInfo* other) {
  if (other != this) {
    std::swap(uniqueid_, other->uniqueid_);
    std::swap(serverid_, other->serverid_);
    std::swap(name_, other->name_);
    std::swap(type_, other->type_);
    std::swap(ip_, other->ip_);
    std::swap(port_, other->port_);
    std::swap(onlinenum_, other->onlinenum_);
    std::swap(maxnum_, other->maxnum_);
    std::swap(group_, other->group_);
    std::swap(state_, other->state_);
    std::swap(flag_, other->flag_);
    std::swap(ip_str_, other->ip_str_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string ServerInfo::GetTypeName() const {
  return "ServerInfo";
}


// ===================================================================

#ifndef _MSC_VER
const int SvrZoneCharInfo::kZoneidFieldNumber;
const int SvrZoneCharInfo::kAccountFieldNumber;
const int SvrZoneCharInfo::kCharnameFieldNumber;
const int SvrZoneCharInfo::kCharlevelFieldNumber;
const int SvrZoneCharInfo::kCharraceFieldNumber;
#endif  // !_MSC_VER

SvrZoneCharInfo::SvrZoneCharInfo()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void SvrZoneCharInfo::InitAsDefaultInstance() {
}

SvrZoneCharInfo::SvrZoneCharInfo(const SvrZoneCharInfo& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void SvrZoneCharInfo::SharedCtor() {
  _cached_size_ = 0;
  zoneid_ = 0;
  account_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  charname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  charlevel_ = 0;
  charrace_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SvrZoneCharInfo::~SvrZoneCharInfo() {
  SharedDtor();
}

void SvrZoneCharInfo::SharedDtor() {
  if (account_ != &::google::protobuf::internal::kEmptyString) {
    delete account_;
  }
  if (charname_ != &::google::protobuf::internal::kEmptyString) {
    delete charname_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void SvrZoneCharInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const SvrZoneCharInfo& SvrZoneCharInfo::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_ProtoSvrServerData_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoSvrServerData_2eproto();
#endif
  return *default_instance_;
}

SvrZoneCharInfo* SvrZoneCharInfo::default_instance_ = NULL;

SvrZoneCharInfo* SvrZoneCharInfo::New() const {
  return new SvrZoneCharInfo;
}

void SvrZoneCharInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    zoneid_ = 0;
    if (has_account()) {
      if (account_ != &::google::protobuf::internal::kEmptyString) {
        account_->clear();
      }
    }
    if (has_charname()) {
      if (charname_ != &::google::protobuf::internal::kEmptyString) {
        charname_->clear();
      }
    }
    charlevel_ = 0;
    charrace_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

bool SvrZoneCharInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 zoneid = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &zoneid_)));
          set_has_zoneid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_account;
        break;
      }

      // optional string account = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_account:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_account()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_charname;
        break;
      }

      // optional string charname = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_charname:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_charname()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_charlevel;
        break;
      }

      // optional int32 charlevel = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_charlevel:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &charlevel_)));
          set_has_charlevel();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_charrace;
        break;
      }

      // optional int32 charrace = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_charrace:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &charrace_)));
          set_has_charrace();
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

void SvrZoneCharInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 zoneid = 1;
  if (has_zoneid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->zoneid(), output);
  }

  // optional string account = 2;
  if (has_account()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->account(), output);
  }

  // optional string charname = 3;
  if (has_charname()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->charname(), output);
  }

  // optional int32 charlevel = 4;
  if (has_charlevel()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->charlevel(), output);
  }

  // optional int32 charrace = 5;
  if (has_charrace()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->charrace(), output);
  }

}

int SvrZoneCharInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 zoneid = 1;
    if (has_zoneid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->zoneid());
    }

    // optional string account = 2;
    if (has_account()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->account());
    }

    // optional string charname = 3;
    if (has_charname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->charname());
    }

    // optional int32 charlevel = 4;
    if (has_charlevel()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->charlevel());
    }

    // optional int32 charrace = 5;
    if (has_charrace()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->charrace());
    }

  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SvrZoneCharInfo::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const SvrZoneCharInfo*>(&from));
}

void SvrZoneCharInfo::MergeFrom(const SvrZoneCharInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_zoneid()) {
      set_zoneid(from.zoneid());
    }
    if (from.has_account()) {
      set_account(from.account());
    }
    if (from.has_charname()) {
      set_charname(from.charname());
    }
    if (from.has_charlevel()) {
      set_charlevel(from.charlevel());
    }
    if (from.has_charrace()) {
      set_charrace(from.charrace());
    }
  }
}

void SvrZoneCharInfo::CopyFrom(const SvrZoneCharInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SvrZoneCharInfo::IsInitialized() const {

  return true;
}

void SvrZoneCharInfo::Swap(SvrZoneCharInfo* other) {
  if (other != this) {
    std::swap(zoneid_, other->zoneid_);
    std::swap(account_, other->account_);
    std::swap(charname_, other->charname_);
    std::swap(charlevel_, other->charlevel_);
    std::swap(charrace_, other->charrace_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string SvrZoneCharInfo::GetTypeName() const {
  return "SvrZoneCharInfo";
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

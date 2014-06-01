// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtoActivity.proto

#ifndef PROTOBUF_ProtoActivity_2eproto__INCLUDED
#define PROTOBUF_ProtoActivity_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include "ProtoGameData.pb.h"
// @@protoc_insertion_point(includes)

namespace Protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ProtoActivity_2eproto();
void protobuf_AssignDesc_ProtoActivity_2eproto();
void protobuf_ShutdownFile_ProtoActivity_2eproto();

class ActivityTimeInfo;
class RequestGetActivityList;
class ResponseGetActivityList;
class RequestTakeActivityAward;
class ResponseTakeActivityAward;
class RequestJoinActivity;

enum ActivityOpCode {
  OP_ACTIVITY_GET_LIST = 1,
  OP_ACTIVITY_TAKE_AWARD = 2,
  OP_ACTIVITY_JOINT = 3
};
bool ActivityOpCode_IsValid(int value);
const ActivityOpCode ActivityOpCode_MIN = OP_ACTIVITY_GET_LIST;
const ActivityOpCode ActivityOpCode_MAX = OP_ACTIVITY_JOINT;
const int ActivityOpCode_ARRAYSIZE = ActivityOpCode_MAX + 1;

// ===================================================================

class ActivityTimeInfo : public ::google::protobuf::MessageLite {
 public:
  ActivityTimeInfo();
  virtual ~ActivityTimeInfo();

  ActivityTimeInfo(const ActivityTimeInfo& from);

  inline ActivityTimeInfo& operator=(const ActivityTimeInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const ActivityTimeInfo& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ActivityTimeInfo* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ActivityTimeInfo* other);

  // implements Message ----------------------------------------------

  ActivityTimeInfo* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ActivityTimeInfo& from);
  void MergeFrom(const ActivityTimeInfo& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 begin_day = 2;
  inline bool has_begin_day() const;
  inline void clear_begin_day();
  static const int kBeginDayFieldNumber = 2;
  inline ::google::protobuf::int32 begin_day() const;
  inline void set_begin_day(::google::protobuf::int32 value);

  // optional int32 end_day = 3;
  inline bool has_end_day() const;
  inline void clear_end_day();
  static const int kEndDayFieldNumber = 3;
  inline ::google::protobuf::int32 end_day() const;
  inline void set_end_day(::google::protobuf::int32 value);

  // optional double begin_time = 4;
  inline bool has_begin_time() const;
  inline void clear_begin_time();
  static const int kBeginTimeFieldNumber = 4;
  inline double begin_time() const;
  inline void set_begin_time(double value);

  // optional double end_time = 5;
  inline bool has_end_time() const;
  inline void clear_end_time();
  static const int kEndTimeFieldNumber = 5;
  inline double end_time() const;
  inline void set_end_time(double value);

  // optional string opened_weeks = 6;
  inline bool has_opened_weeks() const;
  inline void clear_opened_weeks();
  static const int kOpenedWeeksFieldNumber = 6;
  inline const ::std::string& opened_weeks() const;
  inline void set_opened_weeks(const ::std::string& value);
  inline void set_opened_weeks(const char* value);
  inline void set_opened_weeks(const char* value, size_t size);
  inline ::std::string* mutable_opened_weeks();
  inline ::std::string* release_opened_weeks();
  inline void set_allocated_opened_weeks(::std::string* opened_weeks);

  // optional int32 times = 7;
  inline bool has_times() const;
  inline void clear_times();
  static const int kTimesFieldNumber = 7;
  inline ::google::protobuf::int32 times() const;
  inline void set_times(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Protocol.ActivityTimeInfo)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_begin_day();
  inline void clear_has_begin_day();
  inline void set_has_end_day();
  inline void clear_has_end_day();
  inline void set_has_begin_time();
  inline void clear_has_begin_time();
  inline void set_has_end_time();
  inline void clear_has_end_time();
  inline void set_has_opened_weeks();
  inline void clear_has_opened_weeks();
  inline void set_has_times();
  inline void clear_has_times();

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 begin_day_;
  double begin_time_;
  double end_time_;
  ::google::protobuf::int32 end_day_;
  ::google::protobuf::int32 times_;
  ::std::string* opened_weeks_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoActivity_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoActivity_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoActivity_2eproto();
  friend void protobuf_ShutdownFile_ProtoActivity_2eproto();

  void InitAsDefaultInstance();
  static ActivityTimeInfo* default_instance_;
};
// -------------------------------------------------------------------

class RequestGetActivityList : public ::google::protobuf::MessageLite {
 public:
  RequestGetActivityList();
  virtual ~RequestGetActivityList();

  RequestGetActivityList(const RequestGetActivityList& from);

  inline RequestGetActivityList& operator=(const RequestGetActivityList& from) {
    CopyFrom(from);
    return *this;
  }

  static const RequestGetActivityList& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const RequestGetActivityList* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(RequestGetActivityList* other);

  // implements Message ----------------------------------------------

  RequestGetActivityList* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const RequestGetActivityList& from);
  void MergeFrom(const RequestGetActivityList& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 reserve = 1;
  inline bool has_reserve() const;
  inline void clear_reserve();
  static const int kReserveFieldNumber = 1;
  inline ::google::protobuf::int32 reserve() const;
  inline void set_reserve(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Protocol.RequestGetActivityList)
 private:
  inline void set_has_reserve();
  inline void clear_has_reserve();

  ::google::protobuf::int32 reserve_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoActivity_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoActivity_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoActivity_2eproto();
  friend void protobuf_ShutdownFile_ProtoActivity_2eproto();

  void InitAsDefaultInstance();
  static RequestGetActivityList* default_instance_;
};
// -------------------------------------------------------------------

class ResponseGetActivityList : public ::google::protobuf::MessageLite {
 public:
  ResponseGetActivityList();
  virtual ~ResponseGetActivityList();

  ResponseGetActivityList(const ResponseGetActivityList& from);

  inline ResponseGetActivityList& operator=(const ResponseGetActivityList& from) {
    CopyFrom(from);
    return *this;
  }

  static const ResponseGetActivityList& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ResponseGetActivityList* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ResponseGetActivityList* other);

  // implements Message ----------------------------------------------

  ResponseGetActivityList* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ResponseGetActivityList& from);
  void MergeFrom(const ResponseGetActivityList& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .Protocol.ActivityTimeInfo timeinfos = 1;
  inline int timeinfos_size() const;
  inline void clear_timeinfos();
  static const int kTimeinfosFieldNumber = 1;
  inline const ::Protocol::ActivityTimeInfo& timeinfos(int index) const;
  inline ::Protocol::ActivityTimeInfo* mutable_timeinfos(int index);
  inline ::Protocol::ActivityTimeInfo* add_timeinfos();
  inline const ::google::protobuf::RepeatedPtrField< ::Protocol::ActivityTimeInfo >&
      timeinfos() const;
  inline ::google::protobuf::RepeatedPtrField< ::Protocol::ActivityTimeInfo >*
      mutable_timeinfos();

  // repeated .ActivityData activitys = 2;
  inline int activitys_size() const;
  inline void clear_activitys();
  static const int kActivitysFieldNumber = 2;
  inline const ::ActivityData& activitys(int index) const;
  inline ::ActivityData* mutable_activitys(int index);
  inline ::ActivityData* add_activitys();
  inline const ::google::protobuf::RepeatedPtrField< ::ActivityData >&
      activitys() const;
  inline ::google::protobuf::RepeatedPtrField< ::ActivityData >*
      mutable_activitys();

  // @@protoc_insertion_point(class_scope:Protocol.ResponseGetActivityList)
 private:

  ::google::protobuf::RepeatedPtrField< ::Protocol::ActivityTimeInfo > timeinfos_;
  ::google::protobuf::RepeatedPtrField< ::ActivityData > activitys_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoActivity_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoActivity_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoActivity_2eproto();
  friend void protobuf_ShutdownFile_ProtoActivity_2eproto();

  void InitAsDefaultInstance();
  static ResponseGetActivityList* default_instance_;
};
// -------------------------------------------------------------------

class RequestTakeActivityAward : public ::google::protobuf::MessageLite {
 public:
  RequestTakeActivityAward();
  virtual ~RequestTakeActivityAward();

  RequestTakeActivityAward(const RequestTakeActivityAward& from);

  inline RequestTakeActivityAward& operator=(const RequestTakeActivityAward& from) {
    CopyFrom(from);
    return *this;
  }

  static const RequestTakeActivityAward& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const RequestTakeActivityAward* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(RequestTakeActivityAward* other);

  // implements Message ----------------------------------------------

  RequestTakeActivityAward* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const RequestTakeActivityAward& from);
  void MergeFrom(const RequestTakeActivityAward& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Protocol.RequestTakeActivityAward)
 private:
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoActivity_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoActivity_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoActivity_2eproto();
  friend void protobuf_ShutdownFile_ProtoActivity_2eproto();

  void InitAsDefaultInstance();
  static RequestTakeActivityAward* default_instance_;
};
// -------------------------------------------------------------------

class ResponseTakeActivityAward : public ::google::protobuf::MessageLite {
 public:
  ResponseTakeActivityAward();
  virtual ~ResponseTakeActivityAward();

  ResponseTakeActivityAward(const ResponseTakeActivityAward& from);

  inline ResponseTakeActivityAward& operator=(const ResponseTakeActivityAward& from) {
    CopyFrom(from);
    return *this;
  }

  static const ResponseTakeActivityAward& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ResponseTakeActivityAward* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ResponseTakeActivityAward* other);

  // implements Message ----------------------------------------------

  ResponseTakeActivityAward* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ResponseTakeActivityAward& from);
  void MergeFrom(const ResponseTakeActivityAward& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .ActivityData activity_data = 1;
  inline bool has_activity_data() const;
  inline void clear_activity_data();
  static const int kActivityDataFieldNumber = 1;
  inline const ::ActivityData& activity_data() const;
  inline ::ActivityData* mutable_activity_data();
  inline ::ActivityData* release_activity_data();
  inline void set_allocated_activity_data(::ActivityData* activity_data);

  // @@protoc_insertion_point(class_scope:Protocol.ResponseTakeActivityAward)
 private:
  inline void set_has_activity_data();
  inline void clear_has_activity_data();

  ::ActivityData* activity_data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoActivity_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoActivity_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoActivity_2eproto();
  friend void protobuf_ShutdownFile_ProtoActivity_2eproto();

  void InitAsDefaultInstance();
  static ResponseTakeActivityAward* default_instance_;
};
// -------------------------------------------------------------------

class RequestJoinActivity : public ::google::protobuf::MessageLite {
 public:
  RequestJoinActivity();
  virtual ~RequestJoinActivity();

  RequestJoinActivity(const RequestJoinActivity& from);

  inline RequestJoinActivity& operator=(const RequestJoinActivity& from) {
    CopyFrom(from);
    return *this;
  }

  static const RequestJoinActivity& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const RequestJoinActivity* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(RequestJoinActivity* other);

  // implements Message ----------------------------------------------

  RequestJoinActivity* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const RequestJoinActivity& from);
  void MergeFrom(const RequestJoinActivity& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Protocol.RequestJoinActivity)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_id();
  inline void clear_has_id();

  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoActivity_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoActivity_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoActivity_2eproto();
  friend void protobuf_ShutdownFile_ProtoActivity_2eproto();

  void InitAsDefaultInstance();
  static RequestJoinActivity* default_instance_;
};
// ===================================================================


// ===================================================================

// ActivityTimeInfo

// optional int32 id = 1;
inline bool ActivityTimeInfo::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ActivityTimeInfo::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ActivityTimeInfo::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ActivityTimeInfo::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 ActivityTimeInfo::id() const {
  return id_;
}
inline void ActivityTimeInfo::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 begin_day = 2;
inline bool ActivityTimeInfo::has_begin_day() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ActivityTimeInfo::set_has_begin_day() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ActivityTimeInfo::clear_has_begin_day() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ActivityTimeInfo::clear_begin_day() {
  begin_day_ = 0;
  clear_has_begin_day();
}
inline ::google::protobuf::int32 ActivityTimeInfo::begin_day() const {
  return begin_day_;
}
inline void ActivityTimeInfo::set_begin_day(::google::protobuf::int32 value) {
  set_has_begin_day();
  begin_day_ = value;
}

// optional int32 end_day = 3;
inline bool ActivityTimeInfo::has_end_day() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ActivityTimeInfo::set_has_end_day() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ActivityTimeInfo::clear_has_end_day() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ActivityTimeInfo::clear_end_day() {
  end_day_ = 0;
  clear_has_end_day();
}
inline ::google::protobuf::int32 ActivityTimeInfo::end_day() const {
  return end_day_;
}
inline void ActivityTimeInfo::set_end_day(::google::protobuf::int32 value) {
  set_has_end_day();
  end_day_ = value;
}

// optional double begin_time = 4;
inline bool ActivityTimeInfo::has_begin_time() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ActivityTimeInfo::set_has_begin_time() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ActivityTimeInfo::clear_has_begin_time() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ActivityTimeInfo::clear_begin_time() {
  begin_time_ = 0;
  clear_has_begin_time();
}
inline double ActivityTimeInfo::begin_time() const {
  return begin_time_;
}
inline void ActivityTimeInfo::set_begin_time(double value) {
  set_has_begin_time();
  begin_time_ = value;
}

// optional double end_time = 5;
inline bool ActivityTimeInfo::has_end_time() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ActivityTimeInfo::set_has_end_time() {
  _has_bits_[0] |= 0x00000010u;
}
inline void ActivityTimeInfo::clear_has_end_time() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void ActivityTimeInfo::clear_end_time() {
  end_time_ = 0;
  clear_has_end_time();
}
inline double ActivityTimeInfo::end_time() const {
  return end_time_;
}
inline void ActivityTimeInfo::set_end_time(double value) {
  set_has_end_time();
  end_time_ = value;
}

// optional string opened_weeks = 6;
inline bool ActivityTimeInfo::has_opened_weeks() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ActivityTimeInfo::set_has_opened_weeks() {
  _has_bits_[0] |= 0x00000020u;
}
inline void ActivityTimeInfo::clear_has_opened_weeks() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void ActivityTimeInfo::clear_opened_weeks() {
  if (opened_weeks_ != &::google::protobuf::internal::kEmptyString) {
    opened_weeks_->clear();
  }
  clear_has_opened_weeks();
}
inline const ::std::string& ActivityTimeInfo::opened_weeks() const {
  return *opened_weeks_;
}
inline void ActivityTimeInfo::set_opened_weeks(const ::std::string& value) {
  set_has_opened_weeks();
  if (opened_weeks_ == &::google::protobuf::internal::kEmptyString) {
    opened_weeks_ = new ::std::string;
  }
  opened_weeks_->assign(value);
}
inline void ActivityTimeInfo::set_opened_weeks(const char* value) {
  set_has_opened_weeks();
  if (opened_weeks_ == &::google::protobuf::internal::kEmptyString) {
    opened_weeks_ = new ::std::string;
  }
  opened_weeks_->assign(value);
}
inline void ActivityTimeInfo::set_opened_weeks(const char* value, size_t size) {
  set_has_opened_weeks();
  if (opened_weeks_ == &::google::protobuf::internal::kEmptyString) {
    opened_weeks_ = new ::std::string;
  }
  opened_weeks_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ActivityTimeInfo::mutable_opened_weeks() {
  set_has_opened_weeks();
  if (opened_weeks_ == &::google::protobuf::internal::kEmptyString) {
    opened_weeks_ = new ::std::string;
  }
  return opened_weeks_;
}
inline ::std::string* ActivityTimeInfo::release_opened_weeks() {
  clear_has_opened_weeks();
  if (opened_weeks_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = opened_weeks_;
    opened_weeks_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ActivityTimeInfo::set_allocated_opened_weeks(::std::string* opened_weeks) {
  if (opened_weeks_ != &::google::protobuf::internal::kEmptyString) {
    delete opened_weeks_;
  }
  if (opened_weeks) {
    set_has_opened_weeks();
    opened_weeks_ = opened_weeks;
  } else {
    clear_has_opened_weeks();
    opened_weeks_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 times = 7;
inline bool ActivityTimeInfo::has_times() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void ActivityTimeInfo::set_has_times() {
  _has_bits_[0] |= 0x00000040u;
}
inline void ActivityTimeInfo::clear_has_times() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void ActivityTimeInfo::clear_times() {
  times_ = 0;
  clear_has_times();
}
inline ::google::protobuf::int32 ActivityTimeInfo::times() const {
  return times_;
}
inline void ActivityTimeInfo::set_times(::google::protobuf::int32 value) {
  set_has_times();
  times_ = value;
}

// -------------------------------------------------------------------

// RequestGetActivityList

// optional int32 reserve = 1;
inline bool RequestGetActivityList::has_reserve() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RequestGetActivityList::set_has_reserve() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RequestGetActivityList::clear_has_reserve() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RequestGetActivityList::clear_reserve() {
  reserve_ = 0;
  clear_has_reserve();
}
inline ::google::protobuf::int32 RequestGetActivityList::reserve() const {
  return reserve_;
}
inline void RequestGetActivityList::set_reserve(::google::protobuf::int32 value) {
  set_has_reserve();
  reserve_ = value;
}

// -------------------------------------------------------------------

// ResponseGetActivityList

// repeated .Protocol.ActivityTimeInfo timeinfos = 1;
inline int ResponseGetActivityList::timeinfos_size() const {
  return timeinfos_.size();
}
inline void ResponseGetActivityList::clear_timeinfos() {
  timeinfos_.Clear();
}
inline const ::Protocol::ActivityTimeInfo& ResponseGetActivityList::timeinfos(int index) const {
  return timeinfos_.Get(index);
}
inline ::Protocol::ActivityTimeInfo* ResponseGetActivityList::mutable_timeinfos(int index) {
  return timeinfos_.Mutable(index);
}
inline ::Protocol::ActivityTimeInfo* ResponseGetActivityList::add_timeinfos() {
  return timeinfos_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Protocol::ActivityTimeInfo >&
ResponseGetActivityList::timeinfos() const {
  return timeinfos_;
}
inline ::google::protobuf::RepeatedPtrField< ::Protocol::ActivityTimeInfo >*
ResponseGetActivityList::mutable_timeinfos() {
  return &timeinfos_;
}

// repeated .ActivityData activitys = 2;
inline int ResponseGetActivityList::activitys_size() const {
  return activitys_.size();
}
inline void ResponseGetActivityList::clear_activitys() {
  activitys_.Clear();
}
inline const ::ActivityData& ResponseGetActivityList::activitys(int index) const {
  return activitys_.Get(index);
}
inline ::ActivityData* ResponseGetActivityList::mutable_activitys(int index) {
  return activitys_.Mutable(index);
}
inline ::ActivityData* ResponseGetActivityList::add_activitys() {
  return activitys_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::ActivityData >&
ResponseGetActivityList::activitys() const {
  return activitys_;
}
inline ::google::protobuf::RepeatedPtrField< ::ActivityData >*
ResponseGetActivityList::mutable_activitys() {
  return &activitys_;
}

// -------------------------------------------------------------------

// RequestTakeActivityAward

// optional int32 id = 1;
inline bool RequestTakeActivityAward::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RequestTakeActivityAward::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RequestTakeActivityAward::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RequestTakeActivityAward::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 RequestTakeActivityAward::id() const {
  return id_;
}
inline void RequestTakeActivityAward::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// -------------------------------------------------------------------

// ResponseTakeActivityAward

// optional .ActivityData activity_data = 1;
inline bool ResponseTakeActivityAward::has_activity_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ResponseTakeActivityAward::set_has_activity_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ResponseTakeActivityAward::clear_has_activity_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ResponseTakeActivityAward::clear_activity_data() {
  if (activity_data_ != NULL) activity_data_->::ActivityData::Clear();
  clear_has_activity_data();
}
inline const ::ActivityData& ResponseTakeActivityAward::activity_data() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return activity_data_ != NULL ? *activity_data_ : *default_instance().activity_data_;
#else
  return activity_data_ != NULL ? *activity_data_ : *default_instance_->activity_data_;
#endif
}
inline ::ActivityData* ResponseTakeActivityAward::mutable_activity_data() {
  set_has_activity_data();
  if (activity_data_ == NULL) activity_data_ = new ::ActivityData;
  return activity_data_;
}
inline ::ActivityData* ResponseTakeActivityAward::release_activity_data() {
  clear_has_activity_data();
  ::ActivityData* temp = activity_data_;
  activity_data_ = NULL;
  return temp;
}
inline void ResponseTakeActivityAward::set_allocated_activity_data(::ActivityData* activity_data) {
  delete activity_data_;
  activity_data_ = activity_data;
  if (activity_data) {
    set_has_activity_data();
  } else {
    clear_has_activity_data();
  }
}

// -------------------------------------------------------------------

// RequestJoinActivity

// optional int32 type = 1;
inline bool RequestJoinActivity::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RequestJoinActivity::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RequestJoinActivity::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RequestJoinActivity::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 RequestJoinActivity::type() const {
  return type_;
}
inline void RequestJoinActivity::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 id = 2;
inline bool RequestJoinActivity::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void RequestJoinActivity::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void RequestJoinActivity::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void RequestJoinActivity::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 RequestJoinActivity::id() const {
  return id_;
}
inline void RequestJoinActivity::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ProtoActivity_2eproto__INCLUDED
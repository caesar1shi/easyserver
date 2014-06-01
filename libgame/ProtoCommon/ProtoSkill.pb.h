// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtoSkill.proto

#ifndef PROTOBUF_ProtoSkill_2eproto__INCLUDED
#define PROTOBUF_ProtoSkill_2eproto__INCLUDED

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
void  protobuf_AddDesc_ProtoSkill_2eproto();
void protobuf_AssignDesc_ProtoSkill_2eproto();
void protobuf_ShutdownFile_ProtoSkill_2eproto();

class RequestLearnSkill;
class ResponseLearnSkill;
class NotifyUpdateSkill;
class NotifyRemoveSkill;
class NotifyAddBuff;
class NotifyRemoveBuff;

enum SkillOpCode {
  OP_LEARN_SKILL = 1,
  OP_UPDATE_SKILL = 2,
  OP_REMOVE_SKILL = 3,
  OP_ADD_BUFF = 4,
  OP_REMOVE_BUFF = 5
};
bool SkillOpCode_IsValid(int value);
const SkillOpCode SkillOpCode_MIN = OP_LEARN_SKILL;
const SkillOpCode SkillOpCode_MAX = OP_REMOVE_BUFF;
const int SkillOpCode_ARRAYSIZE = SkillOpCode_MAX + 1;

// ===================================================================

class RequestLearnSkill : public ::google::protobuf::MessageLite {
 public:
  RequestLearnSkill();
  virtual ~RequestLearnSkill();

  RequestLearnSkill(const RequestLearnSkill& from);

  inline RequestLearnSkill& operator=(const RequestLearnSkill& from) {
    CopyFrom(from);
    return *this;
  }

  static const RequestLearnSkill& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const RequestLearnSkill* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(RequestLearnSkill* other);

  // implements Message ----------------------------------------------

  RequestLearnSkill* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const RequestLearnSkill& from);
  void MergeFrom(const RequestLearnSkill& from);
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

  // optional .ItemLoc loc = 1;
  inline bool has_loc() const;
  inline void clear_loc();
  static const int kLocFieldNumber = 1;
  inline const ::ItemLoc& loc() const;
  inline ::ItemLoc* mutable_loc();
  inline ::ItemLoc* release_loc();
  inline void set_allocated_loc(::ItemLoc* loc);

  // @@protoc_insertion_point(class_scope:Protocol.RequestLearnSkill)
 private:
  inline void set_has_loc();
  inline void clear_has_loc();

  ::ItemLoc* loc_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoSkill_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoSkill_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoSkill_2eproto();
  friend void protobuf_ShutdownFile_ProtoSkill_2eproto();

  void InitAsDefaultInstance();
  static RequestLearnSkill* default_instance_;
};
// -------------------------------------------------------------------

class ResponseLearnSkill : public ::google::protobuf::MessageLite {
 public:
  ResponseLearnSkill();
  virtual ~ResponseLearnSkill();

  ResponseLearnSkill(const ResponseLearnSkill& from);

  inline ResponseLearnSkill& operator=(const ResponseLearnSkill& from) {
    CopyFrom(from);
    return *this;
  }

  static const ResponseLearnSkill& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ResponseLearnSkill* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ResponseLearnSkill* other);

  // implements Message ----------------------------------------------

  ResponseLearnSkill* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ResponseLearnSkill& from);
  void MergeFrom(const ResponseLearnSkill& from);
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

  // optional .SkillData data = 1;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 1;
  inline const ::SkillData& data() const;
  inline ::SkillData* mutable_data();
  inline ::SkillData* release_data();
  inline void set_allocated_data(::SkillData* data);

  // @@protoc_insertion_point(class_scope:Protocol.ResponseLearnSkill)
 private:
  inline void set_has_data();
  inline void clear_has_data();

  ::SkillData* data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoSkill_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoSkill_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoSkill_2eproto();
  friend void protobuf_ShutdownFile_ProtoSkill_2eproto();

  void InitAsDefaultInstance();
  static ResponseLearnSkill* default_instance_;
};
// -------------------------------------------------------------------

class NotifyUpdateSkill : public ::google::protobuf::MessageLite {
 public:
  NotifyUpdateSkill();
  virtual ~NotifyUpdateSkill();

  NotifyUpdateSkill(const NotifyUpdateSkill& from);

  inline NotifyUpdateSkill& operator=(const NotifyUpdateSkill& from) {
    CopyFrom(from);
    return *this;
  }

  static const NotifyUpdateSkill& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NotifyUpdateSkill* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NotifyUpdateSkill* other);

  // implements Message ----------------------------------------------

  NotifyUpdateSkill* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NotifyUpdateSkill& from);
  void MergeFrom(const NotifyUpdateSkill& from);
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

  // optional .SkillData data = 1;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 1;
  inline const ::SkillData& data() const;
  inline ::SkillData* mutable_data();
  inline ::SkillData* release_data();
  inline void set_allocated_data(::SkillData* data);

  // @@protoc_insertion_point(class_scope:Protocol.NotifyUpdateSkill)
 private:
  inline void set_has_data();
  inline void clear_has_data();

  ::SkillData* data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoSkill_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoSkill_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoSkill_2eproto();
  friend void protobuf_ShutdownFile_ProtoSkill_2eproto();

  void InitAsDefaultInstance();
  static NotifyUpdateSkill* default_instance_;
};
// -------------------------------------------------------------------

class NotifyRemoveSkill : public ::google::protobuf::MessageLite {
 public:
  NotifyRemoveSkill();
  virtual ~NotifyRemoveSkill();

  NotifyRemoveSkill(const NotifyRemoveSkill& from);

  inline NotifyRemoveSkill& operator=(const NotifyRemoveSkill& from) {
    CopyFrom(from);
    return *this;
  }

  static const NotifyRemoveSkill& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NotifyRemoveSkill* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NotifyRemoveSkill* other);

  // implements Message ----------------------------------------------

  NotifyRemoveSkill* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NotifyRemoveSkill& from);
  void MergeFrom(const NotifyRemoveSkill& from);
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

  // optional int32 skill_id = 1;
  inline bool has_skill_id() const;
  inline void clear_skill_id();
  static const int kSkillIdFieldNumber = 1;
  inline ::google::protobuf::int32 skill_id() const;
  inline void set_skill_id(::google::protobuf::int32 value);

  // optional int32 skill_level = 2;
  inline bool has_skill_level() const;
  inline void clear_skill_level();
  static const int kSkillLevelFieldNumber = 2;
  inline ::google::protobuf::int32 skill_level() const;
  inline void set_skill_level(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Protocol.NotifyRemoveSkill)
 private:
  inline void set_has_skill_id();
  inline void clear_has_skill_id();
  inline void set_has_skill_level();
  inline void clear_has_skill_level();

  ::google::protobuf::int32 skill_id_;
  ::google::protobuf::int32 skill_level_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoSkill_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoSkill_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoSkill_2eproto();
  friend void protobuf_ShutdownFile_ProtoSkill_2eproto();

  void InitAsDefaultInstance();
  static NotifyRemoveSkill* default_instance_;
};
// -------------------------------------------------------------------

class NotifyAddBuff : public ::google::protobuf::MessageLite {
 public:
  NotifyAddBuff();
  virtual ~NotifyAddBuff();

  NotifyAddBuff(const NotifyAddBuff& from);

  inline NotifyAddBuff& operator=(const NotifyAddBuff& from) {
    CopyFrom(from);
    return *this;
  }

  static const NotifyAddBuff& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NotifyAddBuff* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NotifyAddBuff* other);

  // implements Message ----------------------------------------------

  NotifyAddBuff* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NotifyAddBuff& from);
  void MergeFrom(const NotifyAddBuff& from);
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

  // optional int32 obj_type = 1;
  inline bool has_obj_type() const;
  inline void clear_obj_type();
  static const int kObjTypeFieldNumber = 1;
  inline ::google::protobuf::int32 obj_type() const;
  inline void set_obj_type(::google::protobuf::int32 value);

  // optional int32 obj_id = 2;
  inline bool has_obj_id() const;
  inline void clear_obj_id();
  static const int kObjIdFieldNumber = 2;
  inline ::google::protobuf::int32 obj_id() const;
  inline void set_obj_id(::google::protobuf::int32 value);

  // optional .SkillBuffData data = 3;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 3;
  inline const ::SkillBuffData& data() const;
  inline ::SkillBuffData* mutable_data();
  inline ::SkillBuffData* release_data();
  inline void set_allocated_data(::SkillBuffData* data);

  // @@protoc_insertion_point(class_scope:Protocol.NotifyAddBuff)
 private:
  inline void set_has_obj_type();
  inline void clear_has_obj_type();
  inline void set_has_obj_id();
  inline void clear_has_obj_id();
  inline void set_has_data();
  inline void clear_has_data();

  ::google::protobuf::int32 obj_type_;
  ::google::protobuf::int32 obj_id_;
  ::SkillBuffData* data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoSkill_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoSkill_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoSkill_2eproto();
  friend void protobuf_ShutdownFile_ProtoSkill_2eproto();

  void InitAsDefaultInstance();
  static NotifyAddBuff* default_instance_;
};
// -------------------------------------------------------------------

class NotifyRemoveBuff : public ::google::protobuf::MessageLite {
 public:
  NotifyRemoveBuff();
  virtual ~NotifyRemoveBuff();

  NotifyRemoveBuff(const NotifyRemoveBuff& from);

  inline NotifyRemoveBuff& operator=(const NotifyRemoveBuff& from) {
    CopyFrom(from);
    return *this;
  }

  static const NotifyRemoveBuff& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NotifyRemoveBuff* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NotifyRemoveBuff* other);

  // implements Message ----------------------------------------------

  NotifyRemoveBuff* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NotifyRemoveBuff& from);
  void MergeFrom(const NotifyRemoveBuff& from);
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

  // optional int32 obj_type = 1;
  inline bool has_obj_type() const;
  inline void clear_obj_type();
  static const int kObjTypeFieldNumber = 1;
  inline ::google::protobuf::int32 obj_type() const;
  inline void set_obj_type(::google::protobuf::int32 value);

  // optional int32 obj_id = 2;
  inline bool has_obj_id() const;
  inline void clear_obj_id();
  static const int kObjIdFieldNumber = 2;
  inline ::google::protobuf::int32 obj_id() const;
  inline void set_obj_id(::google::protobuf::int32 value);

  // optional .SkillBuffData data = 3;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 3;
  inline const ::SkillBuffData& data() const;
  inline ::SkillBuffData* mutable_data();
  inline ::SkillBuffData* release_data();
  inline void set_allocated_data(::SkillBuffData* data);

  // @@protoc_insertion_point(class_scope:Protocol.NotifyRemoveBuff)
 private:
  inline void set_has_obj_type();
  inline void clear_has_obj_type();
  inline void set_has_obj_id();
  inline void clear_has_obj_id();
  inline void set_has_data();
  inline void clear_has_data();

  ::google::protobuf::int32 obj_type_;
  ::google::protobuf::int32 obj_id_;
  ::SkillBuffData* data_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoSkill_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoSkill_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoSkill_2eproto();
  friend void protobuf_ShutdownFile_ProtoSkill_2eproto();

  void InitAsDefaultInstance();
  static NotifyRemoveBuff* default_instance_;
};
// ===================================================================


// ===================================================================

// RequestLearnSkill

// optional .ItemLoc loc = 1;
inline bool RequestLearnSkill::has_loc() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RequestLearnSkill::set_has_loc() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RequestLearnSkill::clear_has_loc() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RequestLearnSkill::clear_loc() {
  if (loc_ != NULL) loc_->::ItemLoc::Clear();
  clear_has_loc();
}
inline const ::ItemLoc& RequestLearnSkill::loc() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return loc_ != NULL ? *loc_ : *default_instance().loc_;
#else
  return loc_ != NULL ? *loc_ : *default_instance_->loc_;
#endif
}
inline ::ItemLoc* RequestLearnSkill::mutable_loc() {
  set_has_loc();
  if (loc_ == NULL) loc_ = new ::ItemLoc;
  return loc_;
}
inline ::ItemLoc* RequestLearnSkill::release_loc() {
  clear_has_loc();
  ::ItemLoc* temp = loc_;
  loc_ = NULL;
  return temp;
}
inline void RequestLearnSkill::set_allocated_loc(::ItemLoc* loc) {
  delete loc_;
  loc_ = loc;
  if (loc) {
    set_has_loc();
  } else {
    clear_has_loc();
  }
}

// -------------------------------------------------------------------

// ResponseLearnSkill

// optional .SkillData data = 1;
inline bool ResponseLearnSkill::has_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ResponseLearnSkill::set_has_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ResponseLearnSkill::clear_has_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ResponseLearnSkill::clear_data() {
  if (data_ != NULL) data_->::SkillData::Clear();
  clear_has_data();
}
inline const ::SkillData& ResponseLearnSkill::data() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return data_ != NULL ? *data_ : *default_instance().data_;
#else
  return data_ != NULL ? *data_ : *default_instance_->data_;
#endif
}
inline ::SkillData* ResponseLearnSkill::mutable_data() {
  set_has_data();
  if (data_ == NULL) data_ = new ::SkillData;
  return data_;
}
inline ::SkillData* ResponseLearnSkill::release_data() {
  clear_has_data();
  ::SkillData* temp = data_;
  data_ = NULL;
  return temp;
}
inline void ResponseLearnSkill::set_allocated_data(::SkillData* data) {
  delete data_;
  data_ = data;
  if (data) {
    set_has_data();
  } else {
    clear_has_data();
  }
}

// -------------------------------------------------------------------

// NotifyUpdateSkill

// optional .SkillData data = 1;
inline bool NotifyUpdateSkill::has_data() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NotifyUpdateSkill::set_has_data() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NotifyUpdateSkill::clear_has_data() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NotifyUpdateSkill::clear_data() {
  if (data_ != NULL) data_->::SkillData::Clear();
  clear_has_data();
}
inline const ::SkillData& NotifyUpdateSkill::data() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return data_ != NULL ? *data_ : *default_instance().data_;
#else
  return data_ != NULL ? *data_ : *default_instance_->data_;
#endif
}
inline ::SkillData* NotifyUpdateSkill::mutable_data() {
  set_has_data();
  if (data_ == NULL) data_ = new ::SkillData;
  return data_;
}
inline ::SkillData* NotifyUpdateSkill::release_data() {
  clear_has_data();
  ::SkillData* temp = data_;
  data_ = NULL;
  return temp;
}
inline void NotifyUpdateSkill::set_allocated_data(::SkillData* data) {
  delete data_;
  data_ = data;
  if (data) {
    set_has_data();
  } else {
    clear_has_data();
  }
}

// -------------------------------------------------------------------

// NotifyRemoveSkill

// optional int32 skill_id = 1;
inline bool NotifyRemoveSkill::has_skill_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NotifyRemoveSkill::set_has_skill_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NotifyRemoveSkill::clear_has_skill_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NotifyRemoveSkill::clear_skill_id() {
  skill_id_ = 0;
  clear_has_skill_id();
}
inline ::google::protobuf::int32 NotifyRemoveSkill::skill_id() const {
  return skill_id_;
}
inline void NotifyRemoveSkill::set_skill_id(::google::protobuf::int32 value) {
  set_has_skill_id();
  skill_id_ = value;
}

// optional int32 skill_level = 2;
inline bool NotifyRemoveSkill::has_skill_level() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NotifyRemoveSkill::set_has_skill_level() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NotifyRemoveSkill::clear_has_skill_level() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NotifyRemoveSkill::clear_skill_level() {
  skill_level_ = 0;
  clear_has_skill_level();
}
inline ::google::protobuf::int32 NotifyRemoveSkill::skill_level() const {
  return skill_level_;
}
inline void NotifyRemoveSkill::set_skill_level(::google::protobuf::int32 value) {
  set_has_skill_level();
  skill_level_ = value;
}

// -------------------------------------------------------------------

// NotifyAddBuff

// optional int32 obj_type = 1;
inline bool NotifyAddBuff::has_obj_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NotifyAddBuff::set_has_obj_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NotifyAddBuff::clear_has_obj_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NotifyAddBuff::clear_obj_type() {
  obj_type_ = 0;
  clear_has_obj_type();
}
inline ::google::protobuf::int32 NotifyAddBuff::obj_type() const {
  return obj_type_;
}
inline void NotifyAddBuff::set_obj_type(::google::protobuf::int32 value) {
  set_has_obj_type();
  obj_type_ = value;
}

// optional int32 obj_id = 2;
inline bool NotifyAddBuff::has_obj_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NotifyAddBuff::set_has_obj_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NotifyAddBuff::clear_has_obj_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NotifyAddBuff::clear_obj_id() {
  obj_id_ = 0;
  clear_has_obj_id();
}
inline ::google::protobuf::int32 NotifyAddBuff::obj_id() const {
  return obj_id_;
}
inline void NotifyAddBuff::set_obj_id(::google::protobuf::int32 value) {
  set_has_obj_id();
  obj_id_ = value;
}

// optional .SkillBuffData data = 3;
inline bool NotifyAddBuff::has_data() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NotifyAddBuff::set_has_data() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NotifyAddBuff::clear_has_data() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NotifyAddBuff::clear_data() {
  if (data_ != NULL) data_->::SkillBuffData::Clear();
  clear_has_data();
}
inline const ::SkillBuffData& NotifyAddBuff::data() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return data_ != NULL ? *data_ : *default_instance().data_;
#else
  return data_ != NULL ? *data_ : *default_instance_->data_;
#endif
}
inline ::SkillBuffData* NotifyAddBuff::mutable_data() {
  set_has_data();
  if (data_ == NULL) data_ = new ::SkillBuffData;
  return data_;
}
inline ::SkillBuffData* NotifyAddBuff::release_data() {
  clear_has_data();
  ::SkillBuffData* temp = data_;
  data_ = NULL;
  return temp;
}
inline void NotifyAddBuff::set_allocated_data(::SkillBuffData* data) {
  delete data_;
  data_ = data;
  if (data) {
    set_has_data();
  } else {
    clear_has_data();
  }
}

// -------------------------------------------------------------------

// NotifyRemoveBuff

// optional int32 obj_type = 1;
inline bool NotifyRemoveBuff::has_obj_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NotifyRemoveBuff::set_has_obj_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NotifyRemoveBuff::clear_has_obj_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NotifyRemoveBuff::clear_obj_type() {
  obj_type_ = 0;
  clear_has_obj_type();
}
inline ::google::protobuf::int32 NotifyRemoveBuff::obj_type() const {
  return obj_type_;
}
inline void NotifyRemoveBuff::set_obj_type(::google::protobuf::int32 value) {
  set_has_obj_type();
  obj_type_ = value;
}

// optional int32 obj_id = 2;
inline bool NotifyRemoveBuff::has_obj_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NotifyRemoveBuff::set_has_obj_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NotifyRemoveBuff::clear_has_obj_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NotifyRemoveBuff::clear_obj_id() {
  obj_id_ = 0;
  clear_has_obj_id();
}
inline ::google::protobuf::int32 NotifyRemoveBuff::obj_id() const {
  return obj_id_;
}
inline void NotifyRemoveBuff::set_obj_id(::google::protobuf::int32 value) {
  set_has_obj_id();
  obj_id_ = value;
}

// optional .SkillBuffData data = 3;
inline bool NotifyRemoveBuff::has_data() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void NotifyRemoveBuff::set_has_data() {
  _has_bits_[0] |= 0x00000004u;
}
inline void NotifyRemoveBuff::clear_has_data() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void NotifyRemoveBuff::clear_data() {
  if (data_ != NULL) data_->::SkillBuffData::Clear();
  clear_has_data();
}
inline const ::SkillBuffData& NotifyRemoveBuff::data() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return data_ != NULL ? *data_ : *default_instance().data_;
#else
  return data_ != NULL ? *data_ : *default_instance_->data_;
#endif
}
inline ::SkillBuffData* NotifyRemoveBuff::mutable_data() {
  set_has_data();
  if (data_ == NULL) data_ = new ::SkillBuffData;
  return data_;
}
inline ::SkillBuffData* NotifyRemoveBuff::release_data() {
  clear_has_data();
  ::SkillBuffData* temp = data_;
  data_ = NULL;
  return temp;
}
inline void NotifyRemoveBuff::set_allocated_data(::SkillBuffData* data) {
  delete data_;
  data_ = data;
  if (data) {
    set_has_data();
  } else {
    clear_has_data();
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ProtoSkill_2eproto__INCLUDED
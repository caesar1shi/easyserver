// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtoFight.proto

#ifndef PROTOBUF_ProtoFight_2eproto__INCLUDED
#define PROTOBUF_ProtoFight_2eproto__INCLUDED

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
void  protobuf_AddDesc_ProtoFight_2eproto();
void protobuf_AssignDesc_ProtoFight_2eproto();
void protobuf_ShutdownFile_ProtoFight_2eproto();

class AttackInfo;
class TargetInfo;
class MsgCharAttackMonster;
class MsgCharAttackChar;
class NotifyMonsterAttackChar;

enum FightOpCode {
  OP_CHAR_ATTACK_MONSTER = 1,
  OP_CHAR_ATTACK_CHAR = 2,
  OP_MONSTER_ATTACK_CHAR = 3
};
bool FightOpCode_IsValid(int value);
const FightOpCode FightOpCode_MIN = OP_CHAR_ATTACK_MONSTER;
const FightOpCode FightOpCode_MAX = OP_MONSTER_ATTACK_CHAR;
const int FightOpCode_ARRAYSIZE = FightOpCode_MAX + 1;

// ===================================================================

class AttackInfo : public ::google::protobuf::MessageLite {
 public:
  AttackInfo();
  virtual ~AttackInfo();

  AttackInfo(const AttackInfo& from);

  inline AttackInfo& operator=(const AttackInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const AttackInfo& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const AttackInfo* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(AttackInfo* other);

  // implements Message ----------------------------------------------

  AttackInfo* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const AttackInfo& from);
  void MergeFrom(const AttackInfo& from);
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

  // optional int32 x = 2;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 2;
  inline ::google::protobuf::int32 x() const;
  inline void set_x(::google::protobuf::int32 value);

  // optional int32 y = 3;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 3;
  inline ::google::protobuf::int32 y() const;
  inline void set_y(::google::protobuf::int32 value);

  // optional int32 skill_id = 4;
  inline bool has_skill_id() const;
  inline void clear_skill_id();
  static const int kSkillIdFieldNumber = 4;
  inline ::google::protobuf::int32 skill_id() const;
  inline void set_skill_id(::google::protobuf::int32 value);

  // optional int32 skill_level = 5;
  inline bool has_skill_level() const;
  inline void clear_skill_level();
  static const int kSkillLevelFieldNumber = 5;
  inline ::google::protobuf::int32 skill_level() const;
  inline void set_skill_level(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Protocol.AttackInfo)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();
  inline void set_has_skill_id();
  inline void clear_has_skill_id();
  inline void set_has_skill_level();
  inline void clear_has_skill_level();

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 x_;
  ::google::protobuf::int32 y_;
  ::google::protobuf::int32 skill_id_;
  ::google::protobuf::int32 skill_level_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoFight_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoFight_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoFight_2eproto();
  friend void protobuf_ShutdownFile_ProtoFight_2eproto();

  void InitAsDefaultInstance();
  static AttackInfo* default_instance_;
};
// -------------------------------------------------------------------

class TargetInfo : public ::google::protobuf::MessageLite {
 public:
  TargetInfo();
  virtual ~TargetInfo();

  TargetInfo(const TargetInfo& from);

  inline TargetInfo& operator=(const TargetInfo& from) {
    CopyFrom(from);
    return *this;
  }

  static const TargetInfo& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const TargetInfo* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(TargetInfo* other);

  // implements Message ----------------------------------------------

  TargetInfo* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const TargetInfo& from);
  void MergeFrom(const TargetInfo& from);
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

  // optional int32 damage = 2;
  inline bool has_damage() const;
  inline void clear_damage();
  static const int kDamageFieldNumber = 2;
  inline ::google::protobuf::int32 damage() const;
  inline void set_damage(::google::protobuf::int32 value);

  // optional bool misss = 3;
  inline bool has_misss() const;
  inline void clear_misss();
  static const int kMisssFieldNumber = 3;
  inline bool misss() const;
  inline void set_misss(bool value);

  // optional bool critical = 4;
  inline bool has_critical() const;
  inline void clear_critical();
  static const int kCriticalFieldNumber = 4;
  inline bool critical() const;
  inline void set_critical(bool value);

  // optional int32 curhp = 5;
  inline bool has_curhp() const;
  inline void clear_curhp();
  static const int kCurhpFieldNumber = 5;
  inline ::google::protobuf::int32 curhp() const;
  inline void set_curhp(::google::protobuf::int32 value);

  // optional int32 maxhp = 6;
  inline bool has_maxhp() const;
  inline void clear_maxhp();
  static const int kMaxhpFieldNumber = 6;
  inline ::google::protobuf::int32 maxhp() const;
  inline void set_maxhp(::google::protobuf::int32 value);

  // optional int32 curmp = 7;
  inline bool has_curmp() const;
  inline void clear_curmp();
  static const int kCurmpFieldNumber = 7;
  inline ::google::protobuf::int32 curmp() const;
  inline void set_curmp(::google::protobuf::int32 value);

  // optional int32 maxmp = 8;
  inline bool has_maxmp() const;
  inline void clear_maxmp();
  static const int kMaxmpFieldNumber = 8;
  inline ::google::protobuf::int32 maxmp() const;
  inline void set_maxmp(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Protocol.TargetInfo)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_damage();
  inline void clear_has_damage();
  inline void set_has_misss();
  inline void clear_has_misss();
  inline void set_has_critical();
  inline void clear_has_critical();
  inline void set_has_curhp();
  inline void clear_has_curhp();
  inline void set_has_maxhp();
  inline void clear_has_maxhp();
  inline void set_has_curmp();
  inline void clear_has_curmp();
  inline void set_has_maxmp();
  inline void clear_has_maxmp();

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 damage_;
  bool misss_;
  bool critical_;
  ::google::protobuf::int32 curhp_;
  ::google::protobuf::int32 maxhp_;
  ::google::protobuf::int32 curmp_;
  ::google::protobuf::int32 maxmp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoFight_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoFight_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoFight_2eproto();
  friend void protobuf_ShutdownFile_ProtoFight_2eproto();

  void InitAsDefaultInstance();
  static TargetInfo* default_instance_;
};
// -------------------------------------------------------------------

class MsgCharAttackMonster : public ::google::protobuf::MessageLite {
 public:
  MsgCharAttackMonster();
  virtual ~MsgCharAttackMonster();

  MsgCharAttackMonster(const MsgCharAttackMonster& from);

  inline MsgCharAttackMonster& operator=(const MsgCharAttackMonster& from) {
    CopyFrom(from);
    return *this;
  }

  static const MsgCharAttackMonster& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MsgCharAttackMonster* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MsgCharAttackMonster* other);

  // implements Message ----------------------------------------------

  MsgCharAttackMonster* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MsgCharAttackMonster& from);
  void MergeFrom(const MsgCharAttackMonster& from);
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

  // optional .Protocol.AttackInfo attack_info = 1;
  inline bool has_attack_info() const;
  inline void clear_attack_info();
  static const int kAttackInfoFieldNumber = 1;
  inline const ::Protocol::AttackInfo& attack_info() const;
  inline ::Protocol::AttackInfo* mutable_attack_info();
  inline ::Protocol::AttackInfo* release_attack_info();
  inline void set_allocated_attack_info(::Protocol::AttackInfo* attack_info);

  // repeated .Protocol.TargetInfo target_list = 2;
  inline int target_list_size() const;
  inline void clear_target_list();
  static const int kTargetListFieldNumber = 2;
  inline const ::Protocol::TargetInfo& target_list(int index) const;
  inline ::Protocol::TargetInfo* mutable_target_list(int index);
  inline ::Protocol::TargetInfo* add_target_list();
  inline const ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo >&
      target_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo >*
      mutable_target_list();

  // @@protoc_insertion_point(class_scope:Protocol.MsgCharAttackMonster)
 private:
  inline void set_has_attack_info();
  inline void clear_has_attack_info();

  ::Protocol::AttackInfo* attack_info_;
  ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo > target_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoFight_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoFight_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoFight_2eproto();
  friend void protobuf_ShutdownFile_ProtoFight_2eproto();

  void InitAsDefaultInstance();
  static MsgCharAttackMonster* default_instance_;
};
// -------------------------------------------------------------------

class MsgCharAttackChar : public ::google::protobuf::MessageLite {
 public:
  MsgCharAttackChar();
  virtual ~MsgCharAttackChar();

  MsgCharAttackChar(const MsgCharAttackChar& from);

  inline MsgCharAttackChar& operator=(const MsgCharAttackChar& from) {
    CopyFrom(from);
    return *this;
  }

  static const MsgCharAttackChar& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const MsgCharAttackChar* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(MsgCharAttackChar* other);

  // implements Message ----------------------------------------------

  MsgCharAttackChar* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const MsgCharAttackChar& from);
  void MergeFrom(const MsgCharAttackChar& from);
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

  // optional .Protocol.AttackInfo attack_info = 1;
  inline bool has_attack_info() const;
  inline void clear_attack_info();
  static const int kAttackInfoFieldNumber = 1;
  inline const ::Protocol::AttackInfo& attack_info() const;
  inline ::Protocol::AttackInfo* mutable_attack_info();
  inline ::Protocol::AttackInfo* release_attack_info();
  inline void set_allocated_attack_info(::Protocol::AttackInfo* attack_info);

  // repeated .Protocol.TargetInfo target_list = 2;
  inline int target_list_size() const;
  inline void clear_target_list();
  static const int kTargetListFieldNumber = 2;
  inline const ::Protocol::TargetInfo& target_list(int index) const;
  inline ::Protocol::TargetInfo* mutable_target_list(int index);
  inline ::Protocol::TargetInfo* add_target_list();
  inline const ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo >&
      target_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo >*
      mutable_target_list();

  // @@protoc_insertion_point(class_scope:Protocol.MsgCharAttackChar)
 private:
  inline void set_has_attack_info();
  inline void clear_has_attack_info();

  ::Protocol::AttackInfo* attack_info_;
  ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo > target_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoFight_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoFight_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoFight_2eproto();
  friend void protobuf_ShutdownFile_ProtoFight_2eproto();

  void InitAsDefaultInstance();
  static MsgCharAttackChar* default_instance_;
};
// -------------------------------------------------------------------

class NotifyMonsterAttackChar : public ::google::protobuf::MessageLite {
 public:
  NotifyMonsterAttackChar();
  virtual ~NotifyMonsterAttackChar();

  NotifyMonsterAttackChar(const NotifyMonsterAttackChar& from);

  inline NotifyMonsterAttackChar& operator=(const NotifyMonsterAttackChar& from) {
    CopyFrom(from);
    return *this;
  }

  static const NotifyMonsterAttackChar& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NotifyMonsterAttackChar* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NotifyMonsterAttackChar* other);

  // implements Message ----------------------------------------------

  NotifyMonsterAttackChar* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NotifyMonsterAttackChar& from);
  void MergeFrom(const NotifyMonsterAttackChar& from);
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

  // optional .Protocol.AttackInfo attack_info = 1;
  inline bool has_attack_info() const;
  inline void clear_attack_info();
  static const int kAttackInfoFieldNumber = 1;
  inline const ::Protocol::AttackInfo& attack_info() const;
  inline ::Protocol::AttackInfo* mutable_attack_info();
  inline ::Protocol::AttackInfo* release_attack_info();
  inline void set_allocated_attack_info(::Protocol::AttackInfo* attack_info);

  // repeated .Protocol.TargetInfo target_list = 2;
  inline int target_list_size() const;
  inline void clear_target_list();
  static const int kTargetListFieldNumber = 2;
  inline const ::Protocol::TargetInfo& target_list(int index) const;
  inline ::Protocol::TargetInfo* mutable_target_list(int index);
  inline ::Protocol::TargetInfo* add_target_list();
  inline const ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo >&
      target_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo >*
      mutable_target_list();

  // @@protoc_insertion_point(class_scope:Protocol.NotifyMonsterAttackChar)
 private:
  inline void set_has_attack_info();
  inline void clear_has_attack_info();

  ::Protocol::AttackInfo* attack_info_;
  ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo > target_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoFight_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoFight_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoFight_2eproto();
  friend void protobuf_ShutdownFile_ProtoFight_2eproto();

  void InitAsDefaultInstance();
  static NotifyMonsterAttackChar* default_instance_;
};
// ===================================================================


// ===================================================================

// AttackInfo

// optional int32 id = 1;
inline bool AttackInfo::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AttackInfo::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AttackInfo::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AttackInfo::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 AttackInfo::id() const {
  return id_;
}
inline void AttackInfo::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 x = 2;
inline bool AttackInfo::has_x() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AttackInfo::set_has_x() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AttackInfo::clear_has_x() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AttackInfo::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline ::google::protobuf::int32 AttackInfo::x() const {
  return x_;
}
inline void AttackInfo::set_x(::google::protobuf::int32 value) {
  set_has_x();
  x_ = value;
}

// optional int32 y = 3;
inline bool AttackInfo::has_y() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AttackInfo::set_has_y() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AttackInfo::clear_has_y() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AttackInfo::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline ::google::protobuf::int32 AttackInfo::y() const {
  return y_;
}
inline void AttackInfo::set_y(::google::protobuf::int32 value) {
  set_has_y();
  y_ = value;
}

// optional int32 skill_id = 4;
inline bool AttackInfo::has_skill_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AttackInfo::set_has_skill_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AttackInfo::clear_has_skill_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AttackInfo::clear_skill_id() {
  skill_id_ = 0;
  clear_has_skill_id();
}
inline ::google::protobuf::int32 AttackInfo::skill_id() const {
  return skill_id_;
}
inline void AttackInfo::set_skill_id(::google::protobuf::int32 value) {
  set_has_skill_id();
  skill_id_ = value;
}

// optional int32 skill_level = 5;
inline bool AttackInfo::has_skill_level() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AttackInfo::set_has_skill_level() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AttackInfo::clear_has_skill_level() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AttackInfo::clear_skill_level() {
  skill_level_ = 0;
  clear_has_skill_level();
}
inline ::google::protobuf::int32 AttackInfo::skill_level() const {
  return skill_level_;
}
inline void AttackInfo::set_skill_level(::google::protobuf::int32 value) {
  set_has_skill_level();
  skill_level_ = value;
}

// -------------------------------------------------------------------

// TargetInfo

// optional int32 id = 1;
inline bool TargetInfo::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TargetInfo::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TargetInfo::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TargetInfo::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 TargetInfo::id() const {
  return id_;
}
inline void TargetInfo::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 damage = 2;
inline bool TargetInfo::has_damage() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TargetInfo::set_has_damage() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TargetInfo::clear_has_damage() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TargetInfo::clear_damage() {
  damage_ = 0;
  clear_has_damage();
}
inline ::google::protobuf::int32 TargetInfo::damage() const {
  return damage_;
}
inline void TargetInfo::set_damage(::google::protobuf::int32 value) {
  set_has_damage();
  damage_ = value;
}

// optional bool misss = 3;
inline bool TargetInfo::has_misss() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TargetInfo::set_has_misss() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TargetInfo::clear_has_misss() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TargetInfo::clear_misss() {
  misss_ = false;
  clear_has_misss();
}
inline bool TargetInfo::misss() const {
  return misss_;
}
inline void TargetInfo::set_misss(bool value) {
  set_has_misss();
  misss_ = value;
}

// optional bool critical = 4;
inline bool TargetInfo::has_critical() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TargetInfo::set_has_critical() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TargetInfo::clear_has_critical() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TargetInfo::clear_critical() {
  critical_ = false;
  clear_has_critical();
}
inline bool TargetInfo::critical() const {
  return critical_;
}
inline void TargetInfo::set_critical(bool value) {
  set_has_critical();
  critical_ = value;
}

// optional int32 curhp = 5;
inline bool TargetInfo::has_curhp() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TargetInfo::set_has_curhp() {
  _has_bits_[0] |= 0x00000010u;
}
inline void TargetInfo::clear_has_curhp() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void TargetInfo::clear_curhp() {
  curhp_ = 0;
  clear_has_curhp();
}
inline ::google::protobuf::int32 TargetInfo::curhp() const {
  return curhp_;
}
inline void TargetInfo::set_curhp(::google::protobuf::int32 value) {
  set_has_curhp();
  curhp_ = value;
}

// optional int32 maxhp = 6;
inline bool TargetInfo::has_maxhp() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void TargetInfo::set_has_maxhp() {
  _has_bits_[0] |= 0x00000020u;
}
inline void TargetInfo::clear_has_maxhp() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void TargetInfo::clear_maxhp() {
  maxhp_ = 0;
  clear_has_maxhp();
}
inline ::google::protobuf::int32 TargetInfo::maxhp() const {
  return maxhp_;
}
inline void TargetInfo::set_maxhp(::google::protobuf::int32 value) {
  set_has_maxhp();
  maxhp_ = value;
}

// optional int32 curmp = 7;
inline bool TargetInfo::has_curmp() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void TargetInfo::set_has_curmp() {
  _has_bits_[0] |= 0x00000040u;
}
inline void TargetInfo::clear_has_curmp() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void TargetInfo::clear_curmp() {
  curmp_ = 0;
  clear_has_curmp();
}
inline ::google::protobuf::int32 TargetInfo::curmp() const {
  return curmp_;
}
inline void TargetInfo::set_curmp(::google::protobuf::int32 value) {
  set_has_curmp();
  curmp_ = value;
}

// optional int32 maxmp = 8;
inline bool TargetInfo::has_maxmp() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void TargetInfo::set_has_maxmp() {
  _has_bits_[0] |= 0x00000080u;
}
inline void TargetInfo::clear_has_maxmp() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void TargetInfo::clear_maxmp() {
  maxmp_ = 0;
  clear_has_maxmp();
}
inline ::google::protobuf::int32 TargetInfo::maxmp() const {
  return maxmp_;
}
inline void TargetInfo::set_maxmp(::google::protobuf::int32 value) {
  set_has_maxmp();
  maxmp_ = value;
}

// -------------------------------------------------------------------

// MsgCharAttackMonster

// optional .Protocol.AttackInfo attack_info = 1;
inline bool MsgCharAttackMonster::has_attack_info() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgCharAttackMonster::set_has_attack_info() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgCharAttackMonster::clear_has_attack_info() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgCharAttackMonster::clear_attack_info() {
  if (attack_info_ != NULL) attack_info_->::Protocol::AttackInfo::Clear();
  clear_has_attack_info();
}
inline const ::Protocol::AttackInfo& MsgCharAttackMonster::attack_info() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return attack_info_ != NULL ? *attack_info_ : *default_instance().attack_info_;
#else
  return attack_info_ != NULL ? *attack_info_ : *default_instance_->attack_info_;
#endif
}
inline ::Protocol::AttackInfo* MsgCharAttackMonster::mutable_attack_info() {
  set_has_attack_info();
  if (attack_info_ == NULL) attack_info_ = new ::Protocol::AttackInfo;
  return attack_info_;
}
inline ::Protocol::AttackInfo* MsgCharAttackMonster::release_attack_info() {
  clear_has_attack_info();
  ::Protocol::AttackInfo* temp = attack_info_;
  attack_info_ = NULL;
  return temp;
}
inline void MsgCharAttackMonster::set_allocated_attack_info(::Protocol::AttackInfo* attack_info) {
  delete attack_info_;
  attack_info_ = attack_info;
  if (attack_info) {
    set_has_attack_info();
  } else {
    clear_has_attack_info();
  }
}

// repeated .Protocol.TargetInfo target_list = 2;
inline int MsgCharAttackMonster::target_list_size() const {
  return target_list_.size();
}
inline void MsgCharAttackMonster::clear_target_list() {
  target_list_.Clear();
}
inline const ::Protocol::TargetInfo& MsgCharAttackMonster::target_list(int index) const {
  return target_list_.Get(index);
}
inline ::Protocol::TargetInfo* MsgCharAttackMonster::mutable_target_list(int index) {
  return target_list_.Mutable(index);
}
inline ::Protocol::TargetInfo* MsgCharAttackMonster::add_target_list() {
  return target_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo >&
MsgCharAttackMonster::target_list() const {
  return target_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo >*
MsgCharAttackMonster::mutable_target_list() {
  return &target_list_;
}

// -------------------------------------------------------------------

// MsgCharAttackChar

// optional .Protocol.AttackInfo attack_info = 1;
inline bool MsgCharAttackChar::has_attack_info() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MsgCharAttackChar::set_has_attack_info() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MsgCharAttackChar::clear_has_attack_info() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MsgCharAttackChar::clear_attack_info() {
  if (attack_info_ != NULL) attack_info_->::Protocol::AttackInfo::Clear();
  clear_has_attack_info();
}
inline const ::Protocol::AttackInfo& MsgCharAttackChar::attack_info() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return attack_info_ != NULL ? *attack_info_ : *default_instance().attack_info_;
#else
  return attack_info_ != NULL ? *attack_info_ : *default_instance_->attack_info_;
#endif
}
inline ::Protocol::AttackInfo* MsgCharAttackChar::mutable_attack_info() {
  set_has_attack_info();
  if (attack_info_ == NULL) attack_info_ = new ::Protocol::AttackInfo;
  return attack_info_;
}
inline ::Protocol::AttackInfo* MsgCharAttackChar::release_attack_info() {
  clear_has_attack_info();
  ::Protocol::AttackInfo* temp = attack_info_;
  attack_info_ = NULL;
  return temp;
}
inline void MsgCharAttackChar::set_allocated_attack_info(::Protocol::AttackInfo* attack_info) {
  delete attack_info_;
  attack_info_ = attack_info;
  if (attack_info) {
    set_has_attack_info();
  } else {
    clear_has_attack_info();
  }
}

// repeated .Protocol.TargetInfo target_list = 2;
inline int MsgCharAttackChar::target_list_size() const {
  return target_list_.size();
}
inline void MsgCharAttackChar::clear_target_list() {
  target_list_.Clear();
}
inline const ::Protocol::TargetInfo& MsgCharAttackChar::target_list(int index) const {
  return target_list_.Get(index);
}
inline ::Protocol::TargetInfo* MsgCharAttackChar::mutable_target_list(int index) {
  return target_list_.Mutable(index);
}
inline ::Protocol::TargetInfo* MsgCharAttackChar::add_target_list() {
  return target_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo >&
MsgCharAttackChar::target_list() const {
  return target_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo >*
MsgCharAttackChar::mutable_target_list() {
  return &target_list_;
}

// -------------------------------------------------------------------

// NotifyMonsterAttackChar

// optional .Protocol.AttackInfo attack_info = 1;
inline bool NotifyMonsterAttackChar::has_attack_info() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NotifyMonsterAttackChar::set_has_attack_info() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NotifyMonsterAttackChar::clear_has_attack_info() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NotifyMonsterAttackChar::clear_attack_info() {
  if (attack_info_ != NULL) attack_info_->::Protocol::AttackInfo::Clear();
  clear_has_attack_info();
}
inline const ::Protocol::AttackInfo& NotifyMonsterAttackChar::attack_info() const {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  return attack_info_ != NULL ? *attack_info_ : *default_instance().attack_info_;
#else
  return attack_info_ != NULL ? *attack_info_ : *default_instance_->attack_info_;
#endif
}
inline ::Protocol::AttackInfo* NotifyMonsterAttackChar::mutable_attack_info() {
  set_has_attack_info();
  if (attack_info_ == NULL) attack_info_ = new ::Protocol::AttackInfo;
  return attack_info_;
}
inline ::Protocol::AttackInfo* NotifyMonsterAttackChar::release_attack_info() {
  clear_has_attack_info();
  ::Protocol::AttackInfo* temp = attack_info_;
  attack_info_ = NULL;
  return temp;
}
inline void NotifyMonsterAttackChar::set_allocated_attack_info(::Protocol::AttackInfo* attack_info) {
  delete attack_info_;
  attack_info_ = attack_info;
  if (attack_info) {
    set_has_attack_info();
  } else {
    clear_has_attack_info();
  }
}

// repeated .Protocol.TargetInfo target_list = 2;
inline int NotifyMonsterAttackChar::target_list_size() const {
  return target_list_.size();
}
inline void NotifyMonsterAttackChar::clear_target_list() {
  target_list_.Clear();
}
inline const ::Protocol::TargetInfo& NotifyMonsterAttackChar::target_list(int index) const {
  return target_list_.Get(index);
}
inline ::Protocol::TargetInfo* NotifyMonsterAttackChar::mutable_target_list(int index) {
  return target_list_.Mutable(index);
}
inline ::Protocol::TargetInfo* NotifyMonsterAttackChar::add_target_list() {
  return target_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo >&
NotifyMonsterAttackChar::target_list() const {
  return target_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::Protocol::TargetInfo >*
NotifyMonsterAttackChar::mutable_target_list() {
  return &target_list_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ProtoFight_2eproto__INCLUDED

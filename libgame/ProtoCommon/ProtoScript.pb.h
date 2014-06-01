// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtoScript.proto

#ifndef PROTOBUF_ProtoScript_2eproto__INCLUDED
#define PROTOBUF_ProtoScript_2eproto__INCLUDED

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
void  protobuf_AddDesc_ProtoScript_2eproto();
void protobuf_AssignDesc_ProtoScript_2eproto();
void protobuf_ShutdownFile_ProtoScript_2eproto();

class NpcDlgOption;
class RequestOpenNpcDialog;
class RequestChooseAnswer;
class NotifyUpdateNpcDialog;
class NotifyCloseNpcDialog;

enum ScriptOpCode {
  OP_SCIRPT_OPEN_NPC_DIALOG = 1,
  OP_SCRIPT_CHOOSE_ANSWER = 2,
  OP_SCRIPT_UPDATE_NPC_DIALOG = 3,
  OP_SCRIPT_CLOSE_NPC_DIALOG = 4
};
bool ScriptOpCode_IsValid(int value);
const ScriptOpCode ScriptOpCode_MIN = OP_SCIRPT_OPEN_NPC_DIALOG;
const ScriptOpCode ScriptOpCode_MAX = OP_SCRIPT_CLOSE_NPC_DIALOG;
const int ScriptOpCode_ARRAYSIZE = ScriptOpCode_MAX + 1;

// ===================================================================

class NpcDlgOption : public ::google::protobuf::MessageLite {
 public:
  NpcDlgOption();
  virtual ~NpcDlgOption();

  NpcDlgOption(const NpcDlgOption& from);

  inline NpcDlgOption& operator=(const NpcDlgOption& from) {
    CopyFrom(from);
    return *this;
  }

  static const NpcDlgOption& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NpcDlgOption* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NpcDlgOption* other);

  // implements Message ----------------------------------------------

  NpcDlgOption* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NpcDlgOption& from);
  void MergeFrom(const NpcDlgOption& from);
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

  // optional string text = 1;
  inline bool has_text() const;
  inline void clear_text();
  static const int kTextFieldNumber = 1;
  inline const ::std::string& text() const;
  inline void set_text(const ::std::string& value);
  inline void set_text(const char* value);
  inline void set_text(const char* value, size_t size);
  inline ::std::string* mutable_text();
  inline ::std::string* release_text();
  inline void set_allocated_text(::std::string* text);

  // optional string icon = 2;
  inline bool has_icon() const;
  inline void clear_icon();
  static const int kIconFieldNumber = 2;
  inline const ::std::string& icon() const;
  inline void set_icon(const ::std::string& value);
  inline void set_icon(const char* value);
  inline void set_icon(const char* value, size_t size);
  inline ::std::string* mutable_icon();
  inline ::std::string* release_icon();
  inline void set_allocated_icon(::std::string* icon);

  // @@protoc_insertion_point(class_scope:Protocol.NpcDlgOption)
 private:
  inline void set_has_text();
  inline void clear_has_text();
  inline void set_has_icon();
  inline void clear_has_icon();

  ::std::string* text_;
  ::std::string* icon_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoScript_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoScript_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoScript_2eproto();
  friend void protobuf_ShutdownFile_ProtoScript_2eproto();

  void InitAsDefaultInstance();
  static NpcDlgOption* default_instance_;
};
// -------------------------------------------------------------------

class RequestOpenNpcDialog : public ::google::protobuf::MessageLite {
 public:
  RequestOpenNpcDialog();
  virtual ~RequestOpenNpcDialog();

  RequestOpenNpcDialog(const RequestOpenNpcDialog& from);

  inline RequestOpenNpcDialog& operator=(const RequestOpenNpcDialog& from) {
    CopyFrom(from);
    return *this;
  }

  static const RequestOpenNpcDialog& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const RequestOpenNpcDialog* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(RequestOpenNpcDialog* other);

  // implements Message ----------------------------------------------

  RequestOpenNpcDialog* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const RequestOpenNpcDialog& from);
  void MergeFrom(const RequestOpenNpcDialog& from);
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

  // optional int32 npc_uid = 1;
  inline bool has_npc_uid() const;
  inline void clear_npc_uid();
  static const int kNpcUidFieldNumber = 1;
  inline ::google::protobuf::int32 npc_uid() const;
  inline void set_npc_uid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Protocol.RequestOpenNpcDialog)
 private:
  inline void set_has_npc_uid();
  inline void clear_has_npc_uid();

  ::google::protobuf::int32 npc_uid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoScript_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoScript_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoScript_2eproto();
  friend void protobuf_ShutdownFile_ProtoScript_2eproto();

  void InitAsDefaultInstance();
  static RequestOpenNpcDialog* default_instance_;
};
// -------------------------------------------------------------------

class RequestChooseAnswer : public ::google::protobuf::MessageLite {
 public:
  RequestChooseAnswer();
  virtual ~RequestChooseAnswer();

  RequestChooseAnswer(const RequestChooseAnswer& from);

  inline RequestChooseAnswer& operator=(const RequestChooseAnswer& from) {
    CopyFrom(from);
    return *this;
  }

  static const RequestChooseAnswer& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const RequestChooseAnswer* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(RequestChooseAnswer* other);

  // implements Message ----------------------------------------------

  RequestChooseAnswer* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const RequestChooseAnswer& from);
  void MergeFrom(const RequestChooseAnswer& from);
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

  // optional int32 answer_index = 1;
  inline bool has_answer_index() const;
  inline void clear_answer_index();
  static const int kAnswerIndexFieldNumber = 1;
  inline ::google::protobuf::int32 answer_index() const;
  inline void set_answer_index(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Protocol.RequestChooseAnswer)
 private:
  inline void set_has_answer_index();
  inline void clear_has_answer_index();

  ::google::protobuf::int32 answer_index_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoScript_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoScript_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoScript_2eproto();
  friend void protobuf_ShutdownFile_ProtoScript_2eproto();

  void InitAsDefaultInstance();
  static RequestChooseAnswer* default_instance_;
};
// -------------------------------------------------------------------

class NotifyUpdateNpcDialog : public ::google::protobuf::MessageLite {
 public:
  NotifyUpdateNpcDialog();
  virtual ~NotifyUpdateNpcDialog();

  NotifyUpdateNpcDialog(const NotifyUpdateNpcDialog& from);

  inline NotifyUpdateNpcDialog& operator=(const NotifyUpdateNpcDialog& from) {
    CopyFrom(from);
    return *this;
  }

  static const NotifyUpdateNpcDialog& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NotifyUpdateNpcDialog* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NotifyUpdateNpcDialog* other);

  // implements Message ----------------------------------------------

  NotifyUpdateNpcDialog* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NotifyUpdateNpcDialog& from);
  void MergeFrom(const NotifyUpdateNpcDialog& from);
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

  // optional string content = 1;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 1;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const char* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  inline void set_allocated_content(::std::string* content);

  // repeated .Protocol.NpcDlgOption options = 2;
  inline int options_size() const;
  inline void clear_options();
  static const int kOptionsFieldNumber = 2;
  inline const ::Protocol::NpcDlgOption& options(int index) const;
  inline ::Protocol::NpcDlgOption* mutable_options(int index);
  inline ::Protocol::NpcDlgOption* add_options();
  inline const ::google::protobuf::RepeatedPtrField< ::Protocol::NpcDlgOption >&
      options() const;
  inline ::google::protobuf::RepeatedPtrField< ::Protocol::NpcDlgOption >*
      mutable_options();

  // @@protoc_insertion_point(class_scope:Protocol.NotifyUpdateNpcDialog)
 private:
  inline void set_has_content();
  inline void clear_has_content();

  ::std::string* content_;
  ::google::protobuf::RepeatedPtrField< ::Protocol::NpcDlgOption > options_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoScript_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoScript_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoScript_2eproto();
  friend void protobuf_ShutdownFile_ProtoScript_2eproto();

  void InitAsDefaultInstance();
  static NotifyUpdateNpcDialog* default_instance_;
};
// -------------------------------------------------------------------

class NotifyCloseNpcDialog : public ::google::protobuf::MessageLite {
 public:
  NotifyCloseNpcDialog();
  virtual ~NotifyCloseNpcDialog();

  NotifyCloseNpcDialog(const NotifyCloseNpcDialog& from);

  inline NotifyCloseNpcDialog& operator=(const NotifyCloseNpcDialog& from) {
    CopyFrom(from);
    return *this;
  }

  static const NotifyCloseNpcDialog& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const NotifyCloseNpcDialog* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(NotifyCloseNpcDialog* other);

  // implements Message ----------------------------------------------

  NotifyCloseNpcDialog* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const NotifyCloseNpcDialog& from);
  void MergeFrom(const NotifyCloseNpcDialog& from);
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

  // optional int32 npc_uid = 1;
  inline bool has_npc_uid() const;
  inline void clear_npc_uid();
  static const int kNpcUidFieldNumber = 1;
  inline ::google::protobuf::int32 npc_uid() const;
  inline void set_npc_uid(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:Protocol.NotifyCloseNpcDialog)
 private:
  inline void set_has_npc_uid();
  inline void clear_has_npc_uid();

  ::google::protobuf::int32 npc_uid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void  protobuf_AddDesc_ProtoScript_2eproto_impl();
  #else
  friend void  protobuf_AddDesc_ProtoScript_2eproto();
  #endif
  friend void protobuf_AssignDesc_ProtoScript_2eproto();
  friend void protobuf_ShutdownFile_ProtoScript_2eproto();

  void InitAsDefaultInstance();
  static NotifyCloseNpcDialog* default_instance_;
};
// ===================================================================


// ===================================================================

// NpcDlgOption

// optional string text = 1;
inline bool NpcDlgOption::has_text() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NpcDlgOption::set_has_text() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NpcDlgOption::clear_has_text() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NpcDlgOption::clear_text() {
  if (text_ != &::google::protobuf::internal::kEmptyString) {
    text_->clear();
  }
  clear_has_text();
}
inline const ::std::string& NpcDlgOption::text() const {
  return *text_;
}
inline void NpcDlgOption::set_text(const ::std::string& value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(value);
}
inline void NpcDlgOption::set_text(const char* value) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(value);
}
inline void NpcDlgOption::set_text(const char* value, size_t size) {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  text_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NpcDlgOption::mutable_text() {
  set_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    text_ = new ::std::string;
  }
  return text_;
}
inline ::std::string* NpcDlgOption::release_text() {
  clear_has_text();
  if (text_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = text_;
    text_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NpcDlgOption::set_allocated_text(::std::string* text) {
  if (text_ != &::google::protobuf::internal::kEmptyString) {
    delete text_;
  }
  if (text) {
    set_has_text();
    text_ = text;
  } else {
    clear_has_text();
    text_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string icon = 2;
inline bool NpcDlgOption::has_icon() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NpcDlgOption::set_has_icon() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NpcDlgOption::clear_has_icon() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NpcDlgOption::clear_icon() {
  if (icon_ != &::google::protobuf::internal::kEmptyString) {
    icon_->clear();
  }
  clear_has_icon();
}
inline const ::std::string& NpcDlgOption::icon() const {
  return *icon_;
}
inline void NpcDlgOption::set_icon(const ::std::string& value) {
  set_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    icon_ = new ::std::string;
  }
  icon_->assign(value);
}
inline void NpcDlgOption::set_icon(const char* value) {
  set_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    icon_ = new ::std::string;
  }
  icon_->assign(value);
}
inline void NpcDlgOption::set_icon(const char* value, size_t size) {
  set_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    icon_ = new ::std::string;
  }
  icon_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NpcDlgOption::mutable_icon() {
  set_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    icon_ = new ::std::string;
  }
  return icon_;
}
inline ::std::string* NpcDlgOption::release_icon() {
  clear_has_icon();
  if (icon_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = icon_;
    icon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NpcDlgOption::set_allocated_icon(::std::string* icon) {
  if (icon_ != &::google::protobuf::internal::kEmptyString) {
    delete icon_;
  }
  if (icon) {
    set_has_icon();
    icon_ = icon;
  } else {
    clear_has_icon();
    icon_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// RequestOpenNpcDialog

// optional int32 npc_uid = 1;
inline bool RequestOpenNpcDialog::has_npc_uid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RequestOpenNpcDialog::set_has_npc_uid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RequestOpenNpcDialog::clear_has_npc_uid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RequestOpenNpcDialog::clear_npc_uid() {
  npc_uid_ = 0;
  clear_has_npc_uid();
}
inline ::google::protobuf::int32 RequestOpenNpcDialog::npc_uid() const {
  return npc_uid_;
}
inline void RequestOpenNpcDialog::set_npc_uid(::google::protobuf::int32 value) {
  set_has_npc_uid();
  npc_uid_ = value;
}

// -------------------------------------------------------------------

// RequestChooseAnswer

// optional int32 answer_index = 1;
inline bool RequestChooseAnswer::has_answer_index() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void RequestChooseAnswer::set_has_answer_index() {
  _has_bits_[0] |= 0x00000001u;
}
inline void RequestChooseAnswer::clear_has_answer_index() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void RequestChooseAnswer::clear_answer_index() {
  answer_index_ = 0;
  clear_has_answer_index();
}
inline ::google::protobuf::int32 RequestChooseAnswer::answer_index() const {
  return answer_index_;
}
inline void RequestChooseAnswer::set_answer_index(::google::protobuf::int32 value) {
  set_has_answer_index();
  answer_index_ = value;
}

// -------------------------------------------------------------------

// NotifyUpdateNpcDialog

// optional string content = 1;
inline bool NotifyUpdateNpcDialog::has_content() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NotifyUpdateNpcDialog::set_has_content() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NotifyUpdateNpcDialog::clear_has_content() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NotifyUpdateNpcDialog::clear_content() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    content_->clear();
  }
  clear_has_content();
}
inline const ::std::string& NotifyUpdateNpcDialog::content() const {
  return *content_;
}
inline void NotifyUpdateNpcDialog::set_content(const ::std::string& value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void NotifyUpdateNpcDialog::set_content(const char* value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void NotifyUpdateNpcDialog::set_content(const char* value, size_t size) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NotifyUpdateNpcDialog::mutable_content() {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  return content_;
}
inline ::std::string* NotifyUpdateNpcDialog::release_content() {
  clear_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = content_;
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NotifyUpdateNpcDialog::set_allocated_content(::std::string* content) {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (content) {
    set_has_content();
    content_ = content;
  } else {
    clear_has_content();
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .Protocol.NpcDlgOption options = 2;
inline int NotifyUpdateNpcDialog::options_size() const {
  return options_.size();
}
inline void NotifyUpdateNpcDialog::clear_options() {
  options_.Clear();
}
inline const ::Protocol::NpcDlgOption& NotifyUpdateNpcDialog::options(int index) const {
  return options_.Get(index);
}
inline ::Protocol::NpcDlgOption* NotifyUpdateNpcDialog::mutable_options(int index) {
  return options_.Mutable(index);
}
inline ::Protocol::NpcDlgOption* NotifyUpdateNpcDialog::add_options() {
  return options_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::Protocol::NpcDlgOption >&
NotifyUpdateNpcDialog::options() const {
  return options_;
}
inline ::google::protobuf::RepeatedPtrField< ::Protocol::NpcDlgOption >*
NotifyUpdateNpcDialog::mutable_options() {
  return &options_;
}

// -------------------------------------------------------------------

// NotifyCloseNpcDialog

// optional int32 npc_uid = 1;
inline bool NotifyCloseNpcDialog::has_npc_uid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NotifyCloseNpcDialog::set_has_npc_uid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NotifyCloseNpcDialog::clear_has_npc_uid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NotifyCloseNpcDialog::clear_npc_uid() {
  npc_uid_ = 0;
  clear_has_npc_uid();
}
inline ::google::protobuf::int32 NotifyCloseNpcDialog::npc_uid() const {
  return npc_uid_;
}
inline void NotifyCloseNpcDialog::set_npc_uid(::google::protobuf::int32 value) {
  set_has_npc_uid();
  npc_uid_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ProtoScript_2eproto__INCLUDED

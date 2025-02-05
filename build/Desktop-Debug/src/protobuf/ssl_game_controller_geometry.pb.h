// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssl_game_controller_geometry.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ssl_5fgame_5fcontroller_5fgeometry_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ssl_5fgame_5fcontroller_5fgeometry_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ssl_5fgame_5fcontroller_5fgeometry_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ssl_5fgame_5fcontroller_5fgeometry_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ssl_5fgame_5fcontroller_5fgeometry_2eproto;
namespace gameController {
class Vector2;
class Vector2DefaultTypeInternal;
extern Vector2DefaultTypeInternal _Vector2_default_instance_;
class Vector3;
class Vector3DefaultTypeInternal;
extern Vector3DefaultTypeInternal _Vector3_default_instance_;
}  // namespace gameController
PROTOBUF_NAMESPACE_OPEN
template<> ::gameController::Vector2* Arena::CreateMaybeMessage<::gameController::Vector2>(Arena*);
template<> ::gameController::Vector3* Arena::CreateMaybeMessage<::gameController::Vector3>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace gameController {

// ===================================================================

class Vector2 PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gameController.Vector2) */ {
 public:
  inline Vector2() : Vector2(nullptr) {};
  virtual ~Vector2();

  Vector2(const Vector2& from);
  Vector2(Vector2&& from) noexcept
    : Vector2() {
    *this = ::std::move(from);
  }

  inline Vector2& operator=(const Vector2& from) {
    CopyFrom(from);
    return *this;
  }
  inline Vector2& operator=(Vector2&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Vector2& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vector2* internal_default_instance() {
    return reinterpret_cast<const Vector2*>(
               &_Vector2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Vector2& a, Vector2& b) {
    a.Swap(&b);
  }
  inline void Swap(Vector2* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Vector2* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Vector2* New() const final {
    return CreateMaybeMessage<Vector2>(nullptr);
  }

  Vector2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Vector2>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Vector2& from);
  void MergeFrom(const Vector2& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Vector2* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gameController.Vector2";
  }
  protected:
  explicit Vector2(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ssl_5fgame_5fcontroller_5fgeometry_2eproto);
    return ::descriptor_table_ssl_5fgame_5fcontroller_5fgeometry_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
  };
  // required float x = 1;
  bool has_x() const;
  private:
  bool _internal_has_x() const;
  public:
  void clear_x();
  float x() const;
  void set_x(float value);
  private:
  float _internal_x() const;
  void _internal_set_x(float value);
  public:

  // required float y = 2;
  bool has_y() const;
  private:
  bool _internal_has_y() const;
  public:
  void clear_y();
  float y() const;
  void set_y(float value);
  private:
  float _internal_y() const;
  void _internal_set_y(float value);
  public:

  // @@protoc_insertion_point(class_scope:gameController.Vector2)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  float x_;
  float y_;
  friend struct ::TableStruct_ssl_5fgame_5fcontroller_5fgeometry_2eproto;
};
// -------------------------------------------------------------------

class Vector3 PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:gameController.Vector3) */ {
 public:
  inline Vector3() : Vector3(nullptr) {};
  virtual ~Vector3();

  Vector3(const Vector3& from);
  Vector3(Vector3&& from) noexcept
    : Vector3() {
    *this = ::std::move(from);
  }

  inline Vector3& operator=(const Vector3& from) {
    CopyFrom(from);
    return *this;
  }
  inline Vector3& operator=(Vector3&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Vector3& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Vector3* internal_default_instance() {
    return reinterpret_cast<const Vector3*>(
               &_Vector3_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Vector3& a, Vector3& b) {
    a.Swap(&b);
  }
  inline void Swap(Vector3* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Vector3* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Vector3* New() const final {
    return CreateMaybeMessage<Vector3>(nullptr);
  }

  Vector3* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Vector3>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Vector3& from);
  void MergeFrom(const Vector3& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Vector3* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "gameController.Vector3";
  }
  protected:
  explicit Vector3(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ssl_5fgame_5fcontroller_5fgeometry_2eproto);
    return ::descriptor_table_ssl_5fgame_5fcontroller_5fgeometry_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
  };
  // required float x = 1;
  bool has_x() const;
  private:
  bool _internal_has_x() const;
  public:
  void clear_x();
  float x() const;
  void set_x(float value);
  private:
  float _internal_x() const;
  void _internal_set_x(float value);
  public:

  // required float y = 2;
  bool has_y() const;
  private:
  bool _internal_has_y() const;
  public:
  void clear_y();
  float y() const;
  void set_y(float value);
  private:
  float _internal_y() const;
  void _internal_set_y(float value);
  public:

  // required float z = 3;
  bool has_z() const;
  private:
  bool _internal_has_z() const;
  public:
  void clear_z();
  float z() const;
  void set_z(float value);
  private:
  float _internal_z() const;
  void _internal_set_z(float value);
  public:

  // @@protoc_insertion_point(class_scope:gameController.Vector3)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  float x_;
  float y_;
  float z_;
  friend struct ::TableStruct_ssl_5fgame_5fcontroller_5fgeometry_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Vector2

// required float x = 1;
inline bool Vector2::_internal_has_x() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Vector2::has_x() const {
  return _internal_has_x();
}
inline void Vector2::clear_x() {
  x_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline float Vector2::_internal_x() const {
  return x_;
}
inline float Vector2::x() const {
  // @@protoc_insertion_point(field_get:gameController.Vector2.x)
  return _internal_x();
}
inline void Vector2::_internal_set_x(float value) {
  _has_bits_[0] |= 0x00000001u;
  x_ = value;
}
inline void Vector2::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:gameController.Vector2.x)
}

// required float y = 2;
inline bool Vector2::_internal_has_y() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Vector2::has_y() const {
  return _internal_has_y();
}
inline void Vector2::clear_y() {
  y_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline float Vector2::_internal_y() const {
  return y_;
}
inline float Vector2::y() const {
  // @@protoc_insertion_point(field_get:gameController.Vector2.y)
  return _internal_y();
}
inline void Vector2::_internal_set_y(float value) {
  _has_bits_[0] |= 0x00000002u;
  y_ = value;
}
inline void Vector2::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:gameController.Vector2.y)
}

// -------------------------------------------------------------------

// Vector3

// required float x = 1;
inline bool Vector3::_internal_has_x() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Vector3::has_x() const {
  return _internal_has_x();
}
inline void Vector3::clear_x() {
  x_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline float Vector3::_internal_x() const {
  return x_;
}
inline float Vector3::x() const {
  // @@protoc_insertion_point(field_get:gameController.Vector3.x)
  return _internal_x();
}
inline void Vector3::_internal_set_x(float value) {
  _has_bits_[0] |= 0x00000001u;
  x_ = value;
}
inline void Vector3::set_x(float value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:gameController.Vector3.x)
}

// required float y = 2;
inline bool Vector3::_internal_has_y() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Vector3::has_y() const {
  return _internal_has_y();
}
inline void Vector3::clear_y() {
  y_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline float Vector3::_internal_y() const {
  return y_;
}
inline float Vector3::y() const {
  // @@protoc_insertion_point(field_get:gameController.Vector3.y)
  return _internal_y();
}
inline void Vector3::_internal_set_y(float value) {
  _has_bits_[0] |= 0x00000002u;
  y_ = value;
}
inline void Vector3::set_y(float value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:gameController.Vector3.y)
}

// required float z = 3;
inline bool Vector3::_internal_has_z() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Vector3::has_z() const {
  return _internal_has_z();
}
inline void Vector3::clear_z() {
  z_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline float Vector3::_internal_z() const {
  return z_;
}
inline float Vector3::z() const {
  // @@protoc_insertion_point(field_get:gameController.Vector3.z)
  return _internal_z();
}
inline void Vector3::_internal_set_z(float value) {
  _has_bits_[0] |= 0x00000004u;
  z_ = value;
}
inline void Vector3::set_z(float value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:gameController.Vector3.z)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace gameController

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ssl_5fgame_5fcontroller_5fgeometry_2eproto

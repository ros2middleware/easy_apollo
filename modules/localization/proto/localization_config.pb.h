// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/localization/proto/localization_config.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_modules_2flocalization_2fproto_2flocalization_5fconfig_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_modules_2flocalization_2fproto_2flocalization_5fconfig_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_modules_2flocalization_2fproto_2flocalization_5fconfig_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_modules_2flocalization_2fproto_2flocalization_5fconfig_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2flocalization_2fproto_2flocalization_5fconfig_2eproto;
namespace apollo {
namespace localization {
class LocalizationConfig;
class LocalizationConfigDefaultTypeInternal;
extern LocalizationConfigDefaultTypeInternal _LocalizationConfig_default_instance_;
}  // namespace localization
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> ::apollo::localization::LocalizationConfig* Arena::CreateMaybeMessage<::apollo::localization::LocalizationConfig>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace apollo {
namespace localization {

enum LocalizationConfig_LocalizationType : int {
  LocalizationConfig_LocalizationType_RTK = 0,
  LocalizationConfig_LocalizationType_MSF = 1
};
bool LocalizationConfig_LocalizationType_IsValid(int value);
constexpr LocalizationConfig_LocalizationType LocalizationConfig_LocalizationType_LocalizationType_MIN = LocalizationConfig_LocalizationType_RTK;
constexpr LocalizationConfig_LocalizationType LocalizationConfig_LocalizationType_LocalizationType_MAX = LocalizationConfig_LocalizationType_MSF;
constexpr int LocalizationConfig_LocalizationType_LocalizationType_ARRAYSIZE = LocalizationConfig_LocalizationType_LocalizationType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LocalizationConfig_LocalizationType_descriptor();
template<typename T>
inline const std::string& LocalizationConfig_LocalizationType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, LocalizationConfig_LocalizationType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function LocalizationConfig_LocalizationType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    LocalizationConfig_LocalizationType_descriptor(), enum_t_value);
}
inline bool LocalizationConfig_LocalizationType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, LocalizationConfig_LocalizationType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<LocalizationConfig_LocalizationType>(
    LocalizationConfig_LocalizationType_descriptor(), name, value);
}
// ===================================================================

class LocalizationConfig PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:apollo.localization.LocalizationConfig) */ {
 public:
  inline LocalizationConfig() : LocalizationConfig(nullptr) {}
  virtual ~LocalizationConfig();

  LocalizationConfig(const LocalizationConfig& from);
  LocalizationConfig(LocalizationConfig&& from) noexcept
    : LocalizationConfig() {
    *this = ::std::move(from);
  }

  inline LocalizationConfig& operator=(const LocalizationConfig& from) {
    CopyFrom(from);
    return *this;
  }
  inline LocalizationConfig& operator=(LocalizationConfig&& from) noexcept {
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
  static const LocalizationConfig& default_instance();

  static inline const LocalizationConfig* internal_default_instance() {
    return reinterpret_cast<const LocalizationConfig*>(
               &_LocalizationConfig_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LocalizationConfig& a, LocalizationConfig& b) {
    a.Swap(&b);
  }
  inline void Swap(LocalizationConfig* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(LocalizationConfig* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LocalizationConfig* New() const final {
    return CreateMaybeMessage<LocalizationConfig>(nullptr);
  }

  LocalizationConfig* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LocalizationConfig>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LocalizationConfig& from);
  void MergeFrom(const LocalizationConfig& from);
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
  void InternalSwap(LocalizationConfig* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "apollo.localization.LocalizationConfig";
  }
  protected:
  explicit LocalizationConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_modules_2flocalization_2fproto_2flocalization_5fconfig_2eproto);
    return ::descriptor_table_modules_2flocalization_2fproto_2flocalization_5fconfig_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef LocalizationConfig_LocalizationType LocalizationType;
  static constexpr LocalizationType RTK =
    LocalizationConfig_LocalizationType_RTK;
  static constexpr LocalizationType MSF =
    LocalizationConfig_LocalizationType_MSF;
  static inline bool LocalizationType_IsValid(int value) {
    return LocalizationConfig_LocalizationType_IsValid(value);
  }
  static constexpr LocalizationType LocalizationType_MIN =
    LocalizationConfig_LocalizationType_LocalizationType_MIN;
  static constexpr LocalizationType LocalizationType_MAX =
    LocalizationConfig_LocalizationType_LocalizationType_MAX;
  static constexpr int LocalizationType_ARRAYSIZE =
    LocalizationConfig_LocalizationType_LocalizationType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  LocalizationType_descriptor() {
    return LocalizationConfig_LocalizationType_descriptor();
  }
  template<typename T>
  static inline const std::string& LocalizationType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, LocalizationType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function LocalizationType_Name.");
    return LocalizationConfig_LocalizationType_Name(enum_t_value);
  }
  static inline bool LocalizationType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      LocalizationType* value) {
    return LocalizationConfig_LocalizationType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kLocalizationTypeFieldNumber = 1,
  };
  // optional .apollo.localization.LocalizationConfig.LocalizationType localization_type = 1 [default = RTK];
  bool has_localization_type() const;
  private:
  bool _internal_has_localization_type() const;
  public:
  void clear_localization_type();
  ::apollo::localization::LocalizationConfig_LocalizationType localization_type() const;
  void set_localization_type(::apollo::localization::LocalizationConfig_LocalizationType value);
  private:
  ::apollo::localization::LocalizationConfig_LocalizationType _internal_localization_type() const;
  void _internal_set_localization_type(::apollo::localization::LocalizationConfig_LocalizationType value);
  public:

  // @@protoc_insertion_point(class_scope:apollo.localization.LocalizationConfig)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int localization_type_;
  friend struct ::TableStruct_modules_2flocalization_2fproto_2flocalization_5fconfig_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LocalizationConfig

// optional .apollo.localization.LocalizationConfig.LocalizationType localization_type = 1 [default = RTK];
inline bool LocalizationConfig::_internal_has_localization_type() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool LocalizationConfig::has_localization_type() const {
  return _internal_has_localization_type();
}
inline void LocalizationConfig::clear_localization_type() {
  localization_type_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::apollo::localization::LocalizationConfig_LocalizationType LocalizationConfig::_internal_localization_type() const {
  return static_cast< ::apollo::localization::LocalizationConfig_LocalizationType >(localization_type_);
}
inline ::apollo::localization::LocalizationConfig_LocalizationType LocalizationConfig::localization_type() const {
  // @@protoc_insertion_point(field_get:apollo.localization.LocalizationConfig.localization_type)
  return _internal_localization_type();
}
inline void LocalizationConfig::_internal_set_localization_type(::apollo::localization::LocalizationConfig_LocalizationType value) {
  assert(::apollo::localization::LocalizationConfig_LocalizationType_IsValid(value));
  _has_bits_[0] |= 0x00000001u;
  localization_type_ = value;
}
inline void LocalizationConfig::set_localization_type(::apollo::localization::LocalizationConfig_LocalizationType value) {
  _internal_set_localization_type(value);
  // @@protoc_insertion_point(field_set:apollo.localization.LocalizationConfig.localization_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace localization
}  // namespace apollo

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::apollo::localization::LocalizationConfig_LocalizationType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::apollo::localization::LocalizationConfig_LocalizationType>() {
  return ::apollo::localization::LocalizationConfig_LocalizationType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_modules_2flocalization_2fproto_2flocalization_5fconfig_2eproto
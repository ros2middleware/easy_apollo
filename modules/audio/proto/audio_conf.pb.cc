// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/audio/proto/audio_conf.proto

#include "modules/audio/proto/audio_conf.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_modules_2faudio_2fproto_2faudio_5fconf_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TopicConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto;
namespace apollo {
namespace audio {
class TopicConfDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<TopicConf> _instance;
} _TopicConf_default_instance_;
class AudioConfDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<AudioConf> _instance;
} _AudioConf_default_instance_;
}  // namespace audio
}  // namespace apollo
static void InitDefaultsscc_info_AudioConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::audio::_AudioConf_default_instance_;
    new (ptr) ::apollo::audio::AudioConf();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_AudioConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_AudioConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto}, {
      &scc_info_TopicConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto.base,}};

static void InitDefaultsscc_info_TopicConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::audio::_TopicConf_default_instance_;
    new (ptr) ::apollo::audio::TopicConf();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_TopicConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_TopicConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2faudio_2fproto_2faudio_5fconf_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2faudio_2fproto_2faudio_5fconf_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2faudio_2fproto_2faudio_5fconf_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2faudio_2fproto_2faudio_5fconf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::audio::TopicConf, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::audio::TopicConf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::audio::TopicConf, audio_data_topic_name_),
  PROTOBUF_FIELD_OFFSET(::apollo::audio::TopicConf, audio_detection_topic_name_),
  PROTOBUF_FIELD_OFFSET(::apollo::audio::TopicConf, localization_topic_name_),
  PROTOBUF_FIELD_OFFSET(::apollo::audio::TopicConf, audio_event_topic_name_),
  PROTOBUF_FIELD_OFFSET(::apollo::audio::TopicConf, perception_topic_name_),
  0,
  1,
  2,
  3,
  4,
  PROTOBUF_FIELD_OFFSET(::apollo::audio::AudioConf, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::audio::AudioConf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::audio::AudioConf, topic_conf_),
  PROTOBUF_FIELD_OFFSET(::apollo::audio::AudioConf, respeaker_extrinsics_path_),
  1,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::apollo::audio::TopicConf)},
  { 15, 22, sizeof(::apollo::audio::AudioConf)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::audio::_TopicConf_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::audio::_AudioConf_default_instance_),
};

const char descriptor_table_protodef_modules_2faudio_2fproto_2faudio_5fconf_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n$modules/audio/proto/audio_conf.proto\022\014"
  "apollo.audio\"\256\001\n\tTopicConf\022\035\n\025audio_data"
  "_topic_name\030\001 \001(\t\022\"\n\032audio_detection_top"
  "ic_name\030\002 \001(\t\022\037\n\027localization_topic_name"
  "\030\003 \001(\t\022\036\n\026audio_event_topic_name\030\004 \001(\t\022\035"
  "\n\025perception_topic_name\030\005 \001(\t\"[\n\tAudioCo"
  "nf\022+\n\ntopic_conf\030\001 \001(\0132\027.apollo.audio.To"
  "picConf\022!\n\031respeaker_extrinsics_path\030\002 \001"
  "(\t"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2faudio_2fproto_2faudio_5fconf_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2faudio_2fproto_2faudio_5fconf_2eproto_sccs[2] = {
  &scc_info_AudioConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto.base,
  &scc_info_TopicConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2faudio_2fproto_2faudio_5fconf_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2faudio_2fproto_2faudio_5fconf_2eproto = {
  false, false, descriptor_table_protodef_modules_2faudio_2fproto_2faudio_5fconf_2eproto, "modules/audio/proto/audio_conf.proto", 322,
  &descriptor_table_modules_2faudio_2fproto_2faudio_5fconf_2eproto_once, descriptor_table_modules_2faudio_2fproto_2faudio_5fconf_2eproto_sccs, descriptor_table_modules_2faudio_2fproto_2faudio_5fconf_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_modules_2faudio_2fproto_2faudio_5fconf_2eproto::offsets,
  file_level_metadata_modules_2faudio_2fproto_2faudio_5fconf_2eproto, 2, file_level_enum_descriptors_modules_2faudio_2fproto_2faudio_5fconf_2eproto, file_level_service_descriptors_modules_2faudio_2fproto_2faudio_5fconf_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2faudio_2fproto_2faudio_5fconf_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2faudio_2fproto_2faudio_5fconf_2eproto)), true);
namespace apollo {
namespace audio {

// ===================================================================

class TopicConf::_Internal {
 public:
  using HasBits = decltype(std::declval<TopicConf>()._has_bits_);
  static void set_has_audio_data_topic_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_audio_detection_topic_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_localization_topic_name(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_audio_event_topic_name(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_perception_topic_name(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

TopicConf::TopicConf(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.audio.TopicConf)
}
TopicConf::TopicConf(const TopicConf& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  audio_data_topic_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_audio_data_topic_name()) {
    audio_data_topic_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_audio_data_topic_name(), 
      GetArena());
  }
  audio_detection_topic_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_audio_detection_topic_name()) {
    audio_detection_topic_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_audio_detection_topic_name(), 
      GetArena());
  }
  localization_topic_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_localization_topic_name()) {
    localization_topic_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_localization_topic_name(), 
      GetArena());
  }
  audio_event_topic_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_audio_event_topic_name()) {
    audio_event_topic_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_audio_event_topic_name(), 
      GetArena());
  }
  perception_topic_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_perception_topic_name()) {
    perception_topic_name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_perception_topic_name(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:apollo.audio.TopicConf)
}

void TopicConf::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_TopicConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto.base);
  audio_data_topic_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  audio_detection_topic_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  localization_topic_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  audio_event_topic_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  perception_topic_name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

TopicConf::~TopicConf() {
  // @@protoc_insertion_point(destructor:apollo.audio.TopicConf)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void TopicConf::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  audio_data_topic_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  audio_detection_topic_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  localization_topic_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  audio_event_topic_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  perception_topic_name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void TopicConf::ArenaDtor(void* object) {
  TopicConf* _this = reinterpret_cast< TopicConf* >(object);
  (void)_this;
}
void TopicConf::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void TopicConf::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const TopicConf& TopicConf::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_TopicConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto.base);
  return *internal_default_instance();
}


void TopicConf::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.audio.TopicConf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      audio_data_topic_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      audio_detection_topic_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      localization_topic_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      audio_event_topic_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000010u) {
      perception_topic_name_.ClearNonDefaultToEmpty();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* TopicConf::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional string audio_data_topic_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_audio_data_topic_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.audio.TopicConf.audio_data_topic_name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string audio_detection_topic_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_audio_detection_topic_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.audio.TopicConf.audio_detection_topic_name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string localization_topic_name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_localization_topic_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.audio.TopicConf.localization_topic_name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string audio_event_topic_name = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          auto str = _internal_mutable_audio_event_topic_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.audio.TopicConf.audio_event_topic_name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string perception_topic_name = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          auto str = _internal_mutable_perception_topic_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.audio.TopicConf.perception_topic_name");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* TopicConf::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.audio.TopicConf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string audio_data_topic_name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_audio_data_topic_name().data(), static_cast<int>(this->_internal_audio_data_topic_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.audio.TopicConf.audio_data_topic_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_audio_data_topic_name(), target);
  }

  // optional string audio_detection_topic_name = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_audio_detection_topic_name().data(), static_cast<int>(this->_internal_audio_detection_topic_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.audio.TopicConf.audio_detection_topic_name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_audio_detection_topic_name(), target);
  }

  // optional string localization_topic_name = 3;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_localization_topic_name().data(), static_cast<int>(this->_internal_localization_topic_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.audio.TopicConf.localization_topic_name");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_localization_topic_name(), target);
  }

  // optional string audio_event_topic_name = 4;
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_audio_event_topic_name().data(), static_cast<int>(this->_internal_audio_event_topic_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.audio.TopicConf.audio_event_topic_name");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_audio_event_topic_name(), target);
  }

  // optional string perception_topic_name = 5;
  if (cached_has_bits & 0x00000010u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_perception_topic_name().data(), static_cast<int>(this->_internal_perception_topic_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.audio.TopicConf.perception_topic_name");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_perception_topic_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.audio.TopicConf)
  return target;
}

size_t TopicConf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.audio.TopicConf)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional string audio_data_topic_name = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_audio_data_topic_name());
    }

    // optional string audio_detection_topic_name = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_audio_detection_topic_name());
    }

    // optional string localization_topic_name = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_localization_topic_name());
    }

    // optional string audio_event_topic_name = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_audio_event_topic_name());
    }

    // optional string perception_topic_name = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_perception_topic_name());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TopicConf::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.audio.TopicConf)
  GOOGLE_DCHECK_NE(&from, this);
  const TopicConf* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<TopicConf>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.audio.TopicConf)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.audio.TopicConf)
    MergeFrom(*source);
  }
}

void TopicConf::MergeFrom(const TopicConf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.audio.TopicConf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_audio_data_topic_name(from._internal_audio_data_topic_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_audio_detection_topic_name(from._internal_audio_detection_topic_name());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_localization_topic_name(from._internal_localization_topic_name());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_set_audio_event_topic_name(from._internal_audio_event_topic_name());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_set_perception_topic_name(from._internal_perception_topic_name());
    }
  }
}

void TopicConf::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.audio.TopicConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void TopicConf::CopyFrom(const TopicConf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.audio.TopicConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TopicConf::IsInitialized() const {
  return true;
}

void TopicConf::InternalSwap(TopicConf* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  audio_data_topic_name_.Swap(&other->audio_data_topic_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  audio_detection_topic_name_.Swap(&other->audio_detection_topic_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  localization_topic_name_.Swap(&other->localization_topic_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  audio_event_topic_name_.Swap(&other->audio_event_topic_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  perception_topic_name_.Swap(&other->perception_topic_name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata TopicConf::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class AudioConf::_Internal {
 public:
  using HasBits = decltype(std::declval<AudioConf>()._has_bits_);
  static const ::apollo::audio::TopicConf& topic_conf(const AudioConf* msg);
  static void set_has_topic_conf(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_respeaker_extrinsics_path(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::apollo::audio::TopicConf&
AudioConf::_Internal::topic_conf(const AudioConf* msg) {
  return *msg->topic_conf_;
}
AudioConf::AudioConf(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.audio.AudioConf)
}
AudioConf::AudioConf(const AudioConf& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  respeaker_extrinsics_path_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_respeaker_extrinsics_path()) {
    respeaker_extrinsics_path_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_respeaker_extrinsics_path(), 
      GetArena());
  }
  if (from._internal_has_topic_conf()) {
    topic_conf_ = new ::apollo::audio::TopicConf(*from.topic_conf_);
  } else {
    topic_conf_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:apollo.audio.AudioConf)
}

void AudioConf::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_AudioConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto.base);
  respeaker_extrinsics_path_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  topic_conf_ = nullptr;
}

AudioConf::~AudioConf() {
  // @@protoc_insertion_point(destructor:apollo.audio.AudioConf)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void AudioConf::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  respeaker_extrinsics_path_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete topic_conf_;
}

void AudioConf::ArenaDtor(void* object) {
  AudioConf* _this = reinterpret_cast< AudioConf* >(object);
  (void)_this;
}
void AudioConf::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void AudioConf::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const AudioConf& AudioConf::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_AudioConf_modules_2faudio_2fproto_2faudio_5fconf_2eproto.base);
  return *internal_default_instance();
}


void AudioConf::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.audio.AudioConf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      respeaker_extrinsics_path_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(topic_conf_ != nullptr);
      topic_conf_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* AudioConf::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .apollo.audio.TopicConf topic_conf = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_topic_conf(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional string respeaker_extrinsics_path = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_respeaker_extrinsics_path();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          #ifndef NDEBUG
          ::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "apollo.audio.AudioConf.respeaker_extrinsics_path");
          #endif  // !NDEBUG
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* AudioConf::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.audio.AudioConf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.audio.TopicConf topic_conf = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::topic_conf(this), target, stream);
  }

  // optional string respeaker_extrinsics_path = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_respeaker_extrinsics_path().data(), static_cast<int>(this->_internal_respeaker_extrinsics_path().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "apollo.audio.AudioConf.respeaker_extrinsics_path");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_respeaker_extrinsics_path(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.audio.AudioConf)
  return target;
}

size_t AudioConf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.audio.AudioConf)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string respeaker_extrinsics_path = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_respeaker_extrinsics_path());
    }

    // optional .apollo.audio.TopicConf topic_conf = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *topic_conf_);
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AudioConf::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.audio.AudioConf)
  GOOGLE_DCHECK_NE(&from, this);
  const AudioConf* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<AudioConf>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.audio.AudioConf)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.audio.AudioConf)
    MergeFrom(*source);
  }
}

void AudioConf::MergeFrom(const AudioConf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.audio.AudioConf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_respeaker_extrinsics_path(from._internal_respeaker_extrinsics_path());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_topic_conf()->::apollo::audio::TopicConf::MergeFrom(from._internal_topic_conf());
    }
  }
}

void AudioConf::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.audio.AudioConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AudioConf::CopyFrom(const AudioConf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.audio.AudioConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AudioConf::IsInitialized() const {
  return true;
}

void AudioConf::InternalSwap(AudioConf* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  respeaker_extrinsics_path_.Swap(&other->respeaker_extrinsics_path_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(topic_conf_, other->topic_conf_);
}

::PROTOBUF_NAMESPACE_ID::Metadata AudioConf::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace audio
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::audio::TopicConf* Arena::CreateMaybeMessage< ::apollo::audio::TopicConf >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::audio::TopicConf >(arena);
}
template<> PROTOBUF_NOINLINE ::apollo::audio::AudioConf* Arena::CreateMaybeMessage< ::apollo::audio::AudioConf >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::audio::AudioConf >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
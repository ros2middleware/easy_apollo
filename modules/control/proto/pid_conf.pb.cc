// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/control/proto/pid_conf.proto

#include "modules/control/proto/pid_conf.pb.h"

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
namespace apollo {
namespace control {
class PidConfDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PidConf> _instance;
} _PidConf_default_instance_;
}  // namespace control
}  // namespace apollo
static void InitDefaultsscc_info_PidConf_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::control::_PidConf_default_instance_;
    new (ptr) ::apollo::control::PidConf();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PidConf_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_PidConf_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::control::PidConf, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::control::PidConf, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::control::PidConf, integrator_enable_),
  PROTOBUF_FIELD_OFFSET(::apollo::control::PidConf, integrator_saturation_level_),
  PROTOBUF_FIELD_OFFSET(::apollo::control::PidConf, kp_),
  PROTOBUF_FIELD_OFFSET(::apollo::control::PidConf, ki_),
  PROTOBUF_FIELD_OFFSET(::apollo::control::PidConf, kd_),
  PROTOBUF_FIELD_OFFSET(::apollo::control::PidConf, kaw_),
  PROTOBUF_FIELD_OFFSET(::apollo::control::PidConf, output_saturation_level_),
  6,
  0,
  1,
  2,
  3,
  4,
  5,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, sizeof(::apollo::control::PidConf)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::control::_PidConf_default_instance_),
};

const char descriptor_table_protodef_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n$modules/control/proto/pid_conf.proto\022\016"
  "apollo.control\"\236\001\n\007PidConf\022\031\n\021integrator"
  "_enable\030\001 \001(\010\022#\n\033integrator_saturation_l"
  "evel\030\002 \001(\001\022\n\n\002kp\030\003 \001(\001\022\n\n\002ki\030\004 \001(\001\022\n\n\002kd"
  "\030\005 \001(\001\022\016\n\003kaw\030\006 \001(\001:\0010\022\037\n\027output_saturat"
  "ion_level\030\007 \001(\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto_sccs[1] = {
  &scc_info_PidConf_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto = {
  false, false, descriptor_table_protodef_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto, "modules/control/proto/pid_conf.proto", 215,
  &descriptor_table_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto_once, descriptor_table_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto_sccs, descriptor_table_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto::offsets,
  file_level_metadata_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto, 1, file_level_enum_descriptors_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto, file_level_service_descriptors_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto)), true);
namespace apollo {
namespace control {

// ===================================================================

class PidConf::_Internal {
 public:
  using HasBits = decltype(std::declval<PidConf>()._has_bits_);
  static void set_has_integrator_enable(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_integrator_saturation_level(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_kp(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_ki(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_kd(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_kaw(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_output_saturation_level(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

PidConf::PidConf(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:apollo.control.PidConf)
}
PidConf::PidConf(const PidConf& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&integrator_saturation_level_, &from.integrator_saturation_level_,
    static_cast<size_t>(reinterpret_cast<char*>(&integrator_enable_) -
    reinterpret_cast<char*>(&integrator_saturation_level_)) + sizeof(integrator_enable_));
  // @@protoc_insertion_point(copy_constructor:apollo.control.PidConf)
}

void PidConf::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&integrator_saturation_level_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&integrator_enable_) -
      reinterpret_cast<char*>(&integrator_saturation_level_)) + sizeof(integrator_enable_));
}

PidConf::~PidConf() {
  // @@protoc_insertion_point(destructor:apollo.control.PidConf)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PidConf::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void PidConf::ArenaDtor(void* object) {
  PidConf* _this = reinterpret_cast< PidConf* >(object);
  (void)_this;
}
void PidConf::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PidConf::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PidConf& PidConf::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PidConf_modules_2fcontrol_2fproto_2fpid_5fconf_2eproto.base);
  return *internal_default_instance();
}


void PidConf::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.control.PidConf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    ::memset(&integrator_saturation_level_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&integrator_enable_) -
        reinterpret_cast<char*>(&integrator_saturation_level_)) + sizeof(integrator_enable_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PidConf::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional bool integrator_enable = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_integrator_enable(&has_bits);
          integrator_enable_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional double integrator_saturation_level = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_integrator_saturation_level(&has_bits);
          integrator_saturation_level_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double kp = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_kp(&has_bits);
          kp_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double ki = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_ki(&has_bits);
          ki_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double kd = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 41)) {
          _Internal::set_has_kd(&has_bits);
          kd_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double kaw = 6 [default = 0];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 49)) {
          _Internal::set_has_kaw(&has_bits);
          kaw_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double output_saturation_level = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 57)) {
          _Internal::set_has_output_saturation_level(&has_bits);
          output_saturation_level_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
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

::PROTOBUF_NAMESPACE_ID::uint8* PidConf::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.control.PidConf)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bool integrator_enable = 1;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_integrator_enable(), target);
  }

  // optional double integrator_saturation_level = 2;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_integrator_saturation_level(), target);
  }

  // optional double kp = 3;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_kp(), target);
  }

  // optional double ki = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_ki(), target);
  }

  // optional double kd = 5;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(5, this->_internal_kd(), target);
  }

  // optional double kaw = 6 [default = 0];
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(6, this->_internal_kaw(), target);
  }

  // optional double output_saturation_level = 7;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(7, this->_internal_output_saturation_level(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.control.PidConf)
  return target;
}

size_t PidConf::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.control.PidConf)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    // optional double integrator_saturation_level = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional double kp = 3;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

    // optional double ki = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

    // optional double kd = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

    // optional double kaw = 6 [default = 0];
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 8;
    }

    // optional double output_saturation_level = 7;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 + 8;
    }

    // optional bool integrator_enable = 1;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 1;
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

void PidConf::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.control.PidConf)
  GOOGLE_DCHECK_NE(&from, this);
  const PidConf* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PidConf>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.control.PidConf)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.control.PidConf)
    MergeFrom(*source);
  }
}

void PidConf::MergeFrom(const PidConf& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.control.PidConf)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      integrator_saturation_level_ = from.integrator_saturation_level_;
    }
    if (cached_has_bits & 0x00000002u) {
      kp_ = from.kp_;
    }
    if (cached_has_bits & 0x00000004u) {
      ki_ = from.ki_;
    }
    if (cached_has_bits & 0x00000008u) {
      kd_ = from.kd_;
    }
    if (cached_has_bits & 0x00000010u) {
      kaw_ = from.kaw_;
    }
    if (cached_has_bits & 0x00000020u) {
      output_saturation_level_ = from.output_saturation_level_;
    }
    if (cached_has_bits & 0x00000040u) {
      integrator_enable_ = from.integrator_enable_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PidConf::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.control.PidConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PidConf::CopyFrom(const PidConf& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.control.PidConf)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PidConf::IsInitialized() const {
  return true;
}

void PidConf::InternalSwap(PidConf* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PidConf, integrator_enable_)
      + sizeof(PidConf::integrator_enable_)
      - PROTOBUF_FIELD_OFFSET(PidConf, integrator_saturation_level_)>(
          reinterpret_cast<char*>(&integrator_saturation_level_),
          reinterpret_cast<char*>(&other->integrator_saturation_level_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PidConf::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace control
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::control::PidConf* Arena::CreateMaybeMessage< ::apollo::control::PidConf >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::control::PidConf >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/common/proto/vehicle_signal.proto

#include "modules/common/proto/vehicle_signal.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
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
namespace common {
class VehicleSignalDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<VehicleSignal> _instance;
} _VehicleSignal_default_instance_;
}  // namespace common
}  // namespace apollo
static void InitDefaultsscc_info_VehicleSignal_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::apollo::common::_VehicleSignal_default_instance_;
    new (ptr) ::apollo::common::VehicleSignal();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::apollo::common::VehicleSignal::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_VehicleSignal_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsscc_info_VehicleSignal_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::common::VehicleSignal, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::VehicleSignal, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::apollo::common::VehicleSignal, turn_signal_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::VehicleSignal, high_beam_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::VehicleSignal, low_beam_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::VehicleSignal, horn_),
  PROTOBUF_FIELD_OFFSET(::apollo::common::VehicleSignal, emergency_light_),
  0,
  1,
  2,
  3,
  4,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 10, sizeof(::apollo::common::VehicleSignal)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::apollo::common::_VehicleSignal_default_instance_),
};

const char descriptor_table_protodef_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n)modules/common/proto/vehicle_signal.pr"
  "oto\022\rapollo.common\"\325\001\n\rVehicleSignal\022<\n\013"
  "turn_signal\030\001 \001(\0162\'.apollo.common.Vehicl"
  "eSignal.TurnSignal\022\021\n\thigh_beam\030\002 \001(\010\022\020\n"
  "\010low_beam\030\003 \001(\010\022\014\n\004horn\030\004 \001(\010\022\027\n\017emergen"
  "cy_light\030\005 \001(\010\":\n\nTurnSignal\022\r\n\tTURN_NON"
  "E\020\000\022\r\n\tTURN_LEFT\020\001\022\016\n\nTURN_RIGHT\020\002"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto_sccs[1] = {
  &scc_info_VehicleSignal_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto_once;
static bool descriptor_table_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto = {
  &descriptor_table_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto_initialized, descriptor_table_protodef_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto, "modules/common/proto/vehicle_signal.proto", 274,
  &descriptor_table_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto_once, descriptor_table_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto_sccs, descriptor_table_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto::offsets,
  file_level_metadata_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto, 1, file_level_enum_descriptors_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto, file_level_service_descriptors_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto), true);
namespace apollo {
namespace common {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* VehicleSignal_TurnSignal_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto);
  return file_level_enum_descriptors_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto[0];
}
bool VehicleSignal_TurnSignal_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr VehicleSignal_TurnSignal VehicleSignal::TURN_NONE;
constexpr VehicleSignal_TurnSignal VehicleSignal::TURN_LEFT;
constexpr VehicleSignal_TurnSignal VehicleSignal::TURN_RIGHT;
constexpr VehicleSignal_TurnSignal VehicleSignal::TurnSignal_MIN;
constexpr VehicleSignal_TurnSignal VehicleSignal::TurnSignal_MAX;
constexpr int VehicleSignal::TurnSignal_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void VehicleSignal::InitAsDefaultInstance() {
}
class VehicleSignal::_Internal {
 public:
  using HasBits = decltype(std::declval<VehicleSignal>()._has_bits_);
  static void set_has_turn_signal(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_high_beam(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_low_beam(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_horn(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_emergency_light(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

VehicleSignal::VehicleSignal()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:apollo.common.VehicleSignal)
}
VehicleSignal::VehicleSignal(const VehicleSignal& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&turn_signal_, &from.turn_signal_,
    static_cast<size_t>(reinterpret_cast<char*>(&emergency_light_) -
    reinterpret_cast<char*>(&turn_signal_)) + sizeof(emergency_light_));
  // @@protoc_insertion_point(copy_constructor:apollo.common.VehicleSignal)
}

void VehicleSignal::SharedCtor() {
  ::memset(&turn_signal_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&emergency_light_) -
      reinterpret_cast<char*>(&turn_signal_)) + sizeof(emergency_light_));
}

VehicleSignal::~VehicleSignal() {
  // @@protoc_insertion_point(destructor:apollo.common.VehicleSignal)
  SharedDtor();
}

void VehicleSignal::SharedDtor() {
}

void VehicleSignal::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const VehicleSignal& VehicleSignal::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_VehicleSignal_modules_2fcommon_2fproto_2fvehicle_5fsignal_2eproto.base);
  return *internal_default_instance();
}


void VehicleSignal::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.common.VehicleSignal)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    ::memset(&turn_signal_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&emergency_light_) -
        reinterpret_cast<char*>(&turn_signal_)) + sizeof(emergency_light_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* VehicleSignal::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::common::VehicleSignal_TurnSignal_IsValid(val))) {
            set_turn_signal(static_cast<::apollo::common::VehicleSignal_TurnSignal>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional bool high_beam = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_high_beam(&has_bits);
          high_beam_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool low_beam = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_low_beam(&has_bits);
          low_beam_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool horn = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_horn(&has_bits);
          horn_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool emergency_light = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_emergency_light(&has_bits);
          emergency_light_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
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
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool VehicleSignal::MergePartialFromCodedStream(
    ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::PROTOBUF_NAMESPACE_ID::uint32 tag;
  // @@protoc_insertion_point(parse_start:apollo.common.VehicleSignal)
  for (;;) {
    ::std::pair<::PROTOBUF_NAMESPACE_ID::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
      case 1: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (8 & 0xFF)) {
          int value = 0;
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   int, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::apollo::common::VehicleSignal_TurnSignal_IsValid(value)) {
            set_turn_signal(static_cast< ::apollo::common::VehicleSignal_TurnSignal >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                1, static_cast<::PROTOBUF_NAMESPACE_ID::uint64>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool high_beam = 2;
      case 2: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (16 & 0xFF)) {
          _Internal::set_has_high_beam(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &high_beam_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool low_beam = 3;
      case 3: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (24 & 0xFF)) {
          _Internal::set_has_low_beam(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &low_beam_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool horn = 4;
      case 4: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (32 & 0xFF)) {
          _Internal::set_has_horn(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &horn_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool emergency_light = 5;
      case 5: {
        if (static_cast< ::PROTOBUF_NAMESPACE_ID::uint8>(tag) == (40 & 0xFF)) {
          _Internal::set_has_emergency_light(&_has_bits_);
          DO_((::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::ReadPrimitive<
                   bool, ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_BOOL>(
                 input, &emergency_light_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:apollo.common.VehicleSignal)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:apollo.common.VehicleSignal)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void VehicleSignal::SerializeWithCachedSizes(
    ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:apollo.common.VehicleSignal)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnum(
      1, this->turn_signal(), output);
  }

  // optional bool high_beam = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(2, this->high_beam(), output);
  }

  // optional bool low_beam = 3;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(3, this->low_beam(), output);
  }

  // optional bool horn = 4;
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(4, this->horn(), output);
  }

  // optional bool emergency_light = 5;
  if (cached_has_bits & 0x00000010u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBool(5, this->emergency_light(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:apollo.common.VehicleSignal)
}

::PROTOBUF_NAMESPACE_ID::uint8* VehicleSignal::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.common.VehicleSignal)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->turn_signal(), target);
  }

  // optional bool high_beam = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->high_beam(), target);
  }

  // optional bool low_beam = 3;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(3, this->low_beam(), target);
  }

  // optional bool horn = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->horn(), target);
  }

  // optional bool emergency_light = 5;
  if (cached_has_bits & 0x00000010u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(5, this->emergency_light(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.common.VehicleSignal)
  return target;
}

size_t VehicleSignal::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.common.VehicleSignal)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional .apollo.common.VehicleSignal.TurnSignal turn_signal = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->turn_signal());
    }

    // optional bool high_beam = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

    // optional bool low_beam = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

    // optional bool horn = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 1;
    }

    // optional bool emergency_light = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VehicleSignal::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:apollo.common.VehicleSignal)
  GOOGLE_DCHECK_NE(&from, this);
  const VehicleSignal* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<VehicleSignal>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:apollo.common.VehicleSignal)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:apollo.common.VehicleSignal)
    MergeFrom(*source);
  }
}

void VehicleSignal::MergeFrom(const VehicleSignal& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:apollo.common.VehicleSignal)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      turn_signal_ = from.turn_signal_;
    }
    if (cached_has_bits & 0x00000002u) {
      high_beam_ = from.high_beam_;
    }
    if (cached_has_bits & 0x00000004u) {
      low_beam_ = from.low_beam_;
    }
    if (cached_has_bits & 0x00000008u) {
      horn_ = from.horn_;
    }
    if (cached_has_bits & 0x00000010u) {
      emergency_light_ = from.emergency_light_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void VehicleSignal::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:apollo.common.VehicleSignal)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VehicleSignal::CopyFrom(const VehicleSignal& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.common.VehicleSignal)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VehicleSignal::IsInitialized() const {
  return true;
}

void VehicleSignal::InternalSwap(VehicleSignal* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(turn_signal_, other->turn_signal_);
  swap(high_beam_, other->high_beam_);
  swap(low_beam_, other->low_beam_);
  swap(horn_, other->horn_);
  swap(emergency_light_, other->emergency_light_);
}

::PROTOBUF_NAMESPACE_ID::Metadata VehicleSignal::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace common
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::common::VehicleSignal* Arena::CreateMaybeMessage< ::apollo::common::VehicleSignal >(Arena* arena) {
  return Arena::CreateInternal< ::apollo::common::VehicleSignal >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
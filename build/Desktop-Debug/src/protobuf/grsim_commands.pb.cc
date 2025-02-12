// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grsim_commands.proto

#include "grsim_commands.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_grsim_5fcommands_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_grSim_Robot_Command_grsim_5fcommands_2eproto;
class grSim_Robot_CommandDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<grSim_Robot_Command> _instance;
} _grSim_Robot_Command_default_instance_;
class grSim_CommandsDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<grSim_Commands> _instance;
} _grSim_Commands_default_instance_;
static void InitDefaultsscc_info_grSim_Commands_grsim_5fcommands_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_grSim_Commands_default_instance_;
    new (ptr) ::grSim_Commands();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::grSim_Commands::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_grSim_Commands_grsim_5fcommands_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_grSim_Commands_grsim_5fcommands_2eproto}, {
      &scc_info_grSim_Robot_Command_grsim_5fcommands_2eproto.base,}};

static void InitDefaultsscc_info_grSim_Robot_Command_grsim_5fcommands_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_grSim_Robot_Command_default_instance_;
    new (ptr) ::grSim_Robot_Command();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::grSim_Robot_Command::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_grSim_Robot_Command_grsim_5fcommands_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_grSim_Robot_Command_grsim_5fcommands_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grsim_5fcommands_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grsim_5fcommands_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grsim_5fcommands_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grsim_5fcommands_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, id_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, kickspeedx_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, kickspeedz_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, veltangent_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, velnormal_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, velangular_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, spinner_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, wheelsspeed_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, wheel1_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, wheel2_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, wheel3_),
  PROTOBUF_FIELD_OFFSET(::grSim_Robot_Command, wheel4_),
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  PROTOBUF_FIELD_OFFSET(::grSim_Commands, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::grSim_Commands, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grSim_Commands, timestamp_),
  PROTOBUF_FIELD_OFFSET(::grSim_Commands, isteamyellow_),
  PROTOBUF_FIELD_OFFSET(::grSim_Commands, robot_commands_),
  0,
  1,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 17, sizeof(::grSim_Robot_Command)},
  { 29, 37, sizeof(::grSim_Commands)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_grSim_Robot_Command_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_grSim_Commands_default_instance_),
};

const char descriptor_table_protodef_grsim_5fcommands_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024grsim_commands.proto\"\352\001\n\023grSim_Robot_C"
  "ommand\022\n\n\002id\030\001 \002(\r\022\022\n\nkickspeedx\030\002 \002(\002\022\022"
  "\n\nkickspeedz\030\003 \002(\002\022\022\n\nveltangent\030\004 \002(\002\022\021"
  "\n\tvelnormal\030\005 \002(\002\022\022\n\nvelangular\030\006 \002(\002\022\017\n"
  "\007spinner\030\007 \002(\010\022\023\n\013wheelsspeed\030\010 \002(\010\022\016\n\006w"
  "heel1\030\t \001(\002\022\016\n\006wheel2\030\n \001(\002\022\016\n\006wheel3\030\013 "
  "\001(\002\022\016\n\006wheel4\030\014 \001(\002\"g\n\016grSim_Commands\022\021\n"
  "\ttimestamp\030\001 \002(\001\022\024\n\014isteamyellow\030\002 \002(\010\022,"
  "\n\016robot_commands\030\003 \003(\0132\024.grSim_Robot_Com"
  "mand"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grsim_5fcommands_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_grsim_5fcommands_2eproto_sccs[2] = {
  &scc_info_grSim_Commands_grsim_5fcommands_2eproto.base,
  &scc_info_grSim_Robot_Command_grsim_5fcommands_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grsim_5fcommands_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grsim_5fcommands_2eproto = {
  false, false, descriptor_table_protodef_grsim_5fcommands_2eproto, "grsim_commands.proto", 364,
  &descriptor_table_grsim_5fcommands_2eproto_once, descriptor_table_grsim_5fcommands_2eproto_sccs, descriptor_table_grsim_5fcommands_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_grsim_5fcommands_2eproto::offsets,
  file_level_metadata_grsim_5fcommands_2eproto, 2, file_level_enum_descriptors_grsim_5fcommands_2eproto, file_level_service_descriptors_grsim_5fcommands_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_grsim_5fcommands_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_grsim_5fcommands_2eproto)), true);

// ===================================================================

void grSim_Robot_Command::InitAsDefaultInstance() {
}
class grSim_Robot_Command::_Internal {
 public:
  using HasBits = decltype(std::declval<grSim_Robot_Command>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_kickspeedx(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_kickspeedz(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_veltangent(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_velnormal(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_velangular(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_spinner(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_wheelsspeed(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_wheel1(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_wheel2(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_wheel3(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
  static void set_has_wheel4(HasBits* has_bits) {
    (*has_bits)[0] |= 2048u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x000000ff) ^ 0x000000ff) != 0;
  }
};

grSim_Robot_Command::grSim_Robot_Command(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:grSim_Robot_Command)
}
grSim_Robot_Command::grSim_Robot_Command(const grSim_Robot_Command& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&wheel4_) -
    reinterpret_cast<char*>(&id_)) + sizeof(wheel4_));
  // @@protoc_insertion_point(copy_constructor:grSim_Robot_Command)
}

void grSim_Robot_Command::SharedCtor() {
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&wheel4_) -
      reinterpret_cast<char*>(&id_)) + sizeof(wheel4_));
}

grSim_Robot_Command::~grSim_Robot_Command() {
  // @@protoc_insertion_point(destructor:grSim_Robot_Command)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void grSim_Robot_Command::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void grSim_Robot_Command::ArenaDtor(void* object) {
  grSim_Robot_Command* _this = reinterpret_cast< grSim_Robot_Command* >(object);
  (void)_this;
}
void grSim_Robot_Command::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void grSim_Robot_Command::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const grSim_Robot_Command& grSim_Robot_Command::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_grSim_Robot_Command_grsim_5fcommands_2eproto.base);
  return *internal_default_instance();
}


void grSim_Robot_Command::Clear() {
// @@protoc_insertion_point(message_clear_start:grSim_Robot_Command)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&wheelsspeed_) -
        reinterpret_cast<char*>(&id_)) + sizeof(wheelsspeed_));
  }
  if (cached_has_bits & 0x00000f00u) {
    ::memset(&wheel1_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&wheel4_) -
        reinterpret_cast<char*>(&wheel1_)) + sizeof(wheel4_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* grSim_Robot_Command::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required float kickspeedx = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 21)) {
          _Internal::set_has_kickspeedx(&has_bits);
          kickspeedx_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // required float kickspeedz = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 29)) {
          _Internal::set_has_kickspeedz(&has_bits);
          kickspeedz_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // required float veltangent = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 37)) {
          _Internal::set_has_veltangent(&has_bits);
          veltangent_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // required float velnormal = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 45)) {
          _Internal::set_has_velnormal(&has_bits);
          velnormal_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // required float velangular = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 53)) {
          _Internal::set_has_velangular(&has_bits);
          velangular_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // required bool spinner = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 56)) {
          _Internal::set_has_spinner(&has_bits);
          spinner_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required bool wheelsspeed = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          _Internal::set_has_wheelsspeed(&has_bits);
          wheelsspeed_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional float wheel1 = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 77)) {
          _Internal::set_has_wheel1(&has_bits);
          wheel1_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float wheel2 = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 85)) {
          _Internal::set_has_wheel2(&has_bits);
          wheel2_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float wheel3 = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 93)) {
          _Internal::set_has_wheel3(&has_bits);
          wheel3_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else goto handle_unusual;
        continue;
      // optional float wheel4 = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 101)) {
          _Internal::set_has_wheel4(&has_bits);
          wheel4_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
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

::PROTOBUF_NAMESPACE_ID::uint8* grSim_Robot_Command::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grSim_Robot_Command)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required uint32 id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // required float kickspeedx = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(2, this->_internal_kickspeedx(), target);
  }

  // required float kickspeedz = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(3, this->_internal_kickspeedz(), target);
  }

  // required float veltangent = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(4, this->_internal_veltangent(), target);
  }

  // required float velnormal = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(5, this->_internal_velnormal(), target);
  }

  // required float velangular = 6;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(6, this->_internal_velangular(), target);
  }

  // required bool spinner = 7;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(7, this->_internal_spinner(), target);
  }

  // required bool wheelsspeed = 8;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(8, this->_internal_wheelsspeed(), target);
  }

  // optional float wheel1 = 9;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(9, this->_internal_wheel1(), target);
  }

  // optional float wheel2 = 10;
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(10, this->_internal_wheel2(), target);
  }

  // optional float wheel3 = 11;
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(11, this->_internal_wheel3(), target);
  }

  // optional float wheel4 = 12;
  if (cached_has_bits & 0x00000800u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteFloatToArray(12, this->_internal_wheel4(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grSim_Robot_Command)
  return target;
}

size_t grSim_Robot_Command::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:grSim_Robot_Command)
  size_t total_size = 0;

  if (_internal_has_id()) {
    // required uint32 id = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_id());
  }

  if (_internal_has_kickspeedx()) {
    // required float kickspeedx = 2;
    total_size += 1 + 4;
  }

  if (_internal_has_kickspeedz()) {
    // required float kickspeedz = 3;
    total_size += 1 + 4;
  }

  if (_internal_has_veltangent()) {
    // required float veltangent = 4;
    total_size += 1 + 4;
  }

  if (_internal_has_velnormal()) {
    // required float velnormal = 5;
    total_size += 1 + 4;
  }

  if (_internal_has_velangular()) {
    // required float velangular = 6;
    total_size += 1 + 4;
  }

  if (_internal_has_spinner()) {
    // required bool spinner = 7;
    total_size += 1 + 1;
  }

  if (_internal_has_wheelsspeed()) {
    // required bool wheelsspeed = 8;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t grSim_Robot_Command::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grSim_Robot_Command)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x000000ff) ^ 0x000000ff) == 0) {  // All required fields are present.
    // required uint32 id = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_id());

    // required float kickspeedx = 2;
    total_size += 1 + 4;

    // required float kickspeedz = 3;
    total_size += 1 + 4;

    // required float veltangent = 4;
    total_size += 1 + 4;

    // required float velnormal = 5;
    total_size += 1 + 4;

    // required float velangular = 6;
    total_size += 1 + 4;

    // required bool spinner = 7;
    total_size += 1 + 1;

    // required bool wheelsspeed = 8;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000f00u) {
    // optional float wheel1 = 9;
    if (cached_has_bits & 0x00000100u) {
      total_size += 1 + 4;
    }

    // optional float wheel2 = 10;
    if (cached_has_bits & 0x00000200u) {
      total_size += 1 + 4;
    }

    // optional float wheel3 = 11;
    if (cached_has_bits & 0x00000400u) {
      total_size += 1 + 4;
    }

    // optional float wheel4 = 12;
    if (cached_has_bits & 0x00000800u) {
      total_size += 1 + 4;
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

void grSim_Robot_Command::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grSim_Robot_Command)
  GOOGLE_DCHECK_NE(&from, this);
  const grSim_Robot_Command* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<grSim_Robot_Command>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grSim_Robot_Command)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grSim_Robot_Command)
    MergeFrom(*source);
  }
}

void grSim_Robot_Command::MergeFrom(const grSim_Robot_Command& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grSim_Robot_Command)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000002u) {
      kickspeedx_ = from.kickspeedx_;
    }
    if (cached_has_bits & 0x00000004u) {
      kickspeedz_ = from.kickspeedz_;
    }
    if (cached_has_bits & 0x00000008u) {
      veltangent_ = from.veltangent_;
    }
    if (cached_has_bits & 0x00000010u) {
      velnormal_ = from.velnormal_;
    }
    if (cached_has_bits & 0x00000020u) {
      velangular_ = from.velangular_;
    }
    if (cached_has_bits & 0x00000040u) {
      spinner_ = from.spinner_;
    }
    if (cached_has_bits & 0x00000080u) {
      wheelsspeed_ = from.wheelsspeed_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000f00u) {
    if (cached_has_bits & 0x00000100u) {
      wheel1_ = from.wheel1_;
    }
    if (cached_has_bits & 0x00000200u) {
      wheel2_ = from.wheel2_;
    }
    if (cached_has_bits & 0x00000400u) {
      wheel3_ = from.wheel3_;
    }
    if (cached_has_bits & 0x00000800u) {
      wheel4_ = from.wheel4_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void grSim_Robot_Command::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grSim_Robot_Command)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void grSim_Robot_Command::CopyFrom(const grSim_Robot_Command& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grSim_Robot_Command)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool grSim_Robot_Command::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void grSim_Robot_Command::InternalSwap(grSim_Robot_Command* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(grSim_Robot_Command, wheel4_)
      + sizeof(grSim_Robot_Command::wheel4_)
      - PROTOBUF_FIELD_OFFSET(grSim_Robot_Command, id_)>(
          reinterpret_cast<char*>(&id_),
          reinterpret_cast<char*>(&other->id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata grSim_Robot_Command::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void grSim_Commands::InitAsDefaultInstance() {
}
class grSim_Commands::_Internal {
 public:
  using HasBits = decltype(std::declval<grSim_Commands>()._has_bits_);
  static void set_has_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_isteamyellow(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

grSim_Commands::grSim_Commands(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  robot_commands_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:grSim_Commands)
}
grSim_Commands::grSim_Commands(const grSim_Commands& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      robot_commands_(from.robot_commands_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&timestamp_, &from.timestamp_,
    static_cast<size_t>(reinterpret_cast<char*>(&isteamyellow_) -
    reinterpret_cast<char*>(&timestamp_)) + sizeof(isteamyellow_));
  // @@protoc_insertion_point(copy_constructor:grSim_Commands)
}

void grSim_Commands::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_grSim_Commands_grsim_5fcommands_2eproto.base);
  ::memset(&timestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&isteamyellow_) -
      reinterpret_cast<char*>(&timestamp_)) + sizeof(isteamyellow_));
}

grSim_Commands::~grSim_Commands() {
  // @@protoc_insertion_point(destructor:grSim_Commands)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void grSim_Commands::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void grSim_Commands::ArenaDtor(void* object) {
  grSim_Commands* _this = reinterpret_cast< grSim_Commands* >(object);
  (void)_this;
}
void grSim_Commands::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void grSim_Commands::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const grSim_Commands& grSim_Commands::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_grSim_Commands_grsim_5fcommands_2eproto.base);
  return *internal_default_instance();
}


void grSim_Commands::Clear() {
// @@protoc_insertion_point(message_clear_start:grSim_Commands)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  robot_commands_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&timestamp_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&isteamyellow_) -
        reinterpret_cast<char*>(&timestamp_)) + sizeof(isteamyellow_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* grSim_Commands::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required double timestamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          _Internal::set_has_timestamp(&has_bits);
          timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required bool isteamyellow = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_isteamyellow(&has_bits);
          isteamyellow_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .grSim_Robot_Command robot_commands = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_robot_commands(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* grSim_Commands::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grSim_Commands)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required double timestamp = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_timestamp(), target);
  }

  // required bool isteamyellow = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_isteamyellow(), target);
  }

  // repeated .grSim_Robot_Command robot_commands = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_robot_commands_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_robot_commands(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grSim_Commands)
  return target;
}

size_t grSim_Commands::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:grSim_Commands)
  size_t total_size = 0;

  if (_internal_has_timestamp()) {
    // required double timestamp = 1;
    total_size += 1 + 8;
  }

  if (_internal_has_isteamyellow()) {
    // required bool isteamyellow = 2;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t grSim_Commands::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grSim_Commands)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required double timestamp = 1;
    total_size += 1 + 8;

    // required bool isteamyellow = 2;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .grSim_Robot_Command robot_commands = 3;
  total_size += 1UL * this->_internal_robot_commands_size();
  for (const auto& msg : this->robot_commands_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void grSim_Commands::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grSim_Commands)
  GOOGLE_DCHECK_NE(&from, this);
  const grSim_Commands* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<grSim_Commands>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grSim_Commands)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grSim_Commands)
    MergeFrom(*source);
  }
}

void grSim_Commands::MergeFrom(const grSim_Commands& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grSim_Commands)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  robot_commands_.MergeFrom(from.robot_commands_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      timestamp_ = from.timestamp_;
    }
    if (cached_has_bits & 0x00000002u) {
      isteamyellow_ = from.isteamyellow_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void grSim_Commands::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grSim_Commands)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void grSim_Commands::CopyFrom(const grSim_Commands& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grSim_Commands)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool grSim_Commands::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(robot_commands_)) return false;
  return true;
}

void grSim_Commands::InternalSwap(grSim_Commands* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  robot_commands_.InternalSwap(&other->robot_commands_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(grSim_Commands, isteamyellow_)
      + sizeof(grSim_Commands::isteamyellow_)
      - PROTOBUF_FIELD_OFFSET(grSim_Commands, timestamp_)>(
          reinterpret_cast<char*>(&timestamp_),
          reinterpret_cast<char*>(&other->timestamp_));
}

::PROTOBUF_NAMESPACE_ID::Metadata grSim_Commands::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grSim_Robot_Command* Arena::CreateMaybeMessage< ::grSim_Robot_Command >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grSim_Robot_Command >(arena);
}
template<> PROTOBUF_NOINLINE ::grSim_Commands* Arena::CreateMaybeMessage< ::grSim_Commands >(Arena* arena) {
  return Arena::CreateMessageInternal< ::grSim_Commands >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

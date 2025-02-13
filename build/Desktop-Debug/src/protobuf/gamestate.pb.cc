// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gamestate.proto

#include "gamestate.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_ssl_5freferee_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SSL_Referee_Point_ssl_5freferee_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_ssl_5freferee_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SSL_Referee_TeamInfo_ssl_5freferee_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_ssl_5freferee_5fgame_5fevent_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_SSL_Referee_Game_Event_ssl_5freferee_5fgame_5fevent_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_ssl_5fgame_5fevent_5f2019_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<38> scc_info_GameEvent_ssl_5fgame_5fevent_5f2019_2eproto;
namespace amun {
class GameStateDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<GameState> _instance;
} _GameState_default_instance_;
}  // namespace amun
static void InitDefaultsscc_info_GameState_gamestate_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::amun::_GameState_default_instance_;
    new (ptr) ::amun::GameState();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::amun::GameState::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<4> scc_info_GameState_gamestate_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 4, 0, InitDefaultsscc_info_GameState_gamestate_2eproto}, {
      &scc_info_SSL_Referee_TeamInfo_ssl_5freferee_2eproto.base,
      &scc_info_SSL_Referee_Point_ssl_5freferee_2eproto.base,
      &scc_info_SSL_Referee_Game_Event_ssl_5freferee_5fgame_5fevent_2eproto.base,
      &scc_info_GameEvent_ssl_5fgame_5fevent_5f2019_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_gamestate_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_gamestate_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_gamestate_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_gamestate_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::amun::GameState, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::amun::GameState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::amun::GameState, stage_),
  PROTOBUF_FIELD_OFFSET(::amun::GameState, stage_time_left_),
  PROTOBUF_FIELD_OFFSET(::amun::GameState, state_),
  PROTOBUF_FIELD_OFFSET(::amun::GameState, yellow_),
  PROTOBUF_FIELD_OFFSET(::amun::GameState, blue_),
  PROTOBUF_FIELD_OFFSET(::amun::GameState, designated_position_),
  PROTOBUF_FIELD_OFFSET(::amun::GameState, game_event_),
  PROTOBUF_FIELD_OFFSET(::amun::GameState, goals_flipped_),
  PROTOBUF_FIELD_OFFSET(::amun::GameState, is_real_game_running_),
  PROTOBUF_FIELD_OFFSET(::amun::GameState, current_action_time_remaining_),
  PROTOBUF_FIELD_OFFSET(::amun::GameState, next_state_),
  PROTOBUF_FIELD_OFFSET(::amun::GameState, game_event_2019_),
  4,
  5,
  9,
  0,
  1,
  2,
  3,
  6,
  7,
  8,
  10,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 17, sizeof(::amun::GameState)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::amun::_GameState_default_instance_),
};

const char descriptor_table_protodef_gamestate_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017gamestate.proto\022\004amun\032\021ssl_referee.pro"
  "to\032\034ssl_referee_game_event.proto\032\031ssl_ga"
  "me_event_2019.proto\"\207\007\n\tGameState\022!\n\005sta"
  "ge\030\001 \002(\0162\022.SSL_Referee.Stage\022\027\n\017stage_ti"
  "me_left\030\002 \001(\021\022$\n\005state\030\003 \002(\0162\025.amun.Game"
  "State.State\022%\n\006yellow\030\004 \002(\0132\025.SSL_Refere"
  "e.TeamInfo\022#\n\004blue\030\005 \002(\0132\025.SSL_Referee.T"
  "eamInfo\022/\n\023designated_position\030\006 \001(\0132\022.S"
  "SL_Referee.Point\022/\n\ngame_event\030\007 \001(\0132\027.S"
  "SL_Referee_Game_EventB\002\030\001\022\025\n\rgoals_flipp"
  "ed\030\010 \001(\010\022\034\n\024is_real_game_running\030\t \001(\010\022%"
  "\n\035current_action_time_remaining\030\n \001(\005\022)\n"
  "\nnext_state\030\013 \001(\0162\025.amun.GameState.State"
  "\0222\n\017game_event_2019\030\014 \003(\0132\031.gameControll"
  "er.GameEvent\"\256\003\n\005State\022\010\n\004Halt\020\001\022\010\n\004Stop"
  "\020\002\022\010\n\004Game\020\003\022\r\n\tGameForce\020\004\022\030\n\024KickoffYe"
  "llowPrepare\020\005\022\021\n\rKickoffYellow\020\006\022\030\n\024Pena"
  "ltyYellowPrepare\020\007\022\021\n\rPenaltyYellow\020\010\022\030\n"
  "\024PenaltyYellowRunning\020\025\022\020\n\014DirectYellow\020"
  "\t\022\022\n\016IndirectYellow\020\n\022\027\n\023BallPlacementYe"
  "llow\020\023\022\026\n\022KickoffBluePrepare\020\013\022\017\n\013Kickof"
  "fBlue\020\014\022\026\n\022PenaltyBluePrepare\020\r\022\017\n\013Penal"
  "tyBlue\020\016\022\026\n\022PenaltyBlueRunning\020\026\022\016\n\nDire"
  "ctBlue\020\017\022\020\n\014IndirectBlue\020\020\022\025\n\021BallPlacem"
  "entBlue\020\024\022\021\n\rTimeoutYellow\020\021\022\017\n\013TimeoutB"
  "lue\020\022B\003\370\001\001"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_gamestate_2eproto_deps[3] = {
  &::descriptor_table_ssl_5fgame_5fevent_5f2019_2eproto,
  &::descriptor_table_ssl_5freferee_2eproto,
  &::descriptor_table_ssl_5freferee_5fgame_5fevent_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_gamestate_2eproto_sccs[1] = {
  &scc_info_GameState_gamestate_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_gamestate_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_gamestate_2eproto = {
  false, false, descriptor_table_protodef_gamestate_2eproto, "gamestate.proto", 1010,
  &descriptor_table_gamestate_2eproto_once, descriptor_table_gamestate_2eproto_sccs, descriptor_table_gamestate_2eproto_deps, 1, 3,
  schemas, file_default_instances, TableStruct_gamestate_2eproto::offsets,
  file_level_metadata_gamestate_2eproto, 1, file_level_enum_descriptors_gamestate_2eproto, file_level_service_descriptors_gamestate_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_gamestate_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_gamestate_2eproto)), true);
namespace amun {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GameState_State_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_gamestate_2eproto);
  return file_level_enum_descriptors_gamestate_2eproto[0];
}
bool GameState_State_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr GameState_State GameState::Halt;
constexpr GameState_State GameState::Stop;
constexpr GameState_State GameState::Game;
constexpr GameState_State GameState::GameForce;
constexpr GameState_State GameState::KickoffYellowPrepare;
constexpr GameState_State GameState::KickoffYellow;
constexpr GameState_State GameState::PenaltyYellowPrepare;
constexpr GameState_State GameState::PenaltyYellow;
constexpr GameState_State GameState::PenaltyYellowRunning;
constexpr GameState_State GameState::DirectYellow;
constexpr GameState_State GameState::IndirectYellow;
constexpr GameState_State GameState::BallPlacementYellow;
constexpr GameState_State GameState::KickoffBluePrepare;
constexpr GameState_State GameState::KickoffBlue;
constexpr GameState_State GameState::PenaltyBluePrepare;
constexpr GameState_State GameState::PenaltyBlue;
constexpr GameState_State GameState::PenaltyBlueRunning;
constexpr GameState_State GameState::DirectBlue;
constexpr GameState_State GameState::IndirectBlue;
constexpr GameState_State GameState::BallPlacementBlue;
constexpr GameState_State GameState::TimeoutYellow;
constexpr GameState_State GameState::TimeoutBlue;
constexpr GameState_State GameState::State_MIN;
constexpr GameState_State GameState::State_MAX;
constexpr int GameState::State_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void GameState::InitAsDefaultInstance() {
  ::amun::_GameState_default_instance_._instance.get_mutable()->yellow_ = const_cast< ::SSL_Referee_TeamInfo*>(
      ::SSL_Referee_TeamInfo::internal_default_instance());
  ::amun::_GameState_default_instance_._instance.get_mutable()->blue_ = const_cast< ::SSL_Referee_TeamInfo*>(
      ::SSL_Referee_TeamInfo::internal_default_instance());
  ::amun::_GameState_default_instance_._instance.get_mutable()->designated_position_ = const_cast< ::SSL_Referee_Point*>(
      ::SSL_Referee_Point::internal_default_instance());
  ::amun::_GameState_default_instance_._instance.get_mutable()->game_event_ = const_cast< ::SSL_Referee_Game_Event*>(
      ::SSL_Referee_Game_Event::internal_default_instance());
}
class GameState::_Internal {
 public:
  using HasBits = decltype(std::declval<GameState>()._has_bits_);
  static void set_has_stage(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_stage_time_left(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_state(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static const ::SSL_Referee_TeamInfo& yellow(const GameState* msg);
  static void set_has_yellow(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::SSL_Referee_TeamInfo& blue(const GameState* msg);
  static void set_has_blue(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::SSL_Referee_Point& designated_position(const GameState* msg);
  static void set_has_designated_position(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::SSL_Referee_Game_Event& game_event(const GameState* msg);
  static void set_has_game_event(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_goals_flipped(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_is_real_game_running(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_current_action_time_remaining(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_next_state(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000213) ^ 0x00000213) != 0;
  }
};

const ::SSL_Referee_TeamInfo&
GameState::_Internal::yellow(const GameState* msg) {
  return *msg->yellow_;
}
const ::SSL_Referee_TeamInfo&
GameState::_Internal::blue(const GameState* msg) {
  return *msg->blue_;
}
const ::SSL_Referee_Point&
GameState::_Internal::designated_position(const GameState* msg) {
  return *msg->designated_position_;
}
const ::SSL_Referee_Game_Event&
GameState::_Internal::game_event(const GameState* msg) {
  return *msg->game_event_;
}
void GameState::clear_yellow() {
  if (yellow_ != nullptr) yellow_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void GameState::clear_blue() {
  if (blue_ != nullptr) blue_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void GameState::clear_designated_position() {
  if (designated_position_ != nullptr) designated_position_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void GameState::clear_game_event() {
  if (game_event_ != nullptr) game_event_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
void GameState::clear_game_event_2019() {
  game_event_2019_.Clear();
}
GameState::GameState(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  game_event_2019_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:amun.GameState)
}
GameState::GameState(const GameState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _has_bits_(from._has_bits_),
      game_event_2019_(from.game_event_2019_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_yellow()) {
    yellow_ = new ::SSL_Referee_TeamInfo(*from.yellow_);
  } else {
    yellow_ = nullptr;
  }
  if (from._internal_has_blue()) {
    blue_ = new ::SSL_Referee_TeamInfo(*from.blue_);
  } else {
    blue_ = nullptr;
  }
  if (from._internal_has_designated_position()) {
    designated_position_ = new ::SSL_Referee_Point(*from.designated_position_);
  } else {
    designated_position_ = nullptr;
  }
  if (from._internal_has_game_event()) {
    game_event_ = new ::SSL_Referee_Game_Event(*from.game_event_);
  } else {
    game_event_ = nullptr;
  }
  ::memcpy(&stage_, &from.stage_,
    static_cast<size_t>(reinterpret_cast<char*>(&next_state_) -
    reinterpret_cast<char*>(&stage_)) + sizeof(next_state_));
  // @@protoc_insertion_point(copy_constructor:amun.GameState)
}

void GameState::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_GameState_gamestate_2eproto.base);
  ::memset(&yellow_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&current_action_time_remaining_) -
      reinterpret_cast<char*>(&yellow_)) + sizeof(current_action_time_remaining_));
  state_ = 1;
  next_state_ = 1;
}

GameState::~GameState() {
  // @@protoc_insertion_point(destructor:amun.GameState)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void GameState::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete yellow_;
  if (this != internal_default_instance()) delete blue_;
  if (this != internal_default_instance()) delete designated_position_;
  if (this != internal_default_instance()) delete game_event_;
}

void GameState::ArenaDtor(void* object) {
  GameState* _this = reinterpret_cast< GameState* >(object);
  (void)_this;
}
void GameState::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void GameState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const GameState& GameState::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_GameState_gamestate_2eproto.base);
  return *internal_default_instance();
}


void GameState::Clear() {
// @@protoc_insertion_point(message_clear_start:amun.GameState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  game_event_2019_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(yellow_ != nullptr);
      yellow_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(blue_ != nullptr);
      blue_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(designated_position_ != nullptr);
      designated_position_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(game_event_ != nullptr);
      game_event_->Clear();
    }
  }
  if (cached_has_bits & 0x000000f0u) {
    ::memset(&stage_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&is_real_game_running_) -
        reinterpret_cast<char*>(&stage_)) + sizeof(is_real_game_running_));
  }
  if (cached_has_bits & 0x00000700u) {
    current_action_time_remaining_ = 0;
    state_ = 1;
    next_state_ = 1;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GameState::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required .SSL_Referee.Stage stage = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::SSL_Referee_Stage_IsValid(val))) {
            _internal_set_stage(static_cast<::SSL_Referee_Stage>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // optional sint32 stage_time_left = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          _Internal::set_has_stage_time_left(&has_bits);
          stage_time_left_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarintZigZag32(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .amun.GameState.State state = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::amun::GameState_State_IsValid(val))) {
            _internal_set_state(static_cast<::amun::GameState_State>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(3, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // required .SSL_Referee.TeamInfo yellow = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_yellow(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required .SSL_Referee.TeamInfo blue = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_blue(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .SSL_Referee.Point designated_position = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_designated_position(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .SSL_Referee_Game_Event game_event = 7 [deprecated = true];
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_game_event(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool goals_flipped = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 64)) {
          _Internal::set_has_goals_flipped(&has_bits);
          goals_flipped_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool is_real_game_running = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 72)) {
          _Internal::set_has_is_real_game_running(&has_bits);
          is_real_game_running_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional int32 current_action_time_remaining = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 80)) {
          _Internal::set_has_current_action_time_remaining(&has_bits);
          current_action_time_remaining_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .amun.GameState.State next_state = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 88)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::amun::GameState_State_IsValid(val))) {
            _internal_set_next_state(static_cast<::amun::GameState_State>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(11, val, mutable_unknown_fields());
          }
        } else goto handle_unusual;
        continue;
      // repeated .gameController.GameEvent game_event_2019 = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 98)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_game_event_2019(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<98>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* GameState::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:amun.GameState)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required .SSL_Referee.Stage stage = 1;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_stage(), target);
  }

  // optional sint32 stage_time_left = 2;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteSInt32ToArray(2, this->_internal_stage_time_left(), target);
  }

  // required .amun.GameState.State state = 3;
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      3, this->_internal_state(), target);
  }

  // required .SSL_Referee.TeamInfo yellow = 4;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        4, _Internal::yellow(this), target, stream);
  }

  // required .SSL_Referee.TeamInfo blue = 5;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        5, _Internal::blue(this), target, stream);
  }

  // optional .SSL_Referee.Point designated_position = 6;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        6, _Internal::designated_position(this), target, stream);
  }

  // optional .SSL_Referee_Game_Event game_event = 7 [deprecated = true];
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        7, _Internal::game_event(this), target, stream);
  }

  // optional bool goals_flipped = 8;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(8, this->_internal_goals_flipped(), target);
  }

  // optional bool is_real_game_running = 9;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(9, this->_internal_is_real_game_running(), target);
  }

  // optional int32 current_action_time_remaining = 10;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(10, this->_internal_current_action_time_remaining(), target);
  }

  // optional .amun.GameState.State next_state = 11;
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      11, this->_internal_next_state(), target);
  }

  // repeated .gameController.GameEvent game_event_2019 = 12;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_game_event_2019_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(12, this->_internal_game_event_2019(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:amun.GameState)
  return target;
}

size_t GameState::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:amun.GameState)
  size_t total_size = 0;

  if (_internal_has_yellow()) {
    // required .SSL_Referee.TeamInfo yellow = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *yellow_);
  }

  if (_internal_has_blue()) {
    // required .SSL_Referee.TeamInfo blue = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *blue_);
  }

  if (_internal_has_stage()) {
    // required .SSL_Referee.Stage stage = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_stage());
  }

  if (_internal_has_state()) {
    // required .amun.GameState.State state = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_state());
  }

  return total_size;
}
size_t GameState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:amun.GameState)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000213) ^ 0x00000213) == 0) {  // All required fields are present.
    // required .SSL_Referee.TeamInfo yellow = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *yellow_);

    // required .SSL_Referee.TeamInfo blue = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *blue_);

    // required .SSL_Referee.Stage stage = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_stage());

    // required .amun.GameState.State state = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_state());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .gameController.GameEvent game_event_2019 = 12;
  total_size += 1UL * this->_internal_game_event_2019_size();
  for (const auto& msg : this->game_event_2019_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000cu) {
    // optional .SSL_Referee.Point designated_position = 6;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *designated_position_);
    }

    // optional .SSL_Referee_Game_Event game_event = 7 [deprecated = true];
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *game_event_);
    }

  }
  if (cached_has_bits & 0x000000e0u) {
    // optional sint32 stage_time_left = 2;
    if (cached_has_bits & 0x00000020u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SInt32Size(
          this->_internal_stage_time_left());
    }

    // optional bool goals_flipped = 8;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 1;
    }

    // optional bool is_real_game_running = 9;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 + 1;
    }

  }
  // optional int32 current_action_time_remaining = 10;
  if (cached_has_bits & 0x00000100u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_current_action_time_remaining());
  }

  // optional .amun.GameState.State next_state = 11;
  if (cached_has_bits & 0x00000400u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_next_state());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void GameState::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:amun.GameState)
  GOOGLE_DCHECK_NE(&from, this);
  const GameState* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<GameState>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:amun.GameState)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:amun.GameState)
    MergeFrom(*source);
  }
}

void GameState::MergeFrom(const GameState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:amun.GameState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  game_event_2019_.MergeFrom(from.game_event_2019_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_yellow()->::SSL_Referee_TeamInfo::MergeFrom(from._internal_yellow());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_blue()->::SSL_Referee_TeamInfo::MergeFrom(from._internal_blue());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_designated_position()->::SSL_Referee_Point::MergeFrom(from._internal_designated_position());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_game_event()->::SSL_Referee_Game_Event::MergeFrom(from._internal_game_event());
    }
    if (cached_has_bits & 0x00000010u) {
      stage_ = from.stage_;
    }
    if (cached_has_bits & 0x00000020u) {
      stage_time_left_ = from.stage_time_left_;
    }
    if (cached_has_bits & 0x00000040u) {
      goals_flipped_ = from.goals_flipped_;
    }
    if (cached_has_bits & 0x00000080u) {
      is_real_game_running_ = from.is_real_game_running_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000700u) {
    if (cached_has_bits & 0x00000100u) {
      current_action_time_remaining_ = from.current_action_time_remaining_;
    }
    if (cached_has_bits & 0x00000200u) {
      state_ = from.state_;
    }
    if (cached_has_bits & 0x00000400u) {
      next_state_ = from.next_state_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void GameState::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:amun.GameState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GameState::CopyFrom(const GameState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:amun.GameState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GameState::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(game_event_2019_)) return false;
  if (_internal_has_yellow()) {
    if (!yellow_->IsInitialized()) return false;
  }
  if (_internal_has_blue()) {
    if (!blue_->IsInitialized()) return false;
  }
  if (_internal_has_designated_position()) {
    if (!designated_position_->IsInitialized()) return false;
  }
  if (_internal_has_game_event()) {
    if (!game_event_->IsInitialized()) return false;
  }
  return true;
}

void GameState::InternalSwap(GameState* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  game_event_2019_.InternalSwap(&other->game_event_2019_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GameState, current_action_time_remaining_)
      + sizeof(GameState::current_action_time_remaining_)
      - PROTOBUF_FIELD_OFFSET(GameState, yellow_)>(
          reinterpret_cast<char*>(&yellow_),
          reinterpret_cast<char*>(&other->yellow_));
  swap(state_, other->state_);
  swap(next_state_, other->next_state_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GameState::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace amun
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::amun::GameState* Arena::CreateMaybeMessage< ::amun::GameState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::amun::GameState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>

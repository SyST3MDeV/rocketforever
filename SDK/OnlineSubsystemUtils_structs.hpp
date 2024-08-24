#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlineSubsystemUtils

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace SDK
{

// Enum OnlineSubsystemUtils.EBeaconConnectionState
// NumValues: 0x0005
enum class EBeaconConnectionState : uint8
{
	Invalid                                  = 0,
	Closed                                   = 1,
	Pending                                  = 2,
	Open                                     = 3,
	EBeaconConnectionState_MAX               = 4,
};

// Enum OnlineSubsystemUtils.EClientRequestType
// NumValues: 0x0008
enum class EClientRequestType : uint8
{
	NonePending                              = 0,
	ExistingSessionReservation               = 1,
	ReservationUpdate                        = 2,
	EmptyServerReservation                   = 3,
	Reconnect                                = 4,
	Abandon                                  = 5,
	ReservationRemoveMembers                 = 6,
	EClientRequestType_MAX                   = 7,
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
// NumValues: 0x0011
enum class EPartyReservationResult : uint8
{
	NoResult                                 = 0,
	RequestPending                           = 1,
	GeneralError                             = 2,
	PartyLimitReached                        = 3,
	IncorrectPlayerCount                     = 4,
	RequestTimedOut                          = 5,
	ReservationDuplicate                     = 6,
	ReservationNotFound                      = 7,
	ReservationAccepted                      = 8,
	ReservationDenied                        = 9,
	ReservationDenied_CrossPlayRestriction   = 10,
	ReservationDenied_Banned                 = 11,
	ReservationRequestCanceled               = 12,
	ReservationInvalid                       = 13,
	BadSessionId                             = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult_MAX              = 16,
};

// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
// NumValues: 0x0007
enum class ESpectatorClientRequestType : uint8
{
	NonePending                              = 0,
	ExistingSessionReservation               = 1,
	ReservationUpdate                        = 2,
	EmptyServerReservation                   = 3,
	Reconnect                                = 4,
	Abandon                                  = 5,
	ESpectatorClientRequestType_MAX          = 6,
};

// Enum OnlineSubsystemUtils.ESpectatorReservationResult
// NumValues: 0x0011
enum class ESpectatorReservationResult : uint8
{
	NoResult                                 = 0,
	RequestPending                           = 1,
	GeneralError                             = 2,
	SpectatorLimitReached                    = 3,
	IncorrectPlayerCount                     = 4,
	RequestTimedOut                          = 5,
	ReservationDuplicate                     = 6,
	ReservationNotFound                      = 7,
	ReservationAccepted                      = 8,
	ReservationDenied                        = 9,
	ReservationDenied_CrossPlayRestriction   = 10,
	ReservationDenied_Banned                 = 11,
	ReservationRequestCanceled               = 12,
	ReservationInvalid                       = 13,
	BadSessionId                             = 14,
	ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult_MAX          = 16,
};

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x00B8 (0x00B8 - 0x0000)
struct alignas(0x08) FBlueprintSessionResult final
{
public:
	uint8                                         Pad_EDE[0xB8];                                     // 0x0000(0x00B8)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FBlueprintSessionResult) == 0x000008, "Wrong alignment on FBlueprintSessionResult");
static_assert(sizeof(FBlueprintSessionResult) == 0x0000B8, "Wrong size on FBlueprintSessionResult");

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0050 (0x0050 - 0x0000)
struct FPlayerReservation final
{
public:
	struct FUniqueNetIdRepl                       UniqueId;                                          // 0x0000(0x0028)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ValidationStr;                                     // 0x0028(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Platform;                                          // 0x0038(0x0010)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bAllowCrossplay;                                   // 0x0048(0x0001)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_EDF[0x3];                                      // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ElapsedTime;                                       // 0x004C(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlayerReservation) == 0x000008, "Wrong alignment on FPlayerReservation");
static_assert(sizeof(FPlayerReservation) == 0x000050, "Wrong size on FPlayerReservation");
static_assert(offsetof(FPlayerReservation, UniqueId) == 0x000000, "Member 'FPlayerReservation::UniqueId' has a wrong offset!");
static_assert(offsetof(FPlayerReservation, ValidationStr) == 0x000028, "Member 'FPlayerReservation::ValidationStr' has a wrong offset!");
static_assert(offsetof(FPlayerReservation, Platform) == 0x000038, "Member 'FPlayerReservation::Platform' has a wrong offset!");
static_assert(offsetof(FPlayerReservation, bAllowCrossplay) == 0x000048, "Member 'FPlayerReservation::bAllowCrossplay' has a wrong offset!");
static_assert(offsetof(FPlayerReservation, ElapsedTime) == 0x00004C, "Member 'FPlayerReservation::ElapsedTime' has a wrong offset!");

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0040 (0x0040 - 0x0000)
struct FPIELoginSettingsInternal final
{
public:
	class FString                                 ID;                                                // 0x0000(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Token;                                             // 0x0010(0x0010)(Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Type;                                              // 0x0020(0x0010)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 TokenBytes;                                        // 0x0030(0x0010)(ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPIELoginSettingsInternal) == 0x000008, "Wrong alignment on FPIELoginSettingsInternal");
static_assert(sizeof(FPIELoginSettingsInternal) == 0x000040, "Wrong size on FPIELoginSettingsInternal");
static_assert(offsetof(FPIELoginSettingsInternal, ID) == 0x000000, "Member 'FPIELoginSettingsInternal::ID' has a wrong offset!");
static_assert(offsetof(FPIELoginSettingsInternal, Token) == 0x000010, "Member 'FPIELoginSettingsInternal::Token' has a wrong offset!");
static_assert(offsetof(FPIELoginSettingsInternal, Type) == 0x000020, "Member 'FPIELoginSettingsInternal::Type' has a wrong offset!");
static_assert(offsetof(FPIELoginSettingsInternal, TokenBytes) == 0x000030, "Member 'FPIELoginSettingsInternal::TokenBytes' has a wrong offset!");

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0050 (0x0050 - 0x0000)
struct FPartyReservation final
{
public:
	int32                                         TeamNum;                                           // 0x0000(0x0004)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_EE0[0x4];                                      // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FUniqueNetIdRepl                       PartyLeader;                                       // 0x0008(0x0028)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerReservation>             PartyMembers;                                      // 0x0030(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FPlayerReservation>             RemovedPartyMembers;                               // 0x0040(0x0010)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPartyReservation) == 0x000008, "Wrong alignment on FPartyReservation");
static_assert(sizeof(FPartyReservation) == 0x000050, "Wrong size on FPartyReservation");
static_assert(offsetof(FPartyReservation, TeamNum) == 0x000000, "Member 'FPartyReservation::TeamNum' has a wrong offset!");
static_assert(offsetof(FPartyReservation, PartyLeader) == 0x000008, "Member 'FPartyReservation::PartyLeader' has a wrong offset!");
static_assert(offsetof(FPartyReservation, PartyMembers) == 0x000030, "Member 'FPartyReservation::PartyMembers' has a wrong offset!");
static_assert(offsetof(FPartyReservation, RemovedPartyMembers) == 0x000040, "Member 'FPartyReservation::RemovedPartyMembers' has a wrong offset!");

// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
// 0x0078 (0x0078 - 0x0000)
struct FSpectatorReservation final
{
public:
	struct FUniqueNetIdRepl                       SpectatorId;                                       // 0x0000(0x0028)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerReservation                     Spectator;                                         // 0x0028(0x0050)(Transient, NativeAccessSpecifierPublic)
};
static_assert(alignof(FSpectatorReservation) == 0x000008, "Wrong alignment on FSpectatorReservation");
static_assert(sizeof(FSpectatorReservation) == 0x000078, "Wrong size on FSpectatorReservation");
static_assert(offsetof(FSpectatorReservation, SpectatorId) == 0x000000, "Member 'FSpectatorReservation::SpectatorId' has a wrong offset!");
static_assert(offsetof(FSpectatorReservation, Spectator) == 0x000028, "Member 'FSpectatorReservation::Spectator' has a wrong offset!");

}


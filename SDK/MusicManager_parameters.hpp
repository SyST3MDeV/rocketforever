#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MusicManager

#include "Basic.hpp"


namespace SDK::Params
{

// Function MusicManager.MusicManager_C.ExecuteUbergraph_MusicManager
// 0x0020 (0x0020 - 0x0000)
struct MusicManager_C_ExecuteUbergraph_MusicManager final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_Event_MatchState;                           // 0x0004(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24AA[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          K2Node_Event_EventPlayed;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchName_CmpSuccess;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(MusicManager_C_ExecuteUbergraph_MusicManager) == 0x000008, "Wrong alignment on MusicManager_C_ExecuteUbergraph_MusicManager");
static_assert(sizeof(MusicManager_C_ExecuteUbergraph_MusicManager) == 0x000020, "Wrong size on MusicManager_C_ExecuteUbergraph_MusicManager");
static_assert(offsetof(MusicManager_C_ExecuteUbergraph_MusicManager, EntryPoint) == 0x000000, "Member 'MusicManager_C_ExecuteUbergraph_MusicManager::EntryPoint' has a wrong offset!");
static_assert(offsetof(MusicManager_C_ExecuteUbergraph_MusicManager, K2Node_Event_MatchState) == 0x000004, "Member 'MusicManager_C_ExecuteUbergraph_MusicManager::K2Node_Event_MatchState' has a wrong offset!");
static_assert(offsetof(MusicManager_C_ExecuteUbergraph_MusicManager, K2Node_Event_EventPlayed) == 0x000010, "Member 'MusicManager_C_ExecuteUbergraph_MusicManager::K2Node_Event_EventPlayed' has a wrong offset!");
static_assert(offsetof(MusicManager_C_ExecuteUbergraph_MusicManager, K2Node_SwitchName_CmpSuccess) == 0x000018, "Member 'MusicManager_C_ExecuteUbergraph_MusicManager::K2Node_SwitchName_CmpSuccess' has a wrong offset!");

// Function MusicManager.MusicManager_C.BP_HandleMenuMusicSFX
// 0x0008 (0x0008 - 0x0000)
struct MusicManager_C_BP_HandleMenuMusicSFX final
{
public:
	class UAkAudioEvent*                          EventPlayed;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MusicManager_C_BP_HandleMenuMusicSFX) == 0x000008, "Wrong alignment on MusicManager_C_BP_HandleMenuMusicSFX");
static_assert(sizeof(MusicManager_C_BP_HandleMenuMusicSFX) == 0x000008, "Wrong size on MusicManager_C_BP_HandleMenuMusicSFX");
static_assert(offsetof(MusicManager_C_BP_HandleMenuMusicSFX, EventPlayed) == 0x000000, "Member 'MusicManager_C_BP_HandleMenuMusicSFX::EventPlayed' has a wrong offset!");

// Function MusicManager.MusicManager_C.BP_OnMatchStateChanged
// 0x0008 (0x0008 - 0x0000)
struct MusicManager_C_BP_OnMatchStateChanged final
{
public:
	class FName                                   MatchState;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(MusicManager_C_BP_OnMatchStateChanged) == 0x000004, "Wrong alignment on MusicManager_C_BP_OnMatchStateChanged");
static_assert(sizeof(MusicManager_C_BP_OnMatchStateChanged) == 0x000008, "Wrong size on MusicManager_C_BP_OnMatchStateChanged");
static_assert(offsetof(MusicManager_C_BP_OnMatchStateChanged, MatchState) == 0x000000, "Member 'MusicManager_C_BP_OnMatchStateChanged::MatchState' has a wrong offset!");

}


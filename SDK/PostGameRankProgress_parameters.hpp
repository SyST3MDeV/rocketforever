#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostGameRankProgress

#include "Basic.hpp"

#include "MangoClient_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "AkAudio_structs.hpp"
#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function PostGameRankProgress.PostGameRankProgress_C.ExecuteUbergraph_PostGameRankProgress
// 0x0588 (0x0588 - 0x0000)
struct PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B14[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bFromSubMenu;                         // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B15[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Level;                          // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0018(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	bool                                          CallFunc_RemoveSelf_ReturnValue;                   // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B16[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0038(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x004D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x004E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B17[0x1];                                     // 0x004F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Fraction_ReturnValue;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0064(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         CallFunc_FTrunc_ReturnValue;                       // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_Parse_StringToGuid_OutGuid;               // 0x0078(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Parse_StringToGuid_Success;               // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B18[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerMenuManager*                    CallFunc_GetMenuManager_ReturnValue;               // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMangoCMSManager*                       CallFunc_Get_ReturnValue;                          // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerMenuSequence*                   CallFunc_GetActiveSequence_ReturnValue;            // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMangoPlaylist                         CallFunc_FindPlaylist_ReturnValue;                 // 0x00B0(0x00F8)()
	class UPostGameSequence_C*                    K2Node_DynamicCast_AsPost_Game_Sequence;           // 0x01A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1B19[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMatchEnd                              CallFunc_GetMatchEndData_ReturnValue;              // 0x01B8(0x0068)(ConstParm)
	struct FMarinerPostGameData                   CallFunc_GetLocalPlayerPostGameData_ReturnValue;   // 0x0220(0x0358)(ConstParm)
	TDelegate<void(int32 Level)>                  K2Node_CreateDelegate_OutputDelegate_1;            // 0x0578(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress) == 0x000008, "Wrong alignment on PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress");
static_assert(sizeof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress) == 0x000588, "Wrong size on PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, EntryPoint) == 0x000000, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::EntryPoint' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, K2Node_Event_bFromSubMenu) == 0x000010, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::K2Node_Event_bFromSubMenu' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, K2Node_CustomEvent_Level) == 0x000014, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::K2Node_CustomEvent_Level' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, Temp_delegate_Variable) == 0x000018, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_RemoveSelf_ReturnValue) == 0x000028, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_RemoveSelf_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, Temp_struct_Variable) == 0x000038, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_PostEvent_ReturnValue) == 0x000048, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x00004C, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_Greater_IntInt_ReturnValue) == 0x00004D, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_Less_IntInt_ReturnValue) == 0x00004E, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_PlayAnimation_ReturnValue_1) == 0x000050, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_PlayAnimation_ReturnValue_2) == 0x000058, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_Fraction_ReturnValue) == 0x000060, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_Fraction_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, K2Node_CreateDelegate_OutputDelegate) == 0x000064, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_FTrunc_ReturnValue) == 0x000074, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_FTrunc_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_Parse_StringToGuid_OutGuid) == 0x000078, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_Parse_StringToGuid_OutGuid' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_Parse_StringToGuid_Success) == 0x000088, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_Parse_StringToGuid_Success' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_PlayAnimation_ReturnValue_3) == 0x000090, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_GetMenuManager_ReturnValue) == 0x000098, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_GetMenuManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_Get_ReturnValue) == 0x0000A0, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_GetActiveSequence_ReturnValue) == 0x0000A8, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_GetActiveSequence_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_FindPlaylist_ReturnValue) == 0x0000B0, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_FindPlaylist_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, K2Node_DynamicCast_AsPost_Game_Sequence) == 0x0001A8, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::K2Node_DynamicCast_AsPost_Game_Sequence' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, K2Node_DynamicCast_bSuccess) == 0x0001B0, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_GetMatchEndData_ReturnValue) == 0x0001B8, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_GetMatchEndData_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, CallFunc_GetLocalPlayerPostGameData_ReturnValue) == 0x000220, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::CallFunc_GetLocalPlayerPostGameData_ReturnValue' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress, K2Node_CreateDelegate_OutputDelegate_1) == 0x000578, "Member 'PostGameRankProgress_C_ExecuteUbergraph_PostGameRankProgress::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function PostGameRankProgress.PostGameRankProgress_C.RankChanged
// 0x0004 (0x0004 - 0x0000)
struct PostGameRankProgress_C_RankChanged final
{
public:
	int32                                         Level;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PostGameRankProgress_C_RankChanged) == 0x000004, "Wrong alignment on PostGameRankProgress_C_RankChanged");
static_assert(sizeof(PostGameRankProgress_C_RankChanged) == 0x000004, "Wrong size on PostGameRankProgress_C_RankChanged");
static_assert(offsetof(PostGameRankProgress_C_RankChanged, Level) == 0x000000, "Member 'PostGameRankProgress_C_RankChanged::Level' has a wrong offset!");

// Function PostGameRankProgress.PostGameRankProgress_C.BP_OnEntered
// 0x0001 (0x0001 - 0x0000)
struct PostGameRankProgress_C_BP_OnEntered final
{
public:
	bool                                          bFromSubMenu;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PostGameRankProgress_C_BP_OnEntered) == 0x000001, "Wrong alignment on PostGameRankProgress_C_BP_OnEntered");
static_assert(sizeof(PostGameRankProgress_C_BP_OnEntered) == 0x000001, "Wrong size on PostGameRankProgress_C_BP_OnEntered");
static_assert(offsetof(PostGameRankProgress_C_BP_OnEntered, bFromSubMenu) == 0x000000, "Member 'PostGameRankProgress_C_BP_OnEntered::bFromSubMenu' has a wrong offset!");

// Function PostGameRankProgress.PostGameRankProgress_C.PopulateRankProgress
// 0x0020 (0x0020 - 0x0000)
struct PostGameRankProgress_C_PopulateRankProgress final
{
public:
	struct FMangoPlaylistResult                   PlaylistProgression;                               // 0x0000(0x0020)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(PostGameRankProgress_C_PopulateRankProgress) == 0x000008, "Wrong alignment on PostGameRankProgress_C_PopulateRankProgress");
static_assert(sizeof(PostGameRankProgress_C_PopulateRankProgress) == 0x000020, "Wrong size on PostGameRankProgress_C_PopulateRankProgress");
static_assert(offsetof(PostGameRankProgress_C_PopulateRankProgress, PlaylistProgression) == 0x000000, "Member 'PostGameRankProgress_C_PopulateRankProgress::PlaylistProgression' has a wrong offset!");

// Function PostGameRankProgress.PostGameRankProgress_C.ConsumeNextReward
// 0x0001 (0x0001 - 0x0000)
struct PostGameRankProgress_C_ConsumeNextReward final
{
public:
	bool                                          IsValid;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PostGameRankProgress_C_ConsumeNextReward) == 0x000001, "Wrong alignment on PostGameRankProgress_C_ConsumeNextReward");
static_assert(sizeof(PostGameRankProgress_C_ConsumeNextReward) == 0x000001, "Wrong size on PostGameRankProgress_C_ConsumeNextReward");
static_assert(offsetof(PostGameRankProgress_C_ConsumeNextReward, IsValid) == 0x000000, "Member 'PostGameRankProgress_C_ConsumeNextReward::IsValid' has a wrong offset!");

// Function PostGameRankProgress.PostGameRankProgress_C.HasRewardItems
// 0x0001 (0x0001 - 0x0000)
struct PostGameRankProgress_C_HasRewardItems final
{
public:
	bool                                          Param_HasRewardItems;                              // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PostGameRankProgress_C_HasRewardItems) == 0x000001, "Wrong alignment on PostGameRankProgress_C_HasRewardItems");
static_assert(sizeof(PostGameRankProgress_C_HasRewardItems) == 0x000001, "Wrong size on PostGameRankProgress_C_HasRewardItems");
static_assert(offsetof(PostGameRankProgress_C_HasRewardItems, Param_HasRewardItems) == 0x000000, "Member 'PostGameRankProgress_C_HasRewardItems::Param_HasRewardItems' has a wrong offset!");

// Function PostGameRankProgress.PostGameRankProgress_C.HasCurrency
// 0x0002 (0x0002 - 0x0000)
struct PostGameRankProgress_C_HasCurrency final
{
public:
	bool                                          Param_HasCurrency;                                 // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PostGameRankProgress_C_HasCurrency) == 0x000001, "Wrong alignment on PostGameRankProgress_C_HasCurrency");
static_assert(sizeof(PostGameRankProgress_C_HasCurrency) == 0x000002, "Wrong size on PostGameRankProgress_C_HasCurrency");
static_assert(offsetof(PostGameRankProgress_C_HasCurrency, Param_HasCurrency) == 0x000000, "Member 'PostGameRankProgress_C_HasCurrency::Param_HasCurrency' has a wrong offset!");
static_assert(offsetof(PostGameRankProgress_C_HasCurrency, CallFunc_Greater_IntInt_ReturnValue) == 0x000001, "Member 'PostGameRankProgress_C_HasCurrency::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Shared_Artifact_Ability_15

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function Shared_Artifact_Ability_15.Shared_Artifact_Ability_15_C.ExecuteUbergraph_Shared_Artifact_Ability_15
// 0x0078 (0x0078 - 0x0000)
struct Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMarinerCharacter*                      CallFunc_GetAvatarCharacterFromActorInfo_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2799[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMarinerGameplayAbilityBinding         CallFunc_Array_Get_Item;                           // 0x0020(0x0010)(NoDestructor)
	class UMarinerAbility*                        CallFunc_GetAbilityInstanceForAbilityClass_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_279A[0x1];                                     // 0x003B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x003C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_279B[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AMarinerCharacter*                      CallFunc_GetAvatarCharacterFromActorInfo_ReturnValue_1; // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAuthority_ReturnValue;                 // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_279C[0x7];                                     // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMarinerPlayerState*                    K2Node_CustomEvent_PlayerWithStatChange;           // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   K2Node_CustomEvent_StatName;                       // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_StatValue;                      // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0074(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15) == 0x000008, "Wrong alignment on Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15");
static_assert(sizeof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15) == 0x000078, "Wrong size on Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, EntryPoint) == 0x000000, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::EntryPoint' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, CallFunc_GetAvatarCharacterFromActorInfo_ReturnValue) == 0x000008, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::CallFunc_GetAvatarCharacterFromActorInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, CallFunc_Array_Get_Item) == 0x000020, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, CallFunc_GetAbilityInstanceForAbilityClass_ReturnValue) == 0x000030, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::CallFunc_GetAbilityInstanceForAbilityClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000038, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000039, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x00003A, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, K2Node_CreateDelegate_OutputDelegate) == 0x00003C, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, CallFunc_GetAvatarCharacterFromActorInfo_ReturnValue_1) == 0x000050, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::CallFunc_GetAvatarCharacterFromActorInfo_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, CallFunc_HasAuthority_ReturnValue) == 0x000058, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::CallFunc_HasAuthority_ReturnValue' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, K2Node_CustomEvent_PlayerWithStatChange) == 0x000060, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::K2Node_CustomEvent_PlayerWithStatChange' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, K2Node_CustomEvent_StatName) == 0x000068, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::K2Node_CustomEvent_StatName' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, K2Node_CustomEvent_StatValue) == 0x000070, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::K2Node_CustomEvent_StatValue' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000074, "Member 'Shared_Artifact_Ability_15_C_ExecuteUbergraph_Shared_Artifact_Ability_15::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function Shared_Artifact_Ability_15.Shared_Artifact_Ability_15_C.OnPlayerStatChanged
// 0x0018 (0x0018 - 0x0000)
struct Shared_Artifact_Ability_15_C_OnPlayerStatChanged final
{
public:
	class AMarinerPlayerState*                    PlayerWithStatChange;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   StatName;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StatValue;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Shared_Artifact_Ability_15_C_OnPlayerStatChanged) == 0x000008, "Wrong alignment on Shared_Artifact_Ability_15_C_OnPlayerStatChanged");
static_assert(sizeof(Shared_Artifact_Ability_15_C_OnPlayerStatChanged) == 0x000018, "Wrong size on Shared_Artifact_Ability_15_C_OnPlayerStatChanged");
static_assert(offsetof(Shared_Artifact_Ability_15_C_OnPlayerStatChanged, PlayerWithStatChange) == 0x000000, "Member 'Shared_Artifact_Ability_15_C_OnPlayerStatChanged::PlayerWithStatChange' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_OnPlayerStatChanged, StatName) == 0x000008, "Member 'Shared_Artifact_Ability_15_C_OnPlayerStatChanged::StatName' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_OnPlayerStatChanged, StatValue) == 0x000010, "Member 'Shared_Artifact_Ability_15_C_OnPlayerStatChanged::StatValue' has a wrong offset!");

// Function Shared_Artifact_Ability_15.Shared_Artifact_Ability_15_C.GetCooldownReductionMultiplier
// 0x0018 (0x0018 - 0x0000)
struct Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier final
{
public:
	float                                         ReductionMultiplier;                               // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetAbilityLevel_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EEvaluateCurveTableResult                     CallFunc_EvaluateCurveTableRow_OutResult;          // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_279D[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_EvaluateCurveTableRow_OutXY;              // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier) == 0x000004, "Wrong alignment on Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier");
static_assert(sizeof(Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier) == 0x000018, "Wrong size on Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier");
static_assert(offsetof(Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier, ReductionMultiplier) == 0x000000, "Member 'Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier::ReductionMultiplier' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier, CallFunc_GetAbilityLevel_ReturnValue) == 0x000004, "Member 'Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier::CallFunc_GetAbilityLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000008, "Member 'Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier, CallFunc_EvaluateCurveTableRow_OutResult) == 0x00000C, "Member 'Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier::CallFunc_EvaluateCurveTableRow_OutResult' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier, CallFunc_EvaluateCurveTableRow_OutXY) == 0x000010, "Member 'Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier::CallFunc_EvaluateCurveTableRow_OutXY' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier, K2Node_SwitchEnum_CmpSuccess) == 0x000014, "Member 'Shared_Artifact_Ability_15_C_GetCooldownReductionMultiplier::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function Shared_Artifact_Ability_15.Shared_Artifact_Ability_15_C.ReduceAbilityCooldown
// 0x0030 (0x0030 - 0x0000)
struct Shared_Artifact_Ability_15_C_ReduceAbilityCooldown final
{
public:
	class UMarinerAbility*                        Ability;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerAbilitySystemComponent*         CallFunc_GetOwningAbilitySystemComponent_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCooldownTimeRemainingAndDuration_CooldownTimeRemaining; // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCooldownTimeRemainingAndDuration_CooldownDuration; // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	const class UClass*                           CallFunc_GetCooldownGameplayEffectType_ReturnValue; // 0x0018(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetCooldownReductionMultiplier_ReductionMultiplier; // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(Shared_Artifact_Ability_15_C_ReduceAbilityCooldown) == 0x000008, "Wrong alignment on Shared_Artifact_Ability_15_C_ReduceAbilityCooldown");
static_assert(sizeof(Shared_Artifact_Ability_15_C_ReduceAbilityCooldown) == 0x000030, "Wrong size on Shared_Artifact_Ability_15_C_ReduceAbilityCooldown");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ReduceAbilityCooldown, Ability) == 0x000000, "Member 'Shared_Artifact_Ability_15_C_ReduceAbilityCooldown::Ability' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ReduceAbilityCooldown, CallFunc_GetOwningAbilitySystemComponent_ReturnValue) == 0x000008, "Member 'Shared_Artifact_Ability_15_C_ReduceAbilityCooldown::CallFunc_GetOwningAbilitySystemComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ReduceAbilityCooldown, CallFunc_GetCooldownTimeRemainingAndDuration_CooldownTimeRemaining) == 0x000010, "Member 'Shared_Artifact_Ability_15_C_ReduceAbilityCooldown::CallFunc_GetCooldownTimeRemainingAndDuration_CooldownTimeRemaining' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ReduceAbilityCooldown, CallFunc_GetCooldownTimeRemainingAndDuration_CooldownDuration) == 0x000014, "Member 'Shared_Artifact_Ability_15_C_ReduceAbilityCooldown::CallFunc_GetCooldownTimeRemainingAndDuration_CooldownDuration' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ReduceAbilityCooldown, CallFunc_GetCooldownGameplayEffectType_ReturnValue) == 0x000018, "Member 'Shared_Artifact_Ability_15_C_ReduceAbilityCooldown::CallFunc_GetCooldownGameplayEffectType_ReturnValue' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ReduceAbilityCooldown, CallFunc_GetCooldownReductionMultiplier_ReductionMultiplier) == 0x000020, "Member 'Shared_Artifact_Ability_15_C_ReduceAbilityCooldown::CallFunc_GetCooldownReductionMultiplier_ReductionMultiplier' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ReduceAbilityCooldown, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000024, "Member 'Shared_Artifact_Ability_15_C_ReduceAbilityCooldown::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(Shared_Artifact_Ability_15_C_ReduceAbilityCooldown, CallFunc_Multiply_FloatFloat_ReturnValue_1) == 0x000028, "Member 'Shared_Artifact_Ability_15_C_ReduceAbilityCooldown::CallFunc_Multiply_FloatFloat_ReturnValue_1' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BaseCharacterLite

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BaseCharacterLite.BaseCharacterLite_C.ExecuteUbergraph_BaseCharacterLite
// 0x0110 (0x0110 - 0x0000)
struct BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2336[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerSkinCollectionDataAsset*        K2Node_CustomEvent_SkinCollection;                 // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMarinerSkinDataAsset>   CallFunc_GetSkinAsset_ReturnValue;                 // 0x0010(0x0028)(ConstParm, HasGetValueTypeHash)
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerSkinDataAsset*                  K2Node_DynamicCast_AsMariner_Skin_Data_Asset;      // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2337[0x3];                                     // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UMarinerSkinCollectionDataAsset* SkinCollection)> K2Node_CreateDelegate_OutputDelegate;              // 0x004C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue;                 // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue_1;               // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue_2;               // 0x005E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x005F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValidClass_ReturnValue_3;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2338[0xE];                                     // 0x0062(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x0070(0x0030)(IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2339[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_233A[0x8];                                     // 0x00B8(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0x00C0(0x0030)(IsPlainOldData, NoDestructor)
	class AActor*                                 CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1; // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_233B[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_FinishSpawningActor_ReturnValue_1;        // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_4;                    // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_5;                    // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite) == 0x000010, "Wrong alignment on BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite");
static_assert(sizeof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite) == 0x000110, "Wrong size on BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, EntryPoint) == 0x000000, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::EntryPoint' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, K2Node_CustomEvent_SkinCollection) == 0x000008, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::K2Node_CustomEvent_SkinCollection' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_GetSkinAsset_ReturnValue) == 0x000010, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_GetSkinAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000038, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, K2Node_DynamicCast_AsMariner_Skin_Data_Asset) == 0x000040, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::K2Node_DynamicCast_AsMariner_Skin_Data_Asset' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, K2Node_CreateDelegate_OutputDelegate) == 0x00004C, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_IsValidClass_ReturnValue) == 0x00005C, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_IsValidClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_IsValidClass_ReturnValue_1) == 0x00005D, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_IsValidClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_IsValidClass_ReturnValue_2) == 0x00005E, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_IsValidClass_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_BooleanOR_ReturnValue) == 0x00005F, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_IsValidClass_ReturnValue_3) == 0x000060, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_IsValidClass_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_IsValid_ReturnValue_1) == 0x000061, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_K2_GetComponentToWorld_ReturnValue) == 0x000070, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_K2_GetComponentToWorld_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_IsValid_ReturnValue_2) == 0x0000A0, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue) == 0x0000A8, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_FinishSpawningActor_ReturnValue) == 0x0000B0, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_FinishSpawningActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_K2_GetComponentToWorld_ReturnValue_1) == 0x0000C0, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_K2_GetComponentToWorld_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1) == 0x0000F0, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_IsValid_ReturnValue_3) == 0x0000F8, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_FinishSpawningActor_ReturnValue_1) == 0x000100, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_FinishSpawningActor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_IsValid_ReturnValue_4) == 0x000108, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_IsValid_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite, CallFunc_IsValid_ReturnValue_5) == 0x000109, "Member 'BaseCharacterLite_C_ExecuteUbergraph_BaseCharacterLite::CallFunc_IsValid_ReturnValue_5' has a wrong offset!");

// Function BaseCharacterLite.BaseCharacterLite_C.OnSkinApplied_BP
// 0x0008 (0x0008 - 0x0000)
struct BaseCharacterLite_C_OnSkinApplied_BP final
{
public:
	class UMarinerSkinCollectionDataAsset*        SkinCollection;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseCharacterLite_C_OnSkinApplied_BP) == 0x000008, "Wrong alignment on BaseCharacterLite_C_OnSkinApplied_BP");
static_assert(sizeof(BaseCharacterLite_C_OnSkinApplied_BP) == 0x000008, "Wrong size on BaseCharacterLite_C_OnSkinApplied_BP");
static_assert(offsetof(BaseCharacterLite_C_OnSkinApplied_BP, SkinCollection) == 0x000000, "Member 'BaseCharacterLite_C_OnSkinApplied_BP::SkinCollection' has a wrong offset!");

// Function BaseCharacterLite.BaseCharacterLite_C.DestroyCustomPedestals
// 0x0002 (0x0002 - 0x0000)
struct BaseCharacterLite_C_DestroyCustomPedestals final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BaseCharacterLite_C_DestroyCustomPedestals) == 0x000001, "Wrong alignment on BaseCharacterLite_C_DestroyCustomPedestals");
static_assert(sizeof(BaseCharacterLite_C_DestroyCustomPedestals) == 0x000002, "Wrong size on BaseCharacterLite_C_DestroyCustomPedestals");
static_assert(offsetof(BaseCharacterLite_C_DestroyCustomPedestals, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'BaseCharacterLite_C_DestroyCustomPedestals::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_DestroyCustomPedestals, CallFunc_IsValid_ReturnValue_1) == 0x000001, "Member 'BaseCharacterLite_C_DestroyCustomPedestals::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function BaseCharacterLite.BaseCharacterLite_C.SetDefaultPedestalReferences
// 0x0010 (0x0010 - 0x0000)
struct BaseCharacterLite_C_SetDefaultPedestalReferences final
{
public:
	class ACharacterCustomizationPedestalInterior_C* Interior;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       Exterior;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BaseCharacterLite_C_SetDefaultPedestalReferences) == 0x000008, "Wrong alignment on BaseCharacterLite_C_SetDefaultPedestalReferences");
static_assert(sizeof(BaseCharacterLite_C_SetDefaultPedestalReferences) == 0x000010, "Wrong size on BaseCharacterLite_C_SetDefaultPedestalReferences");
static_assert(offsetof(BaseCharacterLite_C_SetDefaultPedestalReferences, Interior) == 0x000000, "Member 'BaseCharacterLite_C_SetDefaultPedestalReferences::Interior' has a wrong offset!");
static_assert(offsetof(BaseCharacterLite_C_SetDefaultPedestalReferences, Exterior) == 0x000008, "Member 'BaseCharacterLite_C_SetDefaultPedestalReferences::Exterior' has a wrong offset!");

}


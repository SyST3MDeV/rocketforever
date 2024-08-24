#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterCustomization_Skins

#include "Basic.hpp"


namespace SDK::Params
{

// Function CharacterCustomization_Skins.CharacterCustomization_Skins_C.ExecuteUbergraph_CharacterCustomization_Skins
// 0x00D8 (0x00D8 - 0x0000)
struct CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_233F[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerPlayableCharacter*              CallFunc_GetCurrentCharacter_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerStackHeader*                    CallFunc_GetHostStackHeader_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterStackHeader_C*                K2Node_DynamicCast_AsCharacter_Stack_Header;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_bToSubLayer;                          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2340[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerItemLoadResponseButton*         K2Node_Event_ButtonInstance;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterSkinButton_C*                 K2Node_DynamicCast_AsCharacter_Skin_Button;        // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2341[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMangoPlayerManager*                    CallFunc_Get_ReturnValue;                          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemLoadResponse*                      CallFunc_GetItemLoadResponse_ReturnValue;          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UMarinerSkinCollectionDataAsset> CallFunc_GetEquippedSkinForLocalProfile_ReturnValue; // 0x0050(0x0028)(HasGetValueTypeHash)
	class UFrontendSkinUILoadResponse*            K2Node_DynamicCast_AsFrontend_Skin_UILoad_Response; // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2342[0x7];                                     // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue; // 0x0088(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerSkinCollectionDataAsset*        CallFunc_GetSkinCollection_ReturnValue;            // 0x0090(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerSkinCollectionDataAsset*        K2Node_DynamicCast_AsMariner_Skin_Collection_Data_Asset; // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_3;                     // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2343[0x7];                                     // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerStackHeader*                    CallFunc_GetHostStackHeader_ReturnValue_1;         // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMarinerCharacterSpawner*               CallFunc_GetCharacterSpawner_ReturnValue;          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterStackHeader_C*                K2Node_DynamicCast_AsCharacter_Stack_Header_1;     // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_4;                     // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2344[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AMarinerCharacterSpawner*               CallFunc_GetCharacterSpawner_ReturnValue_1;        // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins) == 0x000008, "Wrong alignment on CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins");
static_assert(sizeof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins) == 0x0000D8, "Wrong size on CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, EntryPoint) == 0x000000, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::EntryPoint' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, CallFunc_GetCurrentCharacter_ReturnValue) == 0x000008, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::CallFunc_GetCurrentCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, CallFunc_GetHostStackHeader_ReturnValue) == 0x000010, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::CallFunc_GetHostStackHeader_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, K2Node_DynamicCast_AsCharacter_Stack_Header) == 0x000018, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::K2Node_DynamicCast_AsCharacter_Stack_Header' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, K2Node_Event_bToSubLayer) == 0x000021, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::K2Node_Event_bToSubLayer' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, K2Node_Event_ButtonInstance) == 0x000028, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::K2Node_Event_ButtonInstance' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, K2Node_DynamicCast_AsCharacter_Skin_Button) == 0x000030, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::K2Node_DynamicCast_AsCharacter_Skin_Button' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, K2Node_DynamicCast_bSuccess_1) == 0x000038, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, CallFunc_Get_ReturnValue) == 0x000040, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, CallFunc_GetItemLoadResponse_ReturnValue) == 0x000048, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::CallFunc_GetItemLoadResponse_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, CallFunc_GetEquippedSkinForLocalProfile_ReturnValue) == 0x000050, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::CallFunc_GetEquippedSkinForLocalProfile_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, K2Node_DynamicCast_AsFrontend_Skin_UILoad_Response) == 0x000078, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::K2Node_DynamicCast_AsFrontend_Skin_UILoad_Response' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, K2Node_DynamicCast_bSuccess_2) == 0x000080, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue) == 0x000088, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, CallFunc_GetSkinCollection_ReturnValue) == 0x000090, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::CallFunc_GetSkinCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, K2Node_DynamicCast_AsMariner_Skin_Collection_Data_Asset) == 0x000098, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::K2Node_DynamicCast_AsMariner_Skin_Collection_Data_Asset' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, K2Node_DynamicCast_bSuccess_3) == 0x0000A0, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::K2Node_DynamicCast_bSuccess_3' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, CallFunc_GetHostStackHeader_ReturnValue_1) == 0x0000A8, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::CallFunc_GetHostStackHeader_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, CallFunc_GetCharacterSpawner_ReturnValue) == 0x0000B0, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::CallFunc_GetCharacterSpawner_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, K2Node_DynamicCast_AsCharacter_Stack_Header_1) == 0x0000B8, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::K2Node_DynamicCast_AsCharacter_Stack_Header_1' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, K2Node_DynamicCast_bSuccess_4) == 0x0000C0, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::K2Node_DynamicCast_bSuccess_4' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, CallFunc_GetCharacterSpawner_ReturnValue_1) == 0x0000C8, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::CallFunc_GetCharacterSpawner_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'CharacterCustomization_Skins_C_ExecuteUbergraph_CharacterCustomization_Skins::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function CharacterCustomization_Skins.CharacterCustomization_Skins_C.VisualizeSelectedButton
// 0x0008 (0x0008 - 0x0000)
struct CharacterCustomization_Skins_C_VisualizeSelectedButton final
{
public:
	class UMarinerItemLoadResponseButton*         ButtonInstance;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterCustomization_Skins_C_VisualizeSelectedButton) == 0x000008, "Wrong alignment on CharacterCustomization_Skins_C_VisualizeSelectedButton");
static_assert(sizeof(CharacterCustomization_Skins_C_VisualizeSelectedButton) == 0x000008, "Wrong size on CharacterCustomization_Skins_C_VisualizeSelectedButton");
static_assert(offsetof(CharacterCustomization_Skins_C_VisualizeSelectedButton, ButtonInstance) == 0x000000, "Member 'CharacterCustomization_Skins_C_VisualizeSelectedButton::ButtonInstance' has a wrong offset!");

// Function CharacterCustomization_Skins.CharacterCustomization_Skins_C.BP_OnExited
// 0x0001 (0x0001 - 0x0000)
struct CharacterCustomization_Skins_C_BP_OnExited final
{
public:
	bool                                          bToSubLayer;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterCustomization_Skins_C_BP_OnExited) == 0x000001, "Wrong alignment on CharacterCustomization_Skins_C_BP_OnExited");
static_assert(sizeof(CharacterCustomization_Skins_C_BP_OnExited) == 0x000001, "Wrong size on CharacterCustomization_Skins_C_BP_OnExited");
static_assert(offsetof(CharacterCustomization_Skins_C_BP_OnExited, bToSubLayer) == 0x000000, "Member 'CharacterCustomization_Skins_C_BP_OnExited::bToSubLayer' has a wrong offset!");

}


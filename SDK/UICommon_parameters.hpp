#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UICommon

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UICommon.UICommon_C.GetUserSettings
// 0x0030 (0x0030 - 0x0000)
struct UICommon_C_GetUserSettings final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerGameUserSettings*               ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                          CallFunc_GetGameInstance_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerGameInstance*                   K2Node_DynamicCast_AsMariner_Game_Instance;        // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25CA[0x7];                                     // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerGameUserSettings*               CallFunc_GetUserSettings_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UICommon_C_GetUserSettings) == 0x000008, "Wrong alignment on UICommon_C_GetUserSettings");
static_assert(sizeof(UICommon_C_GetUserSettings) == 0x000030, "Wrong size on UICommon_C_GetUserSettings");
static_assert(offsetof(UICommon_C_GetUserSettings, __WorldContext) == 0x000000, "Member 'UICommon_C_GetUserSettings::__WorldContext' has a wrong offset!");
static_assert(offsetof(UICommon_C_GetUserSettings, ReturnValue) == 0x000008, "Member 'UICommon_C_GetUserSettings::ReturnValue' has a wrong offset!");
static_assert(offsetof(UICommon_C_GetUserSettings, CallFunc_GetGameInstance_ReturnValue) == 0x000010, "Member 'UICommon_C_GetUserSettings::CallFunc_GetGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UICommon_C_GetUserSettings, K2Node_DynamicCast_AsMariner_Game_Instance) == 0x000018, "Member 'UICommon_C_GetUserSettings::K2Node_DynamicCast_AsMariner_Game_Instance' has a wrong offset!");
static_assert(offsetof(UICommon_C_GetUserSettings, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'UICommon_C_GetUserSettings::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UICommon_C_GetUserSettings, CallFunc_GetUserSettings_ReturnValue) == 0x000028, "Member 'UICommon_C_GetUserSettings::CallFunc_GetUserSettings_ReturnValue' has a wrong offset!");

// Function UICommon.UICommon_C.ConvertCharacterIndexToRowCol
// 0x0020 (0x0020 - 0x0000)
struct UICommon_C_ConvertCharacterIndexToRowCol final
{
public:
	int32                                         NumColumns;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Index;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Row;                                               // 0x0010(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Column;                                            // 0x0014(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Percent_IntInt_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UICommon_C_ConvertCharacterIndexToRowCol) == 0x000008, "Wrong alignment on UICommon_C_ConvertCharacterIndexToRowCol");
static_assert(sizeof(UICommon_C_ConvertCharacterIndexToRowCol) == 0x000020, "Wrong size on UICommon_C_ConvertCharacterIndexToRowCol");
static_assert(offsetof(UICommon_C_ConvertCharacterIndexToRowCol, NumColumns) == 0x000000, "Member 'UICommon_C_ConvertCharacterIndexToRowCol::NumColumns' has a wrong offset!");
static_assert(offsetof(UICommon_C_ConvertCharacterIndexToRowCol, Param_Index) == 0x000004, "Member 'UICommon_C_ConvertCharacterIndexToRowCol::Param_Index' has a wrong offset!");
static_assert(offsetof(UICommon_C_ConvertCharacterIndexToRowCol, __WorldContext) == 0x000008, "Member 'UICommon_C_ConvertCharacterIndexToRowCol::__WorldContext' has a wrong offset!");
static_assert(offsetof(UICommon_C_ConvertCharacterIndexToRowCol, Row) == 0x000010, "Member 'UICommon_C_ConvertCharacterIndexToRowCol::Row' has a wrong offset!");
static_assert(offsetof(UICommon_C_ConvertCharacterIndexToRowCol, Column) == 0x000014, "Member 'UICommon_C_ConvertCharacterIndexToRowCol::Column' has a wrong offset!");
static_assert(offsetof(UICommon_C_ConvertCharacterIndexToRowCol, CallFunc_Percent_IntInt_ReturnValue) == 0x000018, "Member 'UICommon_C_ConvertCharacterIndexToRowCol::CallFunc_Percent_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UICommon_C_ConvertCharacterIndexToRowCol, CallFunc_Divide_IntInt_ReturnValue) == 0x00001C, "Member 'UICommon_C_ConvertCharacterIndexToRowCol::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");

// Function UICommon.UICommon_C.LootIconMaterialSetup
// 0x0190 (0x0190 - 0x0000)
struct UICommon_C_LootIconMaterialSetup final
{
public:
	class UMarinerCMSItemWithIcon*                CMSItem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LootCardMode;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25CB[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              Brush_Size;                                        // 0x000C(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25CC[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerLootCardDataAsset*              LootCardData;                                      // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0020(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            ResultingBrush;                                    // 0x0028(0x0088)(Parm, OutParm)
	class UTexture2D*                             Icon;                                              // 0x00B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ImageToUse;                                        // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25CD[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     ItemIconBaseMaterial;                              // 0x00C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25CE[0x7];                                     // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerCMSItemWithIconAndColor*        K2Node_DynamicCast_AsMariner_CMSItem_with_Icon_and_Color; // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25CF[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerRocketTotemSymbolsDataAsset*    K2Node_DynamicCast_AsMariner_Rocket_Totem_Symbols_Data_Asset; // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25D0[0x7];                                     // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerRocketTotemPatternDataAsset*    K2Node_DynamicCast_AsMariner_Rocket_Totem_Pattern_Data_Asset; // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_2;                     // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_25D1[0x3];                                     // 0x00F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Conv_BoolToFloat_ReturnValue;             // 0x00FC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x0100(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            K2Node_MakeStruct_SlateBrush;                      // 0x0108(0x0088)()
};
static_assert(alignof(UICommon_C_LootIconMaterialSetup) == 0x000008, "Wrong alignment on UICommon_C_LootIconMaterialSetup");
static_assert(sizeof(UICommon_C_LootIconMaterialSetup) == 0x000190, "Wrong size on UICommon_C_LootIconMaterialSetup");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, CMSItem) == 0x000000, "Member 'UICommon_C_LootIconMaterialSetup::CMSItem' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, LootCardMode) == 0x000008, "Member 'UICommon_C_LootIconMaterialSetup::LootCardMode' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, Brush_Size) == 0x00000C, "Member 'UICommon_C_LootIconMaterialSetup::Brush_Size' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, LootCardData) == 0x000018, "Member 'UICommon_C_LootIconMaterialSetup::LootCardData' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, __WorldContext) == 0x000020, "Member 'UICommon_C_LootIconMaterialSetup::__WorldContext' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, ResultingBrush) == 0x000028, "Member 'UICommon_C_LootIconMaterialSetup::ResultingBrush' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, Icon) == 0x0000B0, "Member 'UICommon_C_LootIconMaterialSetup::Icon' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, ImageToUse) == 0x0000B8, "Member 'UICommon_C_LootIconMaterialSetup::ImageToUse' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, ItemIconBaseMaterial) == 0x0000C0, "Member 'UICommon_C_LootIconMaterialSetup::ItemIconBaseMaterial' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, CallFunc_IsValid_ReturnValue) == 0x0000C8, "Member 'UICommon_C_LootIconMaterialSetup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, K2Node_DynamicCast_AsMariner_CMSItem_with_Icon_and_Color) == 0x0000D0, "Member 'UICommon_C_LootIconMaterialSetup::K2Node_DynamicCast_AsMariner_CMSItem_with_Icon_and_Color' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, K2Node_DynamicCast_bSuccess) == 0x0000D8, "Member 'UICommon_C_LootIconMaterialSetup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, K2Node_DynamicCast_AsMariner_Rocket_Totem_Symbols_Data_Asset) == 0x0000E0, "Member 'UICommon_C_LootIconMaterialSetup::K2Node_DynamicCast_AsMariner_Rocket_Totem_Symbols_Data_Asset' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, K2Node_DynamicCast_bSuccess_1) == 0x0000E8, "Member 'UICommon_C_LootIconMaterialSetup::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, K2Node_DynamicCast_AsMariner_Rocket_Totem_Pattern_Data_Asset) == 0x0000F0, "Member 'UICommon_C_LootIconMaterialSetup::K2Node_DynamicCast_AsMariner_Rocket_Totem_Pattern_Data_Asset' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, K2Node_DynamicCast_bSuccess_2) == 0x0000F8, "Member 'UICommon_C_LootIconMaterialSetup::K2Node_DynamicCast_bSuccess_2' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, CallFunc_Conv_BoolToFloat_ReturnValue) == 0x0000FC, "Member 'UICommon_C_LootIconMaterialSetup::CallFunc_Conv_BoolToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, CallFunc_CreateDynamicMaterialInstance_ReturnValue) == 0x000100, "Member 'UICommon_C_LootIconMaterialSetup::CallFunc_CreateDynamicMaterialInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(UICommon_C_LootIconMaterialSetup, K2Node_MakeStruct_SlateBrush) == 0x000108, "Member 'UICommon_C_LootIconMaterialSetup::K2Node_MakeStruct_SlateBrush' has a wrong offset!");

// Function UICommon.UICommon_C.ApplyTextOutlineColor
// 0x0090 (0x0090 - 0x0000)
struct UICommon_C_ApplyTextOutlineColor final
{
public:
	class UTextBlock*                             Textfield;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           OutlineColor;                                      // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0018(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFontOutlineSettings                   K2Node_MakeStruct_FontOutlineSettings;             // 0x0020(0x0020)(NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                         K2Node_MakeStruct_SlateFontInfo;                   // 0x0040(0x0050)(HasGetValueTypeHash)
};
static_assert(alignof(UICommon_C_ApplyTextOutlineColor) == 0x000008, "Wrong alignment on UICommon_C_ApplyTextOutlineColor");
static_assert(sizeof(UICommon_C_ApplyTextOutlineColor) == 0x000090, "Wrong size on UICommon_C_ApplyTextOutlineColor");
static_assert(offsetof(UICommon_C_ApplyTextOutlineColor, Textfield) == 0x000000, "Member 'UICommon_C_ApplyTextOutlineColor::Textfield' has a wrong offset!");
static_assert(offsetof(UICommon_C_ApplyTextOutlineColor, OutlineColor) == 0x000008, "Member 'UICommon_C_ApplyTextOutlineColor::OutlineColor' has a wrong offset!");
static_assert(offsetof(UICommon_C_ApplyTextOutlineColor, __WorldContext) == 0x000018, "Member 'UICommon_C_ApplyTextOutlineColor::__WorldContext' has a wrong offset!");
static_assert(offsetof(UICommon_C_ApplyTextOutlineColor, K2Node_MakeStruct_FontOutlineSettings) == 0x000020, "Member 'UICommon_C_ApplyTextOutlineColor::K2Node_MakeStruct_FontOutlineSettings' has a wrong offset!");
static_assert(offsetof(UICommon_C_ApplyTextOutlineColor, K2Node_MakeStruct_SlateFontInfo) == 0x000040, "Member 'UICommon_C_ApplyTextOutlineColor::K2Node_MakeStruct_SlateFontInfo' has a wrong offset!");

// Function UICommon.UICommon_C.ParseSpecialCharacters
// 0x0048 (0x0048 - 0x0000)
struct UICommon_C_ParseSpecialCharacters final
{
public:
	class FString                                 Input;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Output;                                            // 0x0018(0x0010)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                         CallFunc_ParseIntoArray_ReturnValue;               // 0x0028(0x0010)(ZeroConstructor, ReferenceParm)
	class FString                                 CallFunc_JoinStringArray_ReturnValue;              // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UICommon_C_ParseSpecialCharacters) == 0x000008, "Wrong alignment on UICommon_C_ParseSpecialCharacters");
static_assert(sizeof(UICommon_C_ParseSpecialCharacters) == 0x000048, "Wrong size on UICommon_C_ParseSpecialCharacters");
static_assert(offsetof(UICommon_C_ParseSpecialCharacters, Input) == 0x000000, "Member 'UICommon_C_ParseSpecialCharacters::Input' has a wrong offset!");
static_assert(offsetof(UICommon_C_ParseSpecialCharacters, __WorldContext) == 0x000010, "Member 'UICommon_C_ParseSpecialCharacters::__WorldContext' has a wrong offset!");
static_assert(offsetof(UICommon_C_ParseSpecialCharacters, Output) == 0x000018, "Member 'UICommon_C_ParseSpecialCharacters::Output' has a wrong offset!");
static_assert(offsetof(UICommon_C_ParseSpecialCharacters, CallFunc_ParseIntoArray_ReturnValue) == 0x000028, "Member 'UICommon_C_ParseSpecialCharacters::CallFunc_ParseIntoArray_ReturnValue' has a wrong offset!");
static_assert(offsetof(UICommon_C_ParseSpecialCharacters, CallFunc_JoinStringArray_ReturnValue) == 0x000038, "Member 'UICommon_C_ParseSpecialCharacters::CallFunc_JoinStringArray_ReturnValue' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProfileWidget

#include "Basic.hpp"

#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function ProfileWidget.ProfileWidget_C.ExecuteUbergraph_ProfileWidget
// 0x0068 (0x0068 - 0x0000)
struct ProfileWidget_C_ExecuteUbergraph_ProfileWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlatformPC_ReturnValue;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20B1[0x5];                                     // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UMangoInventoryManager*                 CallFunc_Get_ReturnValue;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetRocketParts_ReturnValue;               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20B2[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetRocketBucks_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_PreviousValue_1;                // 0x0024(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NewValue_1;                     // 0x0028(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 PreviousValue, int32 NewValue)> K2Node_CreateDelegate_OutputDelegate;              // 0x002C(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         K2Node_CustomEvent_PreviousValue;                  // 0x003C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_NewValue;                       // 0x0040(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20B3[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMangoInventoryManager*                 CallFunc_Get_ReturnValue_1;                        // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 PreviousValue, int32 NewValue)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_IsBetaBuild_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0061(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget) == 0x000008, "Wrong alignment on ProfileWidget_C_ExecuteUbergraph_ProfileWidget");
static_assert(sizeof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget) == 0x000068, "Wrong size on ProfileWidget_C_ExecuteUbergraph_ProfileWidget");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, EntryPoint) == 0x000000, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, CallFunc_IsPlatformPC_ReturnValue) == 0x000004, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::CallFunc_IsPlatformPC_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, Temp_bool_Variable) == 0x000005, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, Temp_byte_Variable) == 0x000006, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, Temp_byte_Variable_1) == 0x000007, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, Temp_bool_Variable_1) == 0x000008, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, Temp_byte_Variable_2) == 0x000009, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, Temp_byte_Variable_3) == 0x00000A, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, CallFunc_Get_ReturnValue) == 0x000010, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, CallFunc_GetRocketParts_ReturnValue) == 0x000018, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::CallFunc_GetRocketParts_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, K2Node_Select_Default) == 0x00001C, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, CallFunc_GetRocketBucks_ReturnValue) == 0x000020, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::CallFunc_GetRocketBucks_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, K2Node_CustomEvent_PreviousValue_1) == 0x000024, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::K2Node_CustomEvent_PreviousValue_1' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, K2Node_CustomEvent_NewValue_1) == 0x000028, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::K2Node_CustomEvent_NewValue_1' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, K2Node_CreateDelegate_OutputDelegate) == 0x00002C, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, K2Node_CustomEvent_PreviousValue) == 0x00003C, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::K2Node_CustomEvent_PreviousValue' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, K2Node_CustomEvent_NewValue) == 0x000040, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::K2Node_CustomEvent_NewValue' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, CallFunc_Get_ReturnValue_1) == 0x000048, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::CallFunc_Get_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000050, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, CallFunc_IsBetaBuild_ReturnValue) == 0x000060, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::CallFunc_IsBetaBuild_ReturnValue' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_ExecuteUbergraph_ProfileWidget, K2Node_Select_Default_1) == 0x000061, "Member 'ProfileWidget_C_ExecuteUbergraph_ProfileWidget::K2Node_Select_Default_1' has a wrong offset!");

// Function ProfileWidget.ProfileWidget_C.RocketBucksChanged
// 0x0008 (0x0008 - 0x0000)
struct ProfileWidget_C_RocketBucksChanged final
{
public:
	int32                                         PreviousValue;                                     // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewValue;                                          // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProfileWidget_C_RocketBucksChanged) == 0x000004, "Wrong alignment on ProfileWidget_C_RocketBucksChanged");
static_assert(sizeof(ProfileWidget_C_RocketBucksChanged) == 0x000008, "Wrong size on ProfileWidget_C_RocketBucksChanged");
static_assert(offsetof(ProfileWidget_C_RocketBucksChanged, PreviousValue) == 0x000000, "Member 'ProfileWidget_C_RocketBucksChanged::PreviousValue' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_RocketBucksChanged, NewValue) == 0x000004, "Member 'ProfileWidget_C_RocketBucksChanged::NewValue' has a wrong offset!");

// Function ProfileWidget.ProfileWidget_C.RocketPartsChanged
// 0x0008 (0x0008 - 0x0000)
struct ProfileWidget_C_RocketPartsChanged final
{
public:
	int32                                         PreviousValue;                                     // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         NewValue;                                          // 0x0004(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ProfileWidget_C_RocketPartsChanged) == 0x000004, "Wrong alignment on ProfileWidget_C_RocketPartsChanged");
static_assert(sizeof(ProfileWidget_C_RocketPartsChanged) == 0x000008, "Wrong size on ProfileWidget_C_RocketPartsChanged");
static_assert(offsetof(ProfileWidget_C_RocketPartsChanged, PreviousValue) == 0x000000, "Member 'ProfileWidget_C_RocketPartsChanged::PreviousValue' has a wrong offset!");
static_assert(offsetof(ProfileWidget_C_RocketPartsChanged, NewValue) == 0x000004, "Member 'ProfileWidget_C_RocketPartsChanged::NewValue' has a wrong offset!");

}


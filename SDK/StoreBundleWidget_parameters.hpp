#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreBundleWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MangoClient_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function StoreBundleWidget.StoreBundleWidget_C.ExecuteUbergraph_StoreBundleWidget
// 0x0030 (0x0030 - 0x0000)
struct StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F4C[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerMenuManager*                    CallFunc_GetMenuManager_ReturnValue;               // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IMarinerInputInterface> CallFunc_HandleInput_self_CastInput;               // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HandleInput_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget) == 0x000008, "Wrong alignment on StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget");
static_assert(sizeof(StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget) == 0x000030, "Wrong size on StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget");
static_assert(offsetof(StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget, EntryPoint) == 0x000000, "Member 'StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget::EntryPoint' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget, CallFunc_GetMenuManager_ReturnValue) == 0x000010, "Member 'StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget::CallFunc_GetMenuManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget, CallFunc_HandleInput_self_CastInput) == 0x000018, "Member 'StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget::CallFunc_HandleInput_self_CastInput' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget, CallFunc_HandleInput_ReturnValue) == 0x000028, "Member 'StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget::CallFunc_HandleInput_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget, CallFunc_BooleanAND_ReturnValue) == 0x000029, "Member 'StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget, CallFunc_BooleanAND_ReturnValue_1) == 0x00002A, "Member 'StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget, CallFunc_BooleanAND_ReturnValue_2) == 0x00002B, "Member 'StoreBundleWidget_C_ExecuteUbergraph_StoreBundleWidget::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function StoreBundleWidget.StoreBundleWidget_C.SetBundleOfferToShow
// 0x00C8 (0x00C8 - 0x0000)
struct StoreBundleWidget_C_SetBundleOfferToShow final
{
public:
	struct FMangoNativeOffer                      InOffer;                                           // 0x0000(0x00C0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          CanPurchase;                                       // 0x00C0(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_AllowMouseInteraction;                       // 0x00C1(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StoreBundleWidget_C_SetBundleOfferToShow) == 0x000008, "Wrong alignment on StoreBundleWidget_C_SetBundleOfferToShow");
static_assert(sizeof(StoreBundleWidget_C_SetBundleOfferToShow) == 0x0000C8, "Wrong size on StoreBundleWidget_C_SetBundleOfferToShow");
static_assert(offsetof(StoreBundleWidget_C_SetBundleOfferToShow, InOffer) == 0x000000, "Member 'StoreBundleWidget_C_SetBundleOfferToShow::InOffer' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_SetBundleOfferToShow, CanPurchase) == 0x0000C0, "Member 'StoreBundleWidget_C_SetBundleOfferToShow::CanPurchase' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_SetBundleOfferToShow, Param_AllowMouseInteraction) == 0x0000C1, "Member 'StoreBundleWidget_C_SetBundleOfferToShow::Param_AllowMouseInteraction' has a wrong offset!");

// Function StoreBundleWidget.StoreBundleWidget_C.Populate
// 0x01C8 (0x01C8 - 0x0000)
struct StoreBundleWidget_C_Populate final
{
public:
	bool                                          ReturnValue;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F4D[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F4E[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0028(0x0018)()
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0050(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0060(0x0028)()
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x0088(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMangoTxnManager*                       CallFunc_Get_ReturnValue;                          // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_ParseSpecialCharacters_Output;            // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00C8(0x0018)()
	class FText                                   CallFunc_GetDisplayPriceForNativeOfferId_ReturnValue; // 0x00E0(0x0018)()
	bool                                          Temp_bool_Variable_2;                              // 0x00F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F4F[0x7];                                     // 0x00F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default_1;                           // 0x0100(0x0018)()
	struct FLinearColor                           K2Node_Select_Default_2;                           // 0x0118(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerFrontEndGlobals*                CallFunc_GetFrontEndGlobals_ReturnValue;           // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerStoreGlobals*                   CallFunc_GetStoreGlobals_ReturnValue;              // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                            CallFunc_GetImage_ImageBrushOut;                   // 0x0138(0x0088)()
	bool                                          CallFunc_GetImage_ReturnValue;                     // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(StoreBundleWidget_C_Populate) == 0x000008, "Wrong alignment on StoreBundleWidget_C_Populate");
static_assert(sizeof(StoreBundleWidget_C_Populate) == 0x0001C8, "Wrong size on StoreBundleWidget_C_Populate");
static_assert(offsetof(StoreBundleWidget_C_Populate, ReturnValue) == 0x000000, "Member 'StoreBundleWidget_C_Populate::ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, Temp_bool_Variable) == 0x000001, "Member 'StoreBundleWidget_C_Populate::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, Temp_struct_Variable) == 0x000004, "Member 'StoreBundleWidget_C_Populate::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, Temp_struct_Variable_1) == 0x000014, "Member 'StoreBundleWidget_C_Populate::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, Temp_bool_Variable_1) == 0x000024, "Member 'StoreBundleWidget_C_Populate::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, Temp_text_Variable) == 0x000028, "Member 'StoreBundleWidget_C_Populate::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, Temp_struct_Variable_2) == 0x000040, "Member 'StoreBundleWidget_C_Populate::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, K2Node_Select_Default) == 0x000050, "Member 'StoreBundleWidget_C_Populate::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, K2Node_MakeStruct_SlateColor) == 0x000060, "Member 'StoreBundleWidget_C_Populate::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, Temp_struct_Variable_3) == 0x000088, "Member 'StoreBundleWidget_C_Populate::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, CallFunc_Get_ReturnValue) == 0x000098, "Member 'StoreBundleWidget_C_Populate::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, CallFunc_ParseSpecialCharacters_Output) == 0x0000A0, "Member 'StoreBundleWidget_C_Populate::CallFunc_ParseSpecialCharacters_Output' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'StoreBundleWidget_C_Populate::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000C8, "Member 'StoreBundleWidget_C_Populate::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, CallFunc_GetDisplayPriceForNativeOfferId_ReturnValue) == 0x0000E0, "Member 'StoreBundleWidget_C_Populate::CallFunc_GetDisplayPriceForNativeOfferId_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, Temp_bool_Variable_2) == 0x0000F8, "Member 'StoreBundleWidget_C_Populate::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, K2Node_Select_Default_1) == 0x000100, "Member 'StoreBundleWidget_C_Populate::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, K2Node_Select_Default_2) == 0x000118, "Member 'StoreBundleWidget_C_Populate::K2Node_Select_Default_2' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, CallFunc_GetFrontEndGlobals_ReturnValue) == 0x000128, "Member 'StoreBundleWidget_C_Populate::CallFunc_GetFrontEndGlobals_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, CallFunc_GetStoreGlobals_ReturnValue) == 0x000130, "Member 'StoreBundleWidget_C_Populate::CallFunc_GetStoreGlobals_ReturnValue' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, CallFunc_GetImage_ImageBrushOut) == 0x000138, "Member 'StoreBundleWidget_C_Populate::CallFunc_GetImage_ImageBrushOut' has a wrong offset!");
static_assert(offsetof(StoreBundleWidget_C_Populate, CallFunc_GetImage_ReturnValue) == 0x0001C0, "Member 'StoreBundleWidget_C_Populate::CallFunc_GetImage_ReturnValue' has a wrong offset!");

}


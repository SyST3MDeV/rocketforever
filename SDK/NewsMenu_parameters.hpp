#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NewsMenu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function NewsMenu.NewsMenu_C.ExecuteUbergraph_NewsMenu
// 0x0060 (0x0060 - 0x0000)
struct NewsMenu_C_ExecuteUbergraph_NewsMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20AD[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UOverlaySlot*                           K2Node_DynamicCast_AsOverlay_Slot;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20AE[0x3];                                     // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20AF[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TScriptInterface<class IMarinerInputInterface> CallFunc_SetActiveInputWidget_InputWidget_CastInput; // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         CallFunc_BreakVector2D_X;                          // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewsMenu_C_ExecuteUbergraph_NewsMenu) == 0x000008, "Wrong alignment on NewsMenu_C_ExecuteUbergraph_NewsMenu");
static_assert(sizeof(NewsMenu_C_ExecuteUbergraph_NewsMenu) == 0x000060, "Wrong size on NewsMenu_C_ExecuteUbergraph_NewsMenu");
static_assert(offsetof(NewsMenu_C_ExecuteUbergraph_NewsMenu, EntryPoint) == 0x000000, "Member 'NewsMenu_C_ExecuteUbergraph_NewsMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_ExecuteUbergraph_NewsMenu, K2Node_DynamicCast_AsOverlay_Slot) == 0x000008, "Member 'NewsMenu_C_ExecuteUbergraph_NewsMenu::K2Node_DynamicCast_AsOverlay_Slot' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_ExecuteUbergraph_NewsMenu, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'NewsMenu_C_ExecuteUbergraph_NewsMenu::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_ExecuteUbergraph_NewsMenu, K2Node_MakeStruct_Margin) == 0x000014, "Member 'NewsMenu_C_ExecuteUbergraph_NewsMenu::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_ExecuteUbergraph_NewsMenu, CallFunc_SetActiveInputWidget_InputWidget_CastInput) == 0x000028, "Member 'NewsMenu_C_ExecuteUbergraph_NewsMenu::CallFunc_SetActiveInputWidget_InputWidget_CastInput' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_ExecuteUbergraph_NewsMenu, CallFunc_GetViewportSize_ReturnValue) == 0x000038, "Member 'NewsMenu_C_ExecuteUbergraph_NewsMenu::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_ExecuteUbergraph_NewsMenu, K2Node_MakeStruct_Margin_1) == 0x000040, "Member 'NewsMenu_C_ExecuteUbergraph_NewsMenu::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_ExecuteUbergraph_NewsMenu, CallFunc_BreakVector2D_X) == 0x000050, "Member 'NewsMenu_C_ExecuteUbergraph_NewsMenu::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_ExecuteUbergraph_NewsMenu, CallFunc_BreakVector2D_Y) == 0x000054, "Member 'NewsMenu_C_ExecuteUbergraph_NewsMenu::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_ExecuteUbergraph_NewsMenu, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000058, "Member 'NewsMenu_C_ExecuteUbergraph_NewsMenu::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_ExecuteUbergraph_NewsMenu, CallFunc_Less_FloatFloat_ReturnValue) == 0x00005C, "Member 'NewsMenu_C_ExecuteUbergraph_NewsMenu::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");

// Function NewsMenu.NewsMenu_C.SetText
// 0x0030 (0x0030 - 0x0000)
struct NewsMenu_C_SetText final
{
public:
	class FText                                   Header;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   Description;                                       // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(NewsMenu_C_SetText) == 0x000008, "Wrong alignment on NewsMenu_C_SetText");
static_assert(sizeof(NewsMenu_C_SetText) == 0x000030, "Wrong size on NewsMenu_C_SetText");
static_assert(offsetof(NewsMenu_C_SetText, Header) == 0x000000, "Member 'NewsMenu_C_SetText::Header' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_SetText, Description) == 0x000018, "Member 'NewsMenu_C_SetText::Description' has a wrong offset!");

// Function NewsMenu.NewsMenu_C.Handle Aspect Ratio Change 
// 0x0040 (0x0040 - 0x0000)
struct NewsMenu_C_Handle_Aspect_Ratio_Change_ final
{
public:
	class UOverlaySlot*                           NewsWidget;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FMargin                                K2Node_MakeStruct_Margin_1;                        // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector2D                              CallFunc_GetViewportSize_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                              CallFunc_Conv_Vector2DToIntPoint_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(NewsMenu_C_Handle_Aspect_Ratio_Change_) == 0x000008, "Wrong alignment on NewsMenu_C_Handle_Aspect_Ratio_Change_");
static_assert(sizeof(NewsMenu_C_Handle_Aspect_Ratio_Change_) == 0x000040, "Wrong size on NewsMenu_C_Handle_Aspect_Ratio_Change_");
static_assert(offsetof(NewsMenu_C_Handle_Aspect_Ratio_Change_, NewsWidget) == 0x000000, "Member 'NewsMenu_C_Handle_Aspect_Ratio_Change_::NewsWidget' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_Handle_Aspect_Ratio_Change_, K2Node_MakeStruct_Margin) == 0x000008, "Member 'NewsMenu_C_Handle_Aspect_Ratio_Change_::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_Handle_Aspect_Ratio_Change_, K2Node_MakeStruct_Margin_1) == 0x000018, "Member 'NewsMenu_C_Handle_Aspect_Ratio_Change_::K2Node_MakeStruct_Margin_1' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_Handle_Aspect_Ratio_Change_, CallFunc_GetViewportSize_ReturnValue) == 0x000028, "Member 'NewsMenu_C_Handle_Aspect_Ratio_Change_::CallFunc_GetViewportSize_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_Handle_Aspect_Ratio_Change_, CallFunc_Conv_Vector2DToIntPoint_ReturnValue) == 0x000030, "Member 'NewsMenu_C_Handle_Aspect_Ratio_Change_::CallFunc_Conv_Vector2DToIntPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_Handle_Aspect_Ratio_Change_, CallFunc_Divide_IntInt_ReturnValue) == 0x000038, "Member 'NewsMenu_C_Handle_Aspect_Ratio_Change_::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(NewsMenu_C_Handle_Aspect_Ratio_Change_, CallFunc_Greater_IntInt_ReturnValue) == 0x00003C, "Member 'NewsMenu_C_Handle_Aspect_Ratio_Change_::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

}


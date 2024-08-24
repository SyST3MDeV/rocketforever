#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeProgress

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "MangoClient_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ChallengeProgress.ChallengeProgress_C.AnimationCompleteEvent__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct ChallengeProgress_C_AnimationCompleteEvent__DelegateSignature final
{
public:
	struct FMangoQuestDescription                 Quest;                                             // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ChallengeProgress_C_AnimationCompleteEvent__DelegateSignature) == 0x000008, "Wrong alignment on ChallengeProgress_C_AnimationCompleteEvent__DelegateSignature");
static_assert(sizeof(ChallengeProgress_C_AnimationCompleteEvent__DelegateSignature) == 0x000118, "Wrong size on ChallengeProgress_C_AnimationCompleteEvent__DelegateSignature");
static_assert(offsetof(ChallengeProgress_C_AnimationCompleteEvent__DelegateSignature, Quest) == 0x000000, "Member 'ChallengeProgress_C_AnimationCompleteEvent__DelegateSignature::Quest' has a wrong offset!");

// Function ChallengeProgress.ChallengeProgress_C.ChallengeCompleteEvent__DelegateSignature
// 0x0118 (0x0118 - 0x0000)
struct ChallengeProgress_C_ChallengeCompleteEvent__DelegateSignature final
{
public:
	struct FMangoQuestDescription                 Quest;                                             // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(ChallengeProgress_C_ChallengeCompleteEvent__DelegateSignature) == 0x000008, "Wrong alignment on ChallengeProgress_C_ChallengeCompleteEvent__DelegateSignature");
static_assert(sizeof(ChallengeProgress_C_ChallengeCompleteEvent__DelegateSignature) == 0x000118, "Wrong size on ChallengeProgress_C_ChallengeCompleteEvent__DelegateSignature");
static_assert(offsetof(ChallengeProgress_C_ChallengeCompleteEvent__DelegateSignature, Quest) == 0x000000, "Member 'ChallengeProgress_C_ChallengeCompleteEvent__DelegateSignature::Quest' has a wrong offset!");

// Function ChallengeProgress.ChallengeProgress_C.ExecuteUbergraph_ChallengeProgress
// 0x0060 (0x0060 - 0x0000)
struct ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0004(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue; // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Add_FloatFloat_ReturnValue;               // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress) == 0x000004, "Wrong alignment on ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress");
static_assert(sizeof(ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress) == 0x000060, "Wrong size on ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress");
static_assert(offsetof(ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress, EntryPoint) == 0x000000, "Member 'ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress::EntryPoint' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress, K2Node_Event_MyGeometry) == 0x000004, "Member 'ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress, K2Node_Event_InDeltaTime) == 0x00003C, "Member 'ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress, CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue) == 0x000040, "Member 'ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress::CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress, CallFunc_Divide_FloatFloat_ReturnValue) == 0x000044, "Member 'ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000048, "Member 'ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress, CallFunc_Subtract_IntInt_ReturnValue) == 0x00004C, "Member 'ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000050, "Member 'ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress, CallFunc_Conv_IntToFloat_ReturnValue_2) == 0x000054, "Member 'ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress::CallFunc_Conv_IntToFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress, CallFunc_Multiply_FloatFloat_ReturnValue) == 0x000058, "Member 'ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress::CallFunc_Multiply_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress, CallFunc_Add_FloatFloat_ReturnValue) == 0x00005C, "Member 'ChallengeProgress_C_ExecuteUbergraph_ChallengeProgress::CallFunc_Add_FloatFloat_ReturnValue' has a wrong offset!");

// Function ChallengeProgress.ChallengeProgress_C.Tick
// 0x003C (0x003C - 0x0000)
struct ChallengeProgress_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeProgress_C_Tick) == 0x000004, "Wrong alignment on ChallengeProgress_C_Tick");
static_assert(sizeof(ChallengeProgress_C_Tick) == 0x00003C, "Wrong size on ChallengeProgress_C_Tick");
static_assert(offsetof(ChallengeProgress_C_Tick, MyGeometry) == 0x000000, "Member 'ChallengeProgress_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Tick, InDeltaTime) == 0x000038, "Member 'ChallengeProgress_C_Tick::InDeltaTime' has a wrong offset!");

// Function ChallengeProgress.ChallengeProgress_C.SetProgress
// 0x00C8 (0x00C8 - 0x0000)
struct ChallengeProgress_C_SetProgress final
{
public:
	int32                                         CurrentProgress;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxProgress;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue;              // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_215E[0x4];                                     // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0050(0x0040)(HasGetValueTypeHash)
	float                                         CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_215F[0x4];                                     // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ZeroConstructor, ReferenceParm)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2160[0x4];                                     // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B0(0x0018)()
};
static_assert(alignof(ChallengeProgress_C_SetProgress) == 0x000008, "Wrong alignment on ChallengeProgress_C_SetProgress");
static_assert(sizeof(ChallengeProgress_C_SetProgress) == 0x0000C8, "Wrong size on ChallengeProgress_C_SetProgress");
static_assert(offsetof(ChallengeProgress_C_SetProgress, CurrentProgress) == 0x000000, "Member 'ChallengeProgress_C_SetProgress::CurrentProgress' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgress, MaxProgress) == 0x000004, "Member 'ChallengeProgress_C_SetProgress::MaxProgress' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgress, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'ChallengeProgress_C_SetProgress::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgress, CallFunc_Conv_IntToFloat_ReturnValue) == 0x000048, "Member 'ChallengeProgress_C_SetProgress::CallFunc_Conv_IntToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgress, K2Node_MakeStruct_FormatArgumentData_1) == 0x000050, "Member 'ChallengeProgress_C_SetProgress::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgress, CallFunc_Conv_IntToFloat_ReturnValue_1) == 0x000090, "Member 'ChallengeProgress_C_SetProgress::CallFunc_Conv_IntToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgress, K2Node_MakeArray_Array) == 0x000098, "Member 'ChallengeProgress_C_SetProgress::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgress, CallFunc_Divide_FloatFloat_ReturnValue) == 0x0000A8, "Member 'ChallengeProgress_C_SetProgress::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgress, CallFunc_Format_ReturnValue) == 0x0000B0, "Member 'ChallengeProgress_C_SetProgress::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function ChallengeProgress.ChallengeProgress_C.Init
// 0x0208 (0x0208 - 0x0000)
struct ChallengeProgress_C_Init final
{
public:
	struct FMangoQuestDescription                 Param_QuestDesc;                                   // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          AllowInput;                                        // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2161[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   Temp_text_Variable;                                // 0x0120(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0138(0x0018)()
	class FText                                   Temp_text_Variable_2;                              // 0x0150(0x0018)()
	class FText                                   Temp_text_Variable_3;                              // 0x0168(0x0018)()
	class FText                                   Temp_text_Variable_4;                              // 0x0180(0x0018)()
	class FText                                   Temp_text_Variable_5;                              // 0x0198(0x0018)()
	EMangoQuestSlot                               Temp_byte_Variable;                                // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2162[0x7];                                     // 0x01B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x01B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_DateTimeFromIsoString_Result;             // 0x01C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DateTimeFromIsoString_ReturnValue;        // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2163[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x01D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2164[0x3];                                     // 0x01D9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x01DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2165[0x6];                                     // 0x01E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x01E8(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0201(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0202(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeProgress_C_Init) == 0x000008, "Wrong alignment on ChallengeProgress_C_Init");
static_assert(sizeof(ChallengeProgress_C_Init) == 0x000208, "Wrong size on ChallengeProgress_C_Init");
static_assert(offsetof(ChallengeProgress_C_Init, Param_QuestDesc) == 0x000000, "Member 'ChallengeProgress_C_Init::Param_QuestDesc' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, AllowInput) == 0x000118, "Member 'ChallengeProgress_C_Init::AllowInput' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, Temp_text_Variable) == 0x000120, "Member 'ChallengeProgress_C_Init::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, Temp_text_Variable_1) == 0x000138, "Member 'ChallengeProgress_C_Init::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, Temp_text_Variable_2) == 0x000150, "Member 'ChallengeProgress_C_Init::Temp_text_Variable_2' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, Temp_text_Variable_3) == 0x000168, "Member 'ChallengeProgress_C_Init::Temp_text_Variable_3' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, Temp_text_Variable_4) == 0x000180, "Member 'ChallengeProgress_C_Init::Temp_text_Variable_4' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, Temp_text_Variable_5) == 0x000198, "Member 'ChallengeProgress_C_Init::Temp_text_Variable_5' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, Temp_byte_Variable) == 0x0001B0, "Member 'ChallengeProgress_C_Init::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, CallFunc_UtcNow_ReturnValue) == 0x0001B8, "Member 'ChallengeProgress_C_Init::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, CallFunc_DateTimeFromIsoString_Result) == 0x0001C0, "Member 'ChallengeProgress_C_Init::CallFunc_DateTimeFromIsoString_Result' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, CallFunc_DateTimeFromIsoString_ReturnValue) == 0x0001C8, "Member 'ChallengeProgress_C_Init::CallFunc_DateTimeFromIsoString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x0001D0, "Member 'ChallengeProgress_C_Init::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, K2Node_SwitchEnum_CmpSuccess) == 0x0001D8, "Member 'ChallengeProgress_C_Init::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, CallFunc_GetTotalSeconds_ReturnValue) == 0x0001DC, "Member 'ChallengeProgress_C_Init::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, CallFunc_Greater_FloatFloat_ReturnValue) == 0x0001E0, "Member 'ChallengeProgress_C_Init::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, Temp_byte_Variable_1) == 0x0001E1, "Member 'ChallengeProgress_C_Init::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, K2Node_Select_Default) == 0x0001E8, "Member 'ChallengeProgress_C_Init::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, Temp_byte_Variable_2) == 0x000200, "Member 'ChallengeProgress_C_Init::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, Temp_bool_Variable) == 0x000201, "Member 'ChallengeProgress_C_Init::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_Init, K2Node_Select_Default_1) == 0x000202, "Member 'ChallengeProgress_C_Init::K2Node_Select_Default_1' has a wrong offset!");

// Function ChallengeProgress.ChallengeProgress_C.UpdateResetPanelVisibility
// 0x0038 (0x0038 - 0x0000)
struct ChallengeProgress_C_UpdateResetPanelVisibility final
{
public:
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2166[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2167[0x5];                                     // 0x0013(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_DateTimeFromIsoString_Result;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DateTimeFromIsoString_ReturnValue;        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2168[0x6];                                     // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeProgress_C_UpdateResetPanelVisibility) == 0x000008, "Wrong alignment on ChallengeProgress_C_UpdateResetPanelVisibility");
static_assert(sizeof(ChallengeProgress_C_UpdateResetPanelVisibility) == 0x000038, "Wrong size on ChallengeProgress_C_UpdateResetPanelVisibility");
static_assert(offsetof(ChallengeProgress_C_UpdateResetPanelVisibility, Temp_byte_Variable) == 0x000000, "Member 'ChallengeProgress_C_UpdateResetPanelVisibility::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_UpdateResetPanelVisibility, CallFunc_UtcNow_ReturnValue) == 0x000008, "Member 'ChallengeProgress_C_UpdateResetPanelVisibility::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_UpdateResetPanelVisibility, Temp_byte_Variable_1) == 0x000010, "Member 'ChallengeProgress_C_UpdateResetPanelVisibility::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_UpdateResetPanelVisibility, Temp_bool_Variable) == 0x000011, "Member 'ChallengeProgress_C_UpdateResetPanelVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_UpdateResetPanelVisibility, K2Node_SwitchEnum_CmpSuccess) == 0x000012, "Member 'ChallengeProgress_C_UpdateResetPanelVisibility::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_UpdateResetPanelVisibility, CallFunc_DateTimeFromIsoString_Result) == 0x000018, "Member 'ChallengeProgress_C_UpdateResetPanelVisibility::CallFunc_DateTimeFromIsoString_Result' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_UpdateResetPanelVisibility, CallFunc_DateTimeFromIsoString_ReturnValue) == 0x000020, "Member 'ChallengeProgress_C_UpdateResetPanelVisibility::CallFunc_DateTimeFromIsoString_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_UpdateResetPanelVisibility, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000021, "Member 'ChallengeProgress_C_UpdateResetPanelVisibility::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_UpdateResetPanelVisibility, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x000028, "Member 'ChallengeProgress_C_UpdateResetPanelVisibility::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_UpdateResetPanelVisibility, CallFunc_GetTotalSeconds_ReturnValue) == 0x000030, "Member 'ChallengeProgress_C_UpdateResetPanelVisibility::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_UpdateResetPanelVisibility, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000034, "Member 'ChallengeProgress_C_UpdateResetPanelVisibility::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_UpdateResetPanelVisibility, K2Node_Select_Default) == 0x000035, "Member 'ChallengeProgress_C_UpdateResetPanelVisibility::K2Node_Select_Default' has a wrong offset!");

// Function ChallengeProgress.ChallengeProgress_C.AnimateToGoal
// 0x0168 (0x0168 - 0x0000)
struct ChallengeProgress_C_AnimateToGoal final
{
public:
	struct FMangoQuestDescription                 QuestGoal;                                         // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	TDelegate<void(const struct FMangoQuestDescription& Quest)> AnimationCompleteEvent1;                           // 0x0118(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	TDelegate<void(const struct FMangoQuestDescription& Quest)> AnimationCompleteEvent2;                           // 0x0128(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	TDelegate<void(const struct FMangoQuestDescription& Quest)> Param_ChallengeCompleteEvent;                      // 0x0138(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0150(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0160(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ChallengeProgress_C_AnimateToGoal) == 0x000008, "Wrong alignment on ChallengeProgress_C_AnimateToGoal");
static_assert(sizeof(ChallengeProgress_C_AnimateToGoal) == 0x000168, "Wrong size on ChallengeProgress_C_AnimateToGoal");
static_assert(offsetof(ChallengeProgress_C_AnimateToGoal, QuestGoal) == 0x000000, "Member 'ChallengeProgress_C_AnimateToGoal::QuestGoal' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_AnimateToGoal, AnimationCompleteEvent1) == 0x000118, "Member 'ChallengeProgress_C_AnimateToGoal::AnimationCompleteEvent1' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_AnimateToGoal, AnimationCompleteEvent2) == 0x000128, "Member 'ChallengeProgress_C_AnimateToGoal::AnimationCompleteEvent2' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_AnimateToGoal, Param_ChallengeCompleteEvent) == 0x000138, "Member 'ChallengeProgress_C_AnimateToGoal::Param_ChallengeCompleteEvent' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_AnimateToGoal, CallFunc_PlayAnimation_ReturnValue) == 0x000148, "Member 'ChallengeProgress_C_AnimateToGoal::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_AnimateToGoal, K2Node_CreateDelegate_OutputDelegate) == 0x000150, "Member 'ChallengeProgress_C_AnimateToGoal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_AnimateToGoal, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000160, "Member 'ChallengeProgress_C_AnimateToGoal::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

// Function ChallengeProgress.ChallengeProgress_C.AnimationComplete
// 0x0020 (0x0020 - 0x0000)
struct ChallengeProgress_C_AnimationComplete final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ChallengeProgress_C_AnimationComplete) == 0x000008, "Wrong alignment on ChallengeProgress_C_AnimationComplete");
static_assert(sizeof(ChallengeProgress_C_AnimationComplete) == 0x000020, "Wrong size on ChallengeProgress_C_AnimationComplete");
static_assert(offsetof(ChallengeProgress_C_AnimationComplete, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'ChallengeProgress_C_AnimationComplete::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_AnimationComplete, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000010, "Member 'ChallengeProgress_C_AnimationComplete::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_AnimationComplete, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000018, "Member 'ChallengeProgress_C_AnimationComplete::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function ChallengeProgress.ChallengeProgress_C.SetProgressFromAnimation
// 0x00C0 (0x00C0 - 0x0000)
struct ChallengeProgress_C_SetProgressFromAnimation final
{
public:
	float                                         CurrentProgress;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxProgress;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_FCeil_ReturnValue;                        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Divide_FloatFloat_ReturnValue;            // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0040)(HasGetValueTypeHash)
	int32                                         CallFunc_FFloor_ReturnValue;                       // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2169[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0058(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A8(0x0018)()
};
static_assert(alignof(ChallengeProgress_C_SetProgressFromAnimation) == 0x000008, "Wrong alignment on ChallengeProgress_C_SetProgressFromAnimation");
static_assert(sizeof(ChallengeProgress_C_SetProgressFromAnimation) == 0x0000C0, "Wrong size on ChallengeProgress_C_SetProgressFromAnimation");
static_assert(offsetof(ChallengeProgress_C_SetProgressFromAnimation, CurrentProgress) == 0x000000, "Member 'ChallengeProgress_C_SetProgressFromAnimation::CurrentProgress' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgressFromAnimation, MaxProgress) == 0x000004, "Member 'ChallengeProgress_C_SetProgressFromAnimation::MaxProgress' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgressFromAnimation, CallFunc_FCeil_ReturnValue) == 0x000008, "Member 'ChallengeProgress_C_SetProgressFromAnimation::CallFunc_FCeil_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgressFromAnimation, CallFunc_Divide_FloatFloat_ReturnValue) == 0x00000C, "Member 'ChallengeProgress_C_SetProgressFromAnimation::CallFunc_Divide_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgressFromAnimation, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'ChallengeProgress_C_SetProgressFromAnimation::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgressFromAnimation, CallFunc_FFloor_ReturnValue) == 0x000050, "Member 'ChallengeProgress_C_SetProgressFromAnimation::CallFunc_FFloor_ReturnValue' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgressFromAnimation, K2Node_MakeStruct_FormatArgumentData_1) == 0x000058, "Member 'ChallengeProgress_C_SetProgressFromAnimation::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgressFromAnimation, K2Node_MakeArray_Array) == 0x000098, "Member 'ChallengeProgress_C_SetProgressFromAnimation::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ChallengeProgress_C_SetProgressFromAnimation, CallFunc_Format_ReturnValue) == 0x0000A8, "Member 'ChallengeProgress_C_SetProgressFromAnimation::CallFunc_Format_ReturnValue' has a wrong offset!");

}


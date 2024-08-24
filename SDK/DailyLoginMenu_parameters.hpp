#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyLoginMenu

#include "Basic.hpp"

#include "InputCore_structs.hpp"
#include "Mariner_structs.hpp"
#include "Engine_structs.hpp"
#include "MangoClient_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function DailyLoginMenu.DailyLoginMenu_C.ExecuteUbergraph_DailyLoginMenu
// 0x06F8 (0x06F8 - 0x0000)
struct DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_211E[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDateTime                              CallFunc_UtcNow_ReturnValue;                       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMangoQuestManager*                     CallFunc_Get_ReturnValue;                          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_bWasSuccessful;                 // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_211F[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMangoQuestDescription                 K2Node_CustomEvent_NewQuest;                       // 0x0020(0x0118)(ConstParm)
	class FName                                   K2Node_CustomEvent_GrantedRewardId;                // 0x0138(0x0008)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMangoCMSManager*                       CallFunc_Get_ReturnValue_1;                        // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2120[0x7];                                     // 0x0149(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMangoLoginReward                      CallFunc_GetLoginReward_OutLoginReward;            // 0x0150(0x00D8)()
	bool                                          CallFunc_GetLoginReward_ReturnValue;               // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0229(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2121[0x2];                                     // 0x022A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate;              // 0x022C(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          K2Node_Event_bFromSubMenu;                         // 0x023C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2122[0x3];                                     // 0x023D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarinerMessageBoxData                 K2Node_MakeStruct_MarinerMessageBoxData;           // 0x0240(0x0170)(ContainsInstancedReference)
	TScriptInterface<class IMarinerInputInterface> CallFunc_SetActiveInputWidget_InputWidget_CastInput; // 0x03B0(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate_1;            // 0x03C0(0x0010)(ZeroConstructor, NoDestructor)
	struct FMarinerMessageBoxQuestRewardData      K2Node_MakeStruct_MarinerMessageBoxQuestRewardData; // 0x03D0(0x0180)(ContainsInstancedReference)
	struct FKey                                   K2Node_CustomEvent_KeyPressed;                     // 0x0550(0x0018)(ConstParm, HasGetValueTypeHash)
	TDelegate<void(bool bWasSuccessful, struct FMangoQuestDescription& NewQuest, class FName& GrantedRewardId)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0568(0x0010)(ZeroConstructor, NoDestructor)
	class UMangoQuestManager*                     CallFunc_Get_ReturnValue_2;                        // 0x0578(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_MakeTimespan_ReturnValue;                 // 0x0580(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FMangoQuestDescription                 CallFunc_GetQuestDescriptionBySlotId_ReturnValue;  // 0x0588(0x0118)()
	class UMarinerGameInstance*                   CallFunc_GetMarinerGameInstance_ReturnValue;       // 0x06A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDateTime                              CallFunc_DateTimeFromIsoString_Result;             // 0x06A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_DateTimeFromIsoString_ReturnValue;        // 0x06B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2123[0x7];                                     // 0x06B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerMessageBoxManager*              CallFunc_GetMessageBoxManager_ReturnValue;         // 0x06B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x06C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimespan                              CallFunc_Add_TimespanTimespan_ReturnValue;         // 0x06C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_RemoveMessageBox_ReturnValue;             // 0x06D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2124[0x3];                                     // 0x06D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_GetTotalSeconds_ReturnValue;              // 0x06D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerGameInstance*                   CallFunc_GetMarinerGameInstance_ReturnValue_1;     // 0x06D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerMessageBoxManager*              CallFunc_GetMessageBoxManager_ReturnValue_1;       // 0x06E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerGameInstance*                   CallFunc_GetMarinerGameInstance_ReturnValue_2;     // 0x06E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ShowQuestRewardMessageBox_ReturnValue;    // 0x06F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu) == 0x000008, "Wrong alignment on DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu");
static_assert(sizeof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu) == 0x0006F8, "Wrong size on DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, EntryPoint) == 0x000000, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::EntryPoint' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_UtcNow_ReturnValue) == 0x000008, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_UtcNow_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_Get_ReturnValue) == 0x000010, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, K2Node_CustomEvent_bWasSuccessful) == 0x000018, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::K2Node_CustomEvent_bWasSuccessful' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, K2Node_CustomEvent_NewQuest) == 0x000020, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::K2Node_CustomEvent_NewQuest' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, K2Node_CustomEvent_GrantedRewardId) == 0x000138, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::K2Node_CustomEvent_GrantedRewardId' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_Get_ReturnValue_1) == 0x000140, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_Get_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_NotEqual_NameName_ReturnValue) == 0x000148, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_GetLoginReward_OutLoginReward) == 0x000150, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_GetLoginReward_OutLoginReward' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_GetLoginReward_ReturnValue) == 0x000228, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_GetLoginReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_BooleanAND_ReturnValue) == 0x000229, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, K2Node_CreateDelegate_OutputDelegate) == 0x00022C, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, K2Node_Event_bFromSubMenu) == 0x00023C, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::K2Node_Event_bFromSubMenu' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, K2Node_MakeStruct_MarinerMessageBoxData) == 0x000240, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::K2Node_MakeStruct_MarinerMessageBoxData' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_SetActiveInputWidget_InputWidget_CastInput) == 0x0003B0, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_SetActiveInputWidget_InputWidget_CastInput' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, K2Node_CreateDelegate_OutputDelegate_1) == 0x0003C0, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, K2Node_MakeStruct_MarinerMessageBoxQuestRewardData) == 0x0003D0, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::K2Node_MakeStruct_MarinerMessageBoxQuestRewardData' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, K2Node_CustomEvent_KeyPressed) == 0x000550, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::K2Node_CustomEvent_KeyPressed' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, K2Node_CreateDelegate_OutputDelegate_2) == 0x000568, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_Get_ReturnValue_2) == 0x000578, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_Get_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_MakeTimespan_ReturnValue) == 0x000580, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_MakeTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_GetQuestDescriptionBySlotId_ReturnValue) == 0x000588, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_GetQuestDescriptionBySlotId_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_GetMarinerGameInstance_ReturnValue) == 0x0006A0, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_GetMarinerGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_DateTimeFromIsoString_Result) == 0x0006A8, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_DateTimeFromIsoString_Result' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_DateTimeFromIsoString_ReturnValue) == 0x0006B0, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_DateTimeFromIsoString_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_GetMessageBoxManager_ReturnValue) == 0x0006B8, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_GetMessageBoxManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_Subtract_DateTimeDateTime_ReturnValue) == 0x0006C0, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_Subtract_DateTimeDateTime_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_Add_TimespanTimespan_ReturnValue) == 0x0006C8, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_Add_TimespanTimespan_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_RemoveMessageBox_ReturnValue) == 0x0006D0, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_RemoveMessageBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_GetTotalSeconds_ReturnValue) == 0x0006D4, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_GetTotalSeconds_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_GetMarinerGameInstance_ReturnValue_1) == 0x0006D8, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_GetMarinerGameInstance_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_GetMessageBoxManager_ReturnValue_1) == 0x0006E0, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_GetMessageBoxManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_GetMarinerGameInstance_ReturnValue_2) == 0x0006E8, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_GetMarinerGameInstance_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu, CallFunc_ShowQuestRewardMessageBox_ReturnValue) == 0x0006F0, "Member 'DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu::CallFunc_ShowQuestRewardMessageBox_ReturnValue' has a wrong offset!");

// Function DailyLoginMenu.DailyLoginMenu_C.Callback
// 0x0018 (0x0018 - 0x0000)
struct DailyLoginMenu_C_Callback final
{
public:
	struct FKey                                   KeyPressed;                                        // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(DailyLoginMenu_C_Callback) == 0x000008, "Wrong alignment on DailyLoginMenu_C_Callback");
static_assert(sizeof(DailyLoginMenu_C_Callback) == 0x000018, "Wrong size on DailyLoginMenu_C_Callback");
static_assert(offsetof(DailyLoginMenu_C_Callback, KeyPressed) == 0x000000, "Member 'DailyLoginMenu_C_Callback::KeyPressed' has a wrong offset!");

// Function DailyLoginMenu.DailyLoginMenu_C.BP_OnEntered
// 0x0001 (0x0001 - 0x0000)
struct DailyLoginMenu_C_BP_OnEntered final
{
public:
	bool                                          bFromSubMenu;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DailyLoginMenu_C_BP_OnEntered) == 0x000001, "Wrong alignment on DailyLoginMenu_C_BP_OnEntered");
static_assert(sizeof(DailyLoginMenu_C_BP_OnEntered) == 0x000001, "Wrong size on DailyLoginMenu_C_BP_OnEntered");
static_assert(offsetof(DailyLoginMenu_C_BP_OnEntered, bFromSubMenu) == 0x000000, "Member 'DailyLoginMenu_C_BP_OnEntered::bFromSubMenu' has a wrong offset!");

// Function DailyLoginMenu.DailyLoginMenu_C.SetRewardCompleted
// 0x0128 (0x0128 - 0x0000)
struct DailyLoginMenu_C_SetRewardCompleted final
{
public:
	bool                                          bWasSuccessful;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2125[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMangoQuestDescription                 NewQuest;                                          // 0x0008(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FName                                   GrantedRewardId;                                   // 0x0120(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DailyLoginMenu_C_SetRewardCompleted) == 0x000008, "Wrong alignment on DailyLoginMenu_C_SetRewardCompleted");
static_assert(sizeof(DailyLoginMenu_C_SetRewardCompleted) == 0x000128, "Wrong size on DailyLoginMenu_C_SetRewardCompleted");
static_assert(offsetof(DailyLoginMenu_C_SetRewardCompleted, bWasSuccessful) == 0x000000, "Member 'DailyLoginMenu_C_SetRewardCompleted::bWasSuccessful' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_SetRewardCompleted, NewQuest) == 0x000008, "Member 'DailyLoginMenu_C_SetRewardCompleted::NewQuest' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_SetRewardCompleted, GrantedRewardId) == 0x000120, "Member 'DailyLoginMenu_C_SetRewardCompleted::GrantedRewardId' has a wrong offset!");

// Function DailyLoginMenu.DailyLoginMenu_C.BuildContent
// 0x0480 (0x0480 - 0x0000)
struct DailyLoginMenu_C_BuildContent final
{
public:
	TDelegate<void(class UDailyRewardWidget_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2126[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarinerPromptData                     K2Node_MakeStruct_MarinerPromptData;               // 0x0018(0x0118)()
	bool                                          CallFunc_AddHostPrompt_ReturnValue;                // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_ClearHostPrompts_ReturnValue;             // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2127[0x6];                                     // 0x0132(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UDailyRewardWidget_C*                   CallFunc_Create_ReturnValue;                       // 0x0138(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   Temp_text_Variable;                                // 0x0140(0x0018)()
	class FText                                   Temp_text_Variable_1;                              // 0x0158(0x0018)()
	class UMangoQuestManager*                     CallFunc_Get_ReturnValue;                          // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMangoQuestDescription                 CallFunc_GetQuestDescriptionBySlotId_ReturnValue;  // 0x0178(0x0118)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0290(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2128[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0298(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x02D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2129[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x02E0(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x02F0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x02F4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_212A[0x3];                                     // 0x02F5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   K2Node_Select_Default;                             // 0x02F8(0x0018)()
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0310(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0318(0x0018)()
	class UMangoCMSManager*                       CallFunc_Get_ReturnValue_1;                        // 0x0330(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FMangoLoginReward>   CallFunc_GetLoginRewards_ReturnValue;              // 0x0338(0x0050)(ConstParm, ZeroConstructor)
	TArray<struct FMangoLoginReward>              CallFunc_Map_Values_Values;                        // 0x0388(0x0010)(ZeroConstructor, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0398(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_212B[0x4];                                     // 0x039C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMangoLoginReward                      CallFunc_Array_Get_Item;                           // 0x03A0(0x00D8)()
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0478(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_PopulateReward_IsActiveReward;            // 0x0479(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DailyLoginMenu_C_BuildContent) == 0x000008, "Wrong alignment on DailyLoginMenu_C_BuildContent");
static_assert(sizeof(DailyLoginMenu_C_BuildContent) == 0x000480, "Wrong size on DailyLoginMenu_C_BuildContent");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'DailyLoginMenu_C_BuildContent::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, Temp_int_Array_Index_Variable) == 0x000010, "Member 'DailyLoginMenu_C_BuildContent::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, K2Node_MakeStruct_MarinerPromptData) == 0x000018, "Member 'DailyLoginMenu_C_BuildContent::K2Node_MakeStruct_MarinerPromptData' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_AddHostPrompt_ReturnValue) == 0x000130, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_AddHostPrompt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_ClearHostPrompts_ReturnValue) == 0x000131, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_ClearHostPrompts_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_Create_ReturnValue) == 0x000138, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, Temp_text_Variable) == 0x000140, "Member 'DailyLoginMenu_C_BuildContent::Temp_text_Variable' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, Temp_text_Variable_1) == 0x000158, "Member 'DailyLoginMenu_C_BuildContent::Temp_text_Variable_1' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_Get_ReturnValue) == 0x000170, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_GetQuestDescriptionBySlotId_ReturnValue) == 0x000178, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_GetQuestDescriptionBySlotId_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, Temp_int_Loop_Counter_Variable) == 0x000290, "Member 'DailyLoginMenu_C_BuildContent::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, K2Node_MakeStruct_FormatArgumentData) == 0x000298, "Member 'DailyLoginMenu_C_BuildContent::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0002D8, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, K2Node_MakeArray_Array) == 0x0002E0, "Member 'DailyLoginMenu_C_BuildContent::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_Add_IntInt_ReturnValue) == 0x0002F0, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, Temp_bool_Variable) == 0x0002F4, "Member 'DailyLoginMenu_C_BuildContent::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, K2Node_Select_Default) == 0x0002F8, "Member 'DailyLoginMenu_C_BuildContent::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000310, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_Format_ReturnValue) == 0x000318, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_Get_ReturnValue_1) == 0x000330, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_Get_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_GetLoginRewards_ReturnValue) == 0x000338, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_GetLoginRewards_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_Map_Values_Values) == 0x000388, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_Array_Length_ReturnValue) == 0x000398, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_Array_Get_Item) == 0x0003A0, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_Less_IntInt_ReturnValue) == 0x000478, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_BuildContent, CallFunc_PopulateReward_IsActiveReward) == 0x000479, "Member 'DailyLoginMenu_C_BuildContent::CallFunc_PopulateReward_IsActiveReward' has a wrong offset!");

// Function DailyLoginMenu.DailyLoginMenu_C.SetRewardGoal
// 0x02D8 (0x02D8 - 0x0000)
struct DailyLoginMenu_C_SetRewardGoal final
{
public:
	class UDailyRewardWidget_C*                   Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor)
	struct FMarinerMessageBoxData                 K2Node_MakeStruct_MarinerMessageBoxData;           // 0x0038(0x0170)(ContainsInstancedReference)
	class UMarinerGameInstance*                   CallFunc_GetMarinerGameInstance_ReturnValue;       // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMangoQuestManager*                     CallFunc_Get_ReturnValue;                          // 0x01B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMangoQuestDescription                 CallFunc_GetQuestDescriptionBySlotId_ReturnValue;  // 0x01B8(0x0118)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x02D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DailyLoginMenu_C_SetRewardGoal) == 0x000008, "Wrong alignment on DailyLoginMenu_C_SetRewardGoal");
static_assert(sizeof(DailyLoginMenu_C_SetRewardGoal) == 0x0002D8, "Wrong size on DailyLoginMenu_C_SetRewardGoal");
static_assert(offsetof(DailyLoginMenu_C_SetRewardGoal, Widget) == 0x000000, "Member 'DailyLoginMenu_C_SetRewardGoal::Widget' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_SetRewardGoal, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'DailyLoginMenu_C_SetRewardGoal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_SetRewardGoal, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'DailyLoginMenu_C_SetRewardGoal::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_SetRewardGoal, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'DailyLoginMenu_C_SetRewardGoal::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_SetRewardGoal, K2Node_MakeStruct_MarinerMessageBoxData) == 0x000038, "Member 'DailyLoginMenu_C_SetRewardGoal::K2Node_MakeStruct_MarinerMessageBoxData' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_SetRewardGoal, CallFunc_GetMarinerGameInstance_ReturnValue) == 0x0001A8, "Member 'DailyLoginMenu_C_SetRewardGoal::CallFunc_GetMarinerGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_SetRewardGoal, CallFunc_Get_ReturnValue) == 0x0001B0, "Member 'DailyLoginMenu_C_SetRewardGoal::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_SetRewardGoal, CallFunc_GetQuestDescriptionBySlotId_ReturnValue) == 0x0001B8, "Member 'DailyLoginMenu_C_SetRewardGoal::CallFunc_GetQuestDescriptionBySlotId_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_SetRewardGoal, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0002D0, "Member 'DailyLoginMenu_C_SetRewardGoal::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");

// Function DailyLoginMenu.DailyLoginMenu_C.ConfirmSetReward
// 0x0018 (0x0018 - 0x0000)
struct DailyLoginMenu_C_ConfirmSetReward final
{
public:
	struct FKey                                   KeyPressed;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(DailyLoginMenu_C_ConfirmSetReward) == 0x000008, "Wrong alignment on DailyLoginMenu_C_ConfirmSetReward");
static_assert(sizeof(DailyLoginMenu_C_ConfirmSetReward) == 0x000018, "Wrong size on DailyLoginMenu_C_ConfirmSetReward");
static_assert(offsetof(DailyLoginMenu_C_ConfirmSetReward, KeyPressed) == 0x000000, "Member 'DailyLoginMenu_C_ConfirmSetReward::KeyPressed' has a wrong offset!");

// Function DailyLoginMenu.DailyLoginMenu_C.CancelSetReward
// 0x0018 (0x0018 - 0x0000)
struct DailyLoginMenu_C_CancelSetReward final
{
public:
	struct FKey                                   KeyPressed;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(DailyLoginMenu_C_CancelSetReward) == 0x000008, "Wrong alignment on DailyLoginMenu_C_CancelSetReward");
static_assert(sizeof(DailyLoginMenu_C_CancelSetReward) == 0x000018, "Wrong size on DailyLoginMenu_C_CancelSetReward");
static_assert(offsetof(DailyLoginMenu_C_CancelSetReward, KeyPressed) == 0x000000, "Member 'DailyLoginMenu_C_CancelSetReward::KeyPressed' has a wrong offset!");

// Function DailyLoginMenu.DailyLoginMenu_C.CommitRewardGoal
// 0x01B0 (0x01B0 - 0x0000)
struct DailyLoginMenu_C_CommitRewardGoal final
{
public:
	class UDailyRewardWidget_C*                   RewardWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          BlockDuringLoad;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_212C[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_212D[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarinerMessageBoxData                 K2Node_MakeStruct_MarinerMessageBoxData;           // 0x0020(0x0170)(ContainsInstancedReference)
	class UMangoQuestManager*                     CallFunc_Get_ReturnValue;                          // 0x0190(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerGameInstance*                   CallFunc_GetMarinerGameInstance_ReturnValue;       // 0x0198(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerMessageBoxManager*              CallFunc_GetMessageBoxManager_ReturnValue;         // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_ShowMessageBox_ReturnValue;               // 0x01A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01AC(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DailyLoginMenu_C_CommitRewardGoal) == 0x000008, "Wrong alignment on DailyLoginMenu_C_CommitRewardGoal");
static_assert(sizeof(DailyLoginMenu_C_CommitRewardGoal) == 0x0001B0, "Wrong size on DailyLoginMenu_C_CommitRewardGoal");
static_assert(offsetof(DailyLoginMenu_C_CommitRewardGoal, RewardWidget) == 0x000000, "Member 'DailyLoginMenu_C_CommitRewardGoal::RewardWidget' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_CommitRewardGoal, BlockDuringLoad) == 0x000008, "Member 'DailyLoginMenu_C_CommitRewardGoal::BlockDuringLoad' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_CommitRewardGoal, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'DailyLoginMenu_C_CommitRewardGoal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_CommitRewardGoal, K2Node_MakeStruct_MarinerMessageBoxData) == 0x000020, "Member 'DailyLoginMenu_C_CommitRewardGoal::K2Node_MakeStruct_MarinerMessageBoxData' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_CommitRewardGoal, CallFunc_Get_ReturnValue) == 0x000190, "Member 'DailyLoginMenu_C_CommitRewardGoal::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_CommitRewardGoal, CallFunc_GetMarinerGameInstance_ReturnValue) == 0x000198, "Member 'DailyLoginMenu_C_CommitRewardGoal::CallFunc_GetMarinerGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_CommitRewardGoal, CallFunc_GetMessageBoxManager_ReturnValue) == 0x0001A0, "Member 'DailyLoginMenu_C_CommitRewardGoal::CallFunc_GetMessageBoxManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_CommitRewardGoal, CallFunc_ShowMessageBox_ReturnValue) == 0x0001A8, "Member 'DailyLoginMenu_C_CommitRewardGoal::CallFunc_ShowMessageBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(DailyLoginMenu_C_CommitRewardGoal, CallFunc_IsValid_ReturnValue) == 0x0001AC, "Member 'DailyLoginMenu_C_CommitRewardGoal::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function DailyLoginMenu.DailyLoginMenu_C.DummyCallback
// 0x0018 (0x0018 - 0x0000)
struct DailyLoginMenu_C_DummyCallback final
{
public:
	struct FKey                                   KeyPressed;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(DailyLoginMenu_C_DummyCallback) == 0x000008, "Wrong alignment on DailyLoginMenu_C_DummyCallback");
static_assert(sizeof(DailyLoginMenu_C_DummyCallback) == 0x000018, "Wrong size on DailyLoginMenu_C_DummyCallback");
static_assert(offsetof(DailyLoginMenu_C_DummyCallback, KeyPressed) == 0x000000, "Member 'DailyLoginMenu_C_DummyCallback::KeyPressed' has a wrong offset!");

}


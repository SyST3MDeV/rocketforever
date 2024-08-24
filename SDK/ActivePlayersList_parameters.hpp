#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActivePlayersList

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace SDK::Params
{

// Function ActivePlayersList.ActivePlayersList_C.ExecuteUbergraph_ActivePlayersList
// 0x00C8 (0x00C8 - 0x0000)
struct ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APlayerState* RemovedPlayer)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class APlayerState* AddedPlayer)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1F73[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           K2Node_CustomEvent_PlayerState_1;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class APlayerState* AddedPlayer)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor)
	class AMarinerGameState*                      K2Node_DynamicCast_AsMariner_Game_State;           // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F74[0x3];                                     // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class APlayerState* RemovedPlayer)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_1F75[0x4];                                     // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue_1;               // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMarinerGameState*                      K2Node_DynamicCast_AsMariner_Game_State_1;         // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F76[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           K2Node_CustomEvent_PlayerState;                    // 0x0080(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0088(0x0038)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList) == 0x000008, "Wrong alignment on ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList");
static_assert(sizeof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList) == 0x0000C8, "Wrong size on ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, EntryPoint) == 0x000000, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::EntryPoint' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, K2Node_CustomEvent_PlayerState_1) == 0x000028, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::K2Node_CustomEvent_PlayerState_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, CallFunc_GetGameState_ReturnValue) == 0x000030, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, K2Node_CreateDelegate_OutputDelegate_2) == 0x000038, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, K2Node_DynamicCast_AsMariner_Game_State) == 0x000048, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::K2Node_DynamicCast_AsMariner_Game_State' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, K2Node_CreateDelegate_OutputDelegate_3) == 0x000054, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, CallFunc_GetGameState_ReturnValue_1) == 0x000068, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::CallFunc_GetGameState_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, K2Node_DynamicCast_AsMariner_Game_State_1) == 0x000070, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::K2Node_DynamicCast_AsMariner_Game_State_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, K2Node_CustomEvent_PlayerState) == 0x000080, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::K2Node_CustomEvent_PlayerState' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, K2Node_Event_MyGeometry) == 0x000088, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList, K2Node_Event_InDeltaTime) == 0x0000C0, "Member 'ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList::K2Node_Event_InDeltaTime' has a wrong offset!");

// Function ActivePlayersList.ActivePlayersList_C.Tick
// 0x003C (0x003C - 0x0000)
struct ActivePlayersList_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0038(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActivePlayersList_C_Tick) == 0x000004, "Wrong alignment on ActivePlayersList_C_Tick");
static_assert(sizeof(ActivePlayersList_C_Tick) == 0x00003C, "Wrong size on ActivePlayersList_C_Tick");
static_assert(offsetof(ActivePlayersList_C_Tick, MyGeometry) == 0x000000, "Member 'ActivePlayersList_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_Tick, InDeltaTime) == 0x000038, "Member 'ActivePlayersList_C_Tick::InDeltaTime' has a wrong offset!");

// Function ActivePlayersList.ActivePlayersList_C.OnPlayerRemoved
// 0x0008 (0x0008 - 0x0000)
struct ActivePlayersList_C_OnPlayerRemoved final
{
public:
	class APlayerState*                           PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActivePlayersList_C_OnPlayerRemoved) == 0x000008, "Wrong alignment on ActivePlayersList_C_OnPlayerRemoved");
static_assert(sizeof(ActivePlayersList_C_OnPlayerRemoved) == 0x000008, "Wrong size on ActivePlayersList_C_OnPlayerRemoved");
static_assert(offsetof(ActivePlayersList_C_OnPlayerRemoved, PlayerState) == 0x000000, "Member 'ActivePlayersList_C_OnPlayerRemoved::PlayerState' has a wrong offset!");

// Function ActivePlayersList.ActivePlayersList_C.OnPlayerAdded
// 0x0008 (0x0008 - 0x0000)
struct ActivePlayersList_C_OnPlayerAdded final
{
public:
	class APlayerState*                           PlayerState;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ActivePlayersList_C_OnPlayerAdded) == 0x000008, "Wrong alignment on ActivePlayersList_C_OnPlayerAdded");
static_assert(sizeof(ActivePlayersList_C_OnPlayerAdded) == 0x000008, "Wrong size on ActivePlayersList_C_OnPlayerAdded");
static_assert(offsetof(ActivePlayersList_C_OnPlayerAdded, PlayerState) == 0x000000, "Member 'ActivePlayersList_C_OnPlayerAdded::PlayerState' has a wrong offset!");

// Function ActivePlayersList.ActivePlayersList_C.UpdatePlayersList
// 0x00D0 (0x00D0 - 0x0000)
struct ActivePlayersList_C_UpdatePlayersList final
{
public:
	class APlayerState*                           PlayerState;                                       // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UActivePlayersRow_C*>            RemotePlayersRowWidgets;                           // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, ContainsInstancedReference)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F77[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerName_ReturnValue;                // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_1;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActivePlayersRow_C*                    CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue_2;            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActivePlayersRow_C*                    CallFunc_Create_ReturnValue_1;                     // 0x0060(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F78[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F79[0x3];                                     // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActivePlayersRow_C*                    CallFunc_Array_Get_Item;                           // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F7A[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerState*                           CallFunc_Array_Get_Item_1;                         // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F7B[0x7];                                     // 0x00B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlayerName_ReturnValue_1;              // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(ActivePlayersList_C_UpdatePlayersList) == 0x000008, "Wrong alignment on ActivePlayersList_C_UpdatePlayersList");
static_assert(sizeof(ActivePlayersList_C_UpdatePlayersList) == 0x0000D0, "Wrong size on ActivePlayersList_C_UpdatePlayersList");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, PlayerState) == 0x000000, "Member 'ActivePlayersList_C_UpdatePlayersList::PlayerState' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, RemotePlayersRowWidgets) == 0x000008, "Member 'ActivePlayersList_C_UpdatePlayersList::RemotePlayersRowWidgets' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'ActivePlayersList_C_UpdatePlayersList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, Temp_int_Array_Index_Variable) == 0x000020, "Member 'ActivePlayersList_C_UpdatePlayersList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, Temp_int_Loop_Counter_Variable_1) == 0x000024, "Member 'ActivePlayersList_C_UpdatePlayersList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_GetPlayerName_ReturnValue) == 0x000030, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_GetPlayerName_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_GetOwningPlayer_ReturnValue) == 0x000040, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_GetOwningPlayer_ReturnValue_1) == 0x000048, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_GetOwningPlayer_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_Create_ReturnValue) == 0x000050, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_GetOwningPlayer_ReturnValue_2) == 0x000058, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_GetOwningPlayer_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_Create_ReturnValue_1) == 0x000060, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_Create_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000070, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_Array_Length_ReturnValue) == 0x000078, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_Array_Add_ReturnValue) == 0x00007C, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, Temp_int_Array_Index_Variable_1) == 0x000084, "Member 'ActivePlayersList_C_UpdatePlayersList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_Array_Get_Item) == 0x000088, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_AddChildToVerticalBox_ReturnValue_1) == 0x000090, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_AddChildToVerticalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_GetGameState_ReturnValue) == 0x000098, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_Array_Length_ReturnValue_1) == 0x0000A0, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_Array_Get_Item_1) == 0x0000A8, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B0, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_GetPlayerName_ReturnValue_1) == 0x0000B8, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_GetPlayerName_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(ActivePlayersList_C_UpdatePlayersList, CallFunc_NotEqual_IntInt_ReturnValue) == 0x0000C8, "Member 'ActivePlayersList_C_UpdatePlayersList::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");

}


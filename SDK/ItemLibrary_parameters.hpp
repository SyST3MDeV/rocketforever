#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemLibrary

#include "Basic.hpp"

#include "ItemBoxTypes_structs.hpp"
#include "PlaylistEventItemMapStruct_structs.hpp"


namespace SDK::Params
{

// Function ItemLibrary.ItemLibrary_C.GetGlobalItemMap
// 0x00C8 (0x00C8 - 0x0000)
struct ItemLibrary_C_GetGlobalItemMap final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> ItemMap;                                           // 0x0008(0x0050)(Parm, OutParm, ZeroConstructor)
	TArray<struct FPlaylistEventItemMapStruct>    Global_PlaylistEventItemMapsArray;                 // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlaylistEventItemMapStruct>    K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ZeroConstructor, ReferenceParm)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> CallFunc_Get_Playlist_Event_Item_Map_ItemMap;      // 0x0078(0x0050)(ZeroConstructor)
};
static_assert(alignof(ItemLibrary_C_GetGlobalItemMap) == 0x000008, "Wrong alignment on ItemLibrary_C_GetGlobalItemMap");
static_assert(sizeof(ItemLibrary_C_GetGlobalItemMap) == 0x0000C8, "Wrong size on ItemLibrary_C_GetGlobalItemMap");
static_assert(offsetof(ItemLibrary_C_GetGlobalItemMap, __WorldContext) == 0x000000, "Member 'ItemLibrary_C_GetGlobalItemMap::__WorldContext' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetGlobalItemMap, ItemMap) == 0x000008, "Member 'ItemLibrary_C_GetGlobalItemMap::ItemMap' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetGlobalItemMap, Global_PlaylistEventItemMapsArray) == 0x000058, "Member 'ItemLibrary_C_GetGlobalItemMap::Global_PlaylistEventItemMapsArray' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetGlobalItemMap, K2Node_MakeArray_Array) == 0x000068, "Member 'ItemLibrary_C_GetGlobalItemMap::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetGlobalItemMap, CallFunc_Get_Playlist_Event_Item_Map_ItemMap) == 0x000078, "Member 'ItemLibrary_C_GetGlobalItemMap::CallFunc_Get_Playlist_Event_Item_Map_ItemMap' has a wrong offset!");

// Function ItemLibrary.ItemLibrary_C.GetItemUseArtifactItemMap
// 0x00C8 (0x00C8 - 0x0000)
struct ItemLibrary_C_GetItemUseArtifactItemMap final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> ItemMap;                                           // 0x0008(0x0050)(Parm, OutParm, ZeroConstructor)
	TArray<struct FPlaylistEventItemMapStruct>    ItemUseArtifact_PlaylistEventItemMapsArray;        // 0x0058(0x0010)(Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlaylistEventItemMapStruct>    K2Node_MakeArray_Array;                            // 0x0068(0x0010)(ZeroConstructor, ReferenceParm)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> CallFunc_Get_Playlist_Event_Item_Map_ItemMap;      // 0x0078(0x0050)(ZeroConstructor)
};
static_assert(alignof(ItemLibrary_C_GetItemUseArtifactItemMap) == 0x000008, "Wrong alignment on ItemLibrary_C_GetItemUseArtifactItemMap");
static_assert(sizeof(ItemLibrary_C_GetItemUseArtifactItemMap) == 0x0000C8, "Wrong size on ItemLibrary_C_GetItemUseArtifactItemMap");
static_assert(offsetof(ItemLibrary_C_GetItemUseArtifactItemMap, __WorldContext) == 0x000000, "Member 'ItemLibrary_C_GetItemUseArtifactItemMap::__WorldContext' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetItemUseArtifactItemMap, ItemMap) == 0x000008, "Member 'ItemLibrary_C_GetItemUseArtifactItemMap::ItemMap' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetItemUseArtifactItemMap, ItemUseArtifact_PlaylistEventItemMapsArray) == 0x000058, "Member 'ItemLibrary_C_GetItemUseArtifactItemMap::ItemUseArtifact_PlaylistEventItemMapsArray' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetItemUseArtifactItemMap, K2Node_MakeArray_Array) == 0x000068, "Member 'ItemLibrary_C_GetItemUseArtifactItemMap::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetItemUseArtifactItemMap, CallFunc_Get_Playlist_Event_Item_Map_ItemMap) == 0x000078, "Member 'ItemLibrary_C_GetItemUseArtifactItemMap::CallFunc_Get_Playlist_Event_Item_Map_ItemMap' has a wrong offset!");

// Function ItemLibrary.ItemLibrary_C.GetEventExclusiveItemMap
// 0x00F8 (0x00F8 - 0x0000)
struct ItemLibrary_C_GetEventExclusiveItemMap final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> ItemMap;                                           // 0x0008(0x0050)(Parm, OutParm, ZeroConstructor)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> EventExclusiveItemMap;                             // 0x0058(0x0050)(Edit, BlueprintVisible, ZeroConstructor)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> K2Node_MakeVariable_MakeVariableOutput;            // 0x00A8(0x0050)(ZeroConstructor)
};
static_assert(alignof(ItemLibrary_C_GetEventExclusiveItemMap) == 0x000008, "Wrong alignment on ItemLibrary_C_GetEventExclusiveItemMap");
static_assert(sizeof(ItemLibrary_C_GetEventExclusiveItemMap) == 0x0000F8, "Wrong size on ItemLibrary_C_GetEventExclusiveItemMap");
static_assert(offsetof(ItemLibrary_C_GetEventExclusiveItemMap, __WorldContext) == 0x000000, "Member 'ItemLibrary_C_GetEventExclusiveItemMap::__WorldContext' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetEventExclusiveItemMap, ItemMap) == 0x000008, "Member 'ItemLibrary_C_GetEventExclusiveItemMap::ItemMap' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetEventExclusiveItemMap, EventExclusiveItemMap) == 0x000058, "Member 'ItemLibrary_C_GetEventExclusiveItemMap::EventExclusiveItemMap' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetEventExclusiveItemMap, K2Node_MakeVariable_MakeVariableOutput) == 0x0000A8, "Member 'ItemLibrary_C_GetEventExclusiveItemMap::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");

// Function ItemLibrary.ItemLibrary_C.GetItemUseRankedArtifactItemMap
// 0x00F8 (0x00F8 - 0x0000)
struct ItemLibrary_C_GetItemUseRankedArtifactItemMap final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> ItemMap;                                           // 0x0008(0x0050)(Parm, OutParm, ZeroConstructor)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> ItemUseArtifactItemMap;                            // 0x0058(0x0050)(Edit, BlueprintVisible, ZeroConstructor)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> K2Node_MakeVariable_MakeVariableOutput;            // 0x00A8(0x0050)(ZeroConstructor)
};
static_assert(alignof(ItemLibrary_C_GetItemUseRankedArtifactItemMap) == 0x000008, "Wrong alignment on ItemLibrary_C_GetItemUseRankedArtifactItemMap");
static_assert(sizeof(ItemLibrary_C_GetItemUseRankedArtifactItemMap) == 0x0000F8, "Wrong size on ItemLibrary_C_GetItemUseRankedArtifactItemMap");
static_assert(offsetof(ItemLibrary_C_GetItemUseRankedArtifactItemMap, __WorldContext) == 0x000000, "Member 'ItemLibrary_C_GetItemUseRankedArtifactItemMap::__WorldContext' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetItemUseRankedArtifactItemMap, ItemMap) == 0x000008, "Member 'ItemLibrary_C_GetItemUseRankedArtifactItemMap::ItemMap' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetItemUseRankedArtifactItemMap, ItemUseArtifactItemMap) == 0x000058, "Member 'ItemLibrary_C_GetItemUseRankedArtifactItemMap::ItemUseArtifactItemMap' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetItemUseRankedArtifactItemMap, K2Node_MakeVariable_MakeVariableOutput) == 0x0000A8, "Member 'ItemLibrary_C_GetItemUseRankedArtifactItemMap::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");

// Function ItemLibrary.ItemLibrary_C.Get Playlist Event Item Map
// 0x01E0 (0x01E0 - 0x0000)
struct ItemLibrary_C_Get_Playlist_Event_Item_Map final
{
public:
	TArray<struct FPlaylistEventItemMapStruct>    PlaylistEventItemMapsArray;                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	class UObject*                                __WorldContext;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> ItemMap;                                           // 0x0018(0x0050)(Parm, OutParm, ZeroConstructor)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> CurrentPlaylistEventItemMap;                       // 0x0068(0x0050)(Edit, BlueprintVisible, ZeroConstructor)
	bool                                          PlaylistEventItemMapFound;                         // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2788[0x7];                                     // 0x00B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CurrentPlaylistEventId;                            // 0x00C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2789[0x3];                                     // 0x00D1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_278A[0x7];                                     // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPlaylistEventItemMapStruct            CallFunc_Array_Get_Item;                           // 0x00E0(0x0060)(ZeroConstructor, HasGetValueTypeHash)
	struct FPlaylistEventItemMapStruct            CallFunc_Array_Get_Item_1;                         // 0x0140(0x0060)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x01A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x01A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x01A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_278B[0x3];                                     // 0x01A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x01AC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_278C[0x6];                                     // 0x01B2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class AGameStateBase*                         CallFunc_GetGameState_ReturnValue;                 // 0x01B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AMarinerGameState*                      K2Node_DynamicCast_AsMariner_Game_State;           // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x01C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_278D[0x7];                                     // 0x01C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetPlaylistEventId_ReturnValue;           // 0x01D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ItemLibrary_C_Get_Playlist_Event_Item_Map) == 0x000008, "Wrong alignment on ItemLibrary_C_Get_Playlist_Event_Item_Map");
static_assert(sizeof(ItemLibrary_C_Get_Playlist_Event_Item_Map) == 0x0001E0, "Wrong size on ItemLibrary_C_Get_Playlist_Event_Item_Map");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, PlaylistEventItemMapsArray) == 0x000000, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::PlaylistEventItemMapsArray' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, __WorldContext) == 0x000010, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::__WorldContext' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, ItemMap) == 0x000018, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::ItemMap' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, CurrentPlaylistEventItemMap) == 0x000068, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::CurrentPlaylistEventItemMap' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, PlaylistEventItemMapFound) == 0x0000B8, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::PlaylistEventItemMapFound' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, CurrentPlaylistEventId) == 0x0000C0, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::CurrentPlaylistEventId' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, Temp_bool_True_if_break_was_hit_Variable) == 0x0000D0, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, Temp_int_Array_Index_Variable) == 0x0000D4, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, CallFunc_Not_PreBool_ReturnValue) == 0x0000D8, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, CallFunc_Array_Get_Item) == 0x0000E0, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, CallFunc_Array_Get_Item_1) == 0x000140, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, CallFunc_Array_Length_ReturnValue) == 0x0001A0, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, Temp_int_Loop_Counter_Variable) == 0x0001A4, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, CallFunc_Less_IntInt_ReturnValue) == 0x0001A8, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, CallFunc_Add_IntInt_ReturnValue) == 0x0001AC, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, CallFunc_BooleanAND_ReturnValue) == 0x0001B0, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, CallFunc_EqualEqual_StrStr_ReturnValue) == 0x0001B1, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::CallFunc_EqualEqual_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, CallFunc_GetGameState_ReturnValue) == 0x0001B8, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::CallFunc_GetGameState_ReturnValue' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, K2Node_DynamicCast_AsMariner_Game_State) == 0x0001C0, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::K2Node_DynamicCast_AsMariner_Game_State' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, K2Node_DynamicCast_bSuccess) == 0x0001C8, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_Get_Playlist_Event_Item_Map, CallFunc_GetPlaylistEventId_ReturnValue) == 0x0001D0, "Member 'ItemLibrary_C_Get_Playlist_Event_Item_Map::CallFunc_GetPlaylistEventId_ReturnValue' has a wrong offset!");

// Function ItemLibrary.ItemLibrary_C.GetDebugItemMap
// 0x00F8 (0x00F8 - 0x0000)
struct ItemLibrary_C_GetDebugItemMap final
{
public:
	class UObject*                                __WorldContext;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> ItemMap;                                           // 0x0008(0x0050)(Parm, OutParm, ZeroConstructor)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> EventExclusiveItemMap;                             // 0x0058(0x0050)(Edit, BlueprintVisible, ZeroConstructor)
	TMap<EItemBoxTypes, TSoftClassPtr<class UClass>> K2Node_MakeVariable_MakeVariableOutput;            // 0x00A8(0x0050)(ZeroConstructor)
};
static_assert(alignof(ItemLibrary_C_GetDebugItemMap) == 0x000008, "Wrong alignment on ItemLibrary_C_GetDebugItemMap");
static_assert(sizeof(ItemLibrary_C_GetDebugItemMap) == 0x0000F8, "Wrong size on ItemLibrary_C_GetDebugItemMap");
static_assert(offsetof(ItemLibrary_C_GetDebugItemMap, __WorldContext) == 0x000000, "Member 'ItemLibrary_C_GetDebugItemMap::__WorldContext' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetDebugItemMap, ItemMap) == 0x000008, "Member 'ItemLibrary_C_GetDebugItemMap::ItemMap' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetDebugItemMap, EventExclusiveItemMap) == 0x000058, "Member 'ItemLibrary_C_GetDebugItemMap::EventExclusiveItemMap' has a wrong offset!");
static_assert(offsetof(ItemLibrary_C_GetDebugItemMap, K2Node_MakeVariable_MakeVariableOutput) == 0x0000A8, "Member 'ItemLibrary_C_GetDebugItemMap::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");

}


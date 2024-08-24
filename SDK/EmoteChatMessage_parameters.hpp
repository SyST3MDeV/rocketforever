#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmoteChatMessage

#include "Basic.hpp"

#include "Mariner_structs.hpp"
#include "MangoClient_structs.hpp"


namespace SDK::Params
{

// Function EmoteChatMessage.EmoteChatMessage_C.Blueprint_GetText
// 0x0188 (0x0188 - 0x0000)
struct EmoteChatMessage_C_Blueprint_GetText final
{
public:
	class APlayerState*                           RelatedPlayerState_1;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           RelatedPlayerState_2;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                OptionalObject;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMarinerMessageText                    ReturnValue;                                       // 0x0018(0x0048)(Parm, OutParm, ReturnParm)
	class UMangoCMSManager*                       CallFunc_Get_ReturnValue;                          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerChatEmote*                      K2Node_DynamicCast_AsMariner_Chat_Emote;           // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EF7[0x7];                                     // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarinerMessageText                    CallFunc_Blueprint_GetText_ReturnValue;            // 0x0078(0x0048)()
	class FString                                 CallFunc_GetPathName_ReturnValue;                  // 0x00C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FMangoItem                             CallFunc_TryGetCMSItemByAssetPath_OutItem;         // 0x00D0(0x0050)()
	bool                                          CallFunc_TryGetCMSItemByAssetPath_ReturnValue;     // 0x0120(0x0001)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1EF8[0x7];                                     // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextFromStringTable_ReturnValue;          // 0x0128(0x0018)()
	struct FMarinerMessageText                    K2Node_SetFieldsInStruct_StructOut;                // 0x0140(0x0048)()
};
static_assert(alignof(EmoteChatMessage_C_Blueprint_GetText) == 0x000008, "Wrong alignment on EmoteChatMessage_C_Blueprint_GetText");
static_assert(sizeof(EmoteChatMessage_C_Blueprint_GetText) == 0x000188, "Wrong size on EmoteChatMessage_C_Blueprint_GetText");
static_assert(offsetof(EmoteChatMessage_C_Blueprint_GetText, RelatedPlayerState_1) == 0x000000, "Member 'EmoteChatMessage_C_Blueprint_GetText::RelatedPlayerState_1' has a wrong offset!");
static_assert(offsetof(EmoteChatMessage_C_Blueprint_GetText, RelatedPlayerState_2) == 0x000008, "Member 'EmoteChatMessage_C_Blueprint_GetText::RelatedPlayerState_2' has a wrong offset!");
static_assert(offsetof(EmoteChatMessage_C_Blueprint_GetText, OptionalObject) == 0x000010, "Member 'EmoteChatMessage_C_Blueprint_GetText::OptionalObject' has a wrong offset!");
static_assert(offsetof(EmoteChatMessage_C_Blueprint_GetText, ReturnValue) == 0x000018, "Member 'EmoteChatMessage_C_Blueprint_GetText::ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteChatMessage_C_Blueprint_GetText, CallFunc_Get_ReturnValue) == 0x000060, "Member 'EmoteChatMessage_C_Blueprint_GetText::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteChatMessage_C_Blueprint_GetText, K2Node_DynamicCast_AsMariner_Chat_Emote) == 0x000068, "Member 'EmoteChatMessage_C_Blueprint_GetText::K2Node_DynamicCast_AsMariner_Chat_Emote' has a wrong offset!");
static_assert(offsetof(EmoteChatMessage_C_Blueprint_GetText, K2Node_DynamicCast_bSuccess) == 0x000070, "Member 'EmoteChatMessage_C_Blueprint_GetText::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(EmoteChatMessage_C_Blueprint_GetText, CallFunc_Blueprint_GetText_ReturnValue) == 0x000078, "Member 'EmoteChatMessage_C_Blueprint_GetText::CallFunc_Blueprint_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteChatMessage_C_Blueprint_GetText, CallFunc_GetPathName_ReturnValue) == 0x0000C0, "Member 'EmoteChatMessage_C_Blueprint_GetText::CallFunc_GetPathName_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteChatMessage_C_Blueprint_GetText, CallFunc_TryGetCMSItemByAssetPath_OutItem) == 0x0000D0, "Member 'EmoteChatMessage_C_Blueprint_GetText::CallFunc_TryGetCMSItemByAssetPath_OutItem' has a wrong offset!");
static_assert(offsetof(EmoteChatMessage_C_Blueprint_GetText, CallFunc_TryGetCMSItemByAssetPath_ReturnValue) == 0x000120, "Member 'EmoteChatMessage_C_Blueprint_GetText::CallFunc_TryGetCMSItemByAssetPath_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteChatMessage_C_Blueprint_GetText, CallFunc_TextFromStringTable_ReturnValue) == 0x000128, "Member 'EmoteChatMessage_C_Blueprint_GetText::CallFunc_TextFromStringTable_ReturnValue' has a wrong offset!");
static_assert(offsetof(EmoteChatMessage_C_Blueprint_GetText, K2Node_SetFieldsInStruct_StructOut) == 0x000140, "Member 'EmoteChatMessage_C_Blueprint_GetText::K2Node_SetFieldsInStruct_StructOut' has a wrong offset!");

}


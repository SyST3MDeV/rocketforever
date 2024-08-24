#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Base_ChatMessage

#include "Basic.hpp"

#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function Base_ChatMessage.Base_ChatMessage_C.Blueprint_GetText
// 0x00F0 (0x00F0 - 0x0000)
struct Base_ChatMessage_C_Blueprint_GetText final
{
public:
	class APlayerState*                           RelatedPlayerState_1;                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerState*                           RelatedPlayerState_2;                              // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                OptionalObject;                                    // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMarinerMessageText                    ReturnValue;                                       // 0x0018(0x0048)(Parm, OutParm, ReturnParm)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0060(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0090(0x0018)()
	struct FMarinerMessageText                    K2Node_MakeStruct_MarinerMessageText;              // 0x00A8(0x0048)()
};
static_assert(alignof(Base_ChatMessage_C_Blueprint_GetText) == 0x000008, "Wrong alignment on Base_ChatMessage_C_Blueprint_GetText");
static_assert(sizeof(Base_ChatMessage_C_Blueprint_GetText) == 0x0000F0, "Wrong size on Base_ChatMessage_C_Blueprint_GetText");
static_assert(offsetof(Base_ChatMessage_C_Blueprint_GetText, RelatedPlayerState_1) == 0x000000, "Member 'Base_ChatMessage_C_Blueprint_GetText::RelatedPlayerState_1' has a wrong offset!");
static_assert(offsetof(Base_ChatMessage_C_Blueprint_GetText, RelatedPlayerState_2) == 0x000008, "Member 'Base_ChatMessage_C_Blueprint_GetText::RelatedPlayerState_2' has a wrong offset!");
static_assert(offsetof(Base_ChatMessage_C_Blueprint_GetText, OptionalObject) == 0x000010, "Member 'Base_ChatMessage_C_Blueprint_GetText::OptionalObject' has a wrong offset!");
static_assert(offsetof(Base_ChatMessage_C_Blueprint_GetText, ReturnValue) == 0x000018, "Member 'Base_ChatMessage_C_Blueprint_GetText::ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_ChatMessage_C_Blueprint_GetText, CallFunc_Conv_TextToString_ReturnValue) == 0x000060, "Member 'Base_ChatMessage_C_Blueprint_GetText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_ChatMessage_C_Blueprint_GetText, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000070, "Member 'Base_ChatMessage_C_Blueprint_GetText::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(Base_ChatMessage_C_Blueprint_GetText, CallFunc_Concat_StrStr_ReturnValue) == 0x000080, "Member 'Base_ChatMessage_C_Blueprint_GetText::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_ChatMessage_C_Blueprint_GetText, CallFunc_Conv_StringToText_ReturnValue) == 0x000090, "Member 'Base_ChatMessage_C_Blueprint_GetText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(Base_ChatMessage_C_Blueprint_GetText, K2Node_MakeStruct_MarinerMessageText) == 0x0000A8, "Member 'Base_ChatMessage_C_Blueprint_GetText::K2Node_MakeStruct_MarinerMessageText' has a wrong offset!");

}


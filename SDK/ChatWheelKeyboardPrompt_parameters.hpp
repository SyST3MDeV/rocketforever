#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChatWheelKeyboardPrompt

#include "Basic.hpp"

#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function ChatWheelKeyboardPrompt.ChatWheelKeyboardPrompt_C.GetPromptAssets
// 0x0090 (0x0090 - 0x0000)
struct ChatWheelKeyboardPrompt_C_GetPromptAssets final
{
public:
	struct FMarinerKeyboardPromptAssets           ReturnValue;                                       // 0x0000(0x0048)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)
	struct FMarinerKeyboardPromptAssets           K2Node_MakeStruct_MarinerKeyboardPromptAssets;     // 0x0048(0x0048)(NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(ChatWheelKeyboardPrompt_C_GetPromptAssets) == 0x000008, "Wrong alignment on ChatWheelKeyboardPrompt_C_GetPromptAssets");
static_assert(sizeof(ChatWheelKeyboardPrompt_C_GetPromptAssets) == 0x000090, "Wrong size on ChatWheelKeyboardPrompt_C_GetPromptAssets");
static_assert(offsetof(ChatWheelKeyboardPrompt_C_GetPromptAssets, ReturnValue) == 0x000000, "Member 'ChatWheelKeyboardPrompt_C_GetPromptAssets::ReturnValue' has a wrong offset!");
static_assert(offsetof(ChatWheelKeyboardPrompt_C_GetPromptAssets, K2Node_MakeStruct_MarinerKeyboardPromptAssets) == 0x000048, "Member 'ChatWheelKeyboardPrompt_C_GetPromptAssets::K2Node_MakeStruct_MarinerKeyboardPromptAssets' has a wrong offset!");

}


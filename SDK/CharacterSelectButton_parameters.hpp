#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterSelectButton

#include "Basic.hpp"

#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function CharacterSelectButton.CharacterSelectButton_C.ShowEditPrompt
// 0x0010 (0x0010 - 0x0000)
struct CharacterSelectButton_C_ShowEditPrompt final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterSelectButton_C_ShowEditPrompt) == 0x000008, "Wrong alignment on CharacterSelectButton_C_ShowEditPrompt");
static_assert(sizeof(CharacterSelectButton_C_ShowEditPrompt) == 0x000010, "Wrong size on CharacterSelectButton_C_ShowEditPrompt");
static_assert(offsetof(CharacterSelectButton_C_ShowEditPrompt, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'CharacterSelectButton_C_ShowEditPrompt::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterSelectButton_C_ShowEditPrompt, CallFunc_PlayAnimation_ReturnValue_1) == 0x000008, "Member 'CharacterSelectButton_C_ShowEditPrompt::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");

// Function CharacterSelectButton.CharacterSelectButton_C.GetAssets
// 0x00D0 (0x00D0 - 0x0000)
struct CharacterSelectButton_C_GetAssets final
{
public:
	struct FMarinerLayeredButtonAssets            ReturnValue;                                       // 0x0000(0x0068)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)
	struct FMarinerLayeredButtonAssets            K2Node_MakeStruct_MarinerLayeredButtonAssets;      // 0x0068(0x0068)(NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(CharacterSelectButton_C_GetAssets) == 0x000008, "Wrong alignment on CharacterSelectButton_C_GetAssets");
static_assert(sizeof(CharacterSelectButton_C_GetAssets) == 0x0000D0, "Wrong size on CharacterSelectButton_C_GetAssets");
static_assert(offsetof(CharacterSelectButton_C_GetAssets, ReturnValue) == 0x000000, "Member 'CharacterSelectButton_C_GetAssets::ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterSelectButton_C_GetAssets, K2Node_MakeStruct_MarinerLayeredButtonAssets) == 0x000068, "Member 'CharacterSelectButton_C_GetAssets::K2Node_MakeStruct_MarinerLayeredButtonAssets' has a wrong offset!");

}


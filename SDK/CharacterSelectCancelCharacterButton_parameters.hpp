#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterSelectCancelCharacterButton

#include "Basic.hpp"

#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function CharacterSelectCancelCharacterButton.CharacterSelectCancelCharacterButton_C.GetAssets
// 0x00D0 (0x00D0 - 0x0000)
struct CharacterSelectCancelCharacterButton_C_GetAssets final
{
public:
	struct FMarinerLayeredButtonAssets            ReturnValue;                                       // 0x0000(0x0068)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)
	struct FMarinerLayeredButtonAssets            K2Node_MakeStruct_MarinerLayeredButtonAssets;      // 0x0068(0x0068)(NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(CharacterSelectCancelCharacterButton_C_GetAssets) == 0x000008, "Wrong alignment on CharacterSelectCancelCharacterButton_C_GetAssets");
static_assert(sizeof(CharacterSelectCancelCharacterButton_C_GetAssets) == 0x0000D0, "Wrong size on CharacterSelectCancelCharacterButton_C_GetAssets");
static_assert(offsetof(CharacterSelectCancelCharacterButton_C_GetAssets, ReturnValue) == 0x000000, "Member 'CharacterSelectCancelCharacterButton_C_GetAssets::ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterSelectCancelCharacterButton_C_GetAssets, K2Node_MakeStruct_MarinerLayeredButtonAssets) == 0x000068, "Member 'CharacterSelectCancelCharacterButton_C_GetAssets::K2Node_MakeStruct_MarinerLayeredButtonAssets' has a wrong offset!");

}


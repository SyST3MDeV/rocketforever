#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomDropdownOption

#include "Basic.hpp"

#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function CustomDropdownOption.CustomDropdownOption_C.GetAssets
// 0x00D0 (0x00D0 - 0x0000)
struct CustomDropdownOption_C_GetAssets final
{
public:
	struct FMarinerLayeredButtonAssets            ReturnValue;                                       // 0x0000(0x0068)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)
	struct FMarinerLayeredButtonAssets            K2Node_MakeStruct_MarinerLayeredButtonAssets;      // 0x0068(0x0068)(NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(CustomDropdownOption_C_GetAssets) == 0x000008, "Wrong alignment on CustomDropdownOption_C_GetAssets");
static_assert(sizeof(CustomDropdownOption_C_GetAssets) == 0x0000D0, "Wrong size on CustomDropdownOption_C_GetAssets");
static_assert(offsetof(CustomDropdownOption_C_GetAssets, ReturnValue) == 0x000000, "Member 'CustomDropdownOption_C_GetAssets::ReturnValue' has a wrong offset!");
static_assert(offsetof(CustomDropdownOption_C_GetAssets, K2Node_MakeStruct_MarinerLayeredButtonAssets) == 0x000068, "Member 'CustomDropdownOption_C_GetAssets::K2Node_MakeStruct_MarinerLayeredButtonAssets' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KeyBindingSetting

#include "Basic.hpp"

#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function KeyBindingSetting.KeyBindingSetting_C.GetAssets
// 0x0080 (0x0080 - 0x0000)
struct KeyBindingSetting_C_GetAssets final
{
public:
	struct FMarinerSettingKeyBindingAssets        ReturnValue;                                       // 0x0000(0x0040)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)
	struct FMarinerSettingKeyBindingAssets        K2Node_MakeStruct_MarinerSettingKeyBindingAssets;  // 0x0040(0x0040)(NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(KeyBindingSetting_C_GetAssets) == 0x000008, "Wrong alignment on KeyBindingSetting_C_GetAssets");
static_assert(sizeof(KeyBindingSetting_C_GetAssets) == 0x000080, "Wrong size on KeyBindingSetting_C_GetAssets");
static_assert(offsetof(KeyBindingSetting_C_GetAssets, ReturnValue) == 0x000000, "Member 'KeyBindingSetting_C_GetAssets::ReturnValue' has a wrong offset!");
static_assert(offsetof(KeyBindingSetting_C_GetAssets, K2Node_MakeStruct_MarinerSettingKeyBindingAssets) == 0x000040, "Member 'KeyBindingSetting_C_GetAssets::K2Node_MakeStruct_MarinerSettingKeyBindingAssets' has a wrong offset!");

}


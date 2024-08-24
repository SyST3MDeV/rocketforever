#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArtifactsSubMenuButton

#include "Basic.hpp"

#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function ArtifactsSubMenuButton.ArtifactsSubMenuButton_C.GetAssets
// 0x00D0 (0x00D0 - 0x0000)
struct ArtifactsSubMenuButton_C_GetAssets final
{
public:
	struct FMarinerLayeredButtonAssets            ReturnValue;                                       // 0x0000(0x0068)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)
	struct FMarinerLayeredButtonAssets            K2Node_MakeStruct_MarinerLayeredButtonAssets;      // 0x0068(0x0068)(NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(ArtifactsSubMenuButton_C_GetAssets) == 0x000008, "Wrong alignment on ArtifactsSubMenuButton_C_GetAssets");
static_assert(sizeof(ArtifactsSubMenuButton_C_GetAssets) == 0x0000D0, "Wrong size on ArtifactsSubMenuButton_C_GetAssets");
static_assert(offsetof(ArtifactsSubMenuButton_C_GetAssets, ReturnValue) == 0x000000, "Member 'ArtifactsSubMenuButton_C_GetAssets::ReturnValue' has a wrong offset!");
static_assert(offsetof(ArtifactsSubMenuButton_C_GetAssets, K2Node_MakeStruct_MarinerLayeredButtonAssets) == 0x000068, "Member 'ArtifactsSubMenuButton_C_GetAssets::K2Node_MakeStruct_MarinerLayeredButtonAssets' has a wrong offset!");

}


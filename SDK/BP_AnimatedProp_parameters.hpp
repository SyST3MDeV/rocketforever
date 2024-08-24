#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_AnimatedProp

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_AnimatedProp.BP_AnimatedProp_C.SetAndPlay
// 0x0018 (0x0018 - 0x0000)
struct BP_AnimatedProp_C_SetAndPlay final
{
public:
	class USkeletalMesh*                          Param_SkeletalMesh;                                // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoopAnim;                                          // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_AnimatedProp_C_SetAndPlay) == 0x000008, "Wrong alignment on BP_AnimatedProp_C_SetAndPlay");
static_assert(sizeof(BP_AnimatedProp_C_SetAndPlay) == 0x000018, "Wrong size on BP_AnimatedProp_C_SetAndPlay");
static_assert(offsetof(BP_AnimatedProp_C_SetAndPlay, Param_SkeletalMesh) == 0x000000, "Member 'BP_AnimatedProp_C_SetAndPlay::Param_SkeletalMesh' has a wrong offset!");
static_assert(offsetof(BP_AnimatedProp_C_SetAndPlay, Animation) == 0x000008, "Member 'BP_AnimatedProp_C_SetAndPlay::Animation' has a wrong offset!");
static_assert(offsetof(BP_AnimatedProp_C_SetAndPlay, LoopAnim) == 0x000010, "Member 'BP_AnimatedProp_C_SetAndPlay::LoopAnim' has a wrong offset!");

}


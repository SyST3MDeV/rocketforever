#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterAnimationInterface

#include "Basic.hpp"

#include "E_ItemActivationTypes_structs.hpp"
#include "Mariner_structs.hpp"
#include "DodgeDirections_structs.hpp"


namespace SDK::Params
{

// Function CharacterAnimationInterface.CharacterAnimationInterface_C.Anim_DodgeStarted
// 0x0001 (0x0001 - 0x0000)
struct CharacterAnimationInterface_C_Anim_DodgeStarted final
{
public:
	EDodgeDirections                              DodgeCardinalDirection;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterAnimationInterface_C_Anim_DodgeStarted) == 0x000001, "Wrong alignment on CharacterAnimationInterface_C_Anim_DodgeStarted");
static_assert(sizeof(CharacterAnimationInterface_C_Anim_DodgeStarted) == 0x000001, "Wrong size on CharacterAnimationInterface_C_Anim_DodgeStarted");
static_assert(offsetof(CharacterAnimationInterface_C_Anim_DodgeStarted, DodgeCardinalDirection) == 0x000000, "Member 'CharacterAnimationInterface_C_Anim_DodgeStarted::DodgeCardinalDirection' has a wrong offset!");

// Function CharacterAnimationInterface.CharacterAnimationInterface_C.Anim_CharacterEmote
// 0x0001 (0x0001 - 0x0000)
struct CharacterAnimationInterface_C_Anim_CharacterEmote final
{
public:
	EMarinerInputActions                          MarinerInputAction;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterAnimationInterface_C_Anim_CharacterEmote) == 0x000001, "Wrong alignment on CharacterAnimationInterface_C_Anim_CharacterEmote");
static_assert(sizeof(CharacterAnimationInterface_C_Anim_CharacterEmote) == 0x000001, "Wrong size on CharacterAnimationInterface_C_Anim_CharacterEmote");
static_assert(offsetof(CharacterAnimationInterface_C_Anim_CharacterEmote, MarinerInputAction) == 0x000000, "Member 'CharacterAnimationInterface_C_Anim_CharacterEmote::MarinerInputAction' has a wrong offset!");

// Function CharacterAnimationInterface.CharacterAnimationInterface_C.Anim_ItemActivation
// 0x0001 (0x0001 - 0x0000)
struct CharacterAnimationInterface_C_Anim_ItemActivation final
{
public:
	E_ItemActivationTypes                         ItemUseType;                                       // 0x0000(0x0001)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterAnimationInterface_C_Anim_ItemActivation) == 0x000001, "Wrong alignment on CharacterAnimationInterface_C_Anim_ItemActivation");
static_assert(sizeof(CharacterAnimationInterface_C_Anim_ItemActivation) == 0x000001, "Wrong size on CharacterAnimationInterface_C_Anim_ItemActivation");
static_assert(offsetof(CharacterAnimationInterface_C_Anim_ItemActivation, ItemUseType) == 0x000000, "Member 'CharacterAnimationInterface_C_Anim_ItemActivation::ItemUseType' has a wrong offset!");

// Function CharacterAnimationInterface.CharacterAnimationInterface_C.Anim_DebugPlayAnimation
// 0x0020 (0x0020 - 0x0000)
struct CharacterAnimationInterface_C_Anim_DebugPlayAnimation final
{
public:
	class FString                                 Character;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Number;                                            // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterAnimationInterface_C_Anim_DebugPlayAnimation) == 0x000008, "Wrong alignment on CharacterAnimationInterface_C_Anim_DebugPlayAnimation");
static_assert(sizeof(CharacterAnimationInterface_C_Anim_DebugPlayAnimation) == 0x000020, "Wrong size on CharacterAnimationInterface_C_Anim_DebugPlayAnimation");
static_assert(offsetof(CharacterAnimationInterface_C_Anim_DebugPlayAnimation, Character) == 0x000000, "Member 'CharacterAnimationInterface_C_Anim_DebugPlayAnimation::Character' has a wrong offset!");
static_assert(offsetof(CharacterAnimationInterface_C_Anim_DebugPlayAnimation, Number) == 0x000010, "Member 'CharacterAnimationInterface_C_Anim_DebugPlayAnimation::Number' has a wrong offset!");

// Function CharacterAnimationInterface.CharacterAnimationInterface_C.Anim_PregameEmote
// 0x0004 (0x0004 - 0x0000)
struct CharacterAnimationInterface_C_Anim_PregameEmote final
{
public:
	int32                                         Number;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterAnimationInterface_C_Anim_PregameEmote) == 0x000004, "Wrong alignment on CharacterAnimationInterface_C_Anim_PregameEmote");
static_assert(sizeof(CharacterAnimationInterface_C_Anim_PregameEmote) == 0x000004, "Wrong size on CharacterAnimationInterface_C_Anim_PregameEmote");
static_assert(offsetof(CharacterAnimationInterface_C_Anim_PregameEmote, Number) == 0x000000, "Member 'CharacterAnimationInterface_C_Anim_PregameEmote::Number' has a wrong offset!");

// Function CharacterAnimationInterface.CharacterAnimationInterface_C.Anim_SpawnProp
// 0x0020 (0x0020 - 0x0000)
struct CharacterAnimationInterface_C_Anim_SpawnProp final
{
public:
	class USkeletalMesh*                          SkeletalMesh;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                          Animation;                                         // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Socket;                                            // 0x0010(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LoopAnim;                                          // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterAnimationInterface_C_Anim_SpawnProp) == 0x000008, "Wrong alignment on CharacterAnimationInterface_C_Anim_SpawnProp");
static_assert(sizeof(CharacterAnimationInterface_C_Anim_SpawnProp) == 0x000020, "Wrong size on CharacterAnimationInterface_C_Anim_SpawnProp");
static_assert(offsetof(CharacterAnimationInterface_C_Anim_SpawnProp, SkeletalMesh) == 0x000000, "Member 'CharacterAnimationInterface_C_Anim_SpawnProp::SkeletalMesh' has a wrong offset!");
static_assert(offsetof(CharacterAnimationInterface_C_Anim_SpawnProp, Animation) == 0x000008, "Member 'CharacterAnimationInterface_C_Anim_SpawnProp::Animation' has a wrong offset!");
static_assert(offsetof(CharacterAnimationInterface_C_Anim_SpawnProp, Socket) == 0x000010, "Member 'CharacterAnimationInterface_C_Anim_SpawnProp::Socket' has a wrong offset!");
static_assert(offsetof(CharacterAnimationInterface_C_Anim_SpawnProp, LoopAnim) == 0x000018, "Member 'CharacterAnimationInterface_C_Anim_SpawnProp::LoopAnim' has a wrong offset!");

}


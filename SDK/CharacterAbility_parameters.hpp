#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterAbility

#include "Basic.hpp"


namespace SDK::Params
{

// Function CharacterAbility.CharacterAbility_C.Populate
// 0x0028 (0x0028 - 0x0000)
struct CharacterAbility_C_Populate final
{
public:
	TSoftClassPtr<class UClass>                   CharacterClass;                                    // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};
static_assert(alignof(CharacterAbility_C_Populate) == 0x000008, "Wrong alignment on CharacterAbility_C_Populate");
static_assert(sizeof(CharacterAbility_C_Populate) == 0x000028, "Wrong size on CharacterAbility_C_Populate");
static_assert(offsetof(CharacterAbility_C_Populate, CharacterClass) == 0x000000, "Member 'CharacterAbility_C_Populate::CharacterClass' has a wrong offset!");

}


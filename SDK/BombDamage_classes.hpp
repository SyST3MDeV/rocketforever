#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BombDamage

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BombDamage.BombDamage_C
// 0x0000 (0x00D8 - 0x00D8)
class UBombDamage_C final : public UMarinerDamageType
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BombDamage_C">();
	}
	static class UBombDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBombDamage_C>();
	}
};
static_assert(alignof(UBombDamage_C) == 0x000008, "Wrong alignment on UBombDamage_C");
static_assert(sizeof(UBombDamage_C) == 0x0000D8, "Wrong size on UBombDamage_C");

}


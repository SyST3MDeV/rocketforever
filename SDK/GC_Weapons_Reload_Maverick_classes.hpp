#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Weapons_Reload_Maverick

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Weapons_Reload_Maverick.GC_Weapons_Reload_Maverick_C
// 0x0000 (0x00C8 - 0x00C8)
class UGC_Weapons_Reload_Maverick_C final : public UMarinerCueNotify_WeaponEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Weapons_Reload_Maverick_C">();
	}
	static class UGC_Weapons_Reload_Maverick_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Weapons_Reload_Maverick_C>();
	}
};
static_assert(alignof(UGC_Weapons_Reload_Maverick_C) == 0x000008, "Wrong alignment on UGC_Weapons_Reload_Maverick_C");
static_assert(sizeof(UGC_Weapons_Reload_Maverick_C) == 0x0000C8, "Wrong size on UGC_Weapons_Reload_Maverick_C");

}


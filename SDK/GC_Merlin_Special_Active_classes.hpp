#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Merlin_Special_Active

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Merlin_Special_Active.GC_Merlin_Special_Active_C
// 0x0000 (0x00C8 - 0x00C8)
class UGC_Merlin_Special_Active_C final : public UMarinerCueNotify_WeaponEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Merlin_Special_Active_C">();
	}
	static class UGC_Merlin_Special_Active_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Merlin_Special_Active_C>();
	}
};
static_assert(alignof(UGC_Merlin_Special_Active_C) == 0x000008, "Wrong alignment on UGC_Merlin_Special_Active_C");
static_assert(sizeof(UGC_Merlin_Special_Active_C) == 0x0000C8, "Wrong size on UGC_Merlin_Special_Active_C");

}


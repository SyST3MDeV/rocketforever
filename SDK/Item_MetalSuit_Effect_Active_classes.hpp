#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_MetalSuit_Effect_Active

#include "Basic.hpp"

#include "NapalmGrenadeEffect_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Item_MetalSuit_Effect_Active.Item_MetalSuit_Effect_Active_C
// 0x0000 (0x0770 - 0x0770)
class UItem_MetalSuit_Effect_Active_C final : public UNapalmGrenadeEffect_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Item_MetalSuit_Effect_Active_C">();
	}
	static class UItem_MetalSuit_Effect_Active_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UItem_MetalSuit_Effect_Active_C>();
	}
};
static_assert(alignof(UItem_MetalSuit_Effect_Active_C) == 0x000008, "Wrong alignment on UItem_MetalSuit_Effect_Active_C");
static_assert(sizeof(UItem_MetalSuit_Effect_Active_C) == 0x000770, "Wrong size on UItem_MetalSuit_Effect_Active_C");

}


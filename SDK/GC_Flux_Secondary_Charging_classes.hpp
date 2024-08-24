#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Flux_Secondary_Charging

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Flux_Secondary_Charging.GC_Flux_Secondary_Charging_C
// 0x0008 (0x0310 - 0x0308)
class AGC_Flux_Secondary_Charging_C final : public AMarinerCueNotify_ManagedWeaponEffect
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Flux_Secondary_Charging_C">();
	}
	static class AGC_Flux_Secondary_Charging_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Flux_Secondary_Charging_C>();
	}
};
static_assert(alignof(AGC_Flux_Secondary_Charging_C) == 0x000008, "Wrong alignment on AGC_Flux_Secondary_Charging_C");
static_assert(sizeof(AGC_Flux_Secondary_Charging_C) == 0x000310, "Wrong size on AGC_Flux_Secondary_Charging_C");
static_assert(offsetof(AGC_Flux_Secondary_Charging_C, DefaultSceneRoot) == 0x000308, "Member 'AGC_Flux_Secondary_Charging_C::DefaultSceneRoot' has a wrong offset!");

}


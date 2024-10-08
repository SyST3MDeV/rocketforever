#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HealthKitEffect_Duration

#include "Basic.hpp"

#include "GameplayAbilities_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HealthKitEffect_Duration.HealthKitEffect_Duration_C
// 0x0000 (0x0770 - 0x0770)
class UHealthKitEffect_Duration_C final : public UGameplayEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HealthKitEffect_Duration_C">();
	}
	static class UHealthKitEffect_Duration_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHealthKitEffect_Duration_C>();
	}
};
static_assert(alignof(UHealthKitEffect_Duration_C) == 0x000008, "Wrong alignment on UHealthKitEffect_Duration_C");
static_assert(sizeof(UHealthKitEffect_Duration_C) == 0x000770, "Wrong size on UHealthKitEffect_Duration_C");

}


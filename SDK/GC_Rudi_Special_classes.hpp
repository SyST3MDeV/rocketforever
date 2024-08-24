#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Rudi_Special

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Rudi_Special.GC_Rudi_Special_C
// 0x0008 (0x0338 - 0x0330)
class AGC_Rudi_Special_C final : public AMarinerCueNotify_ManagedCharacterEffect
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Rudi_Special_C">();
	}
	static class AGC_Rudi_Special_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGC_Rudi_Special_C>();
	}
};
static_assert(alignof(AGC_Rudi_Special_C) == 0x000008, "Wrong alignment on AGC_Rudi_Special_C");
static_assert(sizeof(AGC_Rudi_Special_C) == 0x000338, "Wrong size on AGC_Rudi_Special_C");
static_assert(offsetof(AGC_Rudi_Special_C, DefaultSceneRoot) == 0x000330, "Member 'AGC_Rudi_Special_C::DefaultSceneRoot' has a wrong offset!");

}


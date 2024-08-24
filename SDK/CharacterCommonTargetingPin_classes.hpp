#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterCommonTargetingPin

#include "Basic.hpp"

#include "BasePin_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterCommonTargetingPin.CharacterCommonTargetingPin_C
// 0x0008 (0x0400 - 0x03F8)
class UCharacterCommonTargetingPin_C final : public UBasePin_C
{
public:
	class UCharacterCommonTargeting_C*            CharacterCommonTargeting;                          // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterCommonTargetingPin_C">();
	}
	static class UCharacterCommonTargetingPin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterCommonTargetingPin_C>();
	}
};
static_assert(alignof(UCharacterCommonTargetingPin_C) == 0x000008, "Wrong alignment on UCharacterCommonTargetingPin_C");
static_assert(sizeof(UCharacterCommonTargetingPin_C) == 0x000400, "Wrong size on UCharacterCommonTargetingPin_C");
static_assert(offsetof(UCharacterCommonTargetingPin_C, CharacterCommonTargeting) == 0x0003F8, "Member 'UCharacterCommonTargetingPin_C::CharacterCommonTargeting' has a wrong offset!");

}


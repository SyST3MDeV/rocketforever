#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EquipAndEquipToAllClose

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass EquipAndEquipToAllClose.EquipAndEquipToAllClose_C
// 0x0000 (0x0098 - 0x0098)
class UEquipAndEquipToAllClose_C final : public UMarinerMessageBoxPrompts
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EquipAndEquipToAllClose_C">();
	}
	static class UEquipAndEquipToAllClose_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEquipAndEquipToAllClose_C>();
	}
};
static_assert(alignof(UEquipAndEquipToAllClose_C) == 0x000008, "Wrong alignment on UEquipAndEquipToAllClose_C");
static_assert(sizeof(UEquipAndEquipToAllClose_C) == 0x000098, "Wrong size on UEquipAndEquipToAllClose_C");

}


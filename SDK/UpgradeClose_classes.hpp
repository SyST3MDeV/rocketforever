#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UpgradeClose

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass UpgradeClose.UpgradeClose_C
// 0x0000 (0x0098 - 0x0098)
class UUpgradeClose_C final : public UMarinerMessageBoxPrompts
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UpgradeClose_C">();
	}
	static class UUpgradeClose_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUpgradeClose_C>();
	}
};
static_assert(alignof(UUpgradeClose_C) == 0x000008, "Wrong alignment on UUpgradeClose_C");
static_assert(sizeof(UUpgradeClose_C) == 0x000098, "Wrong size on UUpgradeClose_C");

}


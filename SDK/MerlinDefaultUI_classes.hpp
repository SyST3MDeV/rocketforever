#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MerlinDefaultUI

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MerlinDefaultUI.MerlinDefaultUI_C
// 0x0000 (0x0568 - 0x0568)
class UMerlinDefaultUI_C final : public UMarinerCharacterUIData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MerlinDefaultUI_C">();
	}
	static class UMerlinDefaultUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMerlinDefaultUI_C>();
	}
};
static_assert(alignof(UMerlinDefaultUI_C) == 0x000008, "Wrong alignment on UMerlinDefaultUI_C");
static_assert(sizeof(UMerlinDefaultUI_C) == 0x000568, "Wrong size on UMerlinDefaultUI_C");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: InputOverlay

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InputOverlay.InputOverlay_C
// 0x0000 (0x0960 - 0x0960)
class UInputOverlay_C final : public UMarinerInputOverlay
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InputOverlay_C">();
	}
	static class UInputOverlay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInputOverlay_C>();
	}
};
static_assert(alignof(UInputOverlay_C) == 0x000008, "Wrong alignment on UInputOverlay_C");
static_assert(sizeof(UInputOverlay_C) == 0x000960, "Wrong size on UInputOverlay_C");

}


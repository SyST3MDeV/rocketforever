#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SliderDefaultUI

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SliderDefaultUI.SliderDefaultUI_C
// 0x0000 (0x0568 - 0x0568)
class USliderDefaultUI_C final : public UMarinerCharacterUIData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SliderDefaultUI_C">();
	}
	static class USliderDefaultUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USliderDefaultUI_C>();
	}
};
static_assert(alignof(USliderDefaultUI_C) == 0x000008, "Wrong alignment on USliderDefaultUI_C");
static_assert(sizeof(USliderDefaultUI_C) == 0x000568, "Wrong size on USliderDefaultUI_C");

}


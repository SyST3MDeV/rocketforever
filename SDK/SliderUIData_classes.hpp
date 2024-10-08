#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SliderUIData

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SliderUIData.SliderUIData_C
// 0x0000 (0x0350 - 0x0350)
class USliderUIData_C final : public UMarinerBaseCharacterUIData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SliderUIData_C">();
	}
	static class USliderUIData_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USliderUIData_C>();
	}
};
static_assert(alignof(USliderUIData_C) == 0x000008, "Wrong alignment on USliderUIData_C");
static_assert(sizeof(USliderUIData_C) == 0x000350, "Wrong size on USliderUIData_C");

}


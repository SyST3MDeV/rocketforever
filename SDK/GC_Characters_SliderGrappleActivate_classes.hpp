#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Characters_SliderGrappleActivate

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Characters_SliderGrappleActivate.GC_Characters_SliderGrappleActivate_C
// 0x0000 (0x0080 - 0x0080)
class UGC_Characters_SliderGrappleActivate_C final : public UMarinerCueNotify_FireAndForgetEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Characters_SliderGrappleActivate_C">();
	}
	static class UGC_Characters_SliderGrappleActivate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Characters_SliderGrappleActivate_C>();
	}
};
static_assert(alignof(UGC_Characters_SliderGrappleActivate_C) == 0x000008, "Wrong alignment on UGC_Characters_SliderGrappleActivate_C");
static_assert(sizeof(UGC_Characters_SliderGrappleActivate_C) == 0x000080, "Wrong size on UGC_Characters_SliderGrappleActivate_C");

}


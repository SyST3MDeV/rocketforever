#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RocketTrophyCameraEffect

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass RocketTrophyCameraEffect.RocketTrophyCameraEffect_C
// 0x0000 (0x02D0 - 0x02D0)
class ARocketTrophyCameraEffect_C final : public AMarinerCameraLensEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RocketTrophyCameraEffect_C">();
	}
	static class ARocketTrophyCameraEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ARocketTrophyCameraEffect_C>();
	}
};
static_assert(alignof(ARocketTrophyCameraEffect_C) == 0x000010, "Wrong alignment on ARocketTrophyCameraEffect_C");
static_assert(sizeof(ARocketTrophyCameraEffect_C) == 0x0002D0, "Wrong size on ARocketTrophyCameraEffect_C");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HealthOrbCameraEffect

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass HealthOrbCameraEffect.HealthOrbCameraEffect_C
// 0x0000 (0x02D0 - 0x02D0)
class AHealthOrbCameraEffect_C final : public AMarinerCameraLensEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HealthOrbCameraEffect_C">();
	}
	static class AHealthOrbCameraEffect_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AHealthOrbCameraEffect_C>();
	}
};
static_assert(alignof(AHealthOrbCameraEffect_C) == 0x000010, "Wrong alignment on AHealthOrbCameraEffect_C");
static_assert(sizeof(AHealthOrbCameraEffect_C) == 0x0002D0, "Wrong size on AHealthOrbCameraEffect_C");

}


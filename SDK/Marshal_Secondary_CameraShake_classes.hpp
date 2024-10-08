#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Marshal_Secondary_CameraShake

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Marshal_Secondary_CameraShake.Marshal_Secondary_CameraShake_C
// 0x0000 (0x0160 - 0x0160)
class UMarshal_Secondary_CameraShake_C final : public UCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Marshal_Secondary_CameraShake_C">();
	}
	static class UMarshal_Secondary_CameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMarshal_Secondary_CameraShake_C>();
	}
};
static_assert(alignof(UMarshal_Secondary_CameraShake_C) == 0x000010, "Wrong alignment on UMarshal_Secondary_CameraShake_C");
static_assert(sizeof(UMarshal_Secondary_CameraShake_C) == 0x000160, "Wrong size on UMarshal_Secondary_CameraShake_C");

}


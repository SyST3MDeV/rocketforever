#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DashPrimaryCameraShake

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass DashPrimaryCameraShake.DashPrimaryCameraShake_C
// 0x0000 (0x0160 - 0x0160)
class UDashPrimaryCameraShake_C final : public UCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DashPrimaryCameraShake_C">();
	}
	static class UDashPrimaryCameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDashPrimaryCameraShake_C>();
	}
};
static_assert(alignof(UDashPrimaryCameraShake_C) == 0x000010, "Wrong alignment on UDashPrimaryCameraShake_C");
static_assert(sizeof(UDashPrimaryCameraShake_C) == 0x000160, "Wrong size on UDashPrimaryCameraShake_C");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ServerBrowserCamera

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass ServerBrowserCamera.ServerBrowserCamera_C
// 0x0000 (0x0780 - 0x0780)
class AServerBrowserCamera_C final : public ACameraActor
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ServerBrowserCamera_C">();
	}
	static class AServerBrowserCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AServerBrowserCamera_C>();
	}
};
static_assert(alignof(AServerBrowserCamera_C) == 0x000010, "Wrong alignment on AServerBrowserCamera_C");
static_assert(sizeof(AServerBrowserCamera_C) == 0x000780, "Wrong size on AServerBrowserCamera_C");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Gameplay

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Gameplay.Gameplay_C
// 0x0000 (0x0030 - 0x0030)
class UGameplay_C final : public UMarinerHUDState
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Gameplay_C">();
	}
	static class UGameplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGameplay_C>();
	}
};
static_assert(alignof(UGameplay_C) == 0x000008, "Wrong alignment on UGameplay_C");
static_assert(sizeof(UGameplay_C) == 0x000030, "Wrong size on UGameplay_C");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Scoreboard

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Scoreboard.Scoreboard_C
// 0x0000 (0x0030 - 0x0030)
class UScoreboard_C final : public UMarinerHUDState
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Scoreboard_C">();
	}
	static class UScoreboard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UScoreboard_C>();
	}
};
static_assert(alignof(UScoreboard_C) == 0x000008, "Wrong alignment on UScoreboard_C");
static_assert(sizeof(UScoreboard_C) == 0x000030, "Wrong size on UScoreboard_C");

}


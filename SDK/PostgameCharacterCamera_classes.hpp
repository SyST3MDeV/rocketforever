#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostgameCharacterCamera

#include "Basic.hpp"

#include "OptionsCamera_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PostgameCharacterCamera.PostgameCharacterCamera_C
// 0x0000 (0x0780 - 0x0780)
class APostgameCharacterCamera_C final : public AOptionsCamera_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PostgameCharacterCamera_C">();
	}
	static class APostgameCharacterCamera_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APostgameCharacterCamera_C>();
	}
};
static_assert(alignof(APostgameCharacterCamera_C) == 0x000010, "Wrong alignment on APostgameCharacterCamera_C");
static_assert(sizeof(APostgameCharacterCamera_C) == 0x000780, "Wrong size on APostgameCharacterCamera_C");

}


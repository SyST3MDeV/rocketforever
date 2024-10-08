#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PrivateMatchStack

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PrivateMatchStack.PrivateMatchStack_C
// 0x0000 (0x0028 - 0x0028)
class UPrivateMatchStack_C final : public UMarinerIDTag
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PrivateMatchStack_C">();
	}
	static class UPrivateMatchStack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPrivateMatchStack_C>();
	}
};
static_assert(alignof(UPrivateMatchStack_C) == 0x000008, "Wrong alignment on UPrivateMatchStack_C");
static_assert(sizeof(UPrivateMatchStack_C) == 0x000028, "Wrong size on UPrivateMatchStack_C");

}


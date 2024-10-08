#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: FriendsStack

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass FriendsStack.FriendsStack_C
// 0x0000 (0x0028 - 0x0028)
class UFriendsStack_C final : public UMarinerIDTag
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"FriendsStack_C">();
	}
	static class UFriendsStack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFriendsStack_C>();
	}
};
static_assert(alignof(UFriendsStack_C) == 0x000008, "Wrong alignment on UFriendsStack_C");
static_assert(sizeof(UFriendsStack_C) == 0x000028, "Wrong size on UFriendsStack_C");

}


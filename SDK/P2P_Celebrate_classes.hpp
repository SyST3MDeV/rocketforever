#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: P2P_Celebrate

#include "Basic.hpp"

#include "Base_ChatMessage_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass P2P_Celebrate.P2P_Celebrate_C
// 0x0000 (0x00F0 - 0x00F0)
class UP2P_Celebrate_C final : public UBase_ChatMessage_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"P2P_Celebrate_C">();
	}
	static class UP2P_Celebrate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UP2P_Celebrate_C>();
	}
};
static_assert(alignof(UP2P_Celebrate_C) == 0x000008, "Wrong alignment on UP2P_Celebrate_C");
static_assert(sizeof(UP2P_Celebrate_C) == 0x0000F0, "Wrong size on UP2P_Celebrate_C");

}


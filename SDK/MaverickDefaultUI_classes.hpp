#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MaverickDefaultUI

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MaverickDefaultUI.MaverickDefaultUI_C
// 0x0000 (0x0568 - 0x0568)
class UMaverickDefaultUI_C final : public UMarinerCharacterUIData
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MaverickDefaultUI_C">();
	}
	static class UMaverickDefaultUI_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMaverickDefaultUI_C>();
	}
};
static_assert(alignof(UMaverickDefaultUI_C) == 0x000008, "Wrong alignment on UMaverickDefaultUI_C");
static_assert(sizeof(UMaverickDefaultUI_C) == 0x000568, "Wrong size on UMaverickDefaultUI_C");

}


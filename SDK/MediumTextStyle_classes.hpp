#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MediumTextStyle

#include "Basic.hpp"

#include "MainMenuTextStyle_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass MediumTextStyle.MediumTextStyle_C
// 0x0000 (0x0298 - 0x0298)
class UMediumTextStyle_C final : public UMainMenuTextStyle_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MediumTextStyle_C">();
	}
	static class UMediumTextStyle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMediumTextStyle_C>();
	}
};
static_assert(alignof(UMediumTextStyle_C) == 0x000008, "Wrong alignment on UMediumTextStyle_C");
static_assert(sizeof(UMediumTextStyle_C) == 0x000298, "Wrong size on UMediumTextStyle_C");

}


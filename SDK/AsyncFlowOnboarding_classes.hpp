#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AsyncFlowOnboarding

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AsyncFlowOnboarding.AsyncFlowOnboarding_C
// 0x0000 (0x04E8 - 0x04E8)
class UAsyncFlowOnboarding_C final : public UMarinerAsyncFlowOnboarding
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AsyncFlowOnboarding_C">();
	}
	static class UAsyncFlowOnboarding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAsyncFlowOnboarding_C>();
	}
};
static_assert(alignof(UAsyncFlowOnboarding_C) == 0x000008, "Wrong alignment on UAsyncFlowOnboarding_C");
static_assert(sizeof(UAsyncFlowOnboarding_C) == 0x0004E8, "Wrong size on UAsyncFlowOnboarding_C");

}


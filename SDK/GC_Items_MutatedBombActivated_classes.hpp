#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GC_Items_MutatedBombActivated

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GC_Items_MutatedBombActivated.GC_Items_MutatedBombActivated_C
// 0x0000 (0x0080 - 0x0080)
class UGC_Items_MutatedBombActivated_C final : public UMarinerCueNotify_FireAndForgetEffect
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GC_Items_MutatedBombActivated_C">();
	}
	static class UGC_Items_MutatedBombActivated_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGC_Items_MutatedBombActivated_C>();
	}
};
static_assert(alignof(UGC_Items_MutatedBombActivated_C) == 0x000008, "Wrong alignment on UGC_Items_MutatedBombActivated_C");
static_assert(sizeof(UGC_Items_MutatedBombActivated_C) == 0x000080, "Wrong size on UGC_Items_MutatedBombActivated_C");

}


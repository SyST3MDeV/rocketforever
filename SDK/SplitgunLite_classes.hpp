#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SplitgunLite

#include "Basic.hpp"

#include "BaseCharacterLite_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass SplitgunLite.SplitgunLite_C
// 0x0000 (0x0408 - 0x0408)
class ASplitgunLite_C final : public ABaseCharacterLite_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SplitgunLite_C">();
	}
	static class ASplitgunLite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ASplitgunLite_C>();
	}
};
static_assert(alignof(ASplitgunLite_C) == 0x000008, "Wrong alignment on ASplitgunLite_C");
static_assert(sizeof(ASplitgunLite_C) == 0x000408, "Wrong size on ASplitgunLite_C");

}


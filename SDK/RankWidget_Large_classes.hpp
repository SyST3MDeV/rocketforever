#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RankWidget_Large

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RankWidget_Large.RankWidget_Large_C
// 0x0000 (0x0278 - 0x0278)
class URankWidget_Large_C final : public UMarinerRankWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RankWidget_Large_C">();
	}
	static class URankWidget_Large_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URankWidget_Large_C>();
	}
};
static_assert(alignof(URankWidget_Large_C) == 0x000008, "Wrong alignment on URankWidget_Large_C");
static_assert(sizeof(URankWidget_Large_C) == 0x000278, "Wrong size on URankWidget_Large_C");

}


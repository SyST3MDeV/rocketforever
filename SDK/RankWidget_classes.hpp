#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RankWidget

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass RankWidget.RankWidget_C
// 0x0000 (0x0278 - 0x0278)
class URankWidget_C final : public UMarinerRankWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"RankWidget_C">();
	}
	static class URankWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<URankWidget_C>();
	}
};
static_assert(alignof(URankWidget_C) == 0x000008, "Wrong alignment on URankWidget_C");
static_assert(sizeof(URankWidget_C) == 0x000278, "Wrong size on URankWidget_C");

}


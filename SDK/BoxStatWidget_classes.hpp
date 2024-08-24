#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BoxStatWidget

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BoxStatWidget.BoxStatWidget_C
// 0x0000 (0x0330 - 0x0330)
class UBoxStatWidget_C final : public UMarinerStatWidget
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BoxStatWidget_C">();
	}
	static class UBoxStatWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBoxStatWidget_C>();
	}
};
static_assert(alignof(UBoxStatWidget_C) == 0x000008, "Wrong alignment on UBoxStatWidget_C");
static_assert(sizeof(UBoxStatWidget_C) == 0x000330, "Wrong size on UBoxStatWidget_C");

}


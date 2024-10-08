#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WidgetPool

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WidgetPool.WidgetPool_C
// 0x0000 (0x0088 - 0x0088)
class UWidgetPool_C final : public UMarinerWidgetPool
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WidgetPool_C">();
	}
	static class UWidgetPool_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWidgetPool_C>();
	}
};
static_assert(alignof(UWidgetPool_C) == 0x000008, "Wrong alignment on UWidgetPool_C");
static_assert(sizeof(UWidgetPool_C) == 0x000088, "Wrong size on UWidgetPool_C");

}


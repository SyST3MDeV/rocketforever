#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialGroupHeader

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialGroupHeader.SocialGroupHeader_C
// 0x0008 (0x0248 - 0x0240)
class USocialGroupHeader_C final : public UMarinerGroupHeaderWidget
{
public:
	class UImage*                                 Image_67;                                          // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialGroupHeader_C">();
	}
	static class USocialGroupHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialGroupHeader_C>();
	}
};
static_assert(alignof(USocialGroupHeader_C) == 0x000008, "Wrong alignment on USocialGroupHeader_C");
static_assert(sizeof(USocialGroupHeader_C) == 0x000248, "Wrong size on USocialGroupHeader_C");
static_assert(offsetof(USocialGroupHeader_C, Image_67) == 0x000240, "Member 'USocialGroupHeader_C::Image_67' has a wrong offset!");

}


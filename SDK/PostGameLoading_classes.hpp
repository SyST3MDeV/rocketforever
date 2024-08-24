#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostGameLoading

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PostGameLoading.PostGameLoading_C
// 0x0018 (0x04F8 - 0x04E0)
class UPostGameLoading_C final : public UMarinerMenu
{
public:
	class UImage*                                 Image_634;                                         // 0x04E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LoadingImage;                                      // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadingSpinner_C*                      LoadingSpinner;                                    // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PostGameLoading_C">();
	}
	static class UPostGameLoading_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPostGameLoading_C>();
	}
};
static_assert(alignof(UPostGameLoading_C) == 0x000008, "Wrong alignment on UPostGameLoading_C");
static_assert(sizeof(UPostGameLoading_C) == 0x0004F8, "Wrong size on UPostGameLoading_C");
static_assert(offsetof(UPostGameLoading_C, Image_634) == 0x0004E0, "Member 'UPostGameLoading_C::Image_634' has a wrong offset!");
static_assert(offsetof(UPostGameLoading_C, LoadingImage) == 0x0004E8, "Member 'UPostGameLoading_C::LoadingImage' has a wrong offset!");
static_assert(offsetof(UPostGameLoading_C, LoadingSpinner) == 0x0004F0, "Member 'UPostGameLoading_C::LoadingSpinner' has a wrong offset!");

}


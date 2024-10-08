#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SecondaryStackButtonWidget

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SecondaryStackButtonWidget.SecondaryStackButtonWidget_C
// 0x0030 (0x0628 - 0x05F8)
class USecondaryStackButtonWidget_C final : public UMarinerMenuStackButton
{
public:
	class UNamedSlot*                             HighlightSlot;                                     // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                HitAreaButton;                                     // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_225;                                         // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TabImage;                                          // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerButton*                         TextButton;                                        // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                             WidgetSlot;                                        // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	struct FMarinerMenuStackButtonAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SecondaryStackButtonWidget_C">();
	}
	static class USecondaryStackButtonWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USecondaryStackButtonWidget_C>();
	}
};
static_assert(alignof(USecondaryStackButtonWidget_C) == 0x000008, "Wrong alignment on USecondaryStackButtonWidget_C");
static_assert(sizeof(USecondaryStackButtonWidget_C) == 0x000628, "Wrong size on USecondaryStackButtonWidget_C");
static_assert(offsetof(USecondaryStackButtonWidget_C, HighlightSlot) == 0x0005F8, "Member 'USecondaryStackButtonWidget_C::HighlightSlot' has a wrong offset!");
static_assert(offsetof(USecondaryStackButtonWidget_C, HitAreaButton) == 0x000600, "Member 'USecondaryStackButtonWidget_C::HitAreaButton' has a wrong offset!");
static_assert(offsetof(USecondaryStackButtonWidget_C, Image_225) == 0x000608, "Member 'USecondaryStackButtonWidget_C::Image_225' has a wrong offset!");
static_assert(offsetof(USecondaryStackButtonWidget_C, TabImage) == 0x000610, "Member 'USecondaryStackButtonWidget_C::TabImage' has a wrong offset!");
static_assert(offsetof(USecondaryStackButtonWidget_C, TextButton) == 0x000618, "Member 'USecondaryStackButtonWidget_C::TextButton' has a wrong offset!");
static_assert(offsetof(USecondaryStackButtonWidget_C, WidgetSlot) == 0x000620, "Member 'USecondaryStackButtonWidget_C::WidgetSlot' has a wrong offset!");

}


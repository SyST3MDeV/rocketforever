#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CustomDropdownOption

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CustomDropdownOption.CustomDropdownOption_C
// 0x0020 (0x2F98 - 0x2F78)
class UCustomDropdownOption_C final : public UMarinerLayeredButton
{
public:
	class UWidgetAnimation*                       HoverAnim;                                         // 0x2F78(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x2F80(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerButton*                         HitArea;                                           // 0x2F88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             OptionText;                                        // 0x2F90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	struct FMarinerLayeredButtonAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CustomDropdownOption_C">();
	}
	static class UCustomDropdownOption_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCustomDropdownOption_C>();
	}
};
static_assert(alignof(UCustomDropdownOption_C) == 0x000008, "Wrong alignment on UCustomDropdownOption_C");
static_assert(sizeof(UCustomDropdownOption_C) == 0x002F98, "Wrong size on UCustomDropdownOption_C");
static_assert(offsetof(UCustomDropdownOption_C, HoverAnim) == 0x002F78, "Member 'UCustomDropdownOption_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UCustomDropdownOption_C, BG) == 0x002F80, "Member 'UCustomDropdownOption_C::BG' has a wrong offset!");
static_assert(offsetof(UCustomDropdownOption_C, HitArea) == 0x002F88, "Member 'UCustomDropdownOption_C::HitArea' has a wrong offset!");
static_assert(offsetof(UCustomDropdownOption_C, OptionText) == 0x002F90, "Member 'UCustomDropdownOption_C::OptionText' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ComboBoxSetting

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ComboBoxSetting.ComboBoxSetting_C
// 0x0038 (0x0728 - 0x06F0)
class UComboBoxSetting_C final : public UMarinerSettingComboBox
{
public:
	class UWidgetAnimation*                       HoveredAnim;                                       // 0x06F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x06F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerButton*                         ClickableArea;                                     // 0x0700(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCustomComboBox_C*                      CustomComboBox;                                    // 0x0708(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Highlight;                                         // 0x0710(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelText;                                         // 0x0718(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Material;                                          // 0x0720(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	class UWidget* On_ComboBox_GenerateWidget_0(const class FString& Item);

	struct FMarinerSettingComboBoxAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ComboBoxSetting_C">();
	}
	static class UComboBoxSetting_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UComboBoxSetting_C>();
	}
};
static_assert(alignof(UComboBoxSetting_C) == 0x000008, "Wrong alignment on UComboBoxSetting_C");
static_assert(sizeof(UComboBoxSetting_C) == 0x000728, "Wrong size on UComboBoxSetting_C");
static_assert(offsetof(UComboBoxSetting_C, HoveredAnim) == 0x0006F0, "Member 'UComboBoxSetting_C::HoveredAnim' has a wrong offset!");
static_assert(offsetof(UComboBoxSetting_C, Background) == 0x0006F8, "Member 'UComboBoxSetting_C::Background' has a wrong offset!");
static_assert(offsetof(UComboBoxSetting_C, ClickableArea) == 0x000700, "Member 'UComboBoxSetting_C::ClickableArea' has a wrong offset!");
static_assert(offsetof(UComboBoxSetting_C, CustomComboBox) == 0x000708, "Member 'UComboBoxSetting_C::CustomComboBox' has a wrong offset!");
static_assert(offsetof(UComboBoxSetting_C, Highlight) == 0x000710, "Member 'UComboBoxSetting_C::Highlight' has a wrong offset!");
static_assert(offsetof(UComboBoxSetting_C, LabelText) == 0x000718, "Member 'UComboBoxSetting_C::LabelText' has a wrong offset!");
static_assert(offsetof(UComboBoxSetting_C, Material) == 0x000720, "Member 'UComboBoxSetting_C::Material' has a wrong offset!");

}


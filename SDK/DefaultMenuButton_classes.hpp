#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultMenuButton

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DefaultMenuButton.DefaultMenuButton_C
// 0x0058 (0x2FD0 - 0x2F78)
class UDefaultMenuButton_C final : public UMarinerLayeredButton
{
public:
	class UWidgetAnimation*                       UnhoveredAnim;                                     // 0x2F78(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoveredAnim;                                       // 0x2F80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             AuxiliaryText;                                     // 0x2F88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x2F90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Border;                                            // 0x2F98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x2FA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x2FA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Material;                                          // 0x2FB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PrimaryText;                                       // 0x2FB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UDefaultPromptBanner_C*                 PromptBanner;                                      // 0x2FC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RootSizeBox;                                       // 0x2FC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	struct FMarinerLayeredButtonAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultMenuButton_C">();
	}
	static class UDefaultMenuButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultMenuButton_C>();
	}
};
static_assert(alignof(UDefaultMenuButton_C) == 0x000008, "Wrong alignment on UDefaultMenuButton_C");
static_assert(sizeof(UDefaultMenuButton_C) == 0x002FD0, "Wrong size on UDefaultMenuButton_C");
static_assert(offsetof(UDefaultMenuButton_C, UnhoveredAnim) == 0x002F78, "Member 'UDefaultMenuButton_C::UnhoveredAnim' has a wrong offset!");
static_assert(offsetof(UDefaultMenuButton_C, HoveredAnim) == 0x002F80, "Member 'UDefaultMenuButton_C::HoveredAnim' has a wrong offset!");
static_assert(offsetof(UDefaultMenuButton_C, AuxiliaryText) == 0x002F88, "Member 'UDefaultMenuButton_C::AuxiliaryText' has a wrong offset!");
static_assert(offsetof(UDefaultMenuButton_C, Background) == 0x002F90, "Member 'UDefaultMenuButton_C::Background' has a wrong offset!");
static_assert(offsetof(UDefaultMenuButton_C, Border) == 0x002F98, "Member 'UDefaultMenuButton_C::Border' has a wrong offset!");
static_assert(offsetof(UDefaultMenuButton_C, Button) == 0x002FA0, "Member 'UDefaultMenuButton_C::Button' has a wrong offset!");
static_assert(offsetof(UDefaultMenuButton_C, Icon) == 0x002FA8, "Member 'UDefaultMenuButton_C::Icon' has a wrong offset!");
static_assert(offsetof(UDefaultMenuButton_C, Material) == 0x002FB0, "Member 'UDefaultMenuButton_C::Material' has a wrong offset!");
static_assert(offsetof(UDefaultMenuButton_C, PrimaryText) == 0x002FB8, "Member 'UDefaultMenuButton_C::PrimaryText' has a wrong offset!");
static_assert(offsetof(UDefaultMenuButton_C, PromptBanner) == 0x002FC0, "Member 'UDefaultMenuButton_C::PromptBanner' has a wrong offset!");
static_assert(offsetof(UDefaultMenuButton_C, RootSizeBox) == 0x002FC8, "Member 'UDefaultMenuButton_C::RootSizeBox' has a wrong offset!");

}


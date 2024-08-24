#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultRewardButton

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DefaultRewardButton.DefaultRewardButton_C
// 0x00A0 (0x3558 - 0x34B8)
class UDefaultRewardButton_C final : public UMarinerRewardButton
{
public:
	class UWidgetAnimation*                       DuplicateItemAnim;                                 // 0x34B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoveredAnim;                                       // 0x34C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x34C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                Button;                                            // 0x34D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CollectionIcon;                                    // 0x34D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CurrencyIcon;                                      // 0x34E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DuplicateFrame1;                                   // 0x34E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DuplicateFrame2;                                   // 0x34F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EmoteFrame;                                        // 0x34F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_116;                                         // 0x3500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_186;                                         // 0x3508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBacker;                                       // 0x3510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemFrame;                                         // 0x3518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemIcon;                                          // 0x3520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ItemName;                                          // 0x3528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemRarityPanel;                                   // 0x3530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Material;                                          // 0x3538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PartsValue;                                        // 0x3540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RarityImage_blank;                                 // 0x3548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RootSizeBox;                                       // 0x3550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	struct FMarinerLayeredButtonAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultRewardButton_C">();
	}
	static class UDefaultRewardButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultRewardButton_C>();
	}
};
static_assert(alignof(UDefaultRewardButton_C) == 0x000008, "Wrong alignment on UDefaultRewardButton_C");
static_assert(sizeof(UDefaultRewardButton_C) == 0x003558, "Wrong size on UDefaultRewardButton_C");
static_assert(offsetof(UDefaultRewardButton_C, DuplicateItemAnim) == 0x0034B8, "Member 'UDefaultRewardButton_C::DuplicateItemAnim' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, HoveredAnim) == 0x0034C0, "Member 'UDefaultRewardButton_C::HoveredAnim' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, Background) == 0x0034C8, "Member 'UDefaultRewardButton_C::Background' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, Button) == 0x0034D0, "Member 'UDefaultRewardButton_C::Button' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, CollectionIcon) == 0x0034D8, "Member 'UDefaultRewardButton_C::CollectionIcon' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, CurrencyIcon) == 0x0034E0, "Member 'UDefaultRewardButton_C::CurrencyIcon' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, DuplicateFrame1) == 0x0034E8, "Member 'UDefaultRewardButton_C::DuplicateFrame1' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, DuplicateFrame2) == 0x0034F0, "Member 'UDefaultRewardButton_C::DuplicateFrame2' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, EmoteFrame) == 0x0034F8, "Member 'UDefaultRewardButton_C::EmoteFrame' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, Image_116) == 0x003500, "Member 'UDefaultRewardButton_C::Image_116' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, Image_186) == 0x003508, "Member 'UDefaultRewardButton_C::Image_186' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, ImageBacker) == 0x003510, "Member 'UDefaultRewardButton_C::ImageBacker' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, ItemFrame) == 0x003518, "Member 'UDefaultRewardButton_C::ItemFrame' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, ItemIcon) == 0x003520, "Member 'UDefaultRewardButton_C::ItemIcon' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, ItemName) == 0x003528, "Member 'UDefaultRewardButton_C::ItemName' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, ItemRarityPanel) == 0x003530, "Member 'UDefaultRewardButton_C::ItemRarityPanel' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, Material) == 0x003538, "Member 'UDefaultRewardButton_C::Material' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, PartsValue) == 0x003540, "Member 'UDefaultRewardButton_C::PartsValue' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, RarityImage_blank) == 0x003548, "Member 'UDefaultRewardButton_C::RarityImage_blank' has a wrong offset!");
static_assert(offsetof(UDefaultRewardButton_C, RootSizeBox) == 0x003550, "Member 'UDefaultRewardButton_C::RootSizeBox' has a wrong offset!");

}


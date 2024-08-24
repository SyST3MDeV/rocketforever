#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterFeatureCMSItemButton

#include "Basic.hpp"

#include "MangoClient_structs.hpp"
#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterFeatureCMSItemButton.CharacterFeatureCMSItemButton_C
// 0x0058 (0x2FD0 - 0x2F78)
class UCharacterFeatureCMSItemButton_C final : public UMarinerLayeredButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2F78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HoveredAnim;                                       // 0x2F80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x2F88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Border;                                            // 0x2F90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCMSItemButton_C*                       CMSItemButton;                                     // 0x2F98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                HitArea;                                           // 0x2FA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadingSpinner_Simplified_C*           LoadingSpinner_Simplified;                         // 0x2FA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Material;                                          // 0x2FB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_CharacterFeatureCMSItemButton_C;              // 0x2FB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUnviewedItemWidget_C*                  UnviewedWidget;                                    // 0x2FC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EMangoItemType                                ItemType;                                          // 0x2FC8(0x0001)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CharacterFeatureCMSItemButton(int32 EntryPoint);
	void Construct();
	void RemoveLoadingSpinner();
	void ResetCMSButtonToDefaults();
	void SetItemData(class UItemLoadResponse* ItemData);

	struct FMarinerLayeredButtonAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterFeatureCMSItemButton_C">();
	}
	static class UCharacterFeatureCMSItemButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterFeatureCMSItemButton_C>();
	}
};
static_assert(alignof(UCharacterFeatureCMSItemButton_C) == 0x000008, "Wrong alignment on UCharacterFeatureCMSItemButton_C");
static_assert(sizeof(UCharacterFeatureCMSItemButton_C) == 0x002FD0, "Wrong size on UCharacterFeatureCMSItemButton_C");
static_assert(offsetof(UCharacterFeatureCMSItemButton_C, UberGraphFrame) == 0x002F78, "Member 'UCharacterFeatureCMSItemButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureCMSItemButton_C, HoveredAnim) == 0x002F80, "Member 'UCharacterFeatureCMSItemButton_C::HoveredAnim' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureCMSItemButton_C, Background) == 0x002F88, "Member 'UCharacterFeatureCMSItemButton_C::Background' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureCMSItemButton_C, Border) == 0x002F90, "Member 'UCharacterFeatureCMSItemButton_C::Border' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureCMSItemButton_C, CMSItemButton) == 0x002F98, "Member 'UCharacterFeatureCMSItemButton_C::CMSItemButton' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureCMSItemButton_C, HitArea) == 0x002FA0, "Member 'UCharacterFeatureCMSItemButton_C::HitArea' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureCMSItemButton_C, LoadingSpinner_Simplified) == 0x002FA8, "Member 'UCharacterFeatureCMSItemButton_C::LoadingSpinner_Simplified' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureCMSItemButton_C, Material) == 0x002FB0, "Member 'UCharacterFeatureCMSItemButton_C::Material' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureCMSItemButton_C, Name_CharacterFeatureCMSItemButton_C) == 0x002FB8, "Member 'UCharacterFeatureCMSItemButton_C::Name_CharacterFeatureCMSItemButton_C' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureCMSItemButton_C, UnviewedWidget) == 0x002FC0, "Member 'UCharacterFeatureCMSItemButton_C::UnviewedWidget' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureCMSItemButton_C, ItemType) == 0x002FC8, "Member 'UCharacterFeatureCMSItemButton_C::ItemType' has a wrong offset!");

}


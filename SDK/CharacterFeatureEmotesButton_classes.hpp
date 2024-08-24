#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterFeatureEmotesButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterFeatureEmotesButton.CharacterFeatureEmotesButton_C
// 0x0068 (0x2FE0 - 0x2F78)
class UCharacterFeatureEmotesButton_C final : public UMarinerLayeredButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2F78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       HoveredAnim;                                       // 0x2F80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x2F88(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Border;                                            // 0x2F90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCMSItemButton_C*                       CMSItemButton;                                     // 0x2F98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cog;                                               // 0x2FA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                HitArea;                                           // 0x2FA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_106;                                         // 0x2FB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Material;                                          // 0x2FB8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Name_CharacterFeatureEmotesButton_C;               // 0x2FC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUnviewedItemWidget_C*                  UnviewedItemWidget;                                // 0x2FC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          NewVar_0;                                          // 0x2FD0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2076[0x7];                                     // 0x2FD1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerPlayableCharacter*              NewVar_1;                                          // 0x2FD8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CharacterFeatureEmotesButton(int32 EntryPoint);
	void Construct();
	void HandleUnviewedEmotes(class UMarinerPlayableCharacter* Character);
	void ResetCMSButtonToDefaults();

	struct FMarinerLayeredButtonAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterFeatureEmotesButton_C">();
	}
	static class UCharacterFeatureEmotesButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterFeatureEmotesButton_C>();
	}
};
static_assert(alignof(UCharacterFeatureEmotesButton_C) == 0x000008, "Wrong alignment on UCharacterFeatureEmotesButton_C");
static_assert(sizeof(UCharacterFeatureEmotesButton_C) == 0x002FE0, "Wrong size on UCharacterFeatureEmotesButton_C");
static_assert(offsetof(UCharacterFeatureEmotesButton_C, UberGraphFrame) == 0x002F78, "Member 'UCharacterFeatureEmotesButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureEmotesButton_C, HoveredAnim) == 0x002F80, "Member 'UCharacterFeatureEmotesButton_C::HoveredAnim' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureEmotesButton_C, Background) == 0x002F88, "Member 'UCharacterFeatureEmotesButton_C::Background' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureEmotesButton_C, Border) == 0x002F90, "Member 'UCharacterFeatureEmotesButton_C::Border' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureEmotesButton_C, CMSItemButton) == 0x002F98, "Member 'UCharacterFeatureEmotesButton_C::CMSItemButton' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureEmotesButton_C, Cog) == 0x002FA0, "Member 'UCharacterFeatureEmotesButton_C::Cog' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureEmotesButton_C, HitArea) == 0x002FA8, "Member 'UCharacterFeatureEmotesButton_C::HitArea' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureEmotesButton_C, Image_106) == 0x002FB0, "Member 'UCharacterFeatureEmotesButton_C::Image_106' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureEmotesButton_C, Material) == 0x002FB8, "Member 'UCharacterFeatureEmotesButton_C::Material' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureEmotesButton_C, Name_CharacterFeatureEmotesButton_C) == 0x002FC0, "Member 'UCharacterFeatureEmotesButton_C::Name_CharacterFeatureEmotesButton_C' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureEmotesButton_C, UnviewedItemWidget) == 0x002FC8, "Member 'UCharacterFeatureEmotesButton_C::UnviewedItemWidget' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureEmotesButton_C, NewVar_0) == 0x002FD0, "Member 'UCharacterFeatureEmotesButton_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(UCharacterFeatureEmotesButton_C, NewVar_1) == 0x002FD8, "Member 'UCharacterFeatureEmotesButton_C::NewVar_1' has a wrong offset!");

}


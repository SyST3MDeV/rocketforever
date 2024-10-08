#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultKeyboardPrompt

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DefaultKeyboardPrompt.DefaultKeyboardPrompt_C
// 0x0048 (0x0430 - 0x03E8)
class UDefaultKeyboardPrompt_C final : public UMarinerKeyboardPrompt
{
public:
	class UTextBlock*                             PlusText;                                          // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               PrimaryKeySize;                                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PrimaryKeyText;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PrimaryPromptIcon;                                 // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 PromptImage;                                       // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             PromptText;                                        // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SecondaryKeySize;                                  // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SecondaryKeyText;                                  // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SecondaryPromptIcon;                               // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	struct FMarinerKeyboardPromptAssets GetPromptAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DefaultKeyboardPrompt_C">();
	}
	static class UDefaultKeyboardPrompt_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDefaultKeyboardPrompt_C>();
	}
};
static_assert(alignof(UDefaultKeyboardPrompt_C) == 0x000008, "Wrong alignment on UDefaultKeyboardPrompt_C");
static_assert(sizeof(UDefaultKeyboardPrompt_C) == 0x000430, "Wrong size on UDefaultKeyboardPrompt_C");
static_assert(offsetof(UDefaultKeyboardPrompt_C, PlusText) == 0x0003E8, "Member 'UDefaultKeyboardPrompt_C::PlusText' has a wrong offset!");
static_assert(offsetof(UDefaultKeyboardPrompt_C, PrimaryKeySize) == 0x0003F0, "Member 'UDefaultKeyboardPrompt_C::PrimaryKeySize' has a wrong offset!");
static_assert(offsetof(UDefaultKeyboardPrompt_C, PrimaryKeyText) == 0x0003F8, "Member 'UDefaultKeyboardPrompt_C::PrimaryKeyText' has a wrong offset!");
static_assert(offsetof(UDefaultKeyboardPrompt_C, PrimaryPromptIcon) == 0x000400, "Member 'UDefaultKeyboardPrompt_C::PrimaryPromptIcon' has a wrong offset!");
static_assert(offsetof(UDefaultKeyboardPrompt_C, PromptImage) == 0x000408, "Member 'UDefaultKeyboardPrompt_C::PromptImage' has a wrong offset!");
static_assert(offsetof(UDefaultKeyboardPrompt_C, PromptText) == 0x000410, "Member 'UDefaultKeyboardPrompt_C::PromptText' has a wrong offset!");
static_assert(offsetof(UDefaultKeyboardPrompt_C, SecondaryKeySize) == 0x000418, "Member 'UDefaultKeyboardPrompt_C::SecondaryKeySize' has a wrong offset!");
static_assert(offsetof(UDefaultKeyboardPrompt_C, SecondaryKeyText) == 0x000420, "Member 'UDefaultKeyboardPrompt_C::SecondaryKeyText' has a wrong offset!");
static_assert(offsetof(UDefaultKeyboardPrompt_C, SecondaryPromptIcon) == 0x000428, "Member 'UDefaultKeyboardPrompt_C::SecondaryPromptIcon' has a wrong offset!");

}


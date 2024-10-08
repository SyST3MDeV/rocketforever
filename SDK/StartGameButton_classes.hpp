#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StartGameButton

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StartGameButton.StartGameButton_C
// 0x0040 (0x2FB8 - 0x2F78)
class UStartGameButton_C final : public UMarinerLayeredButton
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x2F78(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DailyLoginAddedAnim;                               // 0x2F80(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoveredAnim;                                       // 0x2F88(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x2F90(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 DailyLoginAddedFrame;                              // 0x2F98(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Highlight;                                         // 0x2FA0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LabelText;                                         // 0x2FA8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerButton*                         OverlayButton;                                     // 0x2FB0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StartGameButton(int32 EntryPoint);
	void BndEvt__OverlayButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();

	struct FMarinerLayeredButtonAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StartGameButton_C">();
	}
	static class UStartGameButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStartGameButton_C>();
	}
};
static_assert(alignof(UStartGameButton_C) == 0x000008, "Wrong alignment on UStartGameButton_C");
static_assert(sizeof(UStartGameButton_C) == 0x002FB8, "Wrong size on UStartGameButton_C");
static_assert(offsetof(UStartGameButton_C, UberGraphFrame) == 0x002F78, "Member 'UStartGameButton_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStartGameButton_C, DailyLoginAddedAnim) == 0x002F80, "Member 'UStartGameButton_C::DailyLoginAddedAnim' has a wrong offset!");
static_assert(offsetof(UStartGameButton_C, HoveredAnim) == 0x002F88, "Member 'UStartGameButton_C::HoveredAnim' has a wrong offset!");
static_assert(offsetof(UStartGameButton_C, Background) == 0x002F90, "Member 'UStartGameButton_C::Background' has a wrong offset!");
static_assert(offsetof(UStartGameButton_C, DailyLoginAddedFrame) == 0x002F98, "Member 'UStartGameButton_C::DailyLoginAddedFrame' has a wrong offset!");
static_assert(offsetof(UStartGameButton_C, Highlight) == 0x002FA0, "Member 'UStartGameButton_C::Highlight' has a wrong offset!");
static_assert(offsetof(UStartGameButton_C, LabelText) == 0x002FA8, "Member 'UStartGameButton_C::LabelText' has a wrong offset!");
static_assert(offsetof(UStartGameButton_C, OverlayButton) == 0x002FB0, "Member 'UStartGameButton_C::OverlayButton' has a wrong offset!");

}


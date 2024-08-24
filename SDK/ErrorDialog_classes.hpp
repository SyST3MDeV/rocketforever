#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErrorDialog

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ErrorDialog.ErrorDialog_C
// 0x0028 (0x0508 - 0x04E0)
class UErrorDialog_C final : public UMarinerMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                                OKButton;                                          // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_160;                                     // 0x04F0(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                 Message;                                           // 0x04F8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ErrorDialog(int32 EntryPoint);
	void BndEvt__OKButton_K2Node_ComponentBoundEvent_77_OnButtonClickedEvent__DelegateSignature();
	class FText GetMessage();
	void SetMessage(const class FString& InMessage);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ErrorDialog_C">();
	}
	static class UErrorDialog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UErrorDialog_C>();
	}
};
static_assert(alignof(UErrorDialog_C) == 0x000008, "Wrong alignment on UErrorDialog_C");
static_assert(sizeof(UErrorDialog_C) == 0x000508, "Wrong size on UErrorDialog_C");
static_assert(offsetof(UErrorDialog_C, UberGraphFrame) == 0x0004E0, "Member 'UErrorDialog_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UErrorDialog_C, OKButton) == 0x0004E8, "Member 'UErrorDialog_C::OKButton' has a wrong offset!");
static_assert(offsetof(UErrorDialog_C, TextBlock_160) == 0x0004F0, "Member 'UErrorDialog_C::TextBlock_160' has a wrong offset!");
static_assert(offsetof(UErrorDialog_C, Message) == 0x0004F8, "Member 'UErrorDialog_C::Message' has a wrong offset!");

}


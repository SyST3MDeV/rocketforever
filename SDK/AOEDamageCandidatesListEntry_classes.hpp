#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AOEDamageCandidatesListEntry

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AOEDamageCandidatesListEntry.AOEDamageCandidatesListEntry_C
// 0x0028 (0x0258 - 0x0230)
class UAOEDamageCandidatesListEntry_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             ActorName;                                         // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                                SelectActorButton;                                 // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_             OnAOEDamageCandidatesListEntryClicked;             // 0x0248(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnAOEDamageCandidatesListEntryClicked__DelegateSignature(const class FText& Param_ActorName);
	void ExecuteUbergraph_AOEDamageCandidatesListEntry(int32 EntryPoint);
	void BndEvt__SelectActorButton_K2Node_ComponentBoundEvent_143_OnButtonClickedEvent__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AOEDamageCandidatesListEntry_C">();
	}
	static class UAOEDamageCandidatesListEntry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAOEDamageCandidatesListEntry_C>();
	}
};
static_assert(alignof(UAOEDamageCandidatesListEntry_C) == 0x000008, "Wrong alignment on UAOEDamageCandidatesListEntry_C");
static_assert(sizeof(UAOEDamageCandidatesListEntry_C) == 0x000258, "Wrong size on UAOEDamageCandidatesListEntry_C");
static_assert(offsetof(UAOEDamageCandidatesListEntry_C, UberGraphFrame) == 0x000230, "Member 'UAOEDamageCandidatesListEntry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAOEDamageCandidatesListEntry_C, ActorName) == 0x000238, "Member 'UAOEDamageCandidatesListEntry_C::ActorName' has a wrong offset!");
static_assert(offsetof(UAOEDamageCandidatesListEntry_C, SelectActorButton) == 0x000240, "Member 'UAOEDamageCandidatesListEntry_C::SelectActorButton' has a wrong offset!");
static_assert(offsetof(UAOEDamageCandidatesListEntry_C, OnAOEDamageCandidatesListEntryClicked) == 0x000248, "Member 'UAOEDamageCandidatesListEntry_C::OnAOEDamageCandidatesListEntryClicked' has a wrong offset!");

}


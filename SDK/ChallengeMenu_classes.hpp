#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeMenu

#include "Basic.hpp"

#include "MangoClient_structs.hpp"
#include "Engine_structs.hpp"
#include "Mariner_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChallengeMenu.ChallengeMenu_C
// 0x0030 (0x0510 - 0x04E0)
class UChallengeMenu_C final : public UMarinerMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BackgroundImage;                                   // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeGroup_C*                      DailyChallengeGroup;                               // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerVerticalBox*                    QuestPanel;                                        // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URewardsPreviewWidget_C*                RewardsPreviewWidget;                              // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeGroup_C*                      WeeklyChallengeGroup;                              // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ChallengeMenu(int32 EntryPoint);
	void BP_OnEntered(bool bFromSubMenu);
	void BP_OnExited(bool bToSubLayer);
	void OnGetQuestsCompleted(const TArray<struct FMangoQuestDescription>& Quests);
	void OnChildHighlightChanged();
	void HandleInputDeviceChanged(EPlayerInputType InputType);
	void PopulateQuests(bool RefreshInPlace);
	void UpdatePrompts();
	void GetHighlightedChallengeState(bool* CanClaim, bool* CanDismiss, bool* CanSelect);
	void InitFirstQuestPreviewRewards();
	bool HandleInput(EMarinerInputActions InInput);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChallengeMenu_C">();
	}
	static class UChallengeMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChallengeMenu_C>();
	}
};
static_assert(alignof(UChallengeMenu_C) == 0x000008, "Wrong alignment on UChallengeMenu_C");
static_assert(sizeof(UChallengeMenu_C) == 0x000510, "Wrong size on UChallengeMenu_C");
static_assert(offsetof(UChallengeMenu_C, UberGraphFrame) == 0x0004E0, "Member 'UChallengeMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChallengeMenu_C, BackgroundImage) == 0x0004E8, "Member 'UChallengeMenu_C::BackgroundImage' has a wrong offset!");
static_assert(offsetof(UChallengeMenu_C, DailyChallengeGroup) == 0x0004F0, "Member 'UChallengeMenu_C::DailyChallengeGroup' has a wrong offset!");
static_assert(offsetof(UChallengeMenu_C, QuestPanel) == 0x0004F8, "Member 'UChallengeMenu_C::QuestPanel' has a wrong offset!");
static_assert(offsetof(UChallengeMenu_C, RewardsPreviewWidget) == 0x000500, "Member 'UChallengeMenu_C::RewardsPreviewWidget' has a wrong offset!");
static_assert(offsetof(UChallengeMenu_C, WeeklyChallengeGroup) == 0x000508, "Member 'UChallengeMenu_C::WeeklyChallengeGroup' has a wrong offset!");

}


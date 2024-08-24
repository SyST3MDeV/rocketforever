#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MiniRewardsPreview

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MiniRewardsPreview.MiniRewardsPreview_C
// 0x0020 (0x0250 - 0x0230)
class UMiniRewardsPreview_C final : public UUserWidget
{
public:
	class UMiniRewardPreview_C*                   MiniRewardPreview;                                 // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniRewardPreview_C*                   MiniRewardPreview_1;                               // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMiniRewardPreview_C*                   MiniRewardPreview_2;                               // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           RootVerticalBox;                                   // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PopulateRewards(const struct FMangoQuestReward& QuestReward, const struct FMangoQuest& Quest);
	void Populate_Blast_Pass_Reward(const struct FMangoQuest& Quest);
	void PopulateRocketFuelReward(const struct FMangoQuestReward& QuestReward);
	void Populate_Rocket_Parts_Reward(const struct FMangoQuestReward& QuestRewards);
	void PopulateItemReward(const struct FMangoQuestReward& QuestReward);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MiniRewardsPreview_C">();
	}
	static class UMiniRewardsPreview_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMiniRewardsPreview_C>();
	}
};
static_assert(alignof(UMiniRewardsPreview_C) == 0x000008, "Wrong alignment on UMiniRewardsPreview_C");
static_assert(sizeof(UMiniRewardsPreview_C) == 0x000250, "Wrong size on UMiniRewardsPreview_C");
static_assert(offsetof(UMiniRewardsPreview_C, MiniRewardPreview) == 0x000230, "Member 'UMiniRewardsPreview_C::MiniRewardPreview' has a wrong offset!");
static_assert(offsetof(UMiniRewardsPreview_C, MiniRewardPreview_1) == 0x000238, "Member 'UMiniRewardsPreview_C::MiniRewardPreview_1' has a wrong offset!");
static_assert(offsetof(UMiniRewardsPreview_C, MiniRewardPreview_2) == 0x000240, "Member 'UMiniRewardsPreview_C::MiniRewardPreview_2' has a wrong offset!");
static_assert(offsetof(UMiniRewardsPreview_C, RootVerticalBox) == 0x000248, "Member 'UMiniRewardsPreview_C::RootVerticalBox' has a wrong offset!");

}


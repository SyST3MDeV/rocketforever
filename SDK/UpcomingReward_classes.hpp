#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UpcomingReward

#include "Basic.hpp"

#include "MangoClient_structs.hpp"
#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UpcomingReward.UpcomingReward_C
// 0x0068 (0x30C0 - 0x3058)
class UUpcomingReward_C final : public UMarinerRewardPreview
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x3058(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DuplicateItemAnim;                                 // 0x3060(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HoveredAnim;                                       // 0x3068(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x3070(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_419;                                         // 0x3078(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemFrame;                                         // 0x3080(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ItemImage;                                         // 0x3088(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Label;                                             // 0x3090(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadingSpinner_C*                      LoadingSpinner;                                    // 0x3098(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ProgressionLevel;                                  // 0x30A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RewardDescription;                                 // 0x30A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RewardName;                                        // 0x30B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CurrentLevel;                                      // 0x30B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UpcomingReward(int32 EntryPoint);
	void Destruct();
	void Construct();
	void PopulateUpcomingRewardPreview(bool bFeatured, int32 RewardLevel, const struct FMangoReward& Reward);
	void PopulateRewardPreview(const struct FMangoReward& Reward);
	void PopulateQuestReward(const struct FMangoQuestReward& Reward);
	void PopulateXP(int32 Xp);
	void PopulateRocketbucks(int32 RocketBucks);
	void PopulateRocketparts(int32 RocketParts);
	void PopulateItem(const struct FMangoItem& Item, int32 DupRocketpartsValue);
	void PopulateNativeOffer(const struct FMangoNativeOffer& Nativeoffer);
	void PopulateDuplicateAssets(int32 PartsValue);
	void PopulateItemType(const struct FMangoItem& Item);
	void PopulateProgressionReward(const struct FMangoRewards& Reward);
	void PopulateBlastPassReward(int32 BlastBarProgress);
	void PopulateBlastPass(const class FString& OfferId, const struct FMangoOrderBlastpass& BlastPassOrder);
	void PopulateXPBonus(EMangoBlastPassXPBonusType Type, int32 Percent);
	void Populate_Mango_Reward(const struct FMangoReward& Reward);
	void GetRocketbucksIcon(int32 RocketBucks, struct FSlateBrush* Icon);
	void CalculateBlastPassPips();

	struct FMarinerLayeredButtonAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UpcomingReward_C">();
	}
	static class UUpcomingReward_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUpcomingReward_C>();
	}
};
static_assert(alignof(UUpcomingReward_C) == 0x000008, "Wrong alignment on UUpcomingReward_C");
static_assert(sizeof(UUpcomingReward_C) == 0x0030C0, "Wrong size on UUpcomingReward_C");
static_assert(offsetof(UUpcomingReward_C, UberGraphFrame) == 0x003058, "Member 'UUpcomingReward_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUpcomingReward_C, DuplicateItemAnim) == 0x003060, "Member 'UUpcomingReward_C::DuplicateItemAnim' has a wrong offset!");
static_assert(offsetof(UUpcomingReward_C, HoveredAnim) == 0x003068, "Member 'UUpcomingReward_C::HoveredAnim' has a wrong offset!");
static_assert(offsetof(UUpcomingReward_C, Background) == 0x003070, "Member 'UUpcomingReward_C::Background' has a wrong offset!");
static_assert(offsetof(UUpcomingReward_C, Image_419) == 0x003078, "Member 'UUpcomingReward_C::Image_419' has a wrong offset!");
static_assert(offsetof(UUpcomingReward_C, ItemFrame) == 0x003080, "Member 'UUpcomingReward_C::ItemFrame' has a wrong offset!");
static_assert(offsetof(UUpcomingReward_C, ItemImage) == 0x003088, "Member 'UUpcomingReward_C::ItemImage' has a wrong offset!");
static_assert(offsetof(UUpcomingReward_C, Label) == 0x003090, "Member 'UUpcomingReward_C::Label' has a wrong offset!");
static_assert(offsetof(UUpcomingReward_C, LoadingSpinner) == 0x003098, "Member 'UUpcomingReward_C::LoadingSpinner' has a wrong offset!");
static_assert(offsetof(UUpcomingReward_C, ProgressionLevel) == 0x0030A0, "Member 'UUpcomingReward_C::ProgressionLevel' has a wrong offset!");
static_assert(offsetof(UUpcomingReward_C, RewardDescription) == 0x0030A8, "Member 'UUpcomingReward_C::RewardDescription' has a wrong offset!");
static_assert(offsetof(UUpcomingReward_C, RewardName) == 0x0030B0, "Member 'UUpcomingReward_C::RewardName' has a wrong offset!");
static_assert(offsetof(UUpcomingReward_C, CurrentLevel) == 0x0030B8, "Member 'UUpcomingReward_C::CurrentLevel' has a wrong offset!");

}


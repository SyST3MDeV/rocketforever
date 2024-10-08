#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostGameProgressMenu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PostGameProgressMenu.PostGameProgressMenu_C
// 0x00A8 (0x0588 - 0x04E0)
class UPostGameProgressMenu_C final : public UMarinerMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UArtifactPostGameProgress_C*            ArtifactPostGame;                                  // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               ArtifactsRoot;                                     // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBlastPassProgressBar_C*                BlastPassProgressBar;                              // 0x04F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               BlastPassRoot;                                     // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBlastPassSeason_C*                     BlastPassSeason;                                   // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBlastPassTierWidget_C*                 BlastPassTierWidget;                               // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CharacterHeader;                                   // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CharacterName;                                     // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressionRewardPreview_C*            CharacterProgressionPreview;                       // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeGroup_C*                      DailyChallenges;                                   // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             NoRewardText;                                      // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               QuestRoot;                                         // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RankRoot;                                          // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URankWidget_WithProgress_C*             RankWidget_WithProgress;                           // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               RewardRoot;                                        // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerScrollBox*                      RewardScrollBox;                                   // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UChallengeGroup_C*                      WeeklyChallenges;                                  // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             XPGainedBody;                                      // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                                Margin;                                            // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_PostGameProgressMenu(int32 EntryPoint);
	void OnPortraitLoaded(const struct FSlateBrush& Brush);
	void BP_OnEntered(bool bFromSubMenu);
	void PopulateCharacterXP(const struct FMangoMatchCharacterProgression& CharacterProgression, class UMarinerPlayableCharacter* CharacterUsed);
	void PopulateRank(const struct FMatchEnd& MatchEnd, const struct FMangoPlaylistResult& PlaylistProgress);
	void PopulateBlastPass();
	void PopulateQuests(class UMarinerPostGameSequence* PostGameSequence);
	void PopulateRewards(TArray<struct FMangoReward>& Rewards);
	void PopulateGameProgressMenu();
	void IsArtifactReward(const struct FMangoReward& MangoReward, bool* IsArtifact);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PostGameProgressMenu_C">();
	}
	static class UPostGameProgressMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPostGameProgressMenu_C>();
	}
};
static_assert(alignof(UPostGameProgressMenu_C) == 0x000008, "Wrong alignment on UPostGameProgressMenu_C");
static_assert(sizeof(UPostGameProgressMenu_C) == 0x000588, "Wrong size on UPostGameProgressMenu_C");
static_assert(offsetof(UPostGameProgressMenu_C, UberGraphFrame) == 0x0004E0, "Member 'UPostGameProgressMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, ArtifactPostGame) == 0x0004E8, "Member 'UPostGameProgressMenu_C::ArtifactPostGame' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, ArtifactsRoot) == 0x0004F0, "Member 'UPostGameProgressMenu_C::ArtifactsRoot' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, BlastPassProgressBar) == 0x0004F8, "Member 'UPostGameProgressMenu_C::BlastPassProgressBar' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, BlastPassRoot) == 0x000500, "Member 'UPostGameProgressMenu_C::BlastPassRoot' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, BlastPassSeason) == 0x000508, "Member 'UPostGameProgressMenu_C::BlastPassSeason' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, BlastPassTierWidget) == 0x000510, "Member 'UPostGameProgressMenu_C::BlastPassTierWidget' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, CharacterHeader) == 0x000518, "Member 'UPostGameProgressMenu_C::CharacterHeader' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, CharacterName) == 0x000520, "Member 'UPostGameProgressMenu_C::CharacterName' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, CharacterProgressionPreview) == 0x000528, "Member 'UPostGameProgressMenu_C::CharacterProgressionPreview' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, DailyChallenges) == 0x000530, "Member 'UPostGameProgressMenu_C::DailyChallenges' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, NoRewardText) == 0x000538, "Member 'UPostGameProgressMenu_C::NoRewardText' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, QuestRoot) == 0x000540, "Member 'UPostGameProgressMenu_C::QuestRoot' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, RankRoot) == 0x000548, "Member 'UPostGameProgressMenu_C::RankRoot' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, RankWidget_WithProgress) == 0x000550, "Member 'UPostGameProgressMenu_C::RankWidget_WithProgress' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, RewardRoot) == 0x000558, "Member 'UPostGameProgressMenu_C::RewardRoot' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, RewardScrollBox) == 0x000560, "Member 'UPostGameProgressMenu_C::RewardScrollBox' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, WeeklyChallenges) == 0x000568, "Member 'UPostGameProgressMenu_C::WeeklyChallenges' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, XPGainedBody) == 0x000570, "Member 'UPostGameProgressMenu_C::XPGainedBody' has a wrong offset!");
static_assert(offsetof(UPostGameProgressMenu_C, Margin) == 0x000578, "Member 'UPostGameProgressMenu_C::Margin' has a wrong offset!");

}


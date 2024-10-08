#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostGameResultsMenu

#include "Basic.hpp"

#include "MangoClient_structs.hpp"
#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PostGameResultsMenu.PostGameResultsMenu_C
// 0x0058 (0x0548 - 0x04F0)
class UPostGameResultsMenu_C final : public UMarinerPostGameResultsMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       NoOpponentsAnim;                                   // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DrawUpdated;                                       // 0x0500(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LoseUpdated;                                       // 0x0508(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Win;                                               // 0x0510(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ContactGlow;                                       // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DrawHeader;                                        // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Lensflare;                                         // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LineMaterial;                                      // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         WinAudioDelay;                                     // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DefeatAudioDelay;                                  // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DrawAudioDelay;                                    // 0x0540(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PostGameResultsMenu(int32 EntryPoint);
	void OnComplete(bool bIsVisible);
	void OnWipeCoveringScreen();
	void BP_OnEntered(bool bFromSubMenu);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayResultsMusic(EMarinerGameOutcome GameOutcome);
	void GetNumEnemyPlayers(const struct FMatchEnd& MatchEndData, int32* NumEnemyPlayers);
	void GetAnimationToPlay(class UWidgetAnimation** Animation);
	void GetPlayerRank(bool IsRanked, const class FString& MangoId, const struct FMangoMatchResultResponse& MatchResponse, int32* Rank);
	void GetPostGameSequence(class UMarinerPostGameSequence** Sequence);
	void PopulateScoreboard();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PostGameResultsMenu_C">();
	}
	static class UPostGameResultsMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPostGameResultsMenu_C>();
	}
};
static_assert(alignof(UPostGameResultsMenu_C) == 0x000008, "Wrong alignment on UPostGameResultsMenu_C");
static_assert(sizeof(UPostGameResultsMenu_C) == 0x000548, "Wrong size on UPostGameResultsMenu_C");
static_assert(offsetof(UPostGameResultsMenu_C, UberGraphFrame) == 0x0004F0, "Member 'UPostGameResultsMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPostGameResultsMenu_C, NoOpponentsAnim) == 0x0004F8, "Member 'UPostGameResultsMenu_C::NoOpponentsAnim' has a wrong offset!");
static_assert(offsetof(UPostGameResultsMenu_C, DrawUpdated) == 0x000500, "Member 'UPostGameResultsMenu_C::DrawUpdated' has a wrong offset!");
static_assert(offsetof(UPostGameResultsMenu_C, LoseUpdated) == 0x000508, "Member 'UPostGameResultsMenu_C::LoseUpdated' has a wrong offset!");
static_assert(offsetof(UPostGameResultsMenu_C, Win) == 0x000510, "Member 'UPostGameResultsMenu_C::Win' has a wrong offset!");
static_assert(offsetof(UPostGameResultsMenu_C, ContactGlow) == 0x000518, "Member 'UPostGameResultsMenu_C::ContactGlow' has a wrong offset!");
static_assert(offsetof(UPostGameResultsMenu_C, DrawHeader) == 0x000520, "Member 'UPostGameResultsMenu_C::DrawHeader' has a wrong offset!");
static_assert(offsetof(UPostGameResultsMenu_C, Lensflare) == 0x000528, "Member 'UPostGameResultsMenu_C::Lensflare' has a wrong offset!");
static_assert(offsetof(UPostGameResultsMenu_C, LineMaterial) == 0x000530, "Member 'UPostGameResultsMenu_C::LineMaterial' has a wrong offset!");
static_assert(offsetof(UPostGameResultsMenu_C, WinAudioDelay) == 0x000538, "Member 'UPostGameResultsMenu_C::WinAudioDelay' has a wrong offset!");
static_assert(offsetof(UPostGameResultsMenu_C, DefeatAudioDelay) == 0x00053C, "Member 'UPostGameResultsMenu_C::DefeatAudioDelay' has a wrong offset!");
static_assert(offsetof(UPostGameResultsMenu_C, DrawAudioDelay) == 0x000540, "Member 'UPostGameResultsMenu_C::DrawAudioDelay' has a wrong offset!");

}


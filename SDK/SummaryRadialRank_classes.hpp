#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SummaryRadialRank

#include "Basic.hpp"

#include "Mariner_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SummaryRadialRank.SummaryRadialRank_C
// 0x0008 (0x0300 - 0x02F8)
class USummaryRadialRank_C final : public UMarinerAnimatedProgressWidget
{
public:
	class UWidgetAnimation*                       BarProgressLoop;                                   // 0x02F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

public:
	void InitFromProgression(const struct FMangoPlaylistResult& PlaylistMatchProgress, float DurationPerLevelSeconds, float FinalDelaySeconds);
	void SetRadialProgress(const struct FMangoPlaylistResult& Mango_Playlist_Result);

	struct FMarinerAnimatedProgressWidgetAnimations GetAnimations() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SummaryRadialRank_C">();
	}
	static class USummaryRadialRank_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USummaryRadialRank_C>();
	}
};
static_assert(alignof(USummaryRadialRank_C) == 0x000008, "Wrong alignment on USummaryRadialRank_C");
static_assert(sizeof(USummaryRadialRank_C) == 0x000300, "Wrong size on USummaryRadialRank_C");
static_assert(offsetof(USummaryRadialRank_C, BarProgressLoop) == 0x0002F8, "Member 'USummaryRadialRank_C::BarProgressLoop' has a wrong offset!");

}


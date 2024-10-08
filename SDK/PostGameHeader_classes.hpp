#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostGameHeader

#include "Basic.hpp"

#include "MangoClient_structs.hpp"
#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"
#include "GameModeEnums_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PostGameHeader.PostGameHeader_C
// 0x0090 (0x0340 - 0x02B0)
class UPostGameHeader_C final : public UMarinerUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UScoreResultsValue_C*                   EnemyScore;                                        // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScoreResultsValue_C*                   FriendScore;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             GameModeInfo;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MatchTime;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ModeScoreResultsSwitcher;                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPostGameMapData_C*                     PostGameMapData;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              RocketbotDefeatWidget;                             // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              RocketbotVictoryWidget;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ScoreWidget;                                       // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Slash_b;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Slash_m;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Slash_t;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              StockDefeatWidget;                                 // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              StockVictoryWidget;                                // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PostGameHeader(int32 EntryPoint);
	void Construct();
	void HandleRocketBotAttackStates(EMarinerGameOutcome GameOutcome);
	void HandleStockStates(EMarinerGameOutcome GameOutcome);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PostGameHeader_C">();
	}
	static class UPostGameHeader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPostGameHeader_C>();
	}
};
static_assert(alignof(UPostGameHeader_C) == 0x000008, "Wrong alignment on UPostGameHeader_C");
static_assert(sizeof(UPostGameHeader_C) == 0x000340, "Wrong size on UPostGameHeader_C");
static_assert(offsetof(UPostGameHeader_C, UberGraphFrame) == 0x0002B0, "Member 'UPostGameHeader_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, EnemyScore) == 0x0002B8, "Member 'UPostGameHeader_C::EnemyScore' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, FriendScore) == 0x0002C0, "Member 'UPostGameHeader_C::FriendScore' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, GameModeInfo) == 0x0002C8, "Member 'UPostGameHeader_C::GameModeInfo' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, Image_4) == 0x0002D0, "Member 'UPostGameHeader_C::Image_4' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, Image_5) == 0x0002D8, "Member 'UPostGameHeader_C::Image_5' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, Image_6) == 0x0002E0, "Member 'UPostGameHeader_C::Image_6' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, MatchTime) == 0x0002E8, "Member 'UPostGameHeader_C::MatchTime' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, ModeScoreResultsSwitcher) == 0x0002F0, "Member 'UPostGameHeader_C::ModeScoreResultsSwitcher' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, PostGameMapData) == 0x0002F8, "Member 'UPostGameHeader_C::PostGameMapData' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, RocketbotDefeatWidget) == 0x000300, "Member 'UPostGameHeader_C::RocketbotDefeatWidget' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, RocketbotVictoryWidget) == 0x000308, "Member 'UPostGameHeader_C::RocketbotVictoryWidget' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, ScoreWidget) == 0x000310, "Member 'UPostGameHeader_C::ScoreWidget' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, Slash_b) == 0x000318, "Member 'UPostGameHeader_C::Slash_b' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, Slash_m) == 0x000320, "Member 'UPostGameHeader_C::Slash_m' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, Slash_t) == 0x000328, "Member 'UPostGameHeader_C::Slash_t' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, StockDefeatWidget) == 0x000330, "Member 'UPostGameHeader_C::StockDefeatWidget' has a wrong offset!");
static_assert(offsetof(UPostGameHeader_C, StockVictoryWidget) == 0x000338, "Member 'UPostGameHeader_C::StockVictoryWidget' has a wrong offset!");

}


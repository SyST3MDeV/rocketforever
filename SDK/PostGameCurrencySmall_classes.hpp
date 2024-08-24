#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostGameCurrencySmall

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "PostGameCurrencyBase_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PostGameCurrencySmall.PostGameCurrencySmall_C
// 0x0048 (0x0490 - 0x0448)
class UPostGameCurrencySmall_C final : public UPostGameCurrencyBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_PostGameCurrencySmall_C;            // 0x0448(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       FillLoopAnim;                                      // 0x0450(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CompleteAnim;                                      // 0x0458(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CurrencyCog;                                       // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             CurrencyText;                                      // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CurrrencyIcon;                                     // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CurrrencyRocket;                                   // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fuelparticles;                                     // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FuelParticlessmall;                                // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PostGameCurrencySmall(int32 EntryPoint);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PlayCompleteAnim();
	void PlayFillLoopAnim();
	void SetCurrencyText(const class FText& Text);
	void StopFillLoopAnim();
	void WidgetAnimationEvt_CompleteAnim_K2Node_WidgetAnimationEvent_1();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PostGameCurrencySmall_C">();
	}
	static class UPostGameCurrencySmall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPostGameCurrencySmall_C>();
	}
};
static_assert(alignof(UPostGameCurrencySmall_C) == 0x000008, "Wrong alignment on UPostGameCurrencySmall_C");
static_assert(sizeof(UPostGameCurrencySmall_C) == 0x000490, "Wrong size on UPostGameCurrencySmall_C");
static_assert(offsetof(UPostGameCurrencySmall_C, UberGraphFrame_PostGameCurrencySmall_C) == 0x000448, "Member 'UPostGameCurrencySmall_C::UberGraphFrame_PostGameCurrencySmall_C' has a wrong offset!");
static_assert(offsetof(UPostGameCurrencySmall_C, FillLoopAnim) == 0x000450, "Member 'UPostGameCurrencySmall_C::FillLoopAnim' has a wrong offset!");
static_assert(offsetof(UPostGameCurrencySmall_C, CompleteAnim) == 0x000458, "Member 'UPostGameCurrencySmall_C::CompleteAnim' has a wrong offset!");
static_assert(offsetof(UPostGameCurrencySmall_C, CurrencyCog) == 0x000460, "Member 'UPostGameCurrencySmall_C::CurrencyCog' has a wrong offset!");
static_assert(offsetof(UPostGameCurrencySmall_C, CurrencyText) == 0x000468, "Member 'UPostGameCurrencySmall_C::CurrencyText' has a wrong offset!");
static_assert(offsetof(UPostGameCurrencySmall_C, CurrrencyIcon) == 0x000470, "Member 'UPostGameCurrencySmall_C::CurrrencyIcon' has a wrong offset!");
static_assert(offsetof(UPostGameCurrencySmall_C, CurrrencyRocket) == 0x000478, "Member 'UPostGameCurrencySmall_C::CurrrencyRocket' has a wrong offset!");
static_assert(offsetof(UPostGameCurrencySmall_C, Fuelparticles) == 0x000480, "Member 'UPostGameCurrencySmall_C::Fuelparticles' has a wrong offset!");
static_assert(offsetof(UPostGameCurrencySmall_C, FuelParticlessmall) == 0x000488, "Member 'UPostGameCurrencySmall_C::FuelParticlessmall' has a wrong offset!");

}


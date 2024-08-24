#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SoftCurrency01

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SoftCurrency01.SoftCurrency01_C
// 0x0048 (0x0278 - 0x0230)
class USoftCurrency01_C final : public UUserWidget
{
public:
	class UWidgetAnimation*                       CurrencyDecrease;                                  // 0x0230(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       CurrencyIncrease;                                  // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BackgroundFrame;                                   // 0x0240(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cog;                                               // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Cogparticle;                                       // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CogParticle2;                                      // 0x0258(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Rocket;                                            // 0x0260(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SoftCurrencyIcon;                                  // 0x0268(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SoftCurrencyText;                                  // 0x0270(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetCurrency(int32 Amount, bool Animate);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SoftCurrency01_C">();
	}
	static class USoftCurrency01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USoftCurrency01_C>();
	}
};
static_assert(alignof(USoftCurrency01_C) == 0x000008, "Wrong alignment on USoftCurrency01_C");
static_assert(sizeof(USoftCurrency01_C) == 0x000278, "Wrong size on USoftCurrency01_C");
static_assert(offsetof(USoftCurrency01_C, CurrencyDecrease) == 0x000230, "Member 'USoftCurrency01_C::CurrencyDecrease' has a wrong offset!");
static_assert(offsetof(USoftCurrency01_C, CurrencyIncrease) == 0x000238, "Member 'USoftCurrency01_C::CurrencyIncrease' has a wrong offset!");
static_assert(offsetof(USoftCurrency01_C, BackgroundFrame) == 0x000240, "Member 'USoftCurrency01_C::BackgroundFrame' has a wrong offset!");
static_assert(offsetof(USoftCurrency01_C, Cog) == 0x000248, "Member 'USoftCurrency01_C::Cog' has a wrong offset!");
static_assert(offsetof(USoftCurrency01_C, Cogparticle) == 0x000250, "Member 'USoftCurrency01_C::Cogparticle' has a wrong offset!");
static_assert(offsetof(USoftCurrency01_C, CogParticle2) == 0x000258, "Member 'USoftCurrency01_C::CogParticle2' has a wrong offset!");
static_assert(offsetof(USoftCurrency01_C, Rocket) == 0x000260, "Member 'USoftCurrency01_C::Rocket' has a wrong offset!");
static_assert(offsetof(USoftCurrency01_C, SoftCurrencyIcon) == 0x000268, "Member 'USoftCurrency01_C::SoftCurrencyIcon' has a wrong offset!");
static_assert(offsetof(USoftCurrency01_C, SoftCurrencyText) == 0x000270, "Member 'USoftCurrency01_C::SoftCurrencyText' has a wrong offset!");

}


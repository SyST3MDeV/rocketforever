#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlastPassTierWidget

#include "Basic.hpp"

#include "BlastPassTierWidget_classes.hpp"
#include "BlastPassTierWidget_parameters.hpp"


namespace SDK
{

// Function BlastPassTierWidget.BlastPassTierWidget_C.ExecuteUbergraph_BlastPassTierWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBlastPassTierWidget_C::ExecuteUbergraph_BlastPassTierWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlastPassTierWidget_C", "ExecuteUbergraph_BlastPassTierWidget");

	Params::BlastPassTierWidget_C_ExecuteUbergraph_BlastPassTierWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BlastPassTierWidget.BlastPassTierWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBlastPassTierWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlastPassTierWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BlastPassTierWidget.BlastPassTierWidget_C.SetTier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Tier                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Purchased                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBlastPassTierWidget_C::SetTier(int32 Tier, bool Purchased)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlastPassTierWidget_C", "SetTier");

	Params::BlastPassTierWidget_C_SetTier Parms{};

	Parms.Tier = Tier;
	Parms.Purchased = Purchased;

	UObject::ProcessEvent(Func, &Parms);
}

}


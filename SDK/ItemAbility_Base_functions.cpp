#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemAbility_Base

#include "Basic.hpp"

#include "ItemAbility_Base_classes.hpp"
#include "ItemAbility_Base_parameters.hpp"


namespace SDK
{

// Function ItemAbility_Base.ItemAbility_Base_C.ExecuteUbergraph_ItemAbility_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemAbility_Base_C::ExecuteUbergraph_ItemAbility_Base(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemAbility_Base_C", "ExecuteUbergraph_ItemAbility_Base");

	Params::ItemAbility_Base_C_ExecuteUbergraph_ItemAbility_Base Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemAbility_Base.ItemAbility_Base_C.SpoofInputQueueing
// (BlueprintCallable, BlueprintEvent)

void UItemAbility_Base_C::SpoofInputQueueing()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemAbility_Base_C", "SpoofInputQueueing");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemAbility_Base.ItemAbility_Base_C.InternalTryInputQueueItemAbility
// (BlueprintCallable, BlueprintEvent)

void UItemAbility_Base_C::InternalTryInputQueueItemAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemAbility_Base_C", "InternalTryInputQueueItemAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemAbility_Base.ItemAbility_Base_C.ServerTryInputQueueItemAbility
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)

void UItemAbility_Base_C::ServerTryInputQueueItemAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemAbility_Base_C", "ServerTryInputQueueItemAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemAbility_Base.ItemAbility_Base_C.OnDodgeEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemAbility_Base_C::OnDodgeEnded(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemAbility_Base_C", "OnDodgeEnded");

	Params::ItemAbility_Base_C_OnDodgeEnded Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemAbility_Base.ItemAbility_Base_C.BP_OnOwningControllerSet
// (Event, Public, BlueprintEvent)

void UItemAbility_Base_C::BP_OnOwningControllerSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemAbility_Base_C", "BP_OnOwningControllerSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemAbility_Base.ItemAbility_Base_C.BP_OnAbilityActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UItemAbility_Base_C::BP_OnAbilityActivated(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemAbility_Base_C", "BP_OnAbilityActivated");

	Params::ItemAbility_Base_C_BP_OnAbilityActivated Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemAbility_Base.ItemAbility_Base_C.BP_OnAnyInputReceived
// (Event, Protected, BlueprintEvent)
// Parameters:
// EMarinerInputActions                    InputType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EInputEvent                             EventType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemAbility_Base_C::BP_OnAnyInputReceived(EMarinerInputActions InputType, EInputEvent EventType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemAbility_Base_C", "BP_OnAnyInputReceived");

	Params::ItemAbility_Base_C_BP_OnAnyInputReceived Parms{};

	Parms.InputType = InputType;
	Parms.EventType = EventType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ItemAbility_Base.ItemAbility_Base_C.UseItemInputPressed
// (Public, BlueprintCallable, BlueprintEvent)

void UItemAbility_Base_C::UseItemInputPressed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemAbility_Base_C", "UseItemInputPressed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemAbility_Base.ItemAbility_Base_C.ApplyActivationEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UItemAbility_Base_C::ApplyActivationEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemAbility_Base_C", "ApplyActivationEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemAbility_Base.ItemAbility_Base_C.UseItemInputReleased
// (Public, BlueprintCallable, BlueprintEvent)

void UItemAbility_Base_C::UseItemInputReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemAbility_Base_C", "UseItemInputReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ItemAbility_Base.ItemAbility_Base_C.GetHeldItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AMarinerItem*                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AMarinerItem* UItemAbility_Base_C::GetHeldItem() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemAbility_Base_C", "GetHeldItem");

	Params::ItemAbility_Base_C_GetHeldItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ItemAbility_Base.ItemAbility_Base_C.CharacterOwnerHasRelevantItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UItemAbility_Base_C::CharacterOwnerHasRelevantItem() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemAbility_Base_C", "CharacterOwnerHasRelevantItem");

	Params::ItemAbility_Base_C_CharacterOwnerHasRelevantItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


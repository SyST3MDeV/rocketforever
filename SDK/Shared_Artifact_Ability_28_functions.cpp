#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Shared_Artifact_Ability_28

#include "Basic.hpp"

#include "Shared_Artifact_Ability_28_classes.hpp"
#include "Shared_Artifact_Ability_28_parameters.hpp"


namespace SDK
{

// Function Shared_Artifact_Ability_28.Shared_Artifact_Ability_28_C.ExecuteUbergraph_Shared_Artifact_Ability_28
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShared_Artifact_Ability_28_C::ExecuteUbergraph_Shared_Artifact_Ability_28(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Shared_Artifact_Ability_28_C", "ExecuteUbergraph_Shared_Artifact_Ability_28");

	Params::Shared_Artifact_Ability_28_C_ExecuteUbergraph_Shared_Artifact_Ability_28 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Shared_Artifact_Ability_28.Shared_Artifact_Ability_28_C.RemoveEffect
// (BlueprintCallable, BlueprintEvent)

void UShared_Artifact_Ability_28_C::RemoveEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Shared_Artifact_Ability_28_C", "RemoveEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Shared_Artifact_Ability_28.Shared_Artifact_Ability_28_C.OnKnockedOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMarinerArenaReturnState                PreviousState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMarinerArenaReturnState                NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShared_Artifact_Ability_28_C::OnKnockedOut(EMarinerArenaReturnState PreviousState, EMarinerArenaReturnState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Shared_Artifact_Ability_28_C", "OnKnockedOut");

	Params::Shared_Artifact_Ability_28_C_OnKnockedOut Parms{};

	Parms.PreviousState = PreviousState;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Shared_Artifact_Ability_28.Shared_Artifact_Ability_28_C.BP_OnOwningControllerSet
// (Event, Public, BlueprintEvent)

void UShared_Artifact_Ability_28_C::BP_OnOwningControllerSet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Shared_Artifact_Ability_28_C", "BP_OnOwningControllerSet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Shared_Artifact_Ability_28.Shared_Artifact_Ability_28_C.OnGameplayAwardGiven
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EGameplayAwardTypes                     AwardType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   StatTotal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShared_Artifact_Ability_28_C::OnGameplayAwardGiven(EGameplayAwardTypes AwardType, int32 Value, int32 StatTotal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Shared_Artifact_Ability_28_C", "OnGameplayAwardGiven");

	Params::Shared_Artifact_Ability_28_C_OnGameplayAwardGiven Parms{};

	Parms.AwardType = AwardType;
	Parms.Value = Value;
	Parms.StatTotal = StatTotal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Shared_Artifact_Ability_28.Shared_Artifact_Ability_28_C.BP_OnAbilityActivated_Authority
// (BlueprintAuthorityOnly, Event, Protected, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityActorInfo        ActorInfo                                              (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UShared_Artifact_Ability_28_C::BP_OnAbilityActivated_Authority(const struct FGameplayAbilityActorInfo& ActorInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Shared_Artifact_Ability_28_C", "BP_OnAbilityActivated_Authority");

	Params::Shared_Artifact_Ability_28_C_BP_OnAbilityActivated_Authority Parms{};

	Parms.ActorInfo = std::move(ActorInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function Shared_Artifact_Ability_28.Shared_Artifact_Ability_28_C.GetDurationByLevel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                                   Duration                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShared_Artifact_Ability_28_C::GetDurationByLevel(float* Duration)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Shared_Artifact_Ability_28_C", "GetDurationByLevel");

	Params::Shared_Artifact_Ability_28_C_GetDurationByLevel Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;
}

}


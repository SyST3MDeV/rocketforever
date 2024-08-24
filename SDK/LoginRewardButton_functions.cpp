#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoginRewardButton

#include "Basic.hpp"

#include "LoginRewardButton_classes.hpp"
#include "LoginRewardButton_parameters.hpp"


namespace SDK
{

// Function LoginRewardButton.LoginRewardButton_C.ExecuteUbergraph_LoginRewardButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoginRewardButton_C::ExecuteUbergraph_LoginRewardButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginRewardButton_C", "ExecuteUbergraph_LoginRewardButton");

	Params::LoginRewardButton_C_ExecuteUbergraph_LoginRewardButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoginRewardButton.LoginRewardButton_C.ClaimReward
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EMangoQuestSlot                         SlotId                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMangoQuestDescription           NewQuest                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ULoginRewardButton_C::ClaimReward(bool bWasSuccessful, const EMangoQuestSlot SlotId, const struct FMangoQuestDescription& NewQuest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginRewardButton_C", "ClaimReward");

	Params::LoginRewardButton_C_ClaimReward Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.SlotId = SlotId;
	Parms.NewQuest = std::move(NewQuest);

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoginRewardButton.LoginRewardButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULoginRewardButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginRewardButton_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoginRewardButton.LoginRewardButton_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULoginRewardButton_C::Init()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginRewardButton_C", "Init");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LoginRewardButton.LoginRewardButton_C.IsClaimable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Progress                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Goal                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_IsClaimable                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoginRewardButton_C::IsClaimable(int32* Progress, int32* Goal, bool* Param_IsClaimable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginRewardButton_C", "IsClaimable");

	Params::LoginRewardButton_C_IsClaimable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Progress != nullptr)
		*Progress = Parms.Progress;

	if (Goal != nullptr)
		*Goal = Parms.Goal;

	if (Param_IsClaimable != nullptr)
		*Param_IsClaimable = Parms.Param_IsClaimable;
}


// Function LoginRewardButton.LoginRewardButton_C.GetAssets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerLayeredButtonAssets      ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerLayeredButtonAssets ULoginRewardButton_C::GetAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoginRewardButton_C", "GetAssets");

	Params::LoginRewardButton_C_GetAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


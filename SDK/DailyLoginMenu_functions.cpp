#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DailyLoginMenu

#include "Basic.hpp"

#include "DailyLoginMenu_classes.hpp"
#include "DailyLoginMenu_parameters.hpp"


namespace SDK
{

// Function DailyLoginMenu.DailyLoginMenu_C.ExecuteUbergraph_DailyLoginMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyLoginMenu_C::ExecuteUbergraph_DailyLoginMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyLoginMenu_C", "ExecuteUbergraph_DailyLoginMenu");

	Params::DailyLoginMenu_C_ExecuteUbergraph_DailyLoginMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyLoginMenu.DailyLoginMenu_C.Callback
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             KeyPressed                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UDailyLoginMenu_C::Callback(const struct FKey& KeyPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyLoginMenu_C", "Callback");

	Params::DailyLoginMenu_C_Callback Parms{};

	Parms.KeyPressed = std::move(KeyPressed);

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyLoginMenu.DailyLoginMenu_C.BP_OnEntered
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bFromSubMenu                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyLoginMenu_C::BP_OnEntered(bool bFromSubMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyLoginMenu_C", "BP_OnEntered");

	Params::DailyLoginMenu_C_BP_OnEntered Parms{};

	Parms.bFromSubMenu = bFromSubMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyLoginMenu.DailyLoginMenu_C.SetRewardCompleted
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bWasSuccessful                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMangoQuestDescription           NewQuest                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                             GrantedRewardId                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyLoginMenu_C::SetRewardCompleted(bool bWasSuccessful, const struct FMangoQuestDescription& NewQuest, const class FName& GrantedRewardId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyLoginMenu_C", "SetRewardCompleted");

	Params::DailyLoginMenu_C_SetRewardCompleted Parms{};

	Parms.bWasSuccessful = bWasSuccessful;
	Parms.NewQuest = std::move(NewQuest);
	Parms.GrantedRewardId = GrantedRewardId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyLoginMenu.DailyLoginMenu_C.BuildContent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UDailyLoginMenu_C::BuildContent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyLoginMenu_C", "BuildContent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DailyLoginMenu.DailyLoginMenu_C.SetRewardGoal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDailyRewardWidget_C*             Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDailyLoginMenu_C::SetRewardGoal(class UDailyRewardWidget_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyLoginMenu_C", "SetRewardGoal");

	Params::DailyLoginMenu_C_SetRewardGoal Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyLoginMenu.DailyLoginMenu_C.ConfirmSetReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             KeyPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UDailyLoginMenu_C::ConfirmSetReward(struct FKey& KeyPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyLoginMenu_C", "ConfirmSetReward");

	Params::DailyLoginMenu_C_ConfirmSetReward Parms{};

	Parms.KeyPressed = std::move(KeyPressed);

	UObject::ProcessEvent(Func, &Parms);

	KeyPressed = std::move(Parms.KeyPressed);
}


// Function DailyLoginMenu.DailyLoginMenu_C.CancelSetReward
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             KeyPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UDailyLoginMenu_C::CancelSetReward(struct FKey& KeyPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyLoginMenu_C", "CancelSetReward");

	Params::DailyLoginMenu_C_CancelSetReward Parms{};

	Parms.KeyPressed = std::move(KeyPressed);

	UObject::ProcessEvent(Func, &Parms);

	KeyPressed = std::move(Parms.KeyPressed);
}


// Function DailyLoginMenu.DailyLoginMenu_C.CommitRewardGoal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDailyRewardWidget_C*             RewardWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    BlockDuringLoad                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDailyLoginMenu_C::CommitRewardGoal(class UDailyRewardWidget_C* RewardWidget, bool BlockDuringLoad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyLoginMenu_C", "CommitRewardGoal");

	Params::DailyLoginMenu_C_CommitRewardGoal Parms{};

	Parms.RewardWidget = RewardWidget;
	Parms.BlockDuringLoad = BlockDuringLoad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DailyLoginMenu.DailyLoginMenu_C.DummyCallback
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             KeyPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UDailyLoginMenu_C::DummyCallback(struct FKey& KeyPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DailyLoginMenu_C", "DummyCallback");

	Params::DailyLoginMenu_C_DummyCallback Parms{};

	Parms.KeyPressed = std::move(KeyPressed);

	UObject::ProcessEvent(Func, &Parms);

	KeyPressed = std::move(Parms.KeyPressed);
}

}


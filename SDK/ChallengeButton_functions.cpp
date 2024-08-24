#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ChallengeButton

#include "Basic.hpp"

#include "ChallengeButton_classes.hpp"
#include "ChallengeButton_parameters.hpp"


namespace SDK
{

// Function ChallengeButton.ChallengeButton_C.ExecuteUbergraph_ChallengeButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeButton_C::ExecuteUbergraph_ChallengeButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "ExecuteUbergraph_ChallengeButton");

	Params::ChallengeButton_C_ExecuteUbergraph_ChallengeButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeButton.ChallengeButton_C.BPOnUnhighlight
// (Event, Protected, BlueprintEvent)

void UChallengeButton_C::BPOnUnhighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "BPOnUnhighlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeButton.ChallengeButton_C.BPOnHighlight
// (Event, Protected, BlueprintEvent)

void UChallengeButton_C::BPOnHighlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "BPOnHighlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeButton.ChallengeButton_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChallengeButton_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeButton.ChallengeButton_C.AnimationProgressCompleteEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoQuestDescription           Quest                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeButton_C::AnimationProgressCompleteEvent(const struct FMangoQuestDescription& Quest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "AnimationProgressCompleteEvent");

	Params::ChallengeButton_C_AnimationProgressCompleteEvent Parms{};

	Parms.Quest = std::move(Quest);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeButton.ChallengeButton_C.WidgetAnimationEvt_DismissStarted_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UChallengeButton_C::WidgetAnimationEvt_DismissStarted_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "WidgetAnimationEvt_DismissStarted_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeButton.ChallengeButton_C.BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UChallengeButton_C::BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "BndEvt__HitArea_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeButton.ChallengeButton_C.ChallengeCompleteEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoQuestDescription           Quest                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UChallengeButton_C::ChallengeCompleteEvent(const struct FMangoQuestDescription& Quest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "ChallengeCompleteEvent");

	Params::ChallengeButton_C_ChallengeCompleteEvent Parms{};

	Parms.Quest = std::move(Quest);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeButton.ChallengeButton_C.Init
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoQuestDescription           Quest                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    AllowInput                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeButton_C::Init(struct FMangoQuestDescription& Quest, bool AllowInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "Init");

	Params::ChallengeButton_C_Init Parms{};

	Parms.Quest = std::move(Quest);
	Parms.AllowInput = AllowInput;

	UObject::ProcessEvent(Func, &Parms);

	Quest = std::move(Parms.Quest);
}


// Function ChallengeButton.ChallengeButton_C.GetBackgroundColor
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     OutColor                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UChallengeButton_C::GetBackgroundColor(struct FLinearColor* OutColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "GetBackgroundColor");

	Params::ChallengeButton_C_GetBackgroundColor Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutColor != nullptr)
		*OutColor = std::move(Parms.OutColor);

	return Parms.ReturnValue;
}


// Function ChallengeButton.ChallengeButton_C.OnQuestDismissStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMangoQuestSlot                         Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UChallengeButton_C::OnQuestDismissStarted(EMangoQuestSlot Param_Slot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "OnQuestDismissStarted");

	Params::ChallengeButton_C_OnQuestDismissStarted Parms{};

	Parms.Param_Slot = Param_Slot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeButton.ChallengeButton_C.OnQuestDismissCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EMangoQuestSlot                         Param_Slot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMangoQuestDescription           Quest                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeButton_C::OnQuestDismissCompleted(bool WasSuccessful, EMangoQuestSlot Param_Slot, struct FMangoQuestDescription& Quest)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "OnQuestDismissCompleted");

	Params::ChallengeButton_C_OnQuestDismissCompleted Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.Param_Slot = Param_Slot;
	Parms.Quest = std::move(Quest);

	UObject::ProcessEvent(Func, &Parms);

	Quest = std::move(Parms.Quest);
}


// Function ChallengeButton.ChallengeButton_C.ReinitFromDismiss
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeButton_C::ReinitFromDismiss()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "ReinitFromDismiss");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeButton.ChallengeButton_C.IsDismissable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CanDismiss                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeButton_C::IsDismissable(bool* CanDismiss)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "IsDismissable");

	Params::ChallengeButton_C_IsDismissable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanDismiss != nullptr)
		*CanDismiss = Parms.CanDismiss;
}


// Function ChallengeButton.ChallengeButton_C.IsClaimable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CanClaim                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeButton_C::IsClaimable(bool* CanClaim)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "IsClaimable");

	Params::ChallengeButton_C_IsClaimable Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanClaim != nullptr)
		*CanClaim = Parms.CanClaim;
}


// Function ChallengeButton.ChallengeButton_C.OnQuestRewardClaimed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    WasSuccessful                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// EMangoQuestSlot                         SlotId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMangoQuestDescription           Param_QuestDesc                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UChallengeButton_C::OnQuestRewardClaimed(bool WasSuccessful, EMangoQuestSlot SlotId, struct FMangoQuestDescription& Param_QuestDesc)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "OnQuestRewardClaimed");

	Params::ChallengeButton_C_OnQuestRewardClaimed Parms{};

	Parms.WasSuccessful = WasSuccessful;
	Parms.SlotId = SlotId;
	Parms.Param_QuestDesc = std::move(Param_QuestDesc);

	UObject::ProcessEvent(Func, &Parms);

	Param_QuestDesc = std::move(Parms.Param_QuestDesc);
}


// Function ChallengeButton.ChallengeButton_C.AnimateToGoal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoQuestDescription           GoalQuestDesc                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// TDelegate<void(const struct FMangoQuestDescription& Quest)>AnimationComplete                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)

void UChallengeButton_C::AnimateToGoal(const struct FMangoQuestDescription& GoalQuestDesc, const TDelegate<void(const struct FMangoQuestDescription& Quest)>& AnimationComplete)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "AnimateToGoal");

	Params::ChallengeButton_C_AnimateToGoal Parms{};

	Parms.GoalQuestDesc = std::move(GoalQuestDesc);
	Parms.AnimationComplete = AnimationComplete;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ChallengeButton.ChallengeButton_C.HandleInput
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMarinerInputActions                    InInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UChallengeButton_C::HandleInput(EMarinerInputActions InInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "HandleInput");

	Params::ChallengeButton_C_HandleInput Parms{};

	Parms.InInput = InInput;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ChallengeButton.ChallengeButton_C.DismissChallengeConfirm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             KeyPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UChallengeButton_C::DismissChallengeConfirm(struct FKey& KeyPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "DismissChallengeConfirm");

	Params::ChallengeButton_C_DismissChallengeConfirm Parms{};

	Parms.KeyPressed = std::move(KeyPressed);

	UObject::ProcessEvent(Func, &Parms);

	KeyPressed = std::move(Parms.KeyPressed);
}


// Function ChallengeButton.ChallengeButton_C.DummyCallback
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             KeyPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UChallengeButton_C::DummyCallback(struct FKey& KeyPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "DummyCallback");

	Params::ChallengeButton_C_DummyCallback Parms{};

	Parms.KeyPressed = std::move(KeyPressed);

	UObject::ProcessEvent(Func, &Parms);

	KeyPressed = std::move(Parms.KeyPressed);
}


// Function ChallengeButton.ChallengeButton_C.GetRewards
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoQuestReward                Reward                                                 (Parm, OutParm)
// struct FMangoQuest                      BlastPassXp                                            (Parm, OutParm)

void UChallengeButton_C::GetRewards(struct FMangoQuestReward* Reward, struct FMangoQuest* BlastPassXp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "GetRewards");

	Params::ChallengeButton_C_GetRewards Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Reward != nullptr)
		*Reward = std::move(Parms.Reward);

	if (BlastPassXp != nullptr)
		*BlastPassXp = std::move(Parms.BlastPassXp);
}


// Function ChallengeButton.ChallengeButton_C.PopulateReward
// (Public, BlueprintCallable, BlueprintEvent)

void UChallengeButton_C::PopulateReward()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "PopulateReward");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ChallengeButton.ChallengeButton_C.GetAssets
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerSettingButtonAssets      ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerSettingButtonAssets UChallengeButton_C::GetAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ChallengeButton_C", "GetAssets");

	Params::ChallengeButton_C_GetAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HomeMenu

#include "Basic.hpp"

#include "HomeMenu_classes.hpp"
#include "HomeMenu_parameters.hpp"


namespace SDK
{

// Function HomeMenu.HomeMenu_C.ExecuteUbergraph_HomeMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeMenu_C::ExecuteUbergraph_HomeMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "ExecuteUbergraph_HomeMenu");

	Params::HomeMenu_C_ExecuteUbergraph_HomeMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeMenu.HomeMenu_C.BndEvt__StandardVersionUpsell_K2Node_ComponentBoundEvent_7_OnLayeredButtonEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerLayeredButton*            Instance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeMenu_C::BndEvt__StandardVersionUpsell_K2Node_ComponentBoundEvent_7_OnLayeredButtonEvent__DelegateSignature(class UMarinerLayeredButton* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "BndEvt__StandardVersionUpsell_K2Node_ComponentBoundEvent_7_OnLayeredButtonEvent__DelegateSignature");

	Params::HomeMenu_C_BndEvt__StandardVersionUpsell_K2Node_ComponentBoundEvent_7_OnLayeredButtonEvent__DelegateSignature Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeMenu.HomeMenu_C.OnGameVersionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMarinerGameVersion                     NewVersion                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeMenu_C::OnGameVersionChanged(EMarinerGameVersion NewVersion)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "OnGameVersionChanged");

	Params::HomeMenu_C_OnGameVersionChanged Parms{};

	Parms.NewVersion = NewVersion;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeMenu.HomeMenu_C.MatchamkingStateChanged
// (BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::MatchamkingStateChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "MatchamkingStateChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeMenu.HomeMenu_C.PartyBusyState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMangoPartyBusyState                    State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeMenu_C::PartyBusyState(EMangoPartyBusyState State)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "PartyBusyState");

	Params::HomeMenu_C_PartyBusyState Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeMenu.HomeMenu_C.BP_OnEntered
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bFromSubMenu                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHomeMenu_C::BP_OnEntered(bool bFromSubMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "BP_OnEntered");

	Params::HomeMenu_C_BP_OnEntered Parms{};

	Parms.bFromSubMenu = bFromSubMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeMenu.HomeMenu_C.BndEvt__Quests_K2Node_ComponentBoundEvent_2_OnLayeredButtonEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerLayeredButton*            Instance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeMenu_C::BndEvt__Quests_K2Node_ComponentBoundEvent_2_OnLayeredButtonEvent__DelegateSignature(class UMarinerLayeredButton* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "BndEvt__Quests_K2Node_ComponentBoundEvent_2_OnLayeredButtonEvent__DelegateSignature");

	Params::HomeMenu_C_BndEvt__Quests_K2Node_ComponentBoundEvent_2_OnLayeredButtonEvent__DelegateSignature Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeMenu.HomeMenu_C.BndEvt__BlastPass_K2Node_ComponentBoundEvent_5_OnLayeredButtonEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerLayeredButton*            Instance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeMenu_C::BndEvt__BlastPass_K2Node_ComponentBoundEvent_5_OnLayeredButtonEvent__DelegateSignature(class UMarinerLayeredButton* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "BndEvt__BlastPass_K2Node_ComponentBoundEvent_5_OnLayeredButtonEvent__DelegateSignature");

	Params::HomeMenu_C_BndEvt__BlastPass_K2Node_ComponentBoundEvent_5_OnLayeredButtonEvent__DelegateSignature Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeMenu.HomeMenu_C.BndEvt__NewsButton_K2Node_ComponentBoundEvent_3_OnLayeredButtonEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerLayeredButton*            Instance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeMenu_C::BndEvt__NewsButton_K2Node_ComponentBoundEvent_3_OnLayeredButtonEvent__DelegateSignature(class UMarinerLayeredButton* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "BndEvt__NewsButton_K2Node_ComponentBoundEvent_3_OnLayeredButtonEvent__DelegateSignature");

	Params::HomeMenu_C_BndEvt__NewsButton_K2Node_ComponentBoundEvent_3_OnLayeredButtonEvent__DelegateSignature Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeMenu.HomeMenu_C.BP_OnExited
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bToSubLayer                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHomeMenu_C::BP_OnExited(bool bToSubLayer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "BP_OnExited");

	Params::HomeMenu_C_BP_OnExited Parms{};

	Parms.bToSubLayer = bToSubLayer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeMenu.HomeMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UHomeMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeMenu.HomeMenu_C.BndEvt__ChangeAccount_K2Node_ComponentBoundEvent_4_OnButtonSettingSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingBase*              Instance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeMenu_C::BndEvt__ChangeAccount_K2Node_ComponentBoundEvent_4_OnButtonSettingSelected__DelegateSignature(class UMarinerSettingBase* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "BndEvt__ChangeAccount_K2Node_ComponentBoundEvent_4_OnButtonSettingSelected__DelegateSignature");

	Params::HomeMenu_C_BndEvt__ChangeAccount_K2Node_ComponentBoundEvent_4_OnButtonSettingSelected__DelegateSignature Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeMenu.HomeMenu_C.BndEvt__Rewards_K2Node_ComponentBoundEvent_1_OnButtonSettingSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingBase*              Instance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeMenu_C::BndEvt__Rewards_K2Node_ComponentBoundEvent_1_OnButtonSettingSelected__DelegateSignature(class UMarinerSettingBase* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "BndEvt__Rewards_K2Node_ComponentBoundEvent_1_OnButtonSettingSelected__DelegateSignature");

	Params::HomeMenu_C_BndEvt__Rewards_K2Node_ComponentBoundEvent_1_OnButtonSettingSelected__DelegateSignature Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeMenu.HomeMenu_C.BndEvt__QuickPlay_K2Node_ComponentBoundEvent_0_OnButtonSettingSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingBase*              Instance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHomeMenu_C::BndEvt__QuickPlay_K2Node_ComponentBoundEvent_0_OnButtonSettingSelected__DelegateSignature(class UMarinerSettingBase* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "BndEvt__QuickPlay_K2Node_ComponentBoundEvent_0_OnButtonSettingSelected__DelegateSignature");

	Params::HomeMenu_C_BndEvt__QuickPlay_K2Node_ComponentBoundEvent_0_OnButtonSettingSelected__DelegateSignature Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function HomeMenu.HomeMenu_C.HasQuickPlay
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMangoPlaylist                   Playlist                                               (Parm, OutParm)
// class FText                             ButtonText                                             (Parm, OutParm)
// bool                                    CanInteract                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHomeMenu_C::HasQuickPlay(bool* IsValid, struct FMangoPlaylist* Playlist, class FText* ButtonText, bool* CanInteract)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "HasQuickPlay");

	Params::HomeMenu_C_HasQuickPlay Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

	if (Playlist != nullptr)
		*Playlist = std::move(Parms.Playlist);

	if (ButtonText != nullptr)
		*ButtonText = std::move(Parms.ButtonText);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;
}


// Function HomeMenu.HomeMenu_C.UpdateQuickPlayState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::UpdateQuickPlayState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "UpdateQuickPlayState");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeMenu.HomeMenu_C.UpdatePrompts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::UpdatePrompts()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "UpdatePrompts");

	UObject::ProcessEvent(Func, nullptr);
}


// Function HomeMenu.HomeMenu_C.HandleInput
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMarinerInputActions                    InInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UHomeMenu_C::HandleInput(EMarinerInputActions InInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "HandleInput");

	Params::HomeMenu_C_HandleInput Parms{};

	Parms.InInput = InInput;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function HomeMenu.HomeMenu_C.UpdateUpsellState
// (Public, BlueprintCallable, BlueprintEvent)

void UHomeMenu_C::UpdateUpsellState()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("HomeMenu_C", "UpdateUpsellState");

	UObject::ProcessEvent(Func, nullptr);
}

}


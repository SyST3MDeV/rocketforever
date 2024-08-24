#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Item_NinjaHeadband_AttachmentActor

#include "Basic.hpp"

#include "Item_NinjaHeadband_AttachmentActor_classes.hpp"
#include "Item_NinjaHeadband_AttachmentActor_parameters.hpp"


namespace SDK
{

// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.ExecuteUbergraph_Item_NinjaHeadband_AttachmentActor
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItem_NinjaHeadband_AttachmentActor_C::ExecuteUbergraph_Item_NinjaHeadband_AttachmentActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "ExecuteUbergraph_Item_NinjaHeadband_AttachmentActor");

	Params::Item_NinjaHeadband_AttachmentActor_C_ExecuteUbergraph_Item_NinjaHeadband_AttachmentActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.SpawnDodgeDistortionVFX
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)

void AItem_NinjaHeadband_AttachmentActor_C::SpawnDodgeDistortionVFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "SpawnDodgeDistortionVFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.DodgeAbilityActivated
// (BlueprintCallable, BlueprintEvent)

void AItem_NinjaHeadband_AttachmentActor_C::DodgeAbilityActivated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "DodgeAbilityActivated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.BindToOwnerUnpossessed
// (BlueprintCallable, BlueprintEvent)

void AItem_NinjaHeadband_AttachmentActor_C::BindToOwnerUnpossessed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "BindToOwnerUnpossessed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.OnOwningPawnUnpossessed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMarinerPlayerController*         UnpossessingController                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            UnpossessedPawn                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItem_NinjaHeadband_AttachmentActor_C::OnOwningPawnUnpossessed(class AMarinerPlayerController* UnpossessingController, class APawn* UnpossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "OnOwningPawnUnpossessed");

	Params::Item_NinjaHeadband_AttachmentActor_C_OnOwningPawnUnpossessed Parms{};

	Parms.UnpossessingController = UnpossessingController;
	Parms.UnpossessedPawn = UnpossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.HandleActivationDeactivationVisuals
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ToggleOn                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AItem_NinjaHeadband_AttachmentActor_C::HandleActivationDeactivationVisuals(bool ToggleOn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "HandleActivationDeactivationVisuals");

	Params::Item_NinjaHeadband_AttachmentActor_C_HandleActivationDeactivationVisuals Parms{};

	Parms.ToggleOn = ToggleOn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.OnEnteredRealityDelegate_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AMarinerCharacter*                ShiftingCharacter                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMarinerRealityState                    EnteringReality                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bCharacterIsLocal                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AItem_NinjaHeadband_AttachmentActor_C::OnEnteredRealityDelegate_Event_0(class AMarinerCharacter* ShiftingCharacter, EMarinerRealityState EnteringReality, bool bCharacterIsLocal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "OnEnteredRealityDelegate_Event_0");

	Params::Item_NinjaHeadband_AttachmentActor_C_OnEnteredRealityDelegate_Event_0 Parms{};

	Parms.ShiftingCharacter = ShiftingCharacter;
	Parms.EnteringReality = EnteringReality;
	Parms.bCharacterIsLocal = bCharacterIsLocal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AItem_NinjaHeadband_AttachmentActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.OnClientRealityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMarinerRealityState                    OldReality                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMarinerRealityState                    NewReality                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItem_NinjaHeadband_AttachmentActor_C::OnClientRealityChanged(EMarinerRealityState OldReality, EMarinerRealityState NewReality)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "OnClientRealityChanged");

	Params::Item_NinjaHeadband_AttachmentActor_C_OnClientRealityChanged Parms{};

	Parms.OldReality = OldReality;
	Parms.NewReality = NewReality;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void AItem_NinjaHeadband_AttachmentActor_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "Timeline_0__UpdateFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void AItem_NinjaHeadband_AttachmentActor_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "Timeline_0__FinishedFunc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.HandleDynamicMaterial
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_NinjaHeadband_AttachmentActor_C::HandleDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "HandleDynamicMaterial");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.HandleActivationSequence
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_NinjaHeadband_AttachmentActor_C::HandleActivationSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "HandleActivationSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.HandleDeactivationSequence
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void AItem_NinjaHeadband_AttachmentActor_C::HandleDeactivationSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "HandleDeactivationSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.HideActorOnDeactivation
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_NinjaHeadband_AttachmentActor_C::HideActorOnDeactivation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "HideActorOnDeactivation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.HandleActivationFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Activating                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AItem_NinjaHeadband_AttachmentActor_C::HandleActivationFX(bool Activating)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "HandleActivationFX");

	Params::Item_NinjaHeadband_AttachmentActor_C_HandleActivationFX Parms{};

	Parms.Activating = Activating;

	UObject::ProcessEvent(Func, &Parms);
}


// Function Item_NinjaHeadband_AttachmentActor.Item_NinjaHeadband_AttachmentActor_C.HandleDeactivationFX
// (Public, BlueprintCallable, BlueprintEvent)

void AItem_NinjaHeadband_AttachmentActor_C::HandleDeactivationFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Item_NinjaHeadband_AttachmentActor_C", "HandleDeactivationFX");

	UObject::ProcessEvent(Func, nullptr);
}

}


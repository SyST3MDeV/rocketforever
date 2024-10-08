#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PauseSettingsStackBase

#include "Basic.hpp"

#include "PauseSettingsStackBase_classes.hpp"
#include "PauseSettingsStackBase_parameters.hpp"


namespace SDK
{

// Function PauseSettingsStackBase.PauseSettingsStackBase_C.ExecuteUbergraph_PauseSettingsStackBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPauseSettingsStackBase_C::ExecuteUbergraph_PauseSettingsStackBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PauseSettingsStackBase_C", "ExecuteUbergraph_PauseSettingsStackBase");

	Params::PauseSettingsStackBase_C_ExecuteUbergraph_PauseSettingsStackBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PauseSettingsStackBase.PauseSettingsStackBase_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPauseSettingsStackBase_C::BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PauseSettingsStackBase_C", "BndEvt__BackButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PauseSettingsStackBase.PauseSettingsStackBase_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UPauseSettingsStackBase_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PauseSettingsStackBase_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PauseSettingsStackBase.PauseSettingsStackBase_C.GetWidgetSetup
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerMenuStackBaseWidgetSetup ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerMenuStackBaseWidgetSetup UPauseSettingsStackBase_C::GetWidgetSetup() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PauseSettingsStackBase_C", "GetWidgetSetup");

	Params::PauseSettingsStackBase_C_GetWidgetSetup Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


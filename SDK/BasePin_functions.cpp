#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BasePin

#include "Basic.hpp"

#include "BasePin_classes.hpp"
#include "BasePin_parameters.hpp"


namespace SDK
{

// Function BasePin.BasePin_C.ExecuteUbergraph_BasePin
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasePin_C::ExecuteUbergraph_BasePin(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePin_C", "ExecuteUbergraph_BasePin");

	Params::BasePin_C_ExecuteUbergraph_BasePin Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasePin.BasePin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBasePin_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePin_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BasePin.BasePin_C.OnHUDMatchStateChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             NewMatchState                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasePin_C::OnHUDMatchStateChanged(class FName NewMatchState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePin_C", "OnHUDMatchStateChanged");

	Params::BasePin_C_OnHUDMatchStateChanged Parms{};

	Parms.NewMatchState = NewMatchState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasePin.BasePin_C.ReactToMatchStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBasePin_C::ReactToMatchStateChanged(class FName InName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePin_C", "ReactToMatchStateChanged");

	Params::BasePin_C_ReactToMatchStateChanged Parms{};

	Parms.InName = InName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BasePin.BasePin_C.PinRenderingUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    NewPinnedState                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBasePin_C::PinRenderingUpdate(bool NewPinnedState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BasePin_C", "PinRenderingUpdate");

	Params::BasePin_C_PinRenderingUpdate Parms{};

	Parms.NewPinnedState = NewPinnedState;

	UObject::ProcessEvent(Func, &Parms);
}

}


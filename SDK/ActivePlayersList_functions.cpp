#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActivePlayersList

#include "Basic.hpp"

#include "ActivePlayersList_classes.hpp"
#include "ActivePlayersList_parameters.hpp"


namespace SDK
{

// Function ActivePlayersList.ActivePlayersList_C.ExecuteUbergraph_ActivePlayersList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivePlayersList_C::ExecuteUbergraph_ActivePlayersList(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivePlayersList_C", "ExecuteUbergraph_ActivePlayersList");

	Params::ActivePlayersList_C_ExecuteUbergraph_ActivePlayersList Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActivePlayersList.ActivePlayersList_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivePlayersList_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivePlayersList_C", "Tick");

	Params::ActivePlayersList_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActivePlayersList.ActivePlayersList_C.UnbindEvents
// (BlueprintCallable, BlueprintEvent)

void UActivePlayersList_C::UnbindEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivePlayersList_C", "UnbindEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActivePlayersList.ActivePlayersList_C.BindEvents
// (BlueprintCallable, BlueprintEvent)

void UActivePlayersList_C::BindEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivePlayersList_C", "BindEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActivePlayersList.ActivePlayersList_C.OnPlayerRemoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivePlayersList_C::OnPlayerRemoved(class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivePlayersList_C", "OnPlayerRemoved");

	Params::ActivePlayersList_C_OnPlayerRemoved Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActivePlayersList.ActivePlayersList_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActivePlayersList_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivePlayersList_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActivePlayersList.ActivePlayersList_C.OnPlayerAdded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerState*                     PlayerState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivePlayersList_C::OnPlayerAdded(class APlayerState* PlayerState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivePlayersList_C", "OnPlayerAdded");

	Params::ActivePlayersList_C_OnPlayerAdded Parms{};

	Parms.PlayerState = PlayerState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActivePlayersList.ActivePlayersList_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UActivePlayersList_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivePlayersList_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ActivePlayersList.ActivePlayersList_C.UpdatePlayersList
// (Public, BlueprintCallable, BlueprintEvent)

void UActivePlayersList_C::UpdatePlayersList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActivePlayersList_C", "UpdatePlayersList");

	UObject::ProcessEvent(Func, nullptr);
}

}


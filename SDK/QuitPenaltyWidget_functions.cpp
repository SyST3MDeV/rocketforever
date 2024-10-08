#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: QuitPenaltyWidget

#include "Basic.hpp"

#include "QuitPenaltyWidget_classes.hpp"
#include "QuitPenaltyWidget_parameters.hpp"


namespace SDK
{

// Function QuitPenaltyWidget.QuitPenaltyWidget_C.ExecuteUbergraph_QuitPenaltyWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuitPenaltyWidget_C::ExecuteUbergraph_QuitPenaltyWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuitPenaltyWidget_C", "ExecuteUbergraph_QuitPenaltyWidget");

	Params::QuitPenaltyWidget_C_ExecuteUbergraph_QuitPenaltyWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function QuitPenaltyWidget.QuitPenaltyWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuitPenaltyWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuitPenaltyWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuitPenaltyWidget.QuitPenaltyWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuitPenaltyWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuitPenaltyWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuitPenaltyWidget.QuitPenaltyWidget_C.OnPenaltyExpired
// (BlueprintCallable, BlueprintEvent)

void UQuitPenaltyWidget_C::OnPenaltyExpired()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuitPenaltyWidget_C", "OnPenaltyExpired");

	UObject::ProcessEvent(Func, nullptr);
}


// Function QuitPenaltyWidget.QuitPenaltyWidget_C.UpdateTimer
// (BlueprintCallable, BlueprintEvent)

void UQuitPenaltyWidget_C::UpdateTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("QuitPenaltyWidget_C", "UpdateTimer");

	UObject::ProcessEvent(Func, nullptr);
}

}


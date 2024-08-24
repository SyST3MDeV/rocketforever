#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScreenWipeWidget

#include "Basic.hpp"

#include "ScreenWipeWidget_classes.hpp"
#include "ScreenWipeWidget_parameters.hpp"


namespace SDK
{

// Function ScreenWipeWidget.ScreenWipeWidget_C.ExecuteUbergraph_ScreenWipeWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UScreenWipeWidget_C::ExecuteUbergraph_ScreenWipeWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenWipeWidget_C", "ExecuteUbergraph_ScreenWipeWidget");

	Params::ScreenWipeWidget_C_ExecuteUbergraph_ScreenWipeWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ScreenWipeWidget.ScreenWipeWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UScreenWipeWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ScreenWipeWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


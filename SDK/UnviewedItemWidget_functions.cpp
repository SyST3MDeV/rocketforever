#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UnviewedItemWidget

#include "Basic.hpp"

#include "UnviewedItemWidget_classes.hpp"
#include "UnviewedItemWidget_parameters.hpp"


namespace SDK
{

// Function UnviewedItemWidget.UnviewedItemWidget_C.ExecuteUbergraph_UnviewedItemWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUnviewedItemWidget_C::ExecuteUbergraph_UnviewedItemWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UnviewedItemWidget_C", "ExecuteUbergraph_UnviewedItemWidget");

	Params::UnviewedItemWidget_C_ExecuteUbergraph_UnviewedItemWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UnviewedItemWidget.UnviewedItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUnviewedItemWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UnviewedItemWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


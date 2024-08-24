#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TotemCustomization_Pattern

#include "Basic.hpp"

#include "TotemCustomization_Pattern_classes.hpp"
#include "TotemCustomization_Pattern_parameters.hpp"


namespace SDK
{

// Function TotemCustomization_Pattern.TotemCustomization_Pattern_C.ExecuteUbergraph_TotemCustomization_Pattern
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTotemCustomization_Pattern_C::ExecuteUbergraph_TotemCustomization_Pattern(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TotemCustomization_Pattern_C", "ExecuteUbergraph_TotemCustomization_Pattern");

	Params::TotemCustomization_Pattern_C_ExecuteUbergraph_TotemCustomization_Pattern Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TotemCustomization_Pattern.TotemCustomization_Pattern_C.OnProfileItemEquipped
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMarinerCMSItemDataAsset*         Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTotemCustomization_Pattern_C::OnProfileItemEquipped(class UMarinerCMSItemDataAsset* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TotemCustomization_Pattern_C", "OnProfileItemEquipped");

	Params::TotemCustomization_Pattern_C_OnProfileItemEquipped Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TotemCustomization_Pattern.TotemCustomization_Pattern_C.VisualizeSelectedButton
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMarinerItemLoadResponseButton*   ButtonInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTotemCustomization_Pattern_C::VisualizeSelectedButton(class UMarinerItemLoadResponseButton* ButtonInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TotemCustomization_Pattern_C", "VisualizeSelectedButton");

	Params::TotemCustomization_Pattern_C_VisualizeSelectedButton Parms{};

	Parms.ButtonInstance = ButtonInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}


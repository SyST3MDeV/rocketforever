#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TotemCustomization_Shape

#include "Basic.hpp"

#include "TotemCustomization_Shape_classes.hpp"
#include "TotemCustomization_Shape_parameters.hpp"


namespace SDK
{

// Function TotemCustomization_Shape.TotemCustomization_Shape_C.ExecuteUbergraph_TotemCustomization_Shape
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTotemCustomization_Shape_C::ExecuteUbergraph_TotemCustomization_Shape(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TotemCustomization_Shape_C", "ExecuteUbergraph_TotemCustomization_Shape");

	Params::TotemCustomization_Shape_C_ExecuteUbergraph_TotemCustomization_Shape Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TotemCustomization_Shape.TotemCustomization_Shape_C.OnProfileItemEquipped
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMarinerCMSItemDataAsset*         Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTotemCustomization_Shape_C::OnProfileItemEquipped(class UMarinerCMSItemDataAsset* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TotemCustomization_Shape_C", "OnProfileItemEquipped");

	Params::TotemCustomization_Shape_C_OnProfileItemEquipped Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TotemCustomization_Shape.TotemCustomization_Shape_C.VisualizeSelectedButton
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMarinerItemLoadResponseButton*   ButtonInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTotemCustomization_Shape_C::VisualizeSelectedButton(class UMarinerItemLoadResponseButton* ButtonInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TotemCustomization_Shape_C", "VisualizeSelectedButton");

	Params::TotemCustomization_Shape_C_VisualizeSelectedButton Parms{};

	Parms.ButtonInstance = ButtonInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ProgressionCharacterWidget

#include "Basic.hpp"

#include "ProgressionCharacterWidget_classes.hpp"
#include "ProgressionCharacterWidget_parameters.hpp"


namespace SDK
{

// Function ProgressionCharacterWidget.ProgressionCharacterWidget_C.ExecuteUbergraph_ProgressionCharacterWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressionCharacterWidget_C::ExecuteUbergraph_ProgressionCharacterWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressionCharacterWidget_C", "ExecuteUbergraph_ProgressionCharacterWidget");

	Params::ProgressionCharacterWidget_C_ExecuteUbergraph_ProgressionCharacterWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgressionCharacterWidget.ProgressionCharacterWidget_C.OnButtonHighlighted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMarinerLayeredButton*            ButtonInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromKeyboard                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    bFromMouse                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UProgressionCharacterWidget_C::OnButtonHighlighted(class UMarinerLayeredButton* ButtonInstance, bool bFromKeyboard, bool bFromMouse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressionCharacterWidget_C", "OnButtonHighlighted");

	Params::ProgressionCharacterWidget_C_OnButtonHighlighted Parms{};

	Parms.ButtonInstance = ButtonInstance;
	Parms.bFromKeyboard = bFromKeyboard;
	Parms.bFromMouse = bFromMouse;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgressionCharacterWidget.ProgressionCharacterWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UProgressionCharacterWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressionCharacterWidget_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ProgressionCharacterWidget.ProgressionCharacterWidget_C.OnButtonCreated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UMarinerLayeredButton*            ButtonInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMarinerUIItemButtonData         ItemData                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UProgressionCharacterWidget_C::OnButtonCreated(class UMarinerLayeredButton* ButtonInstance, const struct FMarinerUIItemButtonData& ItemData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressionCharacterWidget_C", "OnButtonCreated");

	Params::ProgressionCharacterWidget_C_OnButtonCreated Parms{};

	Parms.ButtonInstance = ButtonInstance;
	Parms.ItemData = std::move(ItemData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function ProgressionCharacterWidget.ProgressionCharacterWidget_C.OnButtonUnhighlighted
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMarinerLayeredButton*            ButtonInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UProgressionCharacterWidget_C::OnButtonUnhighlighted(class UMarinerLayeredButton* ButtonInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ProgressionCharacterWidget_C", "OnButtonUnhighlighted");

	Params::ProgressionCharacterWidget_C_OnButtonUnhighlighted Parms{};

	Parms.ButtonInstance = ButtonInstance;

	UObject::ProcessEvent(Func, &Parms);
}

}


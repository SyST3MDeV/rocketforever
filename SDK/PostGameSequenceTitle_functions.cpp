#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PostGameSequenceTitle

#include "Basic.hpp"

#include "PostGameSequenceTitle_classes.hpp"
#include "PostGameSequenceTitle_parameters.hpp"


namespace SDK
{

// Function PostGameSequenceTitle.PostGameSequenceTitle_C.SetTitle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_Title                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UPostGameSequenceTitle_C::SetTitle(const class FText& Param_Title)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostGameSequenceTitle_C", "SetTitle");

	Params::PostGameSequenceTitle_C_SetTitle Parms{};

	Parms.Param_Title = std::move(Param_Title);

	UObject::ProcessEvent(Func, &Parms);
}


// Function PostGameSequenceTitle.PostGameSequenceTitle_C.Populate
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPostGameSequenceTitle_C::Populate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostGameSequenceTitle_C", "Populate");

	Params::PostGameSequenceTitle_C_Populate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PostGameSequenceTitle.PostGameSequenceTitle_C.HideTitle
// (Public, BlueprintCallable, BlueprintEvent)

void UPostGameSequenceTitle_C::HideTitle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PostGameSequenceTitle_C", "HideTitle");

	UObject::ProcessEvent(Func, nullptr);
}

}


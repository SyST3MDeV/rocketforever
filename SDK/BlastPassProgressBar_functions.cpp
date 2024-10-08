#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BlastPassProgressBar

#include "Basic.hpp"

#include "BlastPassProgressBar_classes.hpp"
#include "BlastPassProgressBar_parameters.hpp"


namespace SDK
{

// Function BlastPassProgressBar.BlastPassProgressBar_C.GetAnimations
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerAnimatedProgressWidgetAnimationsReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor)

struct FMarinerAnimatedProgressWidgetAnimations UBlastPassProgressBar_C::GetAnimations() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BlastPassProgressBar_C", "GetAnimations");

	Params::BlastPassProgressBar_C_GetAnimations Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


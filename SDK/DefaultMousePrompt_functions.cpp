#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultMousePrompt

#include "Basic.hpp"

#include "DefaultMousePrompt_classes.hpp"
#include "DefaultMousePrompt_parameters.hpp"


namespace SDK
{

// Function DefaultMousePrompt.DefaultMousePrompt_C.GetPromptAssets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerMousePromptAssets        ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerMousePromptAssets UDefaultMousePrompt_C::GetPromptAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultMousePrompt_C", "GetPromptAssets");

	Params::DefaultMousePrompt_C_GetPromptAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


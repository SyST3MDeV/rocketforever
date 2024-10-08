#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultKeyboardPrompt

#include "Basic.hpp"

#include "DefaultKeyboardPrompt_classes.hpp"
#include "DefaultKeyboardPrompt_parameters.hpp"


namespace SDK
{

// Function DefaultKeyboardPrompt.DefaultKeyboardPrompt_C.GetPromptAssets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerKeyboardPromptAssets     ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerKeyboardPromptAssets UDefaultKeyboardPrompt_C::GetPromptAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultKeyboardPrompt_C", "GetPromptAssets");

	Params::DefaultKeyboardPrompt_C_GetPromptAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


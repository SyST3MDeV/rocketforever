#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WhiteTextGamepadPrompt

#include "Basic.hpp"

#include "WhiteTextGamepadPrompt_classes.hpp"
#include "WhiteTextGamepadPrompt_parameters.hpp"


namespace SDK
{

// Function WhiteTextGamepadPrompt.WhiteTextGamepadPrompt_C.GetPromptAssets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerGamepadPromptAssets      ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerGamepadPromptAssets UWhiteTextGamepadPrompt_C::GetPromptAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WhiteTextGamepadPrompt_C", "GetPromptAssets");

	Params::WhiteTextGamepadPrompt_C_GetPromptAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


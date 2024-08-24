#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterSelectButton

#include "Basic.hpp"

#include "CharacterSelectButton_classes.hpp"
#include "CharacterSelectButton_parameters.hpp"


namespace SDK
{

// Function CharacterSelectButton.CharacterSelectButton_C.ShowEditPrompt
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterSelectButton_C::ShowEditPrompt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSelectButton_C", "ShowEditPrompt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSelectButton.CharacterSelectButton_C.HideEditPrompt
// (Public, BlueprintCallable, BlueprintEvent)

void UCharacterSelectButton_C::HideEditPrompt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSelectButton_C", "HideEditPrompt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function CharacterSelectButton.CharacterSelectButton_C.GetAssets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerLayeredButtonAssets      ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerLayeredButtonAssets UCharacterSelectButton_C::GetAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSelectButton_C", "GetAssets");

	Params::CharacterSelectButton_C_GetAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterUpsellWidget_0

#include "Basic.hpp"

#include "CharacterUpsellWidget_0_classes.hpp"
#include "CharacterUpsellWidget_0_parameters.hpp"


namespace SDK
{

// Function CharacterUpsellWidget.CharacterUpsellWidget_C.SetCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMarinerPlayableCharacter*        Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void CharacterUpsellWidget_0::UCharacterUpsellWidget_C::SetCharacter(class UMarinerPlayableCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterUpsellWidget_C", "SetCharacter");

	Params::CharacterUpsellWidget_C_SetCharacter Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterUpsellWidget.CharacterUpsellWidget_C.Populate
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool CharacterUpsellWidget_0::UCharacterUpsellWidget_C::Populate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterUpsellWidget_C", "Populate");

	Params::CharacterUpsellWidget_C_Populate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


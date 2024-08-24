#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterLevelWidget

#include "Basic.hpp"

#include "CharacterLevelWidget_classes.hpp"
#include "CharacterLevelWidget_parameters.hpp"


namespace SDK
{

// Function CharacterLevelWidget.CharacterLevelWidget_C.Populate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsLocalPlayer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsFriendlyPlayer                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsRanked                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterLevelWidget_C::Populate(int32 Level, bool IsLocalPlayer, bool IsFriendlyPlayer, bool IsRanked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterLevelWidget_C", "Populate");

	Params::CharacterLevelWidget_C_Populate Parms{};

	Parms.Level = Level;
	Parms.IsLocalPlayer = IsLocalPlayer;
	Parms.IsFriendlyPlayer = IsFriendlyPlayer;
	Parms.IsRanked = IsRanked;

	UObject::ProcessEvent(Func, &Parms);
}

}


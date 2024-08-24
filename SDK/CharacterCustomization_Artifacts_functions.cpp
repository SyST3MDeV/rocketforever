#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterCustomization_Artifacts

#include "Basic.hpp"

#include "CharacterCustomization_Artifacts_classes.hpp"
#include "CharacterCustomization_Artifacts_parameters.hpp"


namespace SDK
{

// Function CharacterCustomization_Artifacts.CharacterCustomization_Artifacts_C.ExecuteUbergraph_CharacterCustomization_Artifacts
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCustomization_Artifacts_C::ExecuteUbergraph_CharacterCustomization_Artifacts(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCustomization_Artifacts_C", "ExecuteUbergraph_CharacterCustomization_Artifacts");

	Params::CharacterCustomization_Artifacts_C_ExecuteUbergraph_CharacterCustomization_Artifacts Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCustomization_Artifacts.CharacterCustomization_Artifacts_C.OnProfileItemEquipped
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMarinerCMSItemDataAsset*         Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCustomization_Artifacts_C::OnProfileItemEquipped(class UMarinerCMSItemDataAsset* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCustomization_Artifacts_C", "OnProfileItemEquipped");

	Params::CharacterCustomization_Artifacts_C_OnProfileItemEquipped Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterCustomization_Artifacts.CharacterCustomization_Artifacts_C.PopulateUnlockPreview
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UItemLoadResponse*                LoadResponse                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMarinerCMSItemDataAsset*         DataAsset                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMarinerPlayableCharacter*        Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterCustomization_Artifacts_C::PopulateUnlockPreview(class UItemLoadResponse* LoadResponse, class UMarinerCMSItemDataAsset* DataAsset, class UMarinerPlayableCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterCustomization_Artifacts_C", "PopulateUnlockPreview");

	Params::CharacterCustomization_Artifacts_C_PopulateUnlockPreview Parms{};

	Parms.LoadResponse = LoadResponse;
	Parms.DataAsset = DataAsset;
	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}

}


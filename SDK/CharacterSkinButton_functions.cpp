#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterSkinButton

#include "Basic.hpp"

#include "CharacterSkinButton_classes.hpp"
#include "CharacterSkinButton_parameters.hpp"


namespace SDK
{

// Function CharacterSkinButton.CharacterSkinButton_C.ExecuteUbergraph_CharacterSkinButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterSkinButton_C::ExecuteUbergraph_CharacterSkinButton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSkinButton_C", "ExecuteUbergraph_CharacterSkinButton");

	Params::CharacterSkinButton_C_ExecuteUbergraph_CharacterSkinButton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterSkinButton.CharacterSkinButton_C.OnPopulate
// (Event, Public, BlueprintEvent)
// Parameters:
// class UItemLoadResponse*                LoadResponse                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMarinerCMSItemDataAsset*         CMSItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterSkinButton_C::OnPopulate(class UItemLoadResponse* LoadResponse, class UMarinerCMSItemDataAsset* CMSItem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSkinButton_C", "OnPopulate");

	Params::CharacterSkinButton_C_OnPopulate Parms{};

	Parms.LoadResponse = LoadResponse;
	Parms.CMSItem = CMSItem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function CharacterSkinButton.CharacterSkinButton_C.SetPalette
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FLinearColor>             InColors                                               (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCharacterSkinButton_C::SetPalette(TArray<struct FLinearColor>& InColors)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSkinButton_C", "SetPalette");

	Params::CharacterSkinButton_C_SetPalette Parms{};

	Parms.InColors = std::move(InColors);

	UObject::ProcessEvent(Func, &Parms);

	InColors = std::move(Parms.InColors);
}


// Function CharacterSkinButton.CharacterSkinButton_C.GetAssets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerLayeredButtonAssets      ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerLayeredButtonAssets UCharacterSkinButton_C::GetAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSkinButton_C", "GetAssets");

	Params::CharacterSkinButton_C_GetAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CharacterSkinButton.CharacterSkinButton_C.GetIconBrush
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UItemLoadResponse*                LoadResponse                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMarinerCMSItemDataAsset*         CMSItem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FSlateBrush UCharacterSkinButton_C::GetIconBrush(class UItemLoadResponse* LoadResponse, class UMarinerCMSItemDataAsset* CMSItem) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSkinButton_C", "GetIconBrush");

	Params::CharacterSkinButton_C_GetIconBrush Parms{};

	Parms.LoadResponse = LoadResponse;
	Parms.CMSItem = CMSItem;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CharacterSkinButton.CharacterSkinButton_C.GetItemLoadResponseAssets
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerItemLoadResponseAssets   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

struct FMarinerItemLoadResponseAssets UCharacterSkinButton_C::GetItemLoadResponseAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("CharacterSkinButton_C", "GetItemLoadResponseAssets");

	Params::CharacterSkinButton_C_GetItemLoadResponseAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


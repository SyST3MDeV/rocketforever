#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_TrialsPostGameMenu

#include "Basic.hpp"

#include "BP_TrialsPostGameMenu_classes.hpp"
#include "BP_TrialsPostGameMenu_parameters.hpp"


namespace SDK
{

// Function BP_TrialsPostGameMenu.BP_TrialsPostGameMenu_C.ExecuteUbergraph_BP_TrialsPostGameMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_TrialsPostGameMenu_C::ExecuteUbergraph_BP_TrialsPostGameMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrialsPostGameMenu_C", "ExecuteUbergraph_BP_TrialsPostGameMenu");

	Params::BP_TrialsPostGameMenu_C_ExecuteUbergraph_BP_TrialsPostGameMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrialsPostGameMenu.BP_TrialsPostGameMenu_C.BP_OnEntered
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bFromSubMenu                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_TrialsPostGameMenu_C::BP_OnEntered(bool bFromSubMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrialsPostGameMenu_C", "BP_OnEntered");

	Params::BP_TrialsPostGameMenu_C_BP_OnEntered Parms{};

	Parms.bFromSubMenu = bFromSubMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TrialsPostGameMenu.BP_TrialsPostGameMenu_C.SetTimeText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_TrialsPostGameMenu_C::SetTimeText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TrialsPostGameMenu_C", "SetTimeText");

	UObject::ProcessEvent(Func, nullptr);
}

}


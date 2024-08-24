#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UserAgreementMenu

#include "Basic.hpp"

#include "UserAgreementMenu_classes.hpp"
#include "UserAgreementMenu_parameters.hpp"


namespace SDK
{

// Function UserAgreementMenu.UserAgreementMenu_C.ExecuteUbergraph_UserAgreementMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUserAgreementMenu_C::ExecuteUbergraph_UserAgreementMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserAgreementMenu_C", "ExecuteUbergraph_UserAgreementMenu");

	Params::UserAgreementMenu_C_ExecuteUbergraph_UserAgreementMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UserAgreementMenu.UserAgreementMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUserAgreementMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UserAgreementMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}

}


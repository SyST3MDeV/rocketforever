#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OfferListMessageBox

#include "Basic.hpp"

#include "OfferListMessageBox_classes.hpp"
#include "OfferListMessageBox_parameters.hpp"


namespace SDK
{

// Function OfferListMessageBox.OfferListMessageBox_C.ExecuteUbergraph_OfferListMessageBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOfferListMessageBox_C::ExecuteUbergraph_OfferListMessageBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OfferListMessageBox_C", "ExecuteUbergraph_OfferListMessageBox");

	Params::OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function OfferListMessageBox.OfferListMessageBox_C.PopulateNativeOffer
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMarinerLayeredButton*            ButtonInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OfferId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UOfferListMessageBox_C::PopulateNativeOffer(class UMarinerLayeredButton* ButtonInstance, const class FString& OfferId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OfferListMessageBox_C", "PopulateNativeOffer");

	Params::OfferListMessageBox_C_PopulateNativeOffer Parms{};

	Parms.ButtonInstance = ButtonInstance;
	Parms.OfferId = std::move(OfferId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function OfferListMessageBox.OfferListMessageBox_C.PopulateOffer
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UMarinerLayeredButton*            ButtonInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           OfferId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UOfferListMessageBox_C::PopulateOffer(class UMarinerLayeredButton* ButtonInstance, const class FString& OfferId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("OfferListMessageBox_C", "PopulateOffer");

	Params::OfferListMessageBox_C_PopulateOffer Parms{};

	Parms.ButtonInstance = ButtonInstance;
	Parms.OfferId = std::move(OfferId);

	UObject::ProcessEvent(Func, &Parms);
}

}


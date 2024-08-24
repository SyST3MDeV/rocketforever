#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PurchasePreviewWidget

#include "Basic.hpp"

#include "PurchasePreviewWidget_classes.hpp"
#include "PurchasePreviewWidget_parameters.hpp"


namespace SDK
{

// Function PurchasePreviewWidget.PurchasePreviewWidget_C.OnPurchaseGenericSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UPurchasePreviewWidget_C::OnPurchaseGenericSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchasePreviewWidget_C", "OnPurchaseGenericSelected__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PurchasePreviewWidget.PurchasePreviewWidget_C.ExecuteUbergraph_PurchasePreviewWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchasePreviewWidget_C::ExecuteUbergraph_PurchasePreviewWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchasePreviewWidget_C", "ExecuteUbergraph_PurchasePreviewWidget");

	Params::PurchasePreviewWidget_C_ExecuteUbergraph_PurchasePreviewWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchasePreviewWidget.PurchasePreviewWidget_C.BndEvt__PurchaseCollectionButton_K2Node_ComponentBoundEvent_1_OnLayeredButtonEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerLayeredButton*            Instance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchasePreviewWidget_C::BndEvt__PurchaseCollectionButton_K2Node_ComponentBoundEvent_1_OnLayeredButtonEvent__DelegateSignature(class UMarinerLayeredButton* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchasePreviewWidget_C", "BndEvt__PurchaseCollectionButton_K2Node_ComponentBoundEvent_1_OnLayeredButtonEvent__DelegateSignature");

	Params::PurchasePreviewWidget_C_BndEvt__PurchaseCollectionButton_K2Node_ComponentBoundEvent_1_OnLayeredButtonEvent__DelegateSignature Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchasePreviewWidget.PurchasePreviewWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UPurchasePreviewWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchasePreviewWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function PurchasePreviewWidget.PurchasePreviewWidget_C.BndEvt__PurchaseGeneric_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerLayeredButton*            Instance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchasePreviewWidget_C::BndEvt__PurchaseGeneric_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature(class UMarinerLayeredButton* Instance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchasePreviewWidget_C", "BndEvt__PurchaseGeneric_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature");

	Params::PurchasePreviewWidget_C_BndEvt__PurchaseGeneric_K2Node_ComponentBoundEvent_0_OnLayeredButtonEvent__DelegateSignature Parms{};

	Parms.Instance = Instance;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchasePreviewWidget.PurchasePreviewWidget_C.SetOfferAndTier
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemLoadResponse*                Param_ItemLoadResponse                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Param_UseDirectPurchase                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMarinerPlayableCharacter*        Param_Character                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPurchasePreviewWidget_C::SetOfferAndTier(class UItemLoadResponse* Param_ItemLoadResponse, bool Param_UseDirectPurchase, class UMarinerPlayableCharacter* Param_Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchasePreviewWidget_C", "SetOfferAndTier");

	Params::PurchasePreviewWidget_C_SetOfferAndTier Parms{};

	Parms.Param_ItemLoadResponse = Param_ItemLoadResponse;
	Parms.Param_UseDirectPurchase = Param_UseDirectPurchase;
	Parms.Param_Character = Param_Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function PurchasePreviewWidget.PurchasePreviewWidget_C.Populate
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UPurchasePreviewWidget_C::Populate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchasePreviewWidget_C", "Populate");

	Params::PurchasePreviewWidget_C_Populate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function PurchasePreviewWidget.PurchasePreviewWidget_C.GetOfferItemFullName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoPurchaseOffer              MangoPurchaseOffer                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                             Result                                                 (Parm, OutParm)

void UPurchasePreviewWidget_C::GetOfferItemFullName(const struct FMangoPurchaseOffer& MangoPurchaseOffer, class FText* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchasePreviewWidget_C", "GetOfferItemFullName");

	Params::PurchasePreviewWidget_C_GetOfferItemFullName Parms{};

	Parms.MangoPurchaseOffer = std::move(MangoPurchaseOffer);

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function PurchasePreviewWidget.PurchasePreviewWidget_C.UpdateLimitedTimeWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UPurchasePreviewWidget_C::UpdateLimitedTimeWidgets()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("PurchasePreviewWidget_C", "UpdateLimitedTimeWidgets");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ItemProgressionWidget

#include "Basic.hpp"

#include "ItemProgressionWidget_classes.hpp"
#include "ItemProgressionWidget_parameters.hpp"


namespace SDK
{

// Function ItemProgressionWidget.ItemProgressionWidget_C.SetItemUnlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoProgressionCharacterItemUnlockParam_ItemUnlock                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                                    Param_IsOwned                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UItemLoadResponse*                Param_ItemLoadResponse                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemProgressionWidget_C::SetItemUnlock(struct FMangoProgressionCharacterItemUnlock& Param_ItemUnlock, bool Param_IsOwned, class UItemLoadResponse* Param_ItemLoadResponse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemProgressionWidget_C", "SetItemUnlock");

	Params::ItemProgressionWidget_C_SetItemUnlock Parms{};

	Parms.Param_ItemUnlock = std::move(Param_ItemUnlock);
	Parms.Param_IsOwned = Param_IsOwned;
	Parms.Param_ItemLoadResponse = Param_ItemLoadResponse;

	UObject::ProcessEvent(Func, &Parms);

	Param_ItemUnlock = std::move(Parms.Param_ItemUnlock);
}


// Function ItemProgressionWidget.ItemProgressionWidget_C.Populate
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UItemProgressionWidget_C::Populate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ItemProgressionWidget_C", "Populate");

	Params::ItemProgressionWidget_C_Populate Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


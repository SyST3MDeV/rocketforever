#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RegionComboBox

#include "Basic.hpp"

#include "RegionComboBox_classes.hpp"
#include "RegionComboBox_parameters.hpp"


namespace SDK
{

// Function RegionComboBox.RegionComboBox_C.GetAssets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerLayeredButtonAssets      ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerLayeredButtonAssets URegionComboBox_C::GetAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RegionComboBox_C", "GetAssets");

	Params::RegionComboBox_C_GetAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ComboBoxSetting

#include "Basic.hpp"

#include "ComboBoxSetting_classes.hpp"
#include "ComboBoxSetting_parameters.hpp"


namespace SDK
{

// Function ComboBoxSetting.ComboBoxSetting_C.On_ComboBox_GenerateWidget_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UComboBoxSetting_C::On_ComboBox_GenerateWidget_0(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxSetting_C", "On_ComboBox_GenerateWidget_0");

	Params::ComboBoxSetting_C_On_ComboBox_GenerateWidget_0 Parms{};

	Parms.Item = std::move(Item);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ComboBoxSetting.ComboBoxSetting_C.GetAssets
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerSettingComboBoxAssets    ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerSettingComboBoxAssets UComboBoxSetting_C::GetAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ComboBoxSetting_C", "GetAssets");

	Params::ComboBoxSetting_C_GetAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


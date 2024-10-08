#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SpeedBoostCameraEffect

#include "Basic.hpp"

#include "SpeedBoostCameraEffect_classes.hpp"
#include "SpeedBoostCameraEffect_parameters.hpp"


namespace SDK
{

// Function SpeedBoostCameraEffect.SpeedBoostCameraEffect_C.ExecuteUbergraph_SpeedBoostCameraEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpeedBoostCameraEffect_C::ExecuteUbergraph_SpeedBoostCameraEffect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpeedBoostCameraEffect_C", "ExecuteUbergraph_SpeedBoostCameraEffect");

	Params::SpeedBoostCameraEffect_C_ExecuteUbergraph_SpeedBoostCameraEffect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SpeedBoostCameraEffect.SpeedBoostCameraEffect_C.BP_OnDisabled
// (Event, Public, BlueprintEvent)

void ASpeedBoostCameraEffect_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpeedBoostCameraEffect_C", "BP_OnDisabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SpeedBoostCameraEffect.SpeedBoostCameraEffect_C.BP_OnEnabled
// (Event, Public, BlueprintEvent)

void ASpeedBoostCameraEffect_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SpeedBoostCameraEffect_C", "BP_OnEnabled");

	UObject::ProcessEvent(Func, nullptr);
}

}


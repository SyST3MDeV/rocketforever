#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Slider_00_PostAnimBP

#include "Basic.hpp"

#include "Slider_00_PostAnimBP_classes.hpp"
#include "Slider_00_PostAnimBP_parameters.hpp"


namespace SDK
{

// Function Slider_00_PostAnimBP.Slider_00_PostAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void USlider_00_PostAnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slider_00_PostAnimBP_C", "AnimGraph");

	Params::Slider_00_PostAnimBP_C_AnimGraph Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}


// Function Slider_00_PostAnimBP.Slider_00_PostAnimBP_C.ExecuteUbergraph_Slider_00_PostAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USlider_00_PostAnimBP_C::ExecuteUbergraph_Slider_00_PostAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("Slider_00_PostAnimBP_C", "ExecuteUbergraph_Slider_00_PostAnimBP");

	Params::Slider_00_PostAnimBP_C_ExecuteUbergraph_Slider_00_PostAnimBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


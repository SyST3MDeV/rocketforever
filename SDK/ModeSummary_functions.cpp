#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModeSummary

#include "Basic.hpp"

#include "ModeSummary_classes.hpp"
#include "ModeSummary_parameters.hpp"


namespace SDK
{

// Function ModeSummary.ModeSummary_C.OnSlideOutComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UModeSummary_C::OnSlideOutComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModeSummary_C", "OnSlideOutComplete__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ModeSummary.ModeSummary_C.ExecuteUbergraph_ModeSummary
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModeSummary_C::ExecuteUbergraph_ModeSummary(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModeSummary_C", "ExecuteUbergraph_ModeSummary");

	Params::ModeSummary_C_ExecuteUbergraph_ModeSummary Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ModeSummary.ModeSummary_C.WidgetAnimationEvt_SlideOutPlusFrames_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)

void UModeSummary_C::WidgetAnimationEvt_SlideOutPlusFrames_K2Node_WidgetAnimationEvent_1()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModeSummary_C", "WidgetAnimationEvt_SlideOutPlusFrames_K2Node_WidgetAnimationEvent_1");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ModeSummary.ModeSummary_C.WidgetAnimationEvt_SlideOut_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)

void UModeSummary_C::WidgetAnimationEvt_SlideOut_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModeSummary_C", "WidgetAnimationEvt_SlideOut_K2Node_WidgetAnimationEvent_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ModeSummary.ModeSummary_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UModeSummary_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModeSummary_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ModeSummary.ModeSummary_C.GetGameModeText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UModeSummary_C::GetGameModeText()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModeSummary_C", "GetGameModeText");

	Params::ModeSummary_C_GetGameModeText Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function ModeSummary.ModeSummary_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UModeSummary_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModeSummary_C", "Initialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ModeSummary.ModeSummary_C.InitializeCustom
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Param_GameModeText                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMarinerModeDataAsset*            GameModeData                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UModeSummary_C::InitializeCustom(const class FText& Param_GameModeText, class UMarinerModeDataAsset* GameModeData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModeSummary_C", "InitializeCustom");

	Params::ModeSummary_C_InitializeCustom Parms{};

	Parms.Param_GameModeText = std::move(Param_GameModeText);
	Parms.GameModeData = GameModeData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ModeSummary.ModeSummary_C.RemoveCustom
// (Public, BlueprintCallable, BlueprintEvent)

void UModeSummary_C::RemoveCustom()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ModeSummary_C", "RemoveCustom");

	UObject::ProcessEvent(Func, nullptr);
}

}


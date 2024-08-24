#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingScreenSkipWidget

#include "Basic.hpp"

#include "LoadingScreenSkipWidget_classes.hpp"
#include "LoadingScreenSkipWidget_parameters.hpp"


namespace SDK
{

// Function LoadingScreenSkipWidget.LoadingScreenSkipWidget_C.ExecuteUbergraph_LoadingScreenSkipWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULoadingScreenSkipWidget_C::ExecuteUbergraph_LoadingScreenSkipWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenSkipWidget_C", "ExecuteUbergraph_LoadingScreenSkipWidget");

	Params::LoadingScreenSkipWidget_C_ExecuteUbergraph_LoadingScreenSkipWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LoadingScreenSkipWidget.LoadingScreenSkipWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULoadingScreenSkipWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LoadingScreenSkipWidget_C", "PreConstruct");

	Params::LoadingScreenSkipWidget_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}

}


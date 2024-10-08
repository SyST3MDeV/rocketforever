#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StatData

#include "Basic.hpp"

#include "StatData_classes.hpp"
#include "StatData_parameters.hpp"


namespace SDK
{

// Function StatData.StatData_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FSlateColor                      TextColor                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UStatData_C::SetText(const class FText& Data, const struct FSlateColor& TextColor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("StatData_C", "SetText");

	Params::StatData_C_SetText Parms{};

	Parms.Data = std::move(Data);
	Parms.TextColor = std::move(TextColor);

	UObject::ProcessEvent(Func, &Parms);
}

}


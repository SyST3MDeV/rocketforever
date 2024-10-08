#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: RankWidget_WithProgress

#include "Basic.hpp"

#include "RankWidget_WithProgress_classes.hpp"
#include "RankWidget_WithProgress_parameters.hpp"


namespace SDK
{

// Function RankWidget_WithProgress.RankWidget_WithProgress_C.InitRankProgressRadial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoPlaylistResult             MangoPlaylistResult                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void URankWidget_WithProgress_C::InitRankProgressRadial(const struct FMangoPlaylistResult& MangoPlaylistResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankWidget_WithProgress_C", "InitRankProgressRadial");

	Params::RankWidget_WithProgress_C_InitRankProgressRadial Parms{};

	Parms.MangoPlaylistResult = std::move(MangoPlaylistResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function RankWidget_WithProgress.RankWidget_WithProgress_C.SetRankProgressRadial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMangoPlaylistResult             MangoPlaylistResult                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void URankWidget_WithProgress_C::SetRankProgressRadial(const struct FMangoPlaylistResult& MangoPlaylistResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("RankWidget_WithProgress_C", "SetRankProgressRadial");

	Params::RankWidget_WithProgress_C_SetRankProgressRadial Parms{};

	Parms.MangoPlaylistResult = std::move(MangoPlaylistResult);

	UObject::ProcessEvent(Func, &Parms);
}

}


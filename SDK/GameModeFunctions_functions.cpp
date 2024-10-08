#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameModeFunctions

#include "Basic.hpp"

#include "GameModeFunctions_classes.hpp"
#include "GameModeFunctions_parameters.hpp"


namespace SDK
{

// Function GameModeFunctions.GameModeFunctions_C.GetGameModeViaGameState
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameStateBase*                   GameState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGameModeEnums                          GameMode                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameModeFunctions_C::GetGameModeViaGameState(class AGameStateBase* GameState, class UObject* __WorldContext, EGameModeEnums* GameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameModeFunctions_C", "GetGameModeViaGameState");

	Params::GameModeFunctions_C_GetGameModeViaGameState Parms{};

	Parms.GameState = GameState;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (GameMode != nullptr)
		*GameMode = Parms.GameMode;
}


// Function GameModeFunctions.GameModeFunctions_C.GetGameModeViaMatchEnd
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMatchEnd                        MatchEndStruct                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EGameModeEnums                          GameMode                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameModeFunctions_C::GetGameModeViaMatchEnd(const struct FMatchEnd& MatchEndStruct, class UObject* __WorldContext, EGameModeEnums* GameMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameModeFunctions_C", "GetGameModeViaMatchEnd");

	Params::GameModeFunctions_C_GetGameModeViaMatchEnd Parms{};

	Parms.MatchEndStruct = std::move(MatchEndStruct);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (GameMode != nullptr)
		*GameMode = Parms.GameMode;
}


// Function GameModeFunctions.GameModeFunctions_C.GetMapViaLevelName
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           LevelName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ELevelEnums                             Level                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameModeFunctions_C::GetMapViaLevelName(const class FString& LevelName, class UObject* __WorldContext, ELevelEnums* Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("GameModeFunctions_C", "GetMapViaLevelName");

	Params::GameModeFunctions_C_GetMapViaLevelName Parms{};

	Parms.LevelName = std::move(LevelName);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (Level != nullptr)
		*Level = Parms.Level;
}

}


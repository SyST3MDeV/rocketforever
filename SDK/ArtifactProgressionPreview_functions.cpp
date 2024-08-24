#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ArtifactProgressionPreview

#include "Basic.hpp"

#include "ArtifactProgressionPreview_classes.hpp"
#include "ArtifactProgressionPreview_parameters.hpp"


namespace SDK
{

// Function ArtifactProgressionPreview.ArtifactProgressionPreview_C.ExecuteUbergraph_ArtifactProgressionPreview
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UArtifactProgressionPreview_C::ExecuteUbergraph_ArtifactProgressionPreview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArtifactProgressionPreview_C", "ExecuteUbergraph_ArtifactProgressionPreview");

	Params::ArtifactProgressionPreview_C_ExecuteUbergraph_ArtifactProgressionPreview Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ArtifactProgressionPreview.ArtifactProgressionPreview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UArtifactProgressionPreview_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArtifactProgressionPreview_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ArtifactProgressionPreview.ArtifactProgressionPreview_C.GetAssets
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FMarinerLayeredButtonAssets      ReturnValue                                            (Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)

struct FMarinerLayeredButtonAssets UArtifactProgressionPreview_C::GetAssets() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ArtifactProgressionPreview_C", "GetAssets");

	Params::ArtifactProgressionPreview_C_GetAssets Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


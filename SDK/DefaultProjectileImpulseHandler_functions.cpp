#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DefaultProjectileImpulseHandler

#include "Basic.hpp"

#include "DefaultProjectileImpulseHandler_classes.hpp"
#include "DefaultProjectileImpulseHandler_parameters.hpp"


namespace SDK
{

// Function DefaultProjectileImpulseHandler.DefaultProjectileImpulseHandler_C.IsSpikeImpulse
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                          Projectile                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          DamagedActor                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   DirectionPitch                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFalling                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          Instigator                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UDefaultProjectileImpulseHandler_C::IsSpikeImpulse(class UObject* Projectile, const struct FVector& HitLocation, class UObject* DamagedActor, float DirectionPitch, bool IsFalling, class UObject* Instigator) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DefaultProjectileImpulseHandler_C", "IsSpikeImpulse");

	Params::DefaultProjectileImpulseHandler_C_IsSpikeImpulse Parms{};

	Parms.Projectile = Projectile;
	Parms.HitLocation = std::move(HitLocation);
	Parms.DamagedActor = DamagedActor;
	Parms.DirectionPitch = DirectionPitch;
	Parms.IsFalling = IsFalling;
	Parms.Instigator = Instigator;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


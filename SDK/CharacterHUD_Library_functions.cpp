#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterHUD_Library

#include "Basic.hpp"

#include "CharacterHUD_Library_classes.hpp"
#include "CharacterHUD_Library_parameters.hpp"


namespace SDK
{

// Function CharacterHUD_Library.CharacterHUD_Library_C.HandleRedReticle
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*                 ReloadAnimation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      HUD_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                           ReticleImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                     ReticleCanvas                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                     ReticleProgressBar                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ColorProgressBarFill                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// E_ReticleElementTypes                   ReticleElementType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    GamepadNotRequired                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ForceOnIgnoreGameGlobal                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterHUD_Library_C::HandleRedReticle(class UWidgetAnimation* ReloadAnimation, class UUserWidget* HUD_Widget, class UImage* ReticleImage, class UCanvasPanel* ReticleCanvas, class UProgressBar* ReticleProgressBar, bool ColorProgressBarFill, E_ReticleElementTypes ReticleElementType, bool GamepadNotRequired, bool ForceOnIgnoreGameGlobal, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CharacterHUD_Library_C", "HandleRedReticle");

	Params::CharacterHUD_Library_C_HandleRedReticle Parms{};

	Parms.ReloadAnimation = ReloadAnimation;
	Parms.HUD_Widget = HUD_Widget;
	Parms.ReticleImage = ReticleImage;
	Parms.ReticleCanvas = ReticleCanvas;
	Parms.ReticleProgressBar = ReticleProgressBar;
	Parms.ColorProgressBarFill = ColorProgressBarFill;
	Parms.ReticleElementType = ReticleElementType;
	Parms.GamepadNotRequired = GamepadNotRequired;
	Parms.ForceOnIgnoreGameGlobal = ForceOnIgnoreGameGlobal;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CharacterHUD_Library.CharacterHUD_Library_C.GetActiveInputType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsGamepadActive                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterHUD_Library_C::GetActiveInputType(class UObject* __WorldContext, bool* IsGamepadActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CharacterHUD_Library_C", "GetActiveInputType");

	Params::CharacterHUD_Library_C_GetActiveInputType Parms{};

	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsGamepadActive != nullptr)
		*IsGamepadActive = Parms.IsGamepadActive;
}


// Function CharacterHUD_Library.CharacterHUD_Library_C.CanUpdateReticleTargetForAimAssist
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*                      HUD_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*                 ReloadAnimation                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CanUpdate                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterHUD_Library_C::CanUpdateReticleTargetForAimAssist(class UUserWidget* HUD_Widget, const class UWidgetAnimation* ReloadAnimation, class UObject* __WorldContext, bool* CanUpdate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CharacterHUD_Library_C", "CanUpdateReticleTargetForAimAssist");

	Params::CharacterHUD_Library_C_CanUpdateReticleTargetForAimAssist Parms{};

	Parms.HUD_Widget = HUD_Widget;
	Parms.ReloadAnimation = ReloadAnimation;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (CanUpdate != nullptr)
		*CanUpdate = Parms.CanUpdate;
}


// Function CharacterHUD_Library.CharacterHUD_Library_C.UpdateReticleColorForAimAssist
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                           ReticleImage                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanel*                     ReticleCanvas                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                      HUD_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UProgressBar*                     ReticleProgressBar                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ColorProgressBarFill                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// E_ReticleElementTypes                   ReticleElementType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ForceColorReset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    GamepadNotRequired                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterHUD_Library_C::UpdateReticleColorForAimAssist(class UImage* ReticleImage, class UCanvasPanel* ReticleCanvas, class UUserWidget* HUD_Widget, class UProgressBar* ReticleProgressBar, bool ColorProgressBarFill, E_ReticleElementTypes ReticleElementType, bool ForceColorReset, bool GamepadNotRequired, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CharacterHUD_Library_C", "UpdateReticleColorForAimAssist");

	Params::CharacterHUD_Library_C_UpdateReticleColorForAimAssist Parms{};

	Parms.ReticleImage = ReticleImage;
	Parms.ReticleCanvas = ReticleCanvas;
	Parms.HUD_Widget = HUD_Widget;
	Parms.ReticleProgressBar = ReticleProgressBar;
	Parms.ColorProgressBarFill = ColorProgressBarFill;
	Parms.ReticleElementType = ReticleElementType;
	Parms.ForceColorReset = ForceColorReset;
	Parms.GamepadNotRequired = GamepadNotRequired;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}


// Function CharacterHUD_Library.CharacterHUD_Library_C.GetReticleColorAndOpacity
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ForceColorReset                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                      HUD_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// E_ReticleElementTypes                   ReticleElementType                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UCharacterHUD_Library_C::GetReticleColorAndOpacity(bool ForceColorReset, class UUserWidget* HUD_Widget, E_ReticleElementTypes ReticleElementType, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CharacterHUD_Library_C", "GetReticleColorAndOpacity");

	Params::CharacterHUD_Library_C_GetReticleColorAndOpacity Parms{};

	Parms.ForceColorReset = ForceColorReset;
	Parms.HUD_Widget = HUD_Widget;
	Parms.ReticleElementType = ReticleElementType;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function CharacterHUD_Library.CharacterHUD_Library_C.MakeProgressBarReticleWidgetStyle
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UProgressBar*                     ProgressBar                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     SpecifiedColor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ColorProgressBarFill                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProgressBarStyle                ProgressBarStyle                                       (Parm, OutParm)

void UCharacterHUD_Library_C::MakeProgressBarReticleWidgetStyle(class UProgressBar* ProgressBar, const struct FLinearColor& SpecifiedColor, bool ColorProgressBarFill, class UObject* __WorldContext, struct FProgressBarStyle* ProgressBarStyle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CharacterHUD_Library_C", "MakeProgressBarReticleWidgetStyle");

	Params::CharacterHUD_Library_C_MakeProgressBarReticleWidgetStyle Parms{};

	Parms.ProgressBar = ProgressBar;
	Parms.SpecifiedColor = std::move(SpecifiedColor);
	Parms.ColorProgressBarFill = ColorProgressBarFill;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (ProgressBarStyle != nullptr)
		*ProgressBarStyle = std::move(Parms.ProgressBarStyle);
}


// Function CharacterHUD_Library.CharacterHUD_Library_C.BindCharacterAbilityEvents
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      HUD_Widget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TDelegate<void()>                       ReloadStarted                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// TDelegate<void(bool bWasCancelled)>     ReloadFinished                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// TDelegate<void()>                       WeaponFired                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// TDelegate<void(class AMarinerProjectile* ProjectileSpawned)>ProjectileSpawned                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// TDelegate<void(class AActor* CurrentReticleTarget)>ReticleTargetChanged                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    DidBindToAbilities                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacterHUD_Library_C::BindCharacterAbilityEvents(class UUserWidget* HUD_Widget, const TDelegate<void()>& ReloadStarted, const TDelegate<void(bool bWasCancelled)>& ReloadFinished, const TDelegate<void()>& WeaponFired, const TDelegate<void(class AMarinerProjectile* ProjectileSpawned)>& ProjectileSpawned, const TDelegate<void(class AActor* CurrentReticleTarget)>& ReticleTargetChanged, class UObject* __WorldContext, bool* DidBindToAbilities)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("CharacterHUD_Library_C", "BindCharacterAbilityEvents");

	Params::CharacterHUD_Library_C_BindCharacterAbilityEvents Parms{};

	Parms.HUD_Widget = HUD_Widget;
	Parms.ReloadStarted = ReloadStarted;
	Parms.ReloadFinished = ReloadFinished;
	Parms.WeaponFired = WeaponFired;
	Parms.ProjectileSpawned = ProjectileSpawned;
	Parms.ReticleTargetChanged = ReticleTargetChanged;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (DidBindToAbilities != nullptr)
		*DidBindToAbilities = Parms.DidBindToAbilities;
}

}


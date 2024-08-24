#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsVideoMenu

#include "Basic.hpp"

#include "SettingsVideoMenu_classes.hpp"
#include "SettingsVideoMenu_parameters.hpp"


namespace SDK
{

// Function SettingsVideoMenu.SettingsVideoMenu_C.ExecuteUbergraph_SettingsVideoMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::ExecuteUbergraph_SettingsVideoMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "ExecuteUbergraph_SettingsVideoMenu");

	Params::SettingsVideoMenu_C_ExecuteUbergraph_SettingsVideoMenu Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__VSyncSettingNew_K2Node_ComponentBoundEvent_8_OnCheckBoxSettingChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingCheckBox*          CheckBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bIsChecked                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USettingsVideoMenu_C::BndEvt__VSyncSettingNew_K2Node_ComponentBoundEvent_8_OnCheckBoxSettingChanged__DelegateSignature(class UMarinerSettingCheckBox* CheckBox, bool bIsChecked)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__VSyncSettingNew_K2Node_ComponentBoundEvent_8_OnCheckBoxSettingChanged__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__VSyncSettingNew_K2Node_ComponentBoundEvent_8_OnCheckBoxSettingChanged__DelegateSignature Parms{};

	Parms.CheckBox = CheckBox;
	Parms.bIsChecked = bIsChecked;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__VSyncSettingNew_K2Node_ComponentBoundEvent_7_OnCheckBoxSettingInit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingCheckBox*          CheckBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__VSyncSettingNew_K2Node_ComponentBoundEvent_7_OnCheckBoxSettingInit__DelegateSignature(class UMarinerSettingCheckBox* CheckBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__VSyncSettingNew_K2Node_ComponentBoundEvent_7_OnCheckBoxSettingInit__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__VSyncSettingNew_K2Node_ComponentBoundEvent_7_OnCheckBoxSettingInit__DelegateSignature Parms{};

	Parms.CheckBox = CheckBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BP_OnEntered
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bFromSubMenu                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USettingsVideoMenu_C::BP_OnEntered(bool bFromSubMenu)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BP_OnEntered");

	Params::SettingsVideoMenu_C_BP_OnEntered Parms{};

	Parms.bFromSubMenu = bFromSubMenu;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__ResolutionSetting_K2Node_ComponentBoundEvent_0_OnSelectionIndexChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectedIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__ResolutionSetting_K2Node_ComponentBoundEvent_0_OnSelectionIndexChangedEvent__DelegateSignature(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__ResolutionSetting_K2Node_ComponentBoundEvent_0_OnSelectionIndexChangedEvent__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__ResolutionSetting_K2Node_ComponentBoundEvent_0_OnSelectionIndexChangedEvent__DelegateSignature Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.DisplayMetricChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIntPoint                        NewSize                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::DisplayMetricChanged(const struct FIntPoint& NewSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "DisplayMetricChanged");

	Params::SettingsVideoMenu_C_DisplayMetricChanged Parms{};

	Parms.NewSize = std::move(NewSize);

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USettingsVideoMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void USettingsVideoMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.OnFullScreenToggled
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bFullScreen                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USettingsVideoMenu_C::OnFullScreenToggled(bool bFullScreen)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "OnFullScreenToggled");

	Params::SettingsVideoMenu_C_OnFullScreenToggled Parms{};

	Parms.bFullScreen = bFullScreen;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__FieldOfView_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// float                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__FieldOfView_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__FieldOfView_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__FieldOfView_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__FieldOfView_K2Node_ComponentBoundEvent_4_OnSliderSettingInit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingSlider*            Slider                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__FieldOfView_K2Node_ComponentBoundEvent_4_OnSliderSettingInit__DelegateSignature(class UMarinerSettingSlider* Slider)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__FieldOfView_K2Node_ComponentBoundEvent_4_OnSliderSettingInit__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__FieldOfView_K2Node_ComponentBoundEvent_4_OnSliderSettingInit__DelegateSignature Parms{};

	Parms.Slider = Slider;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__SSRQuality_K2Node_ComponentBoundEvent_509_OnSelectionIndexChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectedIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__SSRQuality_K2Node_ComponentBoundEvent_509_OnSelectionIndexChangedEvent__DelegateSignature(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__SSRQuality_K2Node_ComponentBoundEvent_509_OnSelectionIndexChangedEvent__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__SSRQuality_K2Node_ComponentBoundEvent_509_OnSelectionIndexChangedEvent__DelegateSignature Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__WindowModeSetting_K2Node_ComponentBoundEvent_0_OnSelectionIndexChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectedIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__WindowModeSetting_K2Node_ComponentBoundEvent_0_OnSelectionIndexChangedEvent__DelegateSignature(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__WindowModeSetting_K2Node_ComponentBoundEvent_0_OnSelectionIndexChangedEvent__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__WindowModeSetting_K2Node_ComponentBoundEvent_0_OnSelectionIndexChangedEvent__DelegateSignature Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__SSRQuality_K2Node_ComponentBoundEvent_463_OnComboBoxSettingInit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingComboBox*          ComboBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__SSRQuality_K2Node_ComponentBoundEvent_463_OnComboBoxSettingInit__DelegateSignature(class UMarinerSettingComboBox* ComboBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__SSRQuality_K2Node_ComponentBoundEvent_463_OnComboBoxSettingInit__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__SSRQuality_K2Node_ComponentBoundEvent_463_OnComboBoxSettingInit__DelegateSignature Parms{};

	Parms.ComboBox = ComboBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_419_OnSelectionIndexChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectedIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_419_OnSelectionIndexChangedEvent__DelegateSignature(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_419_OnSelectionIndexChangedEvent__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_419_OnSelectionIndexChangedEvent__DelegateSignature Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_358_OnComboBoxSettingInit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingComboBox*          ComboBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_358_OnComboBoxSettingInit__DelegateSignature(class UMarinerSettingComboBox* ComboBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_358_OnComboBoxSettingInit__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__ShadowQuality_K2Node_ComponentBoundEvent_358_OnComboBoxSettingInit__DelegateSignature Parms{};

	Parms.ComboBox = ComboBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__TextureQuality_K2Node_ComponentBoundEvent_340_OnSelectionIndexChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectedIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__TextureQuality_K2Node_ComponentBoundEvent_340_OnSelectionIndexChangedEvent__DelegateSignature(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__TextureQuality_K2Node_ComponentBoundEvent_340_OnSelectionIndexChangedEvent__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__TextureQuality_K2Node_ComponentBoundEvent_340_OnSelectionIndexChangedEvent__DelegateSignature Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__TextureQuality_K2Node_ComponentBoundEvent_284_OnComboBoxSettingInit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingComboBox*          ComboBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__TextureQuality_K2Node_ComponentBoundEvent_284_OnComboBoxSettingInit__DelegateSignature(class UMarinerSettingComboBox* ComboBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__TextureQuality_K2Node_ComponentBoundEvent_284_OnComboBoxSettingInit__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__TextureQuality_K2Node_ComponentBoundEvent_284_OnComboBoxSettingInit__DelegateSignature Parms{};

	Parms.ComboBox = ComboBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__GraphicsQuality_K2Node_ComponentBoundEvent_6_OnSelectionIndexChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectedIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__GraphicsQuality_K2Node_ComponentBoundEvent_6_OnSelectionIndexChangedEvent__DelegateSignature(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__GraphicsQuality_K2Node_ComponentBoundEvent_6_OnSelectionIndexChangedEvent__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__GraphicsQuality_K2Node_ComponentBoundEvent_6_OnSelectionIndexChangedEvent__DelegateSignature Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__FrameRate_K2Node_ComponentBoundEvent_28_OnSelectionIndexChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectedIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__FrameRate_K2Node_ComponentBoundEvent_28_OnSelectionIndexChangedEvent__DelegateSignature(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__FrameRate_K2Node_ComponentBoundEvent_28_OnSelectionIndexChangedEvent__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__FrameRate_K2Node_ComponentBoundEvent_28_OnSelectionIndexChangedEvent__DelegateSignature Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__ComboBoxSetting_C_0_K2Node_ComponentBoundEvent_9_OnSelectionIndexChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectedIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__ComboBoxSetting_C_0_K2Node_ComponentBoundEvent_9_OnSelectionIndexChangedEvent__DelegateSignature(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__ComboBoxSetting_C_0_K2Node_ComponentBoundEvent_9_OnSelectionIndexChangedEvent__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__ComboBoxSetting_C_0_K2Node_ComponentBoundEvent_9_OnSelectionIndexChangedEvent__DelegateSignature Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_12_OnSelectionIndexChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectedIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__PostProcessing_K2Node_ComponentBoundEvent_12_OnSelectionIndexChangedEvent__DelegateSignature(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__PostProcessing_K2Node_ComponentBoundEvent_12_OnSelectionIndexChangedEvent__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__PostProcessing_K2Node_ComponentBoundEvent_12_OnSelectionIndexChangedEvent__DelegateSignature Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_14_OnSelectionIndexChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                                   SelectedIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_14_OnSelectionIndexChangedEvent__DelegateSignature(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_14_OnSelectionIndexChangedEvent__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_14_OnSelectionIndexChangedEvent__DelegateSignature Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_84_OnComboBoxSettingInit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingComboBox*          ComboBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_84_OnComboBoxSettingInit__DelegateSignature(class UMarinerSettingComboBox* ComboBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_84_OnComboBoxSettingInit__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__AntiAliasing_K2Node_ComponentBoundEvent_84_OnComboBoxSettingInit__DelegateSignature Parms{};

	Parms.ComboBox = ComboBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__PostProcessing_K2Node_ComponentBoundEvent_69_OnComboBoxSettingInit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingComboBox*          ComboBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__PostProcessing_K2Node_ComponentBoundEvent_69_OnComboBoxSettingInit__DelegateSignature(class UMarinerSettingComboBox* ComboBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__PostProcessing_K2Node_ComponentBoundEvent_69_OnComboBoxSettingInit__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__PostProcessing_K2Node_ComponentBoundEvent_69_OnComboBoxSettingInit__DelegateSignature Parms{};

	Parms.ComboBox = ComboBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__ScreenQuality_K2Node_ComponentBoundEvent_55_OnComboBoxSettingInit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingComboBox*          ComboBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__ScreenQuality_K2Node_ComponentBoundEvent_55_OnComboBoxSettingInit__DelegateSignature(class UMarinerSettingComboBox* ComboBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__ScreenQuality_K2Node_ComponentBoundEvent_55_OnComboBoxSettingInit__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__ScreenQuality_K2Node_ComponentBoundEvent_55_OnComboBoxSettingInit__DelegateSignature Parms{};

	Parms.ComboBox = ComboBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__FrameRate_K2Node_ComponentBoundEvent_30_OnComboBoxSettingInit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingComboBox*          ComboBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__FrameRate_K2Node_ComponentBoundEvent_30_OnComboBoxSettingInit__DelegateSignature(class UMarinerSettingComboBox* ComboBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__FrameRate_K2Node_ComponentBoundEvent_30_OnComboBoxSettingInit__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__FrameRate_K2Node_ComponentBoundEvent_30_OnComboBoxSettingInit__DelegateSignature Parms{};

	Parms.ComboBox = ComboBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__GraphicsQuality_K2Node_ComponentBoundEvent_18_OnComboBoxSettingInit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingComboBox*          ComboBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__GraphicsQuality_K2Node_ComponentBoundEvent_18_OnComboBoxSettingInit__DelegateSignature(class UMarinerSettingComboBox* ComboBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__GraphicsQuality_K2Node_ComponentBoundEvent_18_OnComboBoxSettingInit__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__GraphicsQuality_K2Node_ComponentBoundEvent_18_OnComboBoxSettingInit__DelegateSignature Parms{};

	Parms.ComboBox = ComboBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__WindowMode_K2Node_ComponentBoundEvent_3_OnComboBoxSettingInit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingComboBox*          ComboBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__WindowMode_K2Node_ComponentBoundEvent_3_OnComboBoxSettingInit__DelegateSignature(class UMarinerSettingComboBox* ComboBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__WindowMode_K2Node_ComponentBoundEvent_3_OnComboBoxSettingInit__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__WindowMode_K2Node_ComponentBoundEvent_3_OnComboBoxSettingInit__DelegateSignature Parms{};

	Parms.ComboBox = ComboBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BndEvt__Resolution_K2Node_ComponentBoundEvent_0_OnComboBoxSettingInit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UMarinerSettingComboBox*          ComboBox                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::BndEvt__Resolution_K2Node_ComponentBoundEvent_0_OnComboBoxSettingInit__DelegateSignature(class UMarinerSettingComboBox* ComboBox)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BndEvt__Resolution_K2Node_ComponentBoundEvent_0_OnComboBoxSettingInit__DelegateSignature");

	Params::SettingsVideoMenu_C_BndEvt__Resolution_K2Node_ComponentBoundEvent_0_OnComboBoxSettingInit__DelegateSignature Parms{};

	Parms.ComboBox = ComboBox;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.ApplyResolution
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Width                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Height                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsVideoMenu_C::ApplyResolution(int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "ApplyResolution");

	Params::SettingsVideoMenu_C_ApplyResolution Parms{};

	Parms.Width = Width;
	Parms.Height = Height;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.HandleInput
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EMarinerInputActions                    InInput                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool USettingsVideoMenu_C::HandleInput(EMarinerInputActions InInput)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "HandleInput");

	Params::SettingsVideoMenu_C_HandleInput Parms{};

	Parms.InInput = InInput;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.RestoreDefaultsConfirm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             KeyPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void USettingsVideoMenu_C::RestoreDefaultsConfirm(struct FKey& KeyPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "RestoreDefaultsConfirm");

	Params::SettingsVideoMenu_C_RestoreDefaultsConfirm Parms{};

	Parms.KeyPressed = std::move(KeyPressed);

	UObject::ProcessEvent(Func, &Parms);

	KeyPressed = std::move(Parms.KeyPressed);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.DummyCallback
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             KeyPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void USettingsVideoMenu_C::DummyCallback(struct FKey& KeyPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "DummyCallback");

	Params::SettingsVideoMenu_C_DummyCallback Parms{};

	Parms.KeyPressed = std::move(KeyPressed);

	UObject::ProcessEvent(Func, &Parms);

	KeyPressed = std::move(Parms.KeyPressed);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.ApplyResolutionCancel
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FKey                             KeyPressed                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void USettingsVideoMenu_C::ApplyResolutionCancel(struct FKey& KeyPressed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "ApplyResolutionCancel");

	Params::SettingsVideoMenu_C_ApplyResolutionCancel Parms{};

	Parms.KeyPressed = std::move(KeyPressed);

	UObject::ProcessEvent(Func, &Parms);

	KeyPressed = std::move(Parms.KeyPressed);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.UpdateResolutionEnabled
// (Public, BlueprintCallable, BlueprintEvent)

void USettingsVideoMenu_C::UpdateResolutionEnabled()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "UpdateResolutionEnabled");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SettingsVideoMenu.SettingsVideoMenu_C.BuildResolutionOptions
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void USettingsVideoMenu_C::BuildResolutionOptions()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SettingsVideoMenu_C", "BuildResolutionOptions");

	UObject::ProcessEvent(Func, nullptr);
}

}


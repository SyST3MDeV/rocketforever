#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SettingsGameMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_structs.hpp"
#include "Mariner_classes.hpp"
#include "UMG_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SettingsGameMenu.SettingsGameMenu_C
// 0x0080 (0x0578 - 0x04F8)
class USettingsGameMenu_C final : public UMarinerSettingMenuBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04F8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             BuildNumber;                                       // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       CMSVersion;                                        // 0x0508(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerButton*                         CopyIDBtn;                                         // 0x0510(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButtonSetting_C*                       Credits;                                           // 0x0518(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxSetting_C*                     CrossplayConsole;                                  // 0x0520(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxSetting_C*                     CrossplayPC;                                       // 0x0528(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       EADisplayName;                                     // 0x0530(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USliderSetting_C*                       FieldOfView;                                       // 0x0538(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxSetting_C*                     Language;                                          // 0x0540(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                       MangoId;                                           // 0x0548(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URegionBoxSetting_C*                    Region;                                            // 0x0550(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RegionNotifaction;                                 // 0x0558(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerVerticalBox*                    SettingsPanel;                                     // 0x0560(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBoxSetting_C*                     ShowInGameIcons;                                   // 0x0568(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBoxSetting_C*                     ShowNetworkInformation;                            // 0x0570(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SettingsGameMenu(int32 EntryPoint);
	void BndEvt__Region_K2Node_ComponentBoundEvent_4_OnSettingComboBoxOpened__DelegateSignature(const bool bOpened);
	void BndEvt__CrossplayConsole_K2Node_ComponentBoundEvent_18_SelectionIndexChangedEvent__DelegateSignature(int32 SelectedIndex);
	void BndEvt__CrossplayConsole_K2Node_ComponentBoundEvent_17_OnComboBoxSettingInit__DelegateSignature(class UMarinerSettingComboBox* ComboBox);
	void BP_OnEntered(bool bFromSubMenu);
	void BndEvt__CrossplayKBM_K2Node_ComponentBoundEvent_11_SelectionIndexChangedEvent__DelegateSignature(int32 SelectedIndex);
	void BndEvt__CrossplayKBM_K2Node_ComponentBoundEvent_9_OnComboBoxSettingInit__DelegateSignature(class UMarinerSettingComboBox* ComboBox);
	void BndEvt__LanguageSetting_K2Node_ComponentBoundEvent_67_OnSelectionIndexChangedEvent__DelegateSignature(int32 SelectedIndex);
	void BndEvt__FieldOfView_K2Node_ComponentBoundEvent_8_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__FieldOfView_K2Node_ComponentBoundEvent_7_OnSliderSettingInit__DelegateSignature(class UMarinerSettingSlider* Slider);
	void BndEvt__Language_K2Node_ComponentBoundEvent_10_OnComboBoxSettingInit__DelegateSignature(class UMarinerSettingComboBox* ComboBox);
	void BndEvt__ShowInGameIcons_K2Node_ComponentBoundEvent_13_OnCheckBoxSettingInit__DelegateSignature(class UMarinerSettingCheckBox* CheckBox);
	void BndEvt__CheckBoxSetting_K2Node_ComponentBoundEvent_5_OnCheckBoxComponentStateChanged__DelegateSignature(class UMarinerSettingCheckBox* CheckBox, bool bIsChecked);
	void MatchmakingStopped();
	void MatchmakingStarted();
	void BndEvt__PartyIsPrivate_K2Node_ComponentBoundEvent_26_OnCheckBoxSettingInit__DelegateSignature(class UMarinerSettingCheckBox* CheckBox);
	void OnCanUserCrossPlayUpdated();
	void HandleInputDeviceChanged(EPlayerInputType InputType);
	void BndEvt__MarinerButton_179_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__PartyIsPrivate_K2Node_ComponentBoundEvent_34_OnCheckBoxSettingChanged__DelegateSignature(class UMarinerSettingCheckBox* CheckBox, bool bIsChecked);
	void BndEvt__ShowNetworkInformation_K2Node_ComponentBoundEvent_2_OnCheckBoxSettingInit__DelegateSignature(class UMarinerSettingCheckBox* CheckBox);
	void BndEvt__ShowNetworkInformation_K2Node_ComponentBoundEvent_3_OnCheckBoxSettingChanged__DelegateSignature(class UMarinerSettingCheckBox* CheckBox, bool bIsChecked);
	void BndEvt__ButtonSetting_K2Node_ComponentBoundEvent_0_OnButtonSettingSelected__DelegateSignature(class UMarinerSettingBase* Instance);
	void PlayClickSound();
	bool HandleInput(EMarinerInputActions InInput);
	void RestoreDefaultsConfirm(struct FKey& KeyPressed);
	void SetLanguage(int32 Selection);
	void DummyCallback(struct FKey& KeyPressed);
	void InitLanguages();
	void UpdateCopyBtnVisibility();
	void HandleCrossPlatformOption();
	void GetMesssageBoxManager(class UMarinerMessageBoxManager** MessageBoxManager);
	void CrossplayStateToComboIndex(EMarinerCrossplayState CrossplayState, int32* Param_Index);
	void ComboIndexToCrossplayState(int32 Param_Index, EMarinerCrossplayState* CrossplayState);
	void HandleRegionOption();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SettingsGameMenu_C">();
	}
	static class USettingsGameMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USettingsGameMenu_C>();
	}
};
static_assert(alignof(USettingsGameMenu_C) == 0x000008, "Wrong alignment on USettingsGameMenu_C");
static_assert(sizeof(USettingsGameMenu_C) == 0x000578, "Wrong size on USettingsGameMenu_C");
static_assert(offsetof(USettingsGameMenu_C, UberGraphFrame) == 0x0004F8, "Member 'USettingsGameMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, BuildNumber) == 0x000500, "Member 'USettingsGameMenu_C::BuildNumber' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, CMSVersion) == 0x000508, "Member 'USettingsGameMenu_C::CMSVersion' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, CopyIDBtn) == 0x000510, "Member 'USettingsGameMenu_C::CopyIDBtn' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, Credits) == 0x000518, "Member 'USettingsGameMenu_C::Credits' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, CrossplayConsole) == 0x000520, "Member 'USettingsGameMenu_C::CrossplayConsole' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, CrossplayPC) == 0x000528, "Member 'USettingsGameMenu_C::CrossplayPC' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, EADisplayName) == 0x000530, "Member 'USettingsGameMenu_C::EADisplayName' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, FieldOfView) == 0x000538, "Member 'USettingsGameMenu_C::FieldOfView' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, Language) == 0x000540, "Member 'USettingsGameMenu_C::Language' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, MangoId) == 0x000548, "Member 'USettingsGameMenu_C::MangoId' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, Region) == 0x000550, "Member 'USettingsGameMenu_C::Region' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, RegionNotifaction) == 0x000558, "Member 'USettingsGameMenu_C::RegionNotifaction' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, SettingsPanel) == 0x000560, "Member 'USettingsGameMenu_C::SettingsPanel' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, ShowInGameIcons) == 0x000568, "Member 'USettingsGameMenu_C::ShowInGameIcons' has a wrong offset!");
static_assert(offsetof(USettingsGameMenu_C, ShowNetworkInformation) == 0x000570, "Member 'USettingsGameMenu_C::ShowNetworkInformation' has a wrong offset!");

}


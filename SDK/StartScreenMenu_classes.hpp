#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StartScreenMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_structs.hpp"
#include "Mariner_classes.hpp"
#include "UMG_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StartScreenMenu.StartScreenMenu_C
// 0x0130 (0x06C8 - 0x0598)
class UStartScreenMenu_C final : public UMarinerStartScreenMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0598(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       IntroAnim;                                         // 0x05A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       LoopAnim;                                          // 0x05A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ArenaText;                                         // 0x05B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ArenaTextBlend01;                                  // 0x05B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Backgroundblue;                                    // 0x05C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BackgroundExplosion;                               // 0x05C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BottomGradient;                                    // 0x05D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BottomRocket;                                      // 0x05D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BottomRocketTrail;                                 // 0x05E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 EALogo;                                            // 0x05E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flash01;                                           // 0x05F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flash02;                                           // 0x05F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flash03;                                           // 0x0600(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flash04;                                           // 0x0608(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flash05;                                           // 0x0610(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Flash06;                                           // 0x0618(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FSGLogo;                                           // 0x0620(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Fuelparticles;                                     // 0x0628(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_24;                                          // 0x0630(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InitialBottomRocket;                               // 0x0638(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InitialRocket;                                     // 0x0640(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 InitialTopRocket;                                  // 0x0648(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULoadingSpinner_C*                      LoadingSpinner;                                    // 0x0650(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LocalizedTitle;                                    // 0x0658(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LogoImage;                                         // 0x0660(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuitGamePrompt_C*                      QuitPrompt;                                        // 0x0668(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RocketText;                                        // 0x0670(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 RocketTextBlend01;                                 // 0x0678(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Shockwave;                                         // 0x0680(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 StartCharacters;                                   // 0x0688(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopRocket;                                         // 0x0690(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopRocketTrail;                                    // 0x0698(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Transitionblue;                                    // 0x06A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TransitionGrey;                                    // 0x06A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TransitionWhite;                                   // 0x06B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WhiteOut;                                          // 0x06B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 WinningTeamGlow;                                   // 0x06C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StartScreenMenu(int32 EntryPoint);
	void WidgetAnimationEvt_IntroAnim_K2Node_WidgetAnimationEvent_0();
	void LoadTotemData();
	void Construct();
	void BP_OnEntered(bool bFromSubMenu);
	void TotemDataLoaded_E6365B1243E89F9E28F03BBA77B71D34(const struct FLoadedTotemDataResponse& TotemData);
	void TotemDataLoadFailed_E6365B1243E89F9E28F03BBA77B71D34();
	bool HandleInput(EMarinerInputActions InInput);
	bool OnLoginComplete();
	void UpdateLocalizedTitle();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StartScreenMenu_C">();
	}
	static class UStartScreenMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStartScreenMenu_C>();
	}
};
static_assert(alignof(UStartScreenMenu_C) == 0x000008, "Wrong alignment on UStartScreenMenu_C");
static_assert(sizeof(UStartScreenMenu_C) == 0x0006C8, "Wrong size on UStartScreenMenu_C");
static_assert(offsetof(UStartScreenMenu_C, UberGraphFrame) == 0x000598, "Member 'UStartScreenMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, IntroAnim) == 0x0005A0, "Member 'UStartScreenMenu_C::IntroAnim' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, LoopAnim) == 0x0005A8, "Member 'UStartScreenMenu_C::LoopAnim' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, ArenaText) == 0x0005B0, "Member 'UStartScreenMenu_C::ArenaText' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, ArenaTextBlend01) == 0x0005B8, "Member 'UStartScreenMenu_C::ArenaTextBlend01' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, Backgroundblue) == 0x0005C0, "Member 'UStartScreenMenu_C::Backgroundblue' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, BackgroundExplosion) == 0x0005C8, "Member 'UStartScreenMenu_C::BackgroundExplosion' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, BottomGradient) == 0x0005D0, "Member 'UStartScreenMenu_C::BottomGradient' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, BottomRocket) == 0x0005D8, "Member 'UStartScreenMenu_C::BottomRocket' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, BottomRocketTrail) == 0x0005E0, "Member 'UStartScreenMenu_C::BottomRocketTrail' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, EALogo) == 0x0005E8, "Member 'UStartScreenMenu_C::EALogo' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, Flash01) == 0x0005F0, "Member 'UStartScreenMenu_C::Flash01' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, Flash02) == 0x0005F8, "Member 'UStartScreenMenu_C::Flash02' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, Flash03) == 0x000600, "Member 'UStartScreenMenu_C::Flash03' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, Flash04) == 0x000608, "Member 'UStartScreenMenu_C::Flash04' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, Flash05) == 0x000610, "Member 'UStartScreenMenu_C::Flash05' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, Flash06) == 0x000618, "Member 'UStartScreenMenu_C::Flash06' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, FSGLogo) == 0x000620, "Member 'UStartScreenMenu_C::FSGLogo' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, Fuelparticles) == 0x000628, "Member 'UStartScreenMenu_C::Fuelparticles' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, Image_24) == 0x000630, "Member 'UStartScreenMenu_C::Image_24' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, InitialBottomRocket) == 0x000638, "Member 'UStartScreenMenu_C::InitialBottomRocket' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, InitialRocket) == 0x000640, "Member 'UStartScreenMenu_C::InitialRocket' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, InitialTopRocket) == 0x000648, "Member 'UStartScreenMenu_C::InitialTopRocket' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, LoadingSpinner) == 0x000650, "Member 'UStartScreenMenu_C::LoadingSpinner' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, LocalizedTitle) == 0x000658, "Member 'UStartScreenMenu_C::LocalizedTitle' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, LogoImage) == 0x000660, "Member 'UStartScreenMenu_C::LogoImage' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, QuitPrompt) == 0x000668, "Member 'UStartScreenMenu_C::QuitPrompt' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, RocketText) == 0x000670, "Member 'UStartScreenMenu_C::RocketText' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, RocketTextBlend01) == 0x000678, "Member 'UStartScreenMenu_C::RocketTextBlend01' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, Shockwave) == 0x000680, "Member 'UStartScreenMenu_C::Shockwave' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, StartCharacters) == 0x000688, "Member 'UStartScreenMenu_C::StartCharacters' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, TopRocket) == 0x000690, "Member 'UStartScreenMenu_C::TopRocket' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, TopRocketTrail) == 0x000698, "Member 'UStartScreenMenu_C::TopRocketTrail' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, Transitionblue) == 0x0006A0, "Member 'UStartScreenMenu_C::Transitionblue' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, TransitionGrey) == 0x0006A8, "Member 'UStartScreenMenu_C::TransitionGrey' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, TransitionWhite) == 0x0006B0, "Member 'UStartScreenMenu_C::TransitionWhite' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, WhiteOut) == 0x0006B8, "Member 'UStartScreenMenu_C::WhiteOut' has a wrong offset!");
static_assert(offsetof(UStartScreenMenu_C, WinningTeamGlow) == 0x0006C0, "Member 'UStartScreenMenu_C::WinningTeamGlow' has a wrong offset!");

}


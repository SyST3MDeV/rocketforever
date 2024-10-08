#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CheckBoxMutePlayer

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CheckBoxMutePlayer.CheckBoxMutePlayer_C
// 0x0010 (0x0438 - 0x0428)
class UCheckBoxMutePlayer_C final : public UMarinerMutePlayerCheckBox
{
public:
	class UWidgetAnimation*                       HoveredAnim;                                       // 0x0428(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	struct FMarinerSettingCheckBoxAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CheckBoxMutePlayer_C">();
	}
	static class UCheckBoxMutePlayer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCheckBoxMutePlayer_C>();
	}
};
static_assert(alignof(UCheckBoxMutePlayer_C) == 0x000008, "Wrong alignment on UCheckBoxMutePlayer_C");
static_assert(sizeof(UCheckBoxMutePlayer_C) == 0x000438, "Wrong size on UCheckBoxMutePlayer_C");
static_assert(offsetof(UCheckBoxMutePlayer_C, HoveredAnim) == 0x000428, "Member 'UCheckBoxMutePlayer_C::HoveredAnim' has a wrong offset!");
static_assert(offsetof(UCheckBoxMutePlayer_C, Background) == 0x000430, "Member 'UCheckBoxMutePlayer_C::Background' has a wrong offset!");

}


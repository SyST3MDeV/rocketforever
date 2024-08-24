#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmoteCategoryButton

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EmoteCategoryButton.EmoteCategoryButton_C
// 0x0030 (0x2FE8 - 0x2FB8)
class UEmoteCategoryButton_C final : public UMarinerEmoteCategoryButton
{
public:
	class UWidgetAnimation*                       HoverAnim;                                         // 0x2FB8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Background;                                        // 0x2FC0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Border;                                            // 0x2FC8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerButton*                         HitArea;                                           // 0x2FD0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon;                                              // 0x2FD8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUnviewedItemWidget_C*                  UnviewedWidget;                                    // 0x2FE0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	struct FMarinerLayeredButtonAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmoteCategoryButton_C">();
	}
	static class UEmoteCategoryButton_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmoteCategoryButton_C>();
	}
};
static_assert(alignof(UEmoteCategoryButton_C) == 0x000008, "Wrong alignment on UEmoteCategoryButton_C");
static_assert(sizeof(UEmoteCategoryButton_C) == 0x002FE8, "Wrong size on UEmoteCategoryButton_C");
static_assert(offsetof(UEmoteCategoryButton_C, HoverAnim) == 0x002FB8, "Member 'UEmoteCategoryButton_C::HoverAnim' has a wrong offset!");
static_assert(offsetof(UEmoteCategoryButton_C, Background) == 0x002FC0, "Member 'UEmoteCategoryButton_C::Background' has a wrong offset!");
static_assert(offsetof(UEmoteCategoryButton_C, Border) == 0x002FC8, "Member 'UEmoteCategoryButton_C::Border' has a wrong offset!");
static_assert(offsetof(UEmoteCategoryButton_C, HitArea) == 0x002FD0, "Member 'UEmoteCategoryButton_C::HitArea' has a wrong offset!");
static_assert(offsetof(UEmoteCategoryButton_C, Icon) == 0x002FD8, "Member 'UEmoteCategoryButton_C::Icon' has a wrong offset!");
static_assert(offsetof(UEmoteCategoryButton_C, UnviewedWidget) == 0x002FE0, "Member 'UEmoteCategoryButton_C::UnviewedWidget' has a wrong offset!");

}


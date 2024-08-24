#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TotemCustomization_Pattern

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TotemCustomizationMenu_Base_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TotemCustomization_Pattern.TotemCustomization_Pattern_C
// 0x0008 (0x1328 - 0x1320)
class UTotemCustomization_Pattern_C final : public UTotemCustomizationMenu_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_TotemCustomization_Pattern_C;       // 0x1320(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_TotemCustomization_Pattern(int32 EntryPoint);
	void OnProfileItemEquipped(class UMarinerCMSItemDataAsset* Item);
	void VisualizeSelectedButton(class UMarinerItemLoadResponseButton* ButtonInstance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TotemCustomization_Pattern_C">();
	}
	static class UTotemCustomization_Pattern_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTotemCustomization_Pattern_C>();
	}
};
static_assert(alignof(UTotemCustomization_Pattern_C) == 0x000008, "Wrong alignment on UTotemCustomization_Pattern_C");
static_assert(sizeof(UTotemCustomization_Pattern_C) == 0x001328, "Wrong size on UTotemCustomization_Pattern_C");
static_assert(offsetof(UTotemCustomization_Pattern_C, UberGraphFrame_TotemCustomization_Pattern_C) == 0x001320, "Member 'UTotemCustomization_Pattern_C::UberGraphFrame_TotemCustomization_Pattern_C' has a wrong offset!");

}


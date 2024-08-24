#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TooltipText

#include "Basic.hpp"

#include "Mariner_classes.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TooltipText.TooltipText_C
// 0x0020 (0x0438 - 0x0418)
class UTooltipText_C final : public UMarinerAnimatedWidget
{
public:
	class UTextBlock*                             Description;                                       // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   PendingDescription;                                // 0x0420(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	bool Populate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TooltipText_C">();
	}
	static class UTooltipText_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTooltipText_C>();
	}
};
static_assert(alignof(UTooltipText_C) == 0x000008, "Wrong alignment on UTooltipText_C");
static_assert(sizeof(UTooltipText_C) == 0x000438, "Wrong size on UTooltipText_C");
static_assert(offsetof(UTooltipText_C, Description) == 0x000418, "Member 'UTooltipText_C::Description' has a wrong offset!");
static_assert(offsetof(UTooltipText_C, PendingDescription) == 0x000420, "Member 'UTooltipText_C::PendingDescription' has a wrong offset!");

}


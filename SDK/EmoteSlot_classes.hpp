#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EmoteSlot

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EmoteSlot.EmoteSlot_C
// 0x0038 (0x3038 - 0x3000)
class UEmoteSlot_C final : public UMarinerEmoteMenuSlot
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x3000(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Background;                                        // 0x3008(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Border;                                            // 0x3010(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerButton*                         HitArea;                                           // 0x3018(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SlotIcon;                                          // 0x3020(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SlotText;                                          // 0x3028(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	EMarinerInputActions                          InputAction;                                       // 0x3030(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_EmoteSlot(int32 EntryPoint);
	void HandleSelected(class UMarinerLayeredButton* Instance);
	void Construct();
	void PreConstruct(bool IsDesignTime);

	struct FMarinerLayeredButtonAssets GetAssets() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EmoteSlot_C">();
	}
	static class UEmoteSlot_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEmoteSlot_C>();
	}
};
static_assert(alignof(UEmoteSlot_C) == 0x000008, "Wrong alignment on UEmoteSlot_C");
static_assert(sizeof(UEmoteSlot_C) == 0x003038, "Wrong size on UEmoteSlot_C");
static_assert(offsetof(UEmoteSlot_C, UberGraphFrame) == 0x003000, "Member 'UEmoteSlot_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEmoteSlot_C, Background) == 0x003008, "Member 'UEmoteSlot_C::Background' has a wrong offset!");
static_assert(offsetof(UEmoteSlot_C, Border) == 0x003010, "Member 'UEmoteSlot_C::Border' has a wrong offset!");
static_assert(offsetof(UEmoteSlot_C, HitArea) == 0x003018, "Member 'UEmoteSlot_C::HitArea' has a wrong offset!");
static_assert(offsetof(UEmoteSlot_C, SlotIcon) == 0x003020, "Member 'UEmoteSlot_C::SlotIcon' has a wrong offset!");
static_assert(offsetof(UEmoteSlot_C, SlotText) == 0x003028, "Member 'UEmoteSlot_C::SlotText' has a wrong offset!");
static_assert(offsetof(UEmoteSlot_C, InputAction) == 0x003030, "Member 'UEmoteSlot_C::InputAction' has a wrong offset!");

}


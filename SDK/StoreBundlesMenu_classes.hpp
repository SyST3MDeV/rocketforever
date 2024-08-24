#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreBundlesMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass StoreBundlesMenu.StoreBundlesMenu_C
// 0x0020 (0x0500 - 0x04E0)
class UStoreBundlesMenu_C final : public UMarinerMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStoreBundleWidget_C*                   StoreBundleWidget;                                 // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMarinerVerticalBox*                    VerticalBoxBundles;                                // 0x04F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreBundleButton_C*                   LastSelection;                                     // 0x04F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_StoreBundlesMenu(int32 EntryPoint);
	void BP_OnEntered(bool bFromSubMenu);
	void PopulateOffers();
	void OnItemSelected(class UMarinerLayeredButton* ButtonInstance);
	void UpdatePrompts();
	bool HandleInput(EMarinerInputActions InInput);
	void CanPurchaseNativeOffer(bool* CanPurchase);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreBundlesMenu_C">();
	}
	static class UStoreBundlesMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreBundlesMenu_C>();
	}
};
static_assert(alignof(UStoreBundlesMenu_C) == 0x000008, "Wrong alignment on UStoreBundlesMenu_C");
static_assert(sizeof(UStoreBundlesMenu_C) == 0x000500, "Wrong size on UStoreBundlesMenu_C");
static_assert(offsetof(UStoreBundlesMenu_C, UberGraphFrame) == 0x0004E0, "Member 'UStoreBundlesMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UStoreBundlesMenu_C, StoreBundleWidget) == 0x0004E8, "Member 'UStoreBundlesMenu_C::StoreBundleWidget' has a wrong offset!");
static_assert(offsetof(UStoreBundlesMenu_C, VerticalBoxBundles) == 0x0004F0, "Member 'UStoreBundlesMenu_C::VerticalBoxBundles' has a wrong offset!");
static_assert(offsetof(UStoreBundlesMenu_C, LastSelection) == 0x0004F8, "Member 'UStoreBundlesMenu_C::LastSelection' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: NativePurchaseMessageBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NativePurchaseMessageBox.NativePurchaseMessageBox_C
// 0x0058 (0x04B0 - 0x0458)
class UNativePurchaseMessageBox_C final : public UMarinerNativePurchaseMessageBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0458(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             Body;                                              // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Header;                                            // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Material;                                          // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OpacityBacker;                                     // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UStoreBundleWidget_C*                   StoreBundleWidget;                                 // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopBar;                                            // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_NativePurchaseMessageBox(int32 EntryPoint);
	void BP_Populate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NativePurchaseMessageBox_C">();
	}
	static class UNativePurchaseMessageBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNativePurchaseMessageBox_C>();
	}
};
static_assert(alignof(UNativePurchaseMessageBox_C) == 0x000008, "Wrong alignment on UNativePurchaseMessageBox_C");
static_assert(sizeof(UNativePurchaseMessageBox_C) == 0x0004B0, "Wrong size on UNativePurchaseMessageBox_C");
static_assert(offsetof(UNativePurchaseMessageBox_C, UberGraphFrame) == 0x000458, "Member 'UNativePurchaseMessageBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNativePurchaseMessageBox_C, Body) == 0x000460, "Member 'UNativePurchaseMessageBox_C::Body' has a wrong offset!");
static_assert(offsetof(UNativePurchaseMessageBox_C, Header) == 0x000468, "Member 'UNativePurchaseMessageBox_C::Header' has a wrong offset!");
static_assert(offsetof(UNativePurchaseMessageBox_C, Image_1) == 0x000470, "Member 'UNativePurchaseMessageBox_C::Image_1' has a wrong offset!");
static_assert(offsetof(UNativePurchaseMessageBox_C, Image_2) == 0x000478, "Member 'UNativePurchaseMessageBox_C::Image_2' has a wrong offset!");
static_assert(offsetof(UNativePurchaseMessageBox_C, Image_3) == 0x000480, "Member 'UNativePurchaseMessageBox_C::Image_3' has a wrong offset!");
static_assert(offsetof(UNativePurchaseMessageBox_C, Image_4) == 0x000488, "Member 'UNativePurchaseMessageBox_C::Image_4' has a wrong offset!");
static_assert(offsetof(UNativePurchaseMessageBox_C, Material) == 0x000490, "Member 'UNativePurchaseMessageBox_C::Material' has a wrong offset!");
static_assert(offsetof(UNativePurchaseMessageBox_C, OpacityBacker) == 0x000498, "Member 'UNativePurchaseMessageBox_C::OpacityBacker' has a wrong offset!");
static_assert(offsetof(UNativePurchaseMessageBox_C, StoreBundleWidget) == 0x0004A0, "Member 'UNativePurchaseMessageBox_C::StoreBundleWidget' has a wrong offset!");
static_assert(offsetof(UNativePurchaseMessageBox_C, TopBar) == 0x0004A8, "Member 'UNativePurchaseMessageBox_C::TopBar' has a wrong offset!");

}


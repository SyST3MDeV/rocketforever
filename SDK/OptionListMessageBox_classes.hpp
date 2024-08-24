#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OptionListMessageBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass OptionListMessageBox.OptionListMessageBox_C
// 0x0040 (0x04B0 - 0x0470)
class UOptionListMessageBox_C final : public UMarinerOptionListMessageBox
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0470(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Backer;                                            // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Material;                                          // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 OpacityBacker;                                     // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TopBar;                                            // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_OptionListMessageBox(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"OptionListMessageBox_C">();
	}
	static class UOptionListMessageBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOptionListMessageBox_C>();
	}
};
static_assert(alignof(UOptionListMessageBox_C) == 0x000008, "Wrong alignment on UOptionListMessageBox_C");
static_assert(sizeof(UOptionListMessageBox_C) == 0x0004B0, "Wrong size on UOptionListMessageBox_C");
static_assert(offsetof(UOptionListMessageBox_C, UberGraphFrame) == 0x000470, "Member 'UOptionListMessageBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UOptionListMessageBox_C, Backer) == 0x000478, "Member 'UOptionListMessageBox_C::Backer' has a wrong offset!");
static_assert(offsetof(UOptionListMessageBox_C, Image_3) == 0x000480, "Member 'UOptionListMessageBox_C::Image_3' has a wrong offset!");
static_assert(offsetof(UOptionListMessageBox_C, Image_4) == 0x000488, "Member 'UOptionListMessageBox_C::Image_4' has a wrong offset!");
static_assert(offsetof(UOptionListMessageBox_C, Image_5) == 0x000490, "Member 'UOptionListMessageBox_C::Image_5' has a wrong offset!");
static_assert(offsetof(UOptionListMessageBox_C, Material) == 0x000498, "Member 'UOptionListMessageBox_C::Material' has a wrong offset!");
static_assert(offsetof(UOptionListMessageBox_C, OpacityBacker) == 0x0004A0, "Member 'UOptionListMessageBox_C::OpacityBacker' has a wrong offset!");
static_assert(offsetof(UOptionListMessageBox_C, TopBar) == 0x0004A8, "Member 'UOptionListMessageBox_C::TopBar' has a wrong offset!");

}


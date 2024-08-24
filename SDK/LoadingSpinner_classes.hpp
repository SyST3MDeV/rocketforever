#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LoadingSpinner

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LoadingSpinner.LoadingSpinner_C
// 0x0010 (0x0240 - 0x0230)
class ULoadingSpinner_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 LoadingSpinner1;                                   // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LoadingSpinner(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LoadingSpinner_C">();
	}
	static class ULoadingSpinner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULoadingSpinner_C>();
	}
};
static_assert(alignof(ULoadingSpinner_C) == 0x000008, "Wrong alignment on ULoadingSpinner_C");
static_assert(sizeof(ULoadingSpinner_C) == 0x000240, "Wrong size on ULoadingSpinner_C");
static_assert(offsetof(ULoadingSpinner_C, UberGraphFrame) == 0x000230, "Member 'ULoadingSpinner_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULoadingSpinner_C, LoadingSpinner1) == 0x000238, "Member 'ULoadingSpinner_C::LoadingSpinner1' has a wrong offset!");

}


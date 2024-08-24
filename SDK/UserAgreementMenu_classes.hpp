#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UserAgreementMenu

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UserAgreementMenu.UserAgreementMenu_C
// 0x0010 (0x04F0 - 0x04E0)
class UUserAgreementMenu_C final : public UMarinerMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             UserAgreementText;                                 // 0x04E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UserAgreementMenu(int32 EntryPoint);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UserAgreementMenu_C">();
	}
	static class UUserAgreementMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUserAgreementMenu_C>();
	}
};
static_assert(alignof(UUserAgreementMenu_C) == 0x000008, "Wrong alignment on UUserAgreementMenu_C");
static_assert(sizeof(UUserAgreementMenu_C) == 0x0004F0, "Wrong size on UUserAgreementMenu_C");
static_assert(offsetof(UUserAgreementMenu_C, UberGraphFrame) == 0x0004E0, "Member 'UUserAgreementMenu_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUserAgreementMenu_C, UserAgreementText) == 0x0004E8, "Member 'UUserAgreementMenu_C::UserAgreementText' has a wrong offset!");

}


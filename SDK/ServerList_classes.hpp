#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ServerList

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_structs.hpp"
#include "Mariner_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ServerList.ServerList_C
// 0x0028 (0x0508 - 0x04E0)
class UServerList_C final : public UMarinerMenu
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x04E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ServerListBackOut;                                 // 0x04E8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ServerListOut;                                     // 0x04F0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       ServerListIn;                                      // 0x04F8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UServerBrowserWidget_C*                 ServerBrowser;                                     // 0x0500(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ServerList(int32 EntryPoint);
	void BP_OnEntered(bool bFromSubMenu);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_379_OnButtonClickedEvent__DelegateSignature();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void BndEvt__MarinerBackButton_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void PlayClickSound();
	void InitiateMenuBackOut();
	bool HandleInput(EMarinerInputActions InInput);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ServerList_C">();
	}
	static class UServerList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UServerList_C>();
	}
};
static_assert(alignof(UServerList_C) == 0x000008, "Wrong alignment on UServerList_C");
static_assert(sizeof(UServerList_C) == 0x000508, "Wrong size on UServerList_C");
static_assert(offsetof(UServerList_C, UberGraphFrame) == 0x0004E0, "Member 'UServerList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UServerList_C, ServerListBackOut) == 0x0004E8, "Member 'UServerList_C::ServerListBackOut' has a wrong offset!");
static_assert(offsetof(UServerList_C, ServerListOut) == 0x0004F0, "Member 'UServerList_C::ServerListOut' has a wrong offset!");
static_assert(offsetof(UServerList_C, ServerListIn) == 0x0004F8, "Member 'UServerList_C::ServerListIn' has a wrong offset!");
static_assert(offsetof(UServerList_C, ServerBrowser) == 0x000500, "Member 'UServerList_C::ServerBrowser' has a wrong offset!");

}


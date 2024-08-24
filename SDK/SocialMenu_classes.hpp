#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SocialMenu

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SocialMenu.SocialMenu_C
// 0x0008 (0x0998 - 0x0990)
class USocialMenu_C final : public UMarinerSocialMenu
{
public:
	class UFriendListErrorWidget_C*               FriendListErrorWidget;                             // 0x0990(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SocialMenu_C">();
	}
	static class USocialMenu_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USocialMenu_C>();
	}
};
static_assert(alignof(USocialMenu_C) == 0x000008, "Wrong alignment on USocialMenu_C");
static_assert(sizeof(USocialMenu_C) == 0x000998, "Wrong size on USocialMenu_C");
static_assert(offsetof(USocialMenu_C, FriendListErrorWidget) == 0x000990, "Member 'USocialMenu_C::FriendListErrorWidget' has a wrong offset!");

}


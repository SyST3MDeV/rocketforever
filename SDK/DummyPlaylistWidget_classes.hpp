#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DummyPlaylistWidget

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DummyPlaylistWidget.DummyPlaylistWidget_C
// 0x0008 (0x0238 - 0x0230)
class UDummyPlaylistWidget_C final : public UMarinerDummyPlaylistWidget
{
public:
	class UImage*                                 Image_260;                                         // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DummyPlaylistWidget_C">();
	}
	static class UDummyPlaylistWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDummyPlaylistWidget_C>();
	}
};
static_assert(alignof(UDummyPlaylistWidget_C) == 0x000008, "Wrong alignment on UDummyPlaylistWidget_C");
static_assert(sizeof(UDummyPlaylistWidget_C) == 0x000238, "Wrong size on UDummyPlaylistWidget_C");
static_assert(offsetof(UDummyPlaylistWidget_C, Image_260) == 0x000230, "Member 'UDummyPlaylistWidget_C::Image_260' has a wrong offset!");

}


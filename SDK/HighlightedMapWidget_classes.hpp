#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: HighlightedMapWidget

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Mariner_classes.hpp"
#include "MangoClient_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass HighlightedMapWidget.HighlightedMapWidget_C
// 0x0040 (0x0458 - 0x0418)
class UHighlightedMapWidget_C final : public UMarinerAnimatedWidget
{
public:
	class UImage*                                 Image_62;                                          // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_136;                                         // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MapDesc;                                           // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 MapIcon;                                           // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             MapName;                                           // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextRecommendedNumberOfPlayers;                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FGuid                                  PendingMapID;                                      // 0x0448(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetMap(const struct FGuid& MapId);
	void ClearMap();
	bool Populate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"HighlightedMapWidget_C">();
	}
	static class UHighlightedMapWidget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UHighlightedMapWidget_C>();
	}
};
static_assert(alignof(UHighlightedMapWidget_C) == 0x000008, "Wrong alignment on UHighlightedMapWidget_C");
static_assert(sizeof(UHighlightedMapWidget_C) == 0x000458, "Wrong size on UHighlightedMapWidget_C");
static_assert(offsetof(UHighlightedMapWidget_C, Image_62) == 0x000418, "Member 'UHighlightedMapWidget_C::Image_62' has a wrong offset!");
static_assert(offsetof(UHighlightedMapWidget_C, Image_136) == 0x000420, "Member 'UHighlightedMapWidget_C::Image_136' has a wrong offset!");
static_assert(offsetof(UHighlightedMapWidget_C, MapDesc) == 0x000428, "Member 'UHighlightedMapWidget_C::MapDesc' has a wrong offset!");
static_assert(offsetof(UHighlightedMapWidget_C, MapIcon) == 0x000430, "Member 'UHighlightedMapWidget_C::MapIcon' has a wrong offset!");
static_assert(offsetof(UHighlightedMapWidget_C, MapName) == 0x000438, "Member 'UHighlightedMapWidget_C::MapName' has a wrong offset!");
static_assert(offsetof(UHighlightedMapWidget_C, TextRecommendedNumberOfPlayers) == 0x000440, "Member 'UHighlightedMapWidget_C::TextRecommendedNumberOfPlayers' has a wrong offset!");
static_assert(offsetof(UHighlightedMapWidget_C, PendingMapID) == 0x000448, "Member 'UHighlightedMapWidget_C::PendingMapID' has a wrong offset!");

}


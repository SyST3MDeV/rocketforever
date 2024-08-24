#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DirectDamageDebugRecordDisplay

#include "Basic.hpp"

#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DirectDamageDebugRecordDisplay.DirectDamageDebugRecordDisplay_C
// 0x0010 (0x0240 - 0x0230)
class UDirectDamageDebugRecordDisplay_C final : public UUserWidget
{
public:
	class UScrollBox*                             DirectDamageRecordFields;                          // 0x0230(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             DirectDamageRecordTitle;                           // 0x0238(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void PopulateFromDirectDamageDebugRecord(class UMarinerDirectDamageDebugRecord*& DamageRecord);
	void CreateNewDamageDebugRecordField(const class FText& FieldName, const class FText& FieldValue);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DirectDamageDebugRecordDisplay_C">();
	}
	static class UDirectDamageDebugRecordDisplay_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDirectDamageDebugRecordDisplay_C>();
	}
};
static_assert(alignof(UDirectDamageDebugRecordDisplay_C) == 0x000008, "Wrong alignment on UDirectDamageDebugRecordDisplay_C");
static_assert(sizeof(UDirectDamageDebugRecordDisplay_C) == 0x000240, "Wrong size on UDirectDamageDebugRecordDisplay_C");
static_assert(offsetof(UDirectDamageDebugRecordDisplay_C, DirectDamageRecordFields) == 0x000230, "Member 'UDirectDamageDebugRecordDisplay_C::DirectDamageRecordFields' has a wrong offset!");
static_assert(offsetof(UDirectDamageDebugRecordDisplay_C, DirectDamageRecordTitle) == 0x000238, "Member 'UDirectDamageDebugRecordDisplay_C::DirectDamageRecordTitle' has a wrong offset!");

}


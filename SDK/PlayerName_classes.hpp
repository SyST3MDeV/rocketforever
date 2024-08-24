#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PlayerName

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PlayerName.PlayerName_C
// 0x0048 (0x02F8 - 0x02B0)
class UPlayerName_C final : public UMarinerUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMarinerButton*                         MarinerButtonBackground;                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             SlotNumber;                                        // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextBlock_329;                                     // 0x02C8(0x0008)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         PlayerIndex;                                       // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           EmptyColor;                                        // 0x02D4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           FilledColor;                                       // 0x02E4(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PlayerName(int32 EntryPoint);
	void Construct();
	class FText GetPlayerName();
	struct FSlateColor GetPlayerColor();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PlayerName_C">();
	}
	static class UPlayerName_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPlayerName_C>();
	}
};
static_assert(alignof(UPlayerName_C) == 0x000008, "Wrong alignment on UPlayerName_C");
static_assert(sizeof(UPlayerName_C) == 0x0002F8, "Wrong size on UPlayerName_C");
static_assert(offsetof(UPlayerName_C, UberGraphFrame) == 0x0002B0, "Member 'UPlayerName_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, MarinerButtonBackground) == 0x0002B8, "Member 'UPlayerName_C::MarinerButtonBackground' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, SlotNumber) == 0x0002C0, "Member 'UPlayerName_C::SlotNumber' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, TextBlock_329) == 0x0002C8, "Member 'UPlayerName_C::TextBlock_329' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, PlayerIndex) == 0x0002D0, "Member 'UPlayerName_C::PlayerIndex' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, EmptyColor) == 0x0002D4, "Member 'UPlayerName_C::EmptyColor' has a wrong offset!");
static_assert(offsetof(UPlayerName_C, FilledColor) == 0x0002E4, "Member 'UPlayerName_C::FilledColor' has a wrong offset!");

}


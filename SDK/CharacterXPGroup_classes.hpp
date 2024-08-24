#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterXPGroup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CharacterXPGroup.CharacterXPGroup_C
// 0x0070 (0x02A0 - 0x0230)
class UCharacterXPGroup_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0230(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Init;                                              // 0x0238(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       HeaderIn;                                          // 0x0240(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                             Header;                                            // 0x0248(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           StatPanel;                                         // 0x0250(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   HeaderText;                                        // 0x0258(0x0018)(Edit, BlueprintVisible)
	UMulticastInlineDelegateProperty_             OnSequenceComplete;                                // 0x0270(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                         PostHeaderDelay;                                   // 0x0280(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LineDelay;                                         // 0x0284(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ActiveIndex;                                       // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsAlive;                                           // 0x028C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2206[0x3];                                     // 0x028D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FinalDelay;                                        // 0x0290(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2207[0x4];                                     // 0x0294(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          SequenceSFX;                                       // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSequenceComplete__DelegateSignature();
	void ExecuteUbergraph_CharacterXPGroup(int32 EntryPoint);
	void Destruct();
	void Construct();
	void PlaySequence();
	void PreConstruct(bool IsDesignTime);
	void SetData(const TMap<class FString, struct FMangoXPBonusType>& Data);
	void PlayNextLineAnimation(bool* Success);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CharacterXPGroup_C">();
	}
	static class UCharacterXPGroup_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCharacterXPGroup_C>();
	}
};
static_assert(alignof(UCharacterXPGroup_C) == 0x000008, "Wrong alignment on UCharacterXPGroup_C");
static_assert(sizeof(UCharacterXPGroup_C) == 0x0002A0, "Wrong size on UCharacterXPGroup_C");
static_assert(offsetof(UCharacterXPGroup_C, UberGraphFrame) == 0x000230, "Member 'UCharacterXPGroup_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCharacterXPGroup_C, Init) == 0x000238, "Member 'UCharacterXPGroup_C::Init' has a wrong offset!");
static_assert(offsetof(UCharacterXPGroup_C, HeaderIn) == 0x000240, "Member 'UCharacterXPGroup_C::HeaderIn' has a wrong offset!");
static_assert(offsetof(UCharacterXPGroup_C, Header) == 0x000248, "Member 'UCharacterXPGroup_C::Header' has a wrong offset!");
static_assert(offsetof(UCharacterXPGroup_C, StatPanel) == 0x000250, "Member 'UCharacterXPGroup_C::StatPanel' has a wrong offset!");
static_assert(offsetof(UCharacterXPGroup_C, HeaderText) == 0x000258, "Member 'UCharacterXPGroup_C::HeaderText' has a wrong offset!");
static_assert(offsetof(UCharacterXPGroup_C, OnSequenceComplete) == 0x000270, "Member 'UCharacterXPGroup_C::OnSequenceComplete' has a wrong offset!");
static_assert(offsetof(UCharacterXPGroup_C, PostHeaderDelay) == 0x000280, "Member 'UCharacterXPGroup_C::PostHeaderDelay' has a wrong offset!");
static_assert(offsetof(UCharacterXPGroup_C, LineDelay) == 0x000284, "Member 'UCharacterXPGroup_C::LineDelay' has a wrong offset!");
static_assert(offsetof(UCharacterXPGroup_C, ActiveIndex) == 0x000288, "Member 'UCharacterXPGroup_C::ActiveIndex' has a wrong offset!");
static_assert(offsetof(UCharacterXPGroup_C, IsAlive) == 0x00028C, "Member 'UCharacterXPGroup_C::IsAlive' has a wrong offset!");
static_assert(offsetof(UCharacterXPGroup_C, FinalDelay) == 0x000290, "Member 'UCharacterXPGroup_C::FinalDelay' has a wrong offset!");
static_assert(offsetof(UCharacterXPGroup_C, SequenceSFX) == 0x000298, "Member 'UCharacterXPGroup_C::SequenceSFX' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AnimNotify_CharacterAkEvent

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass AnimNotify_CharacterAkEvent.AnimNotify_CharacterAkEvent_C
// 0x0018 (0x0050 - 0x0038)
class UAnimNotify_CharacterAkEvent_C final : public UAnimNotify
{
public:
	class UAkAudioEvent*                          Event;                                             // 0x0038(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 EventName;                                         // 0x0040(0x0010)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash)

public:
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AnimNotify_CharacterAkEvent_C">();
	}
	static class UAnimNotify_CharacterAkEvent_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAnimNotify_CharacterAkEvent_C>();
	}
};
static_assert(alignof(UAnimNotify_CharacterAkEvent_C) == 0x000008, "Wrong alignment on UAnimNotify_CharacterAkEvent_C");
static_assert(sizeof(UAnimNotify_CharacterAkEvent_C) == 0x000050, "Wrong size on UAnimNotify_CharacterAkEvent_C");
static_assert(offsetof(UAnimNotify_CharacterAkEvent_C, Event) == 0x000038, "Member 'UAnimNotify_CharacterAkEvent_C::Event' has a wrong offset!");
static_assert(offsetof(UAnimNotify_CharacterAkEvent_C, EventName) == 0x000040, "Member 'UAnimNotify_CharacterAkEvent_C::EventName' has a wrong offset!");

}


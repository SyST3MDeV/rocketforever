#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: EasyAntiCheatCommon

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// Class EasyAntiCheatCommon.EasyAntiCheatNetComponent
// 0x0008 (0x00B8 - 0x00B0)
class UEasyAntiCheatNetComponent final : public UActorComponent
{
public:
	uint8                                         Pad_10B2[0x8];                                     // 0x00B0(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void ClientMessage(const TArray<uint8>& Message);
	void ServerMessage(const TArray<uint8>& Message);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"EasyAntiCheatNetComponent">();
	}
	static class UEasyAntiCheatNetComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEasyAntiCheatNetComponent>();
	}
};
static_assert(alignof(UEasyAntiCheatNetComponent) == 0x000008, "Wrong alignment on UEasyAntiCheatNetComponent");
static_assert(sizeof(UEasyAntiCheatNetComponent) == 0x0000B8, "Wrong size on UEasyAntiCheatNetComponent");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StoreStack

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass StoreStack.StoreStack_C
// 0x0000 (0x0028 - 0x0028)
class UStoreStack_C final : public UMarinerIDTag
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"StoreStack_C">();
	}
	static class UStoreStack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UStoreStack_C>();
	}
};
static_assert(alignof(UStoreStack_C) == 0x000008, "Wrong alignment on UStoreStack_C");
static_assert(sizeof(UStoreStack_C) == 0x000028, "Wrong size on UStoreStack_C");

}


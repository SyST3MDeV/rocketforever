#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: WorldUISpawner

#include "Basic.hpp"

#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass WorldUISpawner.WorldUISpawner_C
// 0x0008 (0x0370 - 0x0368)
class AWorldUISpawner_C final : public AMarinerPlayerStateCharacterSpawner
{
public:
	int32                                         Translucency_Sort_Priority;                        // 0x0368(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WorldUISpawner_C">();
	}
	static class AWorldUISpawner_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AWorldUISpawner_C>();
	}
};
static_assert(alignof(AWorldUISpawner_C) == 0x000008, "Wrong alignment on AWorldUISpawner_C");
static_assert(sizeof(AWorldUISpawner_C) == 0x000370, "Wrong size on AWorldUISpawner_C");
static_assert(offsetof(AWorldUISpawner_C, Translucency_Sort_Priority) == 0x000368, "Member 'AWorldUISpawner_C::Translucency_Sort_Priority' has a wrong offset!");

}


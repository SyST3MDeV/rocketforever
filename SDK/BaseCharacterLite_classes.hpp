#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BaseCharacterLite

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Mariner_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BaseCharacterLite.BaseCharacterLite_C
// 0x0030 (0x0408 - 0x03D8)
class ABaseCharacterLite_C : public AMarinerCharacterLite
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03D8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                 CustomPedestalInterior;                            // 0x03E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 CustomPedestalExterior;                            // 0x03E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacterCustomizationPedestalInterior_C* DefaultPedestalInterior;                           // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStaticMeshActor*                       DefaultPedestalExterior;                           // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerSkinDataAsset*                  SkinAsset;                                         // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BaseCharacterLite(int32 EntryPoint);
	void ReceiveBeginPlay();
	void ReceiveDestroyed();
	void OnSkinApplied_BP(class UMarinerSkinCollectionDataAsset* SkinCollection);
	void DestroyCustomPedestals();
	void SetDefaultPedestalReferences(class ACharacterCustomizationPedestalInterior_C* Interior, class AStaticMeshActor* Exterior);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BaseCharacterLite_C">();
	}
	static class ABaseCharacterLite_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABaseCharacterLite_C>();
	}
};
static_assert(alignof(ABaseCharacterLite_C) == 0x000008, "Wrong alignment on ABaseCharacterLite_C");
static_assert(sizeof(ABaseCharacterLite_C) == 0x000408, "Wrong size on ABaseCharacterLite_C");
static_assert(offsetof(ABaseCharacterLite_C, UberGraphFrame) == 0x0003D8, "Member 'ABaseCharacterLite_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABaseCharacterLite_C, CustomPedestalInterior) == 0x0003E0, "Member 'ABaseCharacterLite_C::CustomPedestalInterior' has a wrong offset!");
static_assert(offsetof(ABaseCharacterLite_C, CustomPedestalExterior) == 0x0003E8, "Member 'ABaseCharacterLite_C::CustomPedestalExterior' has a wrong offset!");
static_assert(offsetof(ABaseCharacterLite_C, DefaultPedestalInterior) == 0x0003F0, "Member 'ABaseCharacterLite_C::DefaultPedestalInterior' has a wrong offset!");
static_assert(offsetof(ABaseCharacterLite_C, DefaultPedestalExterior) == 0x0003F8, "Member 'ABaseCharacterLite_C::DefaultPedestalExterior' has a wrong offset!");
static_assert(offsetof(ABaseCharacterLite_C, SkinAsset) == 0x000400, "Member 'ABaseCharacterLite_C::SkinAsset' has a wrong offset!");

}


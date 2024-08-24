#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LiveLink

#include "Basic.hpp"

#include "LiveLinkInterface_structs.hpp"
#include "LiveLinkInterface_classes.hpp"
#include "LiveLink_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"
#include "TimeManagement_classes.hpp"


namespace SDK
{

// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// 0x0018 (0x0040 - 0x0028)
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
public:
	ELiveLinkAxis                                 AxisX;                                             // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ELiveLinkAxis                                 AxisY;                                             // 0x0029(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	ELiveLinkAxis                                 AxisZ;                                             // 0x002A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_DB8[0x15];                                     // 0x002B(0x0015)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkTransformAxisSwitchPreProcessor">();
	}
	static class ULiveLinkTransformAxisSwitchPreProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkTransformAxisSwitchPreProcessor>();
	}
};
static_assert(alignof(ULiveLinkTransformAxisSwitchPreProcessor) == 0x000008, "Wrong alignment on ULiveLinkTransformAxisSwitchPreProcessor");
static_assert(sizeof(ULiveLinkTransformAxisSwitchPreProcessor) == 0x000040, "Wrong size on ULiveLinkTransformAxisSwitchPreProcessor");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, AxisX) == 0x000028, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::AxisX' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, AxisY) == 0x000029, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::AxisY' has a wrong offset!");
static_assert(offsetof(ULiveLinkTransformAxisSwitchPreProcessor, AxisZ) == 0x00002A, "Member 'ULiveLinkTransformAxisSwitchPreProcessor::AxisZ' has a wrong offset!");

// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
// 0x0000 (0x0040 - 0x0040)
class ULiveLinkAnimationAxisSwitchPreProcessor final : public ULiveLinkTransformAxisSwitchPreProcessor
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationAxisSwitchPreProcessor">();
	}
	static class ULiveLinkAnimationAxisSwitchPreProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationAxisSwitchPreProcessor>();
	}
};
static_assert(alignof(ULiveLinkAnimationAxisSwitchPreProcessor) == 0x000008, "Wrong alignment on ULiveLinkAnimationAxisSwitchPreProcessor");
static_assert(sizeof(ULiveLinkAnimationAxisSwitchPreProcessor) == 0x000040, "Wrong size on ULiveLinkAnimationAxisSwitchPreProcessor");

// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
// 0x0018 (0x0040 - 0x0028)
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
public:
	bool                                          bInterpolatePropertyValues;                        // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DB9[0x17];                                     // 0x0029(0x0017)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkBasicFrameInterpolationProcessor">();
	}
	static class ULiveLinkBasicFrameInterpolationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkBasicFrameInterpolationProcessor>();
	}
};
static_assert(alignof(ULiveLinkBasicFrameInterpolationProcessor) == 0x000008, "Wrong alignment on ULiveLinkBasicFrameInterpolationProcessor");
static_assert(sizeof(ULiveLinkBasicFrameInterpolationProcessor) == 0x000040, "Wrong size on ULiveLinkBasicFrameInterpolationProcessor");
static_assert(offsetof(ULiveLinkBasicFrameInterpolationProcessor, bInterpolatePropertyValues) == 0x000028, "Member 'ULiveLinkBasicFrameInterpolationProcessor::bInterpolatePropertyValues' has a wrong offset!");

// Class LiveLink.LiveLinkBlueprintLibrary
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkBlueprintLibrary final : public UBlueprintFunctionLibrary
{
public:
	static int32 ChildCount(struct FLiveLinkTransform& LiveLinkTransform);
	static void ComponentSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform);
	static bool EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	static bool EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	static bool EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	static bool EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	static void GetBasicData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData);
	static void GetChildren(struct FLiveLinkTransform& LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
	static void GetCurves(struct FSubjectFrameHandle& SubjectFrameHandle, TMap<class FName, float>* Curves);
	static TArray<struct FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
	static TSubclassOf<class ULiveLinkRole> GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName);
	static TArray<struct FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeDisal);
	static void GetMetadata(struct FSubjectFrameHandle& SubjectFrameHandle, struct FSubjectMetadata* MetaData);
	static void GetParent(struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform* Parent);
	static bool GetPropertyValue(struct FLiveLinkBasicBlueprintData& BasicData, class FName PropertyName, float* Value);
	static void GetRootTransform(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	static class FText GetSourceMachineName(struct FLiveLinkSourceHandle& SourceHandle);
	static class FText GetSourceStatus(struct FLiveLinkSourceHandle& SourceHandle);
	static class FText GetSourceType(struct FLiveLinkSourceHandle& SourceHandle);
	static TSubclassOf<class ULiveLinkRole> GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey);
	static void GetTransformByIndex(struct FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, struct FLiveLinkTransform* LiveLinkTransform);
	static void GetTransformByName(struct FSubjectFrameHandle& SubjectFrameHandle, class FName Param_TransformName, struct FLiveLinkTransform* LiveLinkTransform);
	static bool HasParent(struct FLiveLinkTransform& LiveLinkTransform);
	static bool IsSourceStillValid(struct FLiveLinkSourceHandle& SourceHandle);
	static int32 NumberOfTransforms(struct FSubjectFrameHandle& SubjectFrameHandle);
	static void ParentBoneSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform);
	static bool RemoveSource(struct FLiveLinkSourceHandle& SourceHandle);
	static void TransformName(struct FLiveLinkTransform& LiveLinkTransform, class FName* Param_Name);
	static void TransformNames(struct FSubjectFrameHandle& SubjectFrameHandle, TArray<class FName>* Param_TransformNames);

	bool IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName);
	bool IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bForThisFrame);
	void SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkBlueprintLibrary">();
	}
	static class ULiveLinkBlueprintLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkBlueprintLibrary>();
	}
};
static_assert(alignof(ULiveLinkBlueprintLibrary) == 0x000008, "Wrong alignment on ULiveLinkBlueprintLibrary");
static_assert(sizeof(ULiveLinkBlueprintLibrary) == 0x000028, "Wrong size on ULiveLinkBlueprintLibrary");

// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// 0x0010 (0x0050 - 0x0040)
class ULiveLinkAnimationFrameInterpolationProcessor final : public ULiveLinkBasicFrameInterpolationProcessor
{
public:
	uint8                                         Pad_DCC[0x10];                                     // 0x0040(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationFrameInterpolationProcessor">();
	}
	static class ULiveLinkAnimationFrameInterpolationProcessor* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationFrameInterpolationProcessor>();
	}
};
static_assert(alignof(ULiveLinkAnimationFrameInterpolationProcessor) == 0x000008, "Wrong alignment on ULiveLinkAnimationFrameInterpolationProcessor");
static_assert(sizeof(ULiveLinkAnimationFrameInterpolationProcessor) == 0x000050, "Wrong size on ULiveLinkAnimationFrameInterpolationProcessor");

// Class LiveLink.LiveLinkAnimationRoleToTransform
// 0x0018 (0x0040 - 0x0028)
class ULiveLinkAnimationRoleToTransform final : public ULiveLinkFrameTranslator
{
public:
	class FName                                   BoneName;                                          // 0x0028(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_DCD[0x10];                                     // 0x0030(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationRoleToTransform">();
	}
	static class ULiveLinkAnimationRoleToTransform* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationRoleToTransform>();
	}
};
static_assert(alignof(ULiveLinkAnimationRoleToTransform) == 0x000008, "Wrong alignment on ULiveLinkAnimationRoleToTransform");
static_assert(sizeof(ULiveLinkAnimationRoleToTransform) == 0x000040, "Wrong size on ULiveLinkAnimationRoleToTransform");
static_assert(offsetof(ULiveLinkAnimationRoleToTransform, BoneName) == 0x000028, "Member 'ULiveLinkAnimationRoleToTransform::BoneName' has a wrong offset!");

// Class LiveLink.LiveLinkAnimationVirtualSubject
// 0x0008 (0x00E0 - 0x00D8)
class ULiveLinkAnimationVirtualSubject final : public ULiveLinkVirtualSubject
{
public:
	uint8                                         Pad_DCE[0x8];                                      // 0x00D8(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkAnimationVirtualSubject">();
	}
	static class ULiveLinkAnimationVirtualSubject* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkAnimationVirtualSubject>();
	}
};
static_assert(alignof(ULiveLinkAnimationVirtualSubject) == 0x000008, "Wrong alignment on ULiveLinkAnimationVirtualSubject");
static_assert(sizeof(ULiveLinkAnimationVirtualSubject) == 0x0000E0, "Wrong size on ULiveLinkAnimationVirtualSubject");

// Class LiveLink.LiveLinkComponent
// 0x0020 (0x00D0 - 0x00B0)
class ULiveLinkComponent final : public UActorComponent
{
public:
	UMulticastInlineDelegateProperty_             OnLiveLinkUpdated;                                 // 0x00B0(0x0010)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                         Pad_DCF[0x10];                                     // 0x00C0(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void GetAvailableSubjectNames(TArray<class FName>* SubjectNames);
	void GetSubjectData(const class FName SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtSceneTime(const class FName SubjectName, const struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtWorldTime(const class FName SubjectName, const float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkComponent">();
	}
	static class ULiveLinkComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkComponent>();
	}
};
static_assert(alignof(ULiveLinkComponent) == 0x000008, "Wrong alignment on ULiveLinkComponent");
static_assert(sizeof(ULiveLinkComponent) == 0x0000D0, "Wrong size on ULiveLinkComponent");
static_assert(offsetof(ULiveLinkComponent, OnLiveLinkUpdated) == 0x0000B0, "Member 'ULiveLinkComponent::OnLiveLinkUpdated' has a wrong offset!");

// Class LiveLink.LiveLinkDrivenComponent
// 0x0020 (0x00D0 - 0x00B0)
class ULiveLinkDrivenComponent final : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                   SubjectName;                                       // 0x00B0(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                   ActorTransformBone;                                // 0x00B8(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bModifyActorTransform;                             // 0x00C0(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSetRelativeLocation;                              // 0x00C1(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DD3[0xE];                                      // 0x00C2(0x000E)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkDrivenComponent">();
	}
	static class ULiveLinkDrivenComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkDrivenComponent>();
	}
};
static_assert(alignof(ULiveLinkDrivenComponent) == 0x000008, "Wrong alignment on ULiveLinkDrivenComponent");
static_assert(sizeof(ULiveLinkDrivenComponent) == 0x0000D0, "Wrong size on ULiveLinkDrivenComponent");
static_assert(offsetof(ULiveLinkDrivenComponent, SubjectName) == 0x0000B0, "Member 'ULiveLinkDrivenComponent::SubjectName' has a wrong offset!");
static_assert(offsetof(ULiveLinkDrivenComponent, ActorTransformBone) == 0x0000B8, "Member 'ULiveLinkDrivenComponent::ActorTransformBone' has a wrong offset!");
static_assert(offsetof(ULiveLinkDrivenComponent, bModifyActorTransform) == 0x0000C0, "Member 'ULiveLinkDrivenComponent::bModifyActorTransform' has a wrong offset!");
static_assert(offsetof(ULiveLinkDrivenComponent, bSetRelativeLocation) == 0x0000C1, "Member 'ULiveLinkDrivenComponent::bSetRelativeLocation' has a wrong offset!");

// Class LiveLink.LiveLinkInstance
// 0x0000 (0x0270 - 0x0270)
class ULiveLinkInstance final : public UAnimInstance
{
public:
	class ULiveLinkRetargetAsset*                 CurrentRetargetAsset;                              // 0x0268(0x0008)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkInstance">();
	}
	static class ULiveLinkInstance* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkInstance>();
	}
};
static_assert(alignof(ULiveLinkInstance) == 0x000010, "Wrong alignment on ULiveLinkInstance");
static_assert(sizeof(ULiveLinkInstance) == 0x000270, "Wrong size on ULiveLinkInstance");
static_assert(offsetof(ULiveLinkInstance, CurrentRetargetAsset) == 0x000268, "Member 'ULiveLinkInstance::CurrentRetargetAsset' has a wrong offset!");

// Class LiveLink.LiveLinkMessageBusFinder
// 0x0058 (0x0080 - 0x0028)
class ULiveLinkMessageBusFinder final : public UObject
{
public:
	uint8                                         Pad_DD4[0x58];                                     // 0x0028(0x0058)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static void ConnectToProvider(struct FProviderPollResult& Provider, struct FLiveLinkSourceHandle* SourceHandle);
	static class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();

	void GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkMessageBusFinder">();
	}
	static class ULiveLinkMessageBusFinder* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkMessageBusFinder>();
	}
};
static_assert(alignof(ULiveLinkMessageBusFinder) == 0x000008, "Wrong alignment on ULiveLinkMessageBusFinder");
static_assert(sizeof(ULiveLinkMessageBusFinder) == 0x000080, "Wrong size on ULiveLinkMessageBusFinder");

// Class LiveLink.LiveLinkMessageBusSourceFactory
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkMessageBusSourceFactory final : public ULiveLinkSourceFactory
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkMessageBusSourceFactory">();
	}
	static class ULiveLinkMessageBusSourceFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkMessageBusSourceFactory>();
	}
};
static_assert(alignof(ULiveLinkMessageBusSourceFactory) == 0x000008, "Wrong alignment on ULiveLinkMessageBusSourceFactory");
static_assert(sizeof(ULiveLinkMessageBusSourceFactory) == 0x000028, "Wrong size on ULiveLinkMessageBusSourceFactory");

// Class LiveLink.LiveLinkPreset
// 0x0020 (0x0048 - 0x0028)
class ULiveLinkPreset final : public UObject
{
public:
	TArray<struct FLiveLinkSourcePreset>          Sources;                                           // 0x0028(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FLiveLinkSubjectPreset>         Subjects;                                          // 0x0038(0x0010)(ZeroConstructor, NativeAccessSpecifierPrivate)

public:
	void BuildFromClient();

	bool ApplyToClient() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkPreset">();
	}
	static class ULiveLinkPreset* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkPreset>();
	}
};
static_assert(alignof(ULiveLinkPreset) == 0x000008, "Wrong alignment on ULiveLinkPreset");
static_assert(sizeof(ULiveLinkPreset) == 0x000048, "Wrong size on ULiveLinkPreset");
static_assert(offsetof(ULiveLinkPreset, Sources) == 0x000028, "Member 'ULiveLinkPreset::Sources' has a wrong offset!");
static_assert(offsetof(ULiveLinkPreset, Subjects) == 0x000038, "Member 'ULiveLinkPreset::Subjects' has a wrong offset!");

// Class LiveLink.LiveLinkRetargetAsset
// 0x0000 (0x0028 - 0x0028)
class ULiveLinkRetargetAsset : public UObject
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkRetargetAsset">();
	}
	static class ULiveLinkRetargetAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkRetargetAsset>();
	}
};
static_assert(alignof(ULiveLinkRetargetAsset) == 0x000008, "Wrong alignment on ULiveLinkRetargetAsset");
static_assert(sizeof(ULiveLinkRetargetAsset) == 0x000028, "Wrong size on ULiveLinkRetargetAsset");

// Class LiveLink.LiveLinkRemapAsset
// 0x00A0 (0x00C8 - 0x0028)
class ULiveLinkRemapAsset final : public ULiveLinkRetargetAsset
{
public:
	uint8                                         Pad_DD6[0xA0];                                     // 0x0028(0x00A0)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	class FName GetRemappedBoneName(class FName BoneName) const;
	class FName GetRemappedCurveName(class FName CurveName) const;
	void RemapCurveElements(TMap<class FName, float>& CurveItems) const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkRemapAsset">();
	}
	static class ULiveLinkRemapAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkRemapAsset>();
	}
};
static_assert(alignof(ULiveLinkRemapAsset) == 0x000008, "Wrong alignment on ULiveLinkRemapAsset");
static_assert(sizeof(ULiveLinkRemapAsset) == 0x0000C8, "Wrong size on ULiveLinkRemapAsset");

// Class LiveLink.LiveLinkSettings
// 0x0078 (0x00A0 - 0x0028)
class ULiveLinkSettings final : public UObject
{
public:
	TArray<struct FLiveLinkRoleProjectSetting>    DefaultRoleSettings;                               // 0x0028(0x0010)(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TSubclassOf<class ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;                       // 0x0038(0x0008)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                         PresetSaveDir;                                     // 0x0040(0x0010)(Edit, Config, NativeAccessSpecifierPublic)
	double                                        MessageBusPingRequestFrequency;                    // 0x0050(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        MessageBusHeartbeatFrequency;                      // 0x0058(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        MessageBusHeartbeatTimeout;                        // 0x0060(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        MessageBusTimeBeforeRemovingInactiveSource;        // 0x0068(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        TimeWithoutFrameToBeConsiderAsInvalid;             // 0x0070(0x0008)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ValidColor;                                        // 0x0078(0x0010)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           InvalidColor;                                      // 0x0088(0x0010)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         TextSizeSource;                                    // 0x0098(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         TextSizeSubject;                                   // 0x0099(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DD7[0x6];                                      // 0x009A(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkSettings">();
	}
	static class ULiveLinkSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkSettings>();
	}
};
static_assert(alignof(ULiveLinkSettings) == 0x000008, "Wrong alignment on ULiveLinkSettings");
static_assert(sizeof(ULiveLinkSettings) == 0x0000A0, "Wrong size on ULiveLinkSettings");
static_assert(offsetof(ULiveLinkSettings, DefaultRoleSettings) == 0x000028, "Member 'ULiveLinkSettings::DefaultRoleSettings' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, FrameInterpolationProcessor) == 0x000038, "Member 'ULiveLinkSettings::FrameInterpolationProcessor' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, PresetSaveDir) == 0x000040, "Member 'ULiveLinkSettings::PresetSaveDir' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, MessageBusPingRequestFrequency) == 0x000050, "Member 'ULiveLinkSettings::MessageBusPingRequestFrequency' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, MessageBusHeartbeatFrequency) == 0x000058, "Member 'ULiveLinkSettings::MessageBusHeartbeatFrequency' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, MessageBusHeartbeatTimeout) == 0x000060, "Member 'ULiveLinkSettings::MessageBusHeartbeatTimeout' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, MessageBusTimeBeforeRemovingInactiveSource) == 0x000068, "Member 'ULiveLinkSettings::MessageBusTimeBeforeRemovingInactiveSource' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, TimeWithoutFrameToBeConsiderAsInvalid) == 0x000070, "Member 'ULiveLinkSettings::TimeWithoutFrameToBeConsiderAsInvalid' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, ValidColor) == 0x000078, "Member 'ULiveLinkSettings::ValidColor' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, InvalidColor) == 0x000088, "Member 'ULiveLinkSettings::InvalidColor' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, TextSizeSource) == 0x000098, "Member 'ULiveLinkSettings::TextSizeSource' has a wrong offset!");
static_assert(offsetof(ULiveLinkSettings, TextSizeSubject) == 0x000099, "Member 'ULiveLinkSettings::TextSizeSubject' has a wrong offset!");

// Class LiveLink.LiveLinkTimeSynchronizationSource
// 0x0050 (0x0080 - 0x0030)
class ULiveLinkTimeSynchronizationSource final : public UTimeSynchronizationSource
{
public:
	struct FLiveLinkSubjectName                   SubjectName;                                       // 0x0030(0x0008)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_DD8[0x48];                                     // 0x0038(0x0048)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkTimeSynchronizationSource">();
	}
	static class ULiveLinkTimeSynchronizationSource* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkTimeSynchronizationSource>();
	}
};
static_assert(alignof(ULiveLinkTimeSynchronizationSource) == 0x000008, "Wrong alignment on ULiveLinkTimeSynchronizationSource");
static_assert(sizeof(ULiveLinkTimeSynchronizationSource) == 0x000080, "Wrong size on ULiveLinkTimeSynchronizationSource");
static_assert(offsetof(ULiveLinkTimeSynchronizationSource, SubjectName) == 0x000030, "Member 'ULiveLinkTimeSynchronizationSource::SubjectName' has a wrong offset!");

}


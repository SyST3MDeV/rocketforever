#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: VariantManagerContent

#include "Basic.hpp"


namespace SDK
{

// Enum VariantManagerContent.EPropertyValueCategory
// NumValues: 0x000A
enum class EPropertyValueCategory : uint8
{
	Undefined                                = 0,
	Generic                                  = 1,
	RelativeLocation                         = 2,
	RelativeRotation                         = 4,
	RelativeScale3D                          = 8,
	Visibility                               = 16,
	Material                                 = 32,
	Color                                    = 64,
	Option                                   = 128,
	EPropertyValueCategory_MAX               = 129,
};

// ScriptStruct VariantManagerContent.FunctionCaller
// 0x0008 (0x0008 - 0x0000)
struct FFunctionCaller final
{
public:
	class FName                                   FunctionName;                                      // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FFunctionCaller) == 0x000004, "Wrong alignment on FFunctionCaller");
static_assert(sizeof(FFunctionCaller) == 0x000008, "Wrong size on FFunctionCaller");
static_assert(offsetof(FFunctionCaller, FunctionName) == 0x000000, "Member 'FFunctionCaller::FunctionName' has a wrong offset!");

// ScriptStruct VariantManagerContent.CapturedPropSegment
// 0x0028 (0x0028 - 0x0000)
struct FCapturedPropSegment final
{
public:
	class FString                                 PropertyName;                                      // 0x0000(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         PropertyIndex;                                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12AC[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 ComponentName;                                     // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FCapturedPropSegment) == 0x000008, "Wrong alignment on FCapturedPropSegment");
static_assert(sizeof(FCapturedPropSegment) == 0x000028, "Wrong size on FCapturedPropSegment");
static_assert(offsetof(FCapturedPropSegment, PropertyName) == 0x000000, "Member 'FCapturedPropSegment::PropertyName' has a wrong offset!");
static_assert(offsetof(FCapturedPropSegment, PropertyIndex) == 0x000010, "Member 'FCapturedPropSegment::PropertyIndex' has a wrong offset!");
static_assert(offsetof(FCapturedPropSegment, ComponentName) == 0x000018, "Member 'FCapturedPropSegment::ComponentName' has a wrong offset!");

}


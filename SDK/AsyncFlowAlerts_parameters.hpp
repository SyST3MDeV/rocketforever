#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AsyncFlowAlerts

#include "Basic.hpp"

#include "Mariner_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function AsyncFlowAlerts.AsyncFlowAlerts_C.EvalCrossplayNoticeViewed
// 0x01B8 (0x01B8 - 0x0000)
struct AsyncFlowAlerts_C_EvalCrossplayNoticeViewed final
{
public:
	class UMangoFriendsManager*                   CallFunc_Get_ReturnValue;                          // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetUserPrivilegeCanCrossplay_ReturnValue; // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2413[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FKey& KeyPressed)>      K2Node_CreateDelegate_OutputDelegate_1;            // 0x001C(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_2414[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMarinerMessageBoxData                 K2Node_MakeStruct_MarinerMessageBoxData;           // 0x0030(0x0170)(ContainsInstancedReference)
	class UMarinerGameInstance*                   CallFunc_GetMarinerGameInstance_ReturnValue;       // 0x01A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerGameUserSettings*               CallFunc_GetUserSettings_ReturnValue;              // 0x01A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMarinerCrossplayState                        CallFunc_GetCrossplayState_ReturnValue;            // 0x01B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetCrossplayNoticeViewed_ReturnValue;     // 0x01B1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x01B2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AsyncFlowAlerts_C_EvalCrossplayNoticeViewed) == 0x000008, "Wrong alignment on AsyncFlowAlerts_C_EvalCrossplayNoticeViewed");
static_assert(sizeof(AsyncFlowAlerts_C_EvalCrossplayNoticeViewed) == 0x0001B8, "Wrong size on AsyncFlowAlerts_C_EvalCrossplayNoticeViewed");
static_assert(offsetof(AsyncFlowAlerts_C_EvalCrossplayNoticeViewed, CallFunc_Get_ReturnValue) == 0x000000, "Member 'AsyncFlowAlerts_C_EvalCrossplayNoticeViewed::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalCrossplayNoticeViewed, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'AsyncFlowAlerts_C_EvalCrossplayNoticeViewed::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalCrossplayNoticeViewed, CallFunc_GetUserPrivilegeCanCrossplay_ReturnValue) == 0x000018, "Member 'AsyncFlowAlerts_C_EvalCrossplayNoticeViewed::CallFunc_GetUserPrivilegeCanCrossplay_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalCrossplayNoticeViewed, K2Node_CreateDelegate_OutputDelegate_1) == 0x00001C, "Member 'AsyncFlowAlerts_C_EvalCrossplayNoticeViewed::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalCrossplayNoticeViewed, K2Node_MakeStruct_MarinerMessageBoxData) == 0x000030, "Member 'AsyncFlowAlerts_C_EvalCrossplayNoticeViewed::K2Node_MakeStruct_MarinerMessageBoxData' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalCrossplayNoticeViewed, CallFunc_GetMarinerGameInstance_ReturnValue) == 0x0001A0, "Member 'AsyncFlowAlerts_C_EvalCrossplayNoticeViewed::CallFunc_GetMarinerGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalCrossplayNoticeViewed, CallFunc_GetUserSettings_ReturnValue) == 0x0001A8, "Member 'AsyncFlowAlerts_C_EvalCrossplayNoticeViewed::CallFunc_GetUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalCrossplayNoticeViewed, CallFunc_GetCrossplayState_ReturnValue) == 0x0001B0, "Member 'AsyncFlowAlerts_C_EvalCrossplayNoticeViewed::CallFunc_GetCrossplayState_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalCrossplayNoticeViewed, CallFunc_GetCrossplayNoticeViewed_ReturnValue) == 0x0001B1, "Member 'AsyncFlowAlerts_C_EvalCrossplayNoticeViewed::CallFunc_GetCrossplayNoticeViewed_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalCrossplayNoticeViewed, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x0001B2, "Member 'AsyncFlowAlerts_C_EvalCrossplayNoticeViewed::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function AsyncFlowAlerts.AsyncFlowAlerts_C.CrossplayAccepted
// 0x0028 (0x0028 - 0x0000)
struct AsyncFlowAlerts_C_CrossplayAccepted final
{
public:
	struct FKey                                   KeyPressed;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	class UMarinerGameInstance*                   CallFunc_GetMarinerGameInstance_ReturnValue;       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerGameUserSettings*               CallFunc_GetUserSettings_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(AsyncFlowAlerts_C_CrossplayAccepted) == 0x000008, "Wrong alignment on AsyncFlowAlerts_C_CrossplayAccepted");
static_assert(sizeof(AsyncFlowAlerts_C_CrossplayAccepted) == 0x000028, "Wrong size on AsyncFlowAlerts_C_CrossplayAccepted");
static_assert(offsetof(AsyncFlowAlerts_C_CrossplayAccepted, KeyPressed) == 0x000000, "Member 'AsyncFlowAlerts_C_CrossplayAccepted::KeyPressed' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_CrossplayAccepted, CallFunc_GetMarinerGameInstance_ReturnValue) == 0x000018, "Member 'AsyncFlowAlerts_C_CrossplayAccepted::CallFunc_GetMarinerGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_CrossplayAccepted, CallFunc_GetUserSettings_ReturnValue) == 0x000020, "Member 'AsyncFlowAlerts_C_CrossplayAccepted::CallFunc_GetUserSettings_ReturnValue' has a wrong offset!");

// Function AsyncFlowAlerts.AsyncFlowAlerts_C.DummyCallback
// 0x0018 (0x0018 - 0x0000)
struct AsyncFlowAlerts_C_DummyCallback final
{
public:
	struct FKey                                   KeyPressed;                                        // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};
static_assert(alignof(AsyncFlowAlerts_C_DummyCallback) == 0x000008, "Wrong alignment on AsyncFlowAlerts_C_DummyCallback");
static_assert(sizeof(AsyncFlowAlerts_C_DummyCallback) == 0x000018, "Wrong size on AsyncFlowAlerts_C_DummyCallback");
static_assert(offsetof(AsyncFlowAlerts_C_DummyCallback, KeyPressed) == 0x000000, "Member 'AsyncFlowAlerts_C_DummyCallback::KeyPressed' has a wrong offset!");

// Function AsyncFlowAlerts.AsyncFlowAlerts_C.EvalMythicUpsellViewed
// 0x0038 (0x0038 - 0x0000)
struct AsyncFlowAlerts_C_EvalMythicUpsellViewed final
{
public:
	class UMarinerUIGlobals*                      CallFunc_GetUIGlobals_ReturnValue;                 // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMangoConnectionManager*                CallFunc_Get_ReturnValue;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerCollectionDataAsset*            CallFunc_GetMythicEditionCollection_ReturnValue;   // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EMarinerGameVersion                           CallFunc_GetGameVersion_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2415[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerGameInstance*                   CallFunc_GetMarinerGameInstance_ReturnValue;       // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerGameUserSettings*               CallFunc_GetUserSettings_ReturnValue;              // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetMythicUpsellViewed_ReturnValue;        // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(AsyncFlowAlerts_C_EvalMythicUpsellViewed) == 0x000008, "Wrong alignment on AsyncFlowAlerts_C_EvalMythicUpsellViewed");
static_assert(sizeof(AsyncFlowAlerts_C_EvalMythicUpsellViewed) == 0x000038, "Wrong size on AsyncFlowAlerts_C_EvalMythicUpsellViewed");
static_assert(offsetof(AsyncFlowAlerts_C_EvalMythicUpsellViewed, CallFunc_GetUIGlobals_ReturnValue) == 0x000000, "Member 'AsyncFlowAlerts_C_EvalMythicUpsellViewed::CallFunc_GetUIGlobals_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalMythicUpsellViewed, CallFunc_Get_ReturnValue) == 0x000008, "Member 'AsyncFlowAlerts_C_EvalMythicUpsellViewed::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalMythicUpsellViewed, CallFunc_GetMythicEditionCollection_ReturnValue) == 0x000010, "Member 'AsyncFlowAlerts_C_EvalMythicUpsellViewed::CallFunc_GetMythicEditionCollection_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalMythicUpsellViewed, CallFunc_GetGameVersion_ReturnValue) == 0x000018, "Member 'AsyncFlowAlerts_C_EvalMythicUpsellViewed::CallFunc_GetGameVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalMythicUpsellViewed, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000019, "Member 'AsyncFlowAlerts_C_EvalMythicUpsellViewed::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalMythicUpsellViewed, CallFunc_GetMarinerGameInstance_ReturnValue) == 0x000020, "Member 'AsyncFlowAlerts_C_EvalMythicUpsellViewed::CallFunc_GetMarinerGameInstance_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalMythicUpsellViewed, CallFunc_GetUserSettings_ReturnValue) == 0x000028, "Member 'AsyncFlowAlerts_C_EvalMythicUpsellViewed::CallFunc_GetUserSettings_ReturnValue' has a wrong offset!");
static_assert(offsetof(AsyncFlowAlerts_C_EvalMythicUpsellViewed, CallFunc_GetMythicUpsellViewed_ReturnValue) == 0x000030, "Member 'AsyncFlowAlerts_C_EvalMythicUpsellViewed::CallFunc_GetMythicUpsellViewed_ReturnValue' has a wrong offset!");

}


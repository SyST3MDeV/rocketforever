#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PartyDefaultStackBase

#include "Basic.hpp"

#include "Mariner_structs.hpp"


namespace SDK::Params
{

// Function PartyDefaultStackBase.PartyDefaultStackBase_C.ExecuteUbergraph_PartyDefaultStackBase
// 0x0028 (0x0028 - 0x0000)
struct PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2308[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerMenuStackManager*               CallFunc_GetStackManager_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PopAllFromActiveStack_ReturnValue;        // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2309[0x7];                                     // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerMenuStackManager*               CallFunc_GetStackManager_ReturnValue_1;            // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerMenuStackLayer*                 CallFunc_PopFromActiveStack_ReturnValue;           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase) == 0x000008, "Wrong alignment on PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase");
static_assert(sizeof(PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase) == 0x000028, "Wrong size on PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase");
static_assert(offsetof(PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase, EntryPoint) == 0x000000, "Member 'PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase, CallFunc_GetStackManager_ReturnValue) == 0x000008, "Member 'PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase::CallFunc_GetStackManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase, CallFunc_PopAllFromActiveStack_ReturnValue) == 0x000010, "Member 'PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase::CallFunc_PopAllFromActiveStack_ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase, CallFunc_GetStackManager_ReturnValue_1) == 0x000018, "Member 'PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase::CallFunc_GetStackManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase, CallFunc_PopFromActiveStack_ReturnValue) == 0x000020, "Member 'PartyDefaultStackBase_C_ExecuteUbergraph_PartyDefaultStackBase::CallFunc_PopFromActiveStack_ReturnValue' has a wrong offset!");

// Function PartyDefaultStackBase.PartyDefaultStackBase_C.GetWidgetSetup
// 0x0020 (0x0020 - 0x0000)
struct PartyDefaultStackBase_C_GetWidgetSetup final
{
public:
	struct FMarinerMenuStackBaseWidgetSetup       ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)
	struct FMarinerMenuStackBaseWidgetSetup       K2Node_MakeStruct_MarinerMenuStackBaseWidgetSetup; // 0x0010(0x0010)(NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(PartyDefaultStackBase_C_GetWidgetSetup) == 0x000008, "Wrong alignment on PartyDefaultStackBase_C_GetWidgetSetup");
static_assert(sizeof(PartyDefaultStackBase_C_GetWidgetSetup) == 0x000020, "Wrong size on PartyDefaultStackBase_C_GetWidgetSetup");
static_assert(offsetof(PartyDefaultStackBase_C_GetWidgetSetup, ReturnValue) == 0x000000, "Member 'PartyDefaultStackBase_C_GetWidgetSetup::ReturnValue' has a wrong offset!");
static_assert(offsetof(PartyDefaultStackBase_C_GetWidgetSetup, K2Node_MakeStruct_MarinerMenuStackBaseWidgetSetup) == 0x000010, "Member 'PartyDefaultStackBase_C_GetWidgetSetup::K2Node_MakeStruct_MarinerMenuStackBaseWidgetSetup' has a wrong offset!");

}


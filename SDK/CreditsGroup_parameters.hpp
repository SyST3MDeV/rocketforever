#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CreditsGroup

#include "Basic.hpp"

#include "Mariner_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CreditsGroup.CreditsGroup_C.SetCreditGroup
// 0x00A0 (0x00A0 - 0x0000)
struct CreditsGroup_C_SetCreditGroup final
{
public:
	struct FMarinerCreditGroup                    CreditGroup;                                       // 0x0000(0x0028)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMarinerCreditMember                   CallFunc_Array_Get_Item;                           // 0x0030(0x0028)()
	bool                                          CallFunc_TextIsEmpty_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20CA[0x3];                                     // 0x0059(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20CB[0x3];                                     // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0068(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_20CC[0x6];                                     // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCreditsMember_C*                       CallFunc_Create_ReturnValue;                       // 0x0078(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_20CD[0x7];                                     // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue_2;      // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CreditsGroup_C_SetCreditGroup) == 0x000008, "Wrong alignment on CreditsGroup_C_SetCreditGroup");
static_assert(sizeof(CreditsGroup_C_SetCreditGroup) == 0x0000A0, "Wrong size on CreditsGroup_C_SetCreditGroup");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, CreditGroup) == 0x000000, "Member 'CreditsGroup_C_SetCreditGroup::CreditGroup' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, Temp_int_Array_Index_Variable) == 0x000028, "Member 'CreditsGroup_C_SetCreditGroup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, CallFunc_Array_Length_ReturnValue) == 0x00002C, "Member 'CreditsGroup_C_SetCreditGroup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, CallFunc_Array_Get_Item) == 0x000030, "Member 'CreditsGroup_C_SetCreditGroup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, CallFunc_TextIsEmpty_ReturnValue) == 0x000058, "Member 'CreditsGroup_C_SetCreditGroup::CallFunc_TextIsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, Temp_int_Loop_Counter_Variable) == 0x00005C, "Member 'CreditsGroup_C_SetCreditGroup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, CallFunc_Less_IntInt_ReturnValue) == 0x000060, "Member 'CreditsGroup_C_SetCreditGroup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, CallFunc_Add_IntInt_ReturnValue) == 0x000064, "Member 'CreditsGroup_C_SetCreditGroup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000068, "Member 'CreditsGroup_C_SetCreditGroup::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, Temp_byte_Variable) == 0x000070, "Member 'CreditsGroup_C_SetCreditGroup::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, Temp_byte_Variable_1) == 0x000071, "Member 'CreditsGroup_C_SetCreditGroup::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, CallFunc_Create_ReturnValue) == 0x000078, "Member 'CreditsGroup_C_SetCreditGroup::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, CallFunc_AddChildToVerticalBox_ReturnValue_1) == 0x000080, "Member 'CreditsGroup_C_SetCreditGroup::CallFunc_AddChildToVerticalBox_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, Temp_bool_Variable) == 0x000088, "Member 'CreditsGroup_C_SetCreditGroup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, CallFunc_AddChildToVerticalBox_ReturnValue_2) == 0x000090, "Member 'CreditsGroup_C_SetCreditGroup::CallFunc_AddChildToVerticalBox_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(CreditsGroup_C_SetCreditGroup, K2Node_Select_Default) == 0x000098, "Member 'CreditsGroup_C_SetCreditGroup::K2Node_Select_Default' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CharacterXPGroup

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "MangoClient_structs.hpp"
#include "AkAudio_structs.hpp"
#include "PGRStatData_structs.hpp"


namespace SDK::Params
{

// Function CharacterXPGroup.CharacterXPGroup_C.ExecuteUbergraph_CharacterXPGroup
// 0x0060 (0x0060 - 0x0000)
struct CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	uint8                                         Pad_2208[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_PlayNextLineAnimation_Success;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2209[0x2];                                     // 0x002A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_220A[0x7];                                     // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0038(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_220B[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup) == 0x000008, "Wrong alignment on CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup");
static_assert(sizeof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup) == 0x000060, "Wrong size on CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup");
static_assert(offsetof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup, EntryPoint) == 0x000000, "Member 'CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup::EntryPoint' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup, Temp_delegate_Variable) == 0x000004, "Member 'CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup, CallFunc_PlayAnimation_ReturnValue) == 0x000018, "Member 'CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup, CallFunc_PlayAnimation_ReturnValue_1) == 0x000020, "Member 'CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup, CallFunc_PlayNextLineAnimation_Success) == 0x000028, "Member 'CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup::CallFunc_PlayNextLineAnimation_Success' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup, K2Node_Event_IsDesignTime) == 0x000029, "Member 'CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup, CallFunc_GetChildrenCount_ReturnValue) == 0x00002C, "Member 'CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup, CallFunc_Greater_IntInt_ReturnValue) == 0x000030, "Member 'CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup, Temp_struct_Variable) == 0x000038, "Member 'CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup, CallFunc_GetOwningPlayer_ReturnValue) == 0x000050, "Member 'CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup, CallFunc_PostEvent_ReturnValue) == 0x000058, "Member 'CharacterXPGroup_C_ExecuteUbergraph_CharacterXPGroup::CallFunc_PostEvent_ReturnValue' has a wrong offset!");

// Function CharacterXPGroup.CharacterXPGroup_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct CharacterXPGroup_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterXPGroup_C_PreConstruct) == 0x000001, "Wrong alignment on CharacterXPGroup_C_PreConstruct");
static_assert(sizeof(CharacterXPGroup_C_PreConstruct) == 0x000001, "Wrong size on CharacterXPGroup_C_PreConstruct");
static_assert(offsetof(CharacterXPGroup_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'CharacterXPGroup_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function CharacterXPGroup.CharacterXPGroup_C.SetData
// 0x01F8 (0x01F8 - 0x0000)
struct CharacterXPGroup_C_SetData final
{
public:
	TMap<class FString, struct FMangoXPBonusType> Data;                                              // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	TMap<class FString, struct FPGRStatData>      StatDataLookup;                                    // 0x0050(0x0050)(Edit, BlueprintVisible, ZeroConstructor)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_220C[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FString>                         CallFunc_Map_Keys_Keys;                            // 0x00A8(0x0010)(ZeroConstructor, ReferenceParm)
	class FString                                 CallFunc_Array_Get_Item;                           // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMangoXPBonusType                      CallFunc_Map_Find_Value;                           // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_220D[0x3];                                     // 0x00D5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00D8(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00F0(0x0040)(HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_220E[0x7];                                     // 0x0131(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0138(0x0010)(ZeroConstructor, ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0148(0x0018)()
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_220F[0x3];                                     // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0168(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2210[0x4];                                     // 0x016C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPGRStatData                           CallFunc_Map_Find_Value_1;                         // 0x0170(0x0020)(HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0190(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2211[0x7];                                     // 0x0191(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, struct FPGRStatData>      K2Node_MakeVariable_MakeVariableOutput;            // 0x0198(0x0050)(ZeroConstructor)
	class UCharacterXPLine_C*                     CallFunc_Create_ReturnValue;                       // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x01F0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CharacterXPGroup_C_SetData) == 0x000008, "Wrong alignment on CharacterXPGroup_C_SetData");
static_assert(sizeof(CharacterXPGroup_C_SetData) == 0x0001F8, "Wrong size on CharacterXPGroup_C_SetData");
static_assert(offsetof(CharacterXPGroup_C_SetData, Data) == 0x000000, "Member 'CharacterXPGroup_C_SetData::Data' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, StatDataLookup) == 0x000050, "Member 'CharacterXPGroup_C_SetData::StatDataLookup' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, Temp_int_Array_Index_Variable) == 0x0000A0, "Member 'CharacterXPGroup_C_SetData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_Map_Keys_Keys) == 0x0000A8, "Member 'CharacterXPGroup_C_SetData::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_Array_Get_Item) == 0x0000B8, "Member 'CharacterXPGroup_C_SetData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_Array_Length_ReturnValue) == 0x0000C8, "Member 'CharacterXPGroup_C_SetData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_Map_Find_Value) == 0x0000CC, "Member 'CharacterXPGroup_C_SetData::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_Map_Find_ReturnValue) == 0x0000D4, "Member 'CharacterXPGroup_C_SetData::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_Conv_StringToText_ReturnValue) == 0x0000D8, "Member 'CharacterXPGroup_C_SetData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, K2Node_MakeStruct_FormatArgumentData) == 0x0000F0, "Member 'CharacterXPGroup_C_SetData::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_Greater_IntInt_ReturnValue) == 0x000130, "Member 'CharacterXPGroup_C_SetData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, K2Node_MakeArray_Array) == 0x000138, "Member 'CharacterXPGroup_C_SetData::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_Format_ReturnValue) == 0x000148, "Member 'CharacterXPGroup_C_SetData::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, Temp_int_Loop_Counter_Variable) == 0x000160, "Member 'CharacterXPGroup_C_SetData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_Less_IntInt_ReturnValue) == 0x000164, "Member 'CharacterXPGroup_C_SetData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_Add_IntInt_ReturnValue) == 0x000168, "Member 'CharacterXPGroup_C_SetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_Map_Find_Value_1) == 0x000170, "Member 'CharacterXPGroup_C_SetData::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_Map_Find_ReturnValue_1) == 0x000190, "Member 'CharacterXPGroup_C_SetData::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, K2Node_MakeVariable_MakeVariableOutput) == 0x000198, "Member 'CharacterXPGroup_C_SetData::K2Node_MakeVariable_MakeVariableOutput' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_Create_ReturnValue) == 0x0001E8, "Member 'CharacterXPGroup_C_SetData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_SetData, CallFunc_AddChild_ReturnValue) == 0x0001F0, "Member 'CharacterXPGroup_C_SetData::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function CharacterXPGroup.CharacterXPGroup_C.PlayNextLineAnimation
// 0x0030 (0x0030 - 0x0000)
struct CharacterXPGroup_C_PlayNextLineAnimation final
{
public:
	bool                                          Success;                                           // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2212[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2213[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCharacterXPLine_C*                     K2Node_DynamicCast_AsCharacter_XPLine;             // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2214[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetChildrenCount_ReturnValue;             // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CharacterXPGroup_C_PlayNextLineAnimation) == 0x000008, "Wrong alignment on CharacterXPGroup_C_PlayNextLineAnimation");
static_assert(sizeof(CharacterXPGroup_C_PlayNextLineAnimation) == 0x000030, "Wrong size on CharacterXPGroup_C_PlayNextLineAnimation");
static_assert(offsetof(CharacterXPGroup_C_PlayNextLineAnimation, Success) == 0x000000, "Member 'CharacterXPGroup_C_PlayNextLineAnimation::Success' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_PlayNextLineAnimation, Temp_int_Variable) == 0x000004, "Member 'CharacterXPGroup_C_PlayNextLineAnimation::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_PlayNextLineAnimation, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'CharacterXPGroup_C_PlayNextLineAnimation::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_PlayNextLineAnimation, CallFunc_GetChildAt_ReturnValue) == 0x000010, "Member 'CharacterXPGroup_C_PlayNextLineAnimation::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_PlayNextLineAnimation, K2Node_DynamicCast_AsCharacter_XPLine) == 0x000018, "Member 'CharacterXPGroup_C_PlayNextLineAnimation::K2Node_DynamicCast_AsCharacter_XPLine' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_PlayNextLineAnimation, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'CharacterXPGroup_C_PlayNextLineAnimation::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_PlayNextLineAnimation, CallFunc_GetChildrenCount_ReturnValue) == 0x000024, "Member 'CharacterXPGroup_C_PlayNextLineAnimation::CallFunc_GetChildrenCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(CharacterXPGroup_C_PlayNextLineAnimation, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'CharacterXPGroup_C_PlayNextLineAnimation::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}


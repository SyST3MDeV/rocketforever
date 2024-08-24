#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ErrorDialog

#include "Basic.hpp"


namespace SDK::Params
{

// Function ErrorDialog.ErrorDialog_C.ExecuteUbergraph_ErrorDialog
// 0x0004 (0x0004 - 0x0000)
struct ErrorDialog_C_ExecuteUbergraph_ErrorDialog final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(ErrorDialog_C_ExecuteUbergraph_ErrorDialog) == 0x000004, "Wrong alignment on ErrorDialog_C_ExecuteUbergraph_ErrorDialog");
static_assert(sizeof(ErrorDialog_C_ExecuteUbergraph_ErrorDialog) == 0x000004, "Wrong size on ErrorDialog_C_ExecuteUbergraph_ErrorDialog");
static_assert(offsetof(ErrorDialog_C_ExecuteUbergraph_ErrorDialog, EntryPoint) == 0x000000, "Member 'ErrorDialog_C_ExecuteUbergraph_ErrorDialog::EntryPoint' has a wrong offset!");

// Function ErrorDialog.ErrorDialog_C.GetMessage
// 0x0030 (0x0030 - 0x0000)
struct ErrorDialog_C_GetMessage final
{
public:
	class FText                                   ReturnValue;                                       // 0x0000(0x0018)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
};
static_assert(alignof(ErrorDialog_C_GetMessage) == 0x000008, "Wrong alignment on ErrorDialog_C_GetMessage");
static_assert(sizeof(ErrorDialog_C_GetMessage) == 0x000030, "Wrong size on ErrorDialog_C_GetMessage");
static_assert(offsetof(ErrorDialog_C_GetMessage, ReturnValue) == 0x000000, "Member 'ErrorDialog_C_GetMessage::ReturnValue' has a wrong offset!");
static_assert(offsetof(ErrorDialog_C_GetMessage, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'ErrorDialog_C_GetMessage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function ErrorDialog.ErrorDialog_C.SetMessage
// 0x0010 (0x0010 - 0x0000)
struct ErrorDialog_C_SetMessage final
{
public:
	class FString                                 InMessage;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(ErrorDialog_C_SetMessage) == 0x000008, "Wrong alignment on ErrorDialog_C_SetMessage");
static_assert(sizeof(ErrorDialog_C_SetMessage) == 0x000010, "Wrong size on ErrorDialog_C_SetMessage");
static_assert(offsetof(ErrorDialog_C_SetMessage, InMessage) == 0x000000, "Member 'ErrorDialog_C_SetMessage::InMessage' has a wrong offset!");

}


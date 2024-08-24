#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: StartGameButton

#include "Basic.hpp"

#include "Mariner_structs.hpp"
#include "AkAudio_structs.hpp"


namespace SDK::Params
{

// Function StartGameButton.StartGameButton_C.ExecuteUbergraph_StartGameButton
// 0x0038 (0x0038 - 0x0000)
struct StartGameButton_C_ExecuteUbergraph_StartGameButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_231D[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetPlayerController_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FAkExternalSourceInfo>          Temp_struct_Variable;                              // 0x0010(0x0010)(ConstParm, ZeroConstructor, ReferenceParm)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0020(0x0010)(ConstParm, ZeroConstructor, NoDestructor)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(StartGameButton_C_ExecuteUbergraph_StartGameButton) == 0x000008, "Wrong alignment on StartGameButton_C_ExecuteUbergraph_StartGameButton");
static_assert(sizeof(StartGameButton_C_ExecuteUbergraph_StartGameButton) == 0x000038, "Wrong size on StartGameButton_C_ExecuteUbergraph_StartGameButton");
static_assert(offsetof(StartGameButton_C_ExecuteUbergraph_StartGameButton, EntryPoint) == 0x000000, "Member 'StartGameButton_C_ExecuteUbergraph_StartGameButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(StartGameButton_C_ExecuteUbergraph_StartGameButton, CallFunc_GetPlayerController_ReturnValue) == 0x000008, "Member 'StartGameButton_C_ExecuteUbergraph_StartGameButton::CallFunc_GetPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(StartGameButton_C_ExecuteUbergraph_StartGameButton, Temp_struct_Variable) == 0x000010, "Member 'StartGameButton_C_ExecuteUbergraph_StartGameButton::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(StartGameButton_C_ExecuteUbergraph_StartGameButton, Temp_delegate_Variable) == 0x000020, "Member 'StartGameButton_C_ExecuteUbergraph_StartGameButton::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(StartGameButton_C_ExecuteUbergraph_StartGameButton, CallFunc_PostEvent_ReturnValue) == 0x000030, "Member 'StartGameButton_C_ExecuteUbergraph_StartGameButton::CallFunc_PostEvent_ReturnValue' has a wrong offset!");

// Function StartGameButton.StartGameButton_C.GetAssets
// 0x00D0 (0x00D0 - 0x0000)
struct StartGameButton_C_GetAssets final
{
public:
	struct FMarinerLayeredButtonAssets            ReturnValue;                                       // 0x0000(0x0068)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference)
	struct FMarinerLayeredButtonAssets            K2Node_MakeStruct_MarinerLayeredButtonAssets;      // 0x0068(0x0068)(NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(StartGameButton_C_GetAssets) == 0x000008, "Wrong alignment on StartGameButton_C_GetAssets");
static_assert(sizeof(StartGameButton_C_GetAssets) == 0x0000D0, "Wrong size on StartGameButton_C_GetAssets");
static_assert(offsetof(StartGameButton_C_GetAssets, ReturnValue) == 0x000000, "Member 'StartGameButton_C_GetAssets::ReturnValue' has a wrong offset!");
static_assert(offsetof(StartGameButton_C_GetAssets, K2Node_MakeStruct_MarinerLayeredButtonAssets) == 0x000068, "Member 'StartGameButton_C_GetAssets::K2Node_MakeStruct_MarinerLayeredButtonAssets' has a wrong offset!");

}


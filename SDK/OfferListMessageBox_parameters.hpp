#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OfferListMessageBox

#include "Basic.hpp"

#include "MangoClient_structs.hpp"


namespace SDK::Params
{

// Function OfferListMessageBox.OfferListMessageBox_C.ExecuteUbergraph_OfferListMessageBox
// 0x0210 (0x0210 - 0x0000)
struct OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1F15[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMangoCMSManager*                       CallFunc_Get_ReturnValue;                          // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMarinerLayeredButton*                  K2Node_Event_ButtonInstance_1;                     // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_OfferId_1;                            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UMangoCMSManager*                       CallFunc_Get_ReturnValue_1;                        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDefaultStoreButton_C*                  K2Node_DynamicCast_AsDefault_Store_Button;         // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F16[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMangoPurchaseOffer                    CallFunc_GetPurchaseOfferById_OutPurchaseOffer;    // 0x0040(0x00D8)()
	bool                                          CallFunc_GetPurchaseOfferById_ReturnValue;         // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F17[0x7];                                     // 0x0119(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMarinerLayeredButton*                  K2Node_Event_ButtonInstance;                       // 0x0120(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_Event_OfferId;                              // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FMangoNativeOffer                      CallFunc_TryGetNativeOfferById_OutNativeOffer;     // 0x0138(0x00C0)()
	bool                                          CallFunc_TryGetNativeOfferById_ReturnValue;        // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1F18[0x7];                                     // 0x01F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UDefaultStoreNativeOfferButton_C*       K2Node_DynamicCast_AsDefault_Store_Native_Offer_Button; // 0x0200(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0208(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox) == 0x000008, "Wrong alignment on OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox");
static_assert(sizeof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox) == 0x000210, "Wrong size on OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, EntryPoint) == 0x000000, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::EntryPoint' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, CallFunc_Get_ReturnValue) == 0x000008, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::CallFunc_Get_ReturnValue' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, K2Node_Event_ButtonInstance_1) == 0x000010, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::K2Node_Event_ButtonInstance_1' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, K2Node_Event_OfferId_1) == 0x000018, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::K2Node_Event_OfferId_1' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, CallFunc_Get_ReturnValue_1) == 0x000028, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::CallFunc_Get_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, K2Node_DynamicCast_AsDefault_Store_Button) == 0x000030, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::K2Node_DynamicCast_AsDefault_Store_Button' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, CallFunc_GetPurchaseOfferById_OutPurchaseOffer) == 0x000040, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::CallFunc_GetPurchaseOfferById_OutPurchaseOffer' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, CallFunc_GetPurchaseOfferById_ReturnValue) == 0x000118, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::CallFunc_GetPurchaseOfferById_ReturnValue' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, K2Node_Event_ButtonInstance) == 0x000120, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::K2Node_Event_ButtonInstance' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, K2Node_Event_OfferId) == 0x000128, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::K2Node_Event_OfferId' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, CallFunc_TryGetNativeOfferById_OutNativeOffer) == 0x000138, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::CallFunc_TryGetNativeOfferById_OutNativeOffer' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, CallFunc_TryGetNativeOfferById_ReturnValue) == 0x0001F8, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::CallFunc_TryGetNativeOfferById_ReturnValue' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, K2Node_DynamicCast_AsDefault_Store_Native_Offer_Button) == 0x000200, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::K2Node_DynamicCast_AsDefault_Store_Native_Offer_Button' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox, K2Node_DynamicCast_bSuccess_1) == 0x000208, "Member 'OfferListMessageBox_C_ExecuteUbergraph_OfferListMessageBox::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

// Function OfferListMessageBox.OfferListMessageBox_C.PopulateNativeOffer
// 0x0018 (0x0018 - 0x0000)
struct OfferListMessageBox_C_PopulateNativeOffer final
{
public:
	class UMarinerLayeredButton*                  ButtonInstance;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 OfferId;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(OfferListMessageBox_C_PopulateNativeOffer) == 0x000008, "Wrong alignment on OfferListMessageBox_C_PopulateNativeOffer");
static_assert(sizeof(OfferListMessageBox_C_PopulateNativeOffer) == 0x000018, "Wrong size on OfferListMessageBox_C_PopulateNativeOffer");
static_assert(offsetof(OfferListMessageBox_C_PopulateNativeOffer, ButtonInstance) == 0x000000, "Member 'OfferListMessageBox_C_PopulateNativeOffer::ButtonInstance' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_PopulateNativeOffer, OfferId) == 0x000008, "Member 'OfferListMessageBox_C_PopulateNativeOffer::OfferId' has a wrong offset!");

// Function OfferListMessageBox.OfferListMessageBox_C.PopulateOffer
// 0x0018 (0x0018 - 0x0000)
struct OfferListMessageBox_C_PopulateOffer final
{
public:
	class UMarinerLayeredButton*                  ButtonInstance;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 OfferId;                                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(OfferListMessageBox_C_PopulateOffer) == 0x000008, "Wrong alignment on OfferListMessageBox_C_PopulateOffer");
static_assert(sizeof(OfferListMessageBox_C_PopulateOffer) == 0x000018, "Wrong size on OfferListMessageBox_C_PopulateOffer");
static_assert(offsetof(OfferListMessageBox_C_PopulateOffer, ButtonInstance) == 0x000000, "Member 'OfferListMessageBox_C_PopulateOffer::ButtonInstance' has a wrong offset!");
static_assert(offsetof(OfferListMessageBox_C_PopulateOffer, OfferId) == 0x000008, "Member 'OfferListMessageBox_C_PopulateOffer::OfferId' has a wrong offset!");

}


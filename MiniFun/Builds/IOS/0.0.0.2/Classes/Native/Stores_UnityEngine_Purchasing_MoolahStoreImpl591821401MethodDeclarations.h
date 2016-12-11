#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Purchasing.MoolahStoreImpl
struct MoolahStoreImpl_t591821401;
// UnityEngine.Purchasing.Extension.IStoreCallback
struct IStoreCallback_t2952761927;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>
struct ReadOnlyCollection_1_t3725915264;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t2477126090;
// System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>
struct List_1_t1212657223;
// UnityEngine.Purchasing.ProductDefinition
struct ProductDefinition_t2168837728;
// System.Action`3<System.String,System.String,System.String>
struct Action_3_t4284513203;
// System.Action`2<System.String,System.String>
struct Action_2_t3074826119;
// UnityEngine.WWWForm
struct WWWForm_t461342257;
// System.Action`3<System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String>
struct Action_3_t3710749045;
// System.Action`2<UnityEngine.Purchasing.LoginResultState,System.String>
struct Action_2_t2121585625;
// System.Action`1<System.String>
struct Action_1_t403047693;
// System.Action`2<UnityEngine.Purchasing.FastRegisterError,System.String>
struct Action_2_t1266291229;
// System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>
struct Action_1_t578162508;
// System.Action`3<System.String,UnityEngine.Purchasing.ValidateReceiptState,System.String>
struct Action_3_t2197841745;
// System.Action`3<System.String,UnityEngine.Purchasing.RequestPayOutState,System.String>
struct Action_3_t77023632;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Produ938787015.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init3875270060.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod2168837728.h"
#include "UnityEngine_UnityEngine_WWWForm461342257.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2097848363.h"
#include "Stores_UnityEngine_Purchasing_CloudMoolahMode2950053564.h"

// System.Void UnityEngine.Purchasing.MoolahStoreImpl::.ctor()
extern "C"  void MoolahStoreImpl__ctor_m3437051869 (MoolahStoreImpl_t591821401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
extern "C"  void MoolahStoreImpl_Initialize_m737209430 (MoolahStoreImpl_t591821401 * __this, Il2CppObject * ___m_callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
extern "C"  void MoolahStoreImpl_RetrieveProducts_m947663141 (MoolahStoreImpl_t591821401 * __this, ReadOnlyCollection_1_t3725915264 * ___productDefinitions0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Purchasing.MoolahStoreImpl::getProductTypeIndex(UnityEngine.Purchasing.ProductType)
extern "C"  int32_t MoolahStoreImpl_getProductTypeIndex_m2848405396 (MoolahStoreImpl_t591821401 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::VaildateProductProcess(System.Boolean,System.String)
extern "C"  void MoolahStoreImpl_VaildateProductProcess_m3308251030 (MoolahStoreImpl_t591821401 * __this, bool ___state0, String_t* ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MoolahStoreImpl::GetCurrentString(System.Object)
extern "C"  String_t* MoolahStoreImpl_GetCurrentString_m3196535286 (MoolahStoreImpl_t591821401 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.MoolahStoreImpl::VaildateProduct(System.String,System.String,System.Action`2<System.Boolean,System.String>)
extern "C"  Il2CppObject * MoolahStoreImpl_VaildateProduct_m1193393360 (MoolahStoreImpl_t591821401 * __this, String_t* ___appkey0, String_t* ___productInfo1, Action_2_t2477126090 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RetrieveProductsSucceeded(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern "C"  void MoolahStoreImpl_RetrieveProductsSucceeded_m2100167157 (MoolahStoreImpl_t591821401 * __this, List_1_t1212657223 * ___products0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RetrieveProductsFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void MoolahStoreImpl_RetrieveProductsFailed_m2903286255 (MoolahStoreImpl_t591821401 * __this, int32_t ___reason0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::ClosePayWebView(System.String)
extern "C"  void MoolahStoreImpl_ClosePayWebView_m1011621086 (MoolahStoreImpl_t591821401 * __this, String_t* ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::PurchaseRusult(System.String)
extern "C"  void MoolahStoreImpl_PurchaseRusult_m533623245 (MoolahStoreImpl_t591821401 * __this, String_t* ___resultJson0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void MoolahStoreImpl_Purchase_m2500187099 (MoolahStoreImpl_t591821401 * __this, ProductDefinition_t2168837728 * ___product0, String_t* ___developerPayload1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RequestAuthCode(System.String,System.String,System.Action`3<System.String,System.String,System.String>,System.Action`2<System.String,System.String>)
extern "C"  void MoolahStoreImpl_RequestAuthCode_m2490315130 (MoolahStoreImpl_t591821401 * __this, String_t* ___productID0, String_t* ___payload1, Action_3_t4284513203 * ___succeed2, Action_2_t3074826119 * ___failed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.MoolahStoreImpl::RequestAuthCode(UnityEngine.WWWForm,System.String,System.String,System.Action`3<System.String,System.String,System.String>,System.Action`2<System.String,System.String>)
extern "C"  Il2CppObject * MoolahStoreImpl_RequestAuthCode_m501021842 (MoolahStoreImpl_t591821401 * __this, WWWForm_t461342257 * ___wf0, String_t* ___productID1, String_t* ___transactionId2, Action_3_t4284513203 * ___succeed3, Action_2_t3074826119 * ___failed4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.MoolahStoreImpl::StartPurchasePolling(System.String,System.String,System.Action`3<System.String,System.String,System.String>,System.Action`3<System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String>)
extern "C"  Il2CppObject * MoolahStoreImpl_StartPurchasePolling_m509609435 (MoolahStoreImpl_t591821401 * __this, String_t* ___authGlobal0, String_t* ___transactionId1, Action_3_t4284513203 * ___purchaseSucceed2, Action_3_t3710749045 * ___purchaseFailed3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::PurchaseSucceed(System.String,System.String,System.String)
extern "C"  void MoolahStoreImpl_PurchaseSucceed_m3817077950 (MoolahStoreImpl_t591821401 * __this, String_t* ___storeSpecificId0, String_t* ___receipt1, String_t* ___transactionId2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::PurchaseFailed(System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String)
extern "C"  void MoolahStoreImpl_PurchaseFailed_m1235366097 (MoolahStoreImpl_t591821401 * __this, String_t* ___storeSpecificId0, int32_t ___reason1, String_t* ___msg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
extern "C"  void MoolahStoreImpl_FinishTransaction_m1717350745 (MoolahStoreImpl_t591821401 * __this, ProductDefinition_t2168837728 * ___product0, String_t* ___transactionId1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MoolahStoreImpl::GetStringMD5(System.String)
extern "C"  String_t* MoolahStoreImpl_GetStringMD5_m623157921 (MoolahStoreImpl_t591821401 * __this, String_t* ___md5String0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MoolahStoreImpl::GetStoreSpecificId(System.String)
extern "C"  String_t* MoolahStoreImpl_GetStoreSpecificId_m1780507872 (MoolahStoreImpl_t591821401 * __this, String_t* ___MD5productID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MoolahStoreImpl::get_appKey()
extern "C"  String_t* MoolahStoreImpl_get_appKey_m1245463697 (MoolahStoreImpl_t591821401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::set_appKey(System.String)
extern "C"  void MoolahStoreImpl_set_appKey_m1223583968 (MoolahStoreImpl_t591821401 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MoolahStoreImpl::get_hashKey()
extern "C"  String_t* MoolahStoreImpl_get_hashKey_m3283265248 (MoolahStoreImpl_t591821401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::set_hashKey(System.String)
extern "C"  void MoolahStoreImpl_set_hashKey_m2534220595 (MoolahStoreImpl_t591821401 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::SetMode(UnityEngine.Purchasing.CloudMoolahMode)
extern "C"  void MoolahStoreImpl_SetMode_m3657234843 (MoolahStoreImpl_t591821401 * __this, int32_t ___mode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.CloudMoolahMode UnityEngine.Purchasing.MoolahStoreImpl::GetMode()
extern "C"  int32_t MoolahStoreImpl_GetMode_m2937656532 (MoolahStoreImpl_t591821401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.MoolahStoreImpl::IsTestMode()
extern "C"  bool MoolahStoreImpl_IsTestMode_m4064482786 (MoolahStoreImpl_t591821401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::Login(System.String,System.String,System.Action`2<UnityEngine.Purchasing.LoginResultState,System.String>)
extern "C"  void MoolahStoreImpl_Login_m2387154913 (MoolahStoreImpl_t591821401 * __this, String_t* ___CMUserName0, String_t* ___CMPassword1, Action_2_t2121585625 * ___LoginResult2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::LoginProcess(System.String,System.Action`2<UnityEngine.Purchasing.LoginResultState,System.String>)
extern "C"  void MoolahStoreImpl_LoginProcess_m3539068806 (MoolahStoreImpl_t591821401 * __this, String_t* ___result0, Action_2_t2121585625 * ___LoginResult1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::FastRegister(System.String,System.Action`1<System.String>,System.Action`2<UnityEngine.Purchasing.FastRegisterError,System.String>)
extern "C"  void MoolahStoreImpl_FastRegister_m980491581 (MoolahStoreImpl_t591821401 * __this, String_t* ___CMpassword0, Action_1_t403047693 * ___RegisterSucceed1, Action_2_t1266291229 * ___RegisterFailed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RegisterProcess(System.String,System.Action`1<System.String>,System.Action`2<UnityEngine.Purchasing.FastRegisterError,System.String>)
extern "C"  void MoolahStoreImpl_RegisterProcess_m3727050590 (MoolahStoreImpl_t591821401 * __this, String_t* ___result0, Action_1_t403047693 * ___RegisterSucceed1, Action_2_t1266291229 * ___RegisterFailed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RestoreTransactionID(System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>)
extern "C"  void MoolahStoreImpl_RestoreTransactionID_m3594002469 (MoolahStoreImpl_t591821401 * __this, Action_1_t578162508 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.MoolahStoreImpl::RestoreTransactionIDProcess(System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>)
extern "C"  Il2CppObject * MoolahStoreImpl_RestoreTransactionIDProcess_m3289642696 (MoolahStoreImpl_t591821401 * __this, Action_1_t578162508 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::ValidateReceipt(System.String,System.String,System.Action`3<System.String,UnityEngine.Purchasing.ValidateReceiptState,System.String>)
extern "C"  void MoolahStoreImpl_ValidateReceipt_m3274978659 (MoolahStoreImpl_t591821401 * __this, String_t* ___transactionId0, String_t* ___receipt1, Action_3_t2197841745 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.MoolahStoreImpl::ValidateReceiptProcess(System.String,System.String,System.Action`3<System.String,UnityEngine.Purchasing.ValidateReceiptState,System.String>)
extern "C"  Il2CppObject * MoolahStoreImpl_ValidateReceiptProcess_m866525642 (MoolahStoreImpl_t591821401 * __this, String_t* ___transactionId0, String_t* ___receipt1, Action_3_t2197841745 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RequestPayOut(System.String,System.Action`3<System.String,UnityEngine.Purchasing.RequestPayOutState,System.String>)
extern "C"  void MoolahStoreImpl_RequestPayOut_m2414256063 (MoolahStoreImpl_t591821401 * __this, String_t* ___transactionId0, Action_3_t77023632 * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.Purchasing.MoolahStoreImpl::PayOutProcess(System.String,System.Action`3<System.String,UnityEngine.Purchasing.RequestPayOutState,System.String>)
extern "C"  Il2CppObject * MoolahStoreImpl_PayOutProcess_m1764684419 (MoolahStoreImpl_t591821401 * __this, String_t* ___transactionId0, Action_3_t77023632 * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::RemoveAuthCode(System.String)
extern "C"  void MoolahStoreImpl_RemoveAuthCode_m1932438178 (MoolahStoreImpl_t591821401 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::AddAuthCode(System.String,System.String)
extern "C"  void MoolahStoreImpl_AddAuthCode_m1081600429 (MoolahStoreImpl_t591821401 * __this, String_t* ___key0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Purchasing.MoolahStoreImpl::GetAuthCode(System.String)
extern "C"  String_t* MoolahStoreImpl_GetAuthCode_m1959247679 (MoolahStoreImpl_t591821401 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::ClearAuthCode()
extern "C"  void MoolahStoreImpl_ClearAuthCode_m1213641629 (MoolahStoreImpl_t591821401 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::.cctor()
extern "C"  void MoolahStoreImpl__cctor_m2987296624 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::<RetrieveProducts>m__0(System.Boolean,System.String)
extern "C"  void MoolahStoreImpl_U3CRetrieveProductsU3Em__0_m58253247 (MoolahStoreImpl_t591821401 * __this, bool ___state0, String_t* ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.MoolahStoreImpl::<FastRegister>m__1(System.Object,System.Boolean)
extern "C"  void MoolahStoreImpl_U3CFastRegisterU3Em__1_m1898219831 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___state0, bool ___timeOut1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

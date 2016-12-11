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

// IAPDemo
struct IAPDemo_t2300162107;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t782956868;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2226383159;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t816323924;
// UnityEngine.Purchasing.Product
struct Product_t3127875693;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>
struct IEnumerable_1_t2133821354;
// System.String
struct String_t;
// UnityEngine.UI.Dropdown
struct Dropdown_t4201779933;
// UnityEngine.UI.Button
struct Button_t3896396478;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch353703105.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch816323924.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod3127875693.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2097848363.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init3875270060.h"
#include "Stores_UnityEngine_Purchasing_LoginResultState1626779867.h"
#include "mscorlib_System_String7231557.h"
#include "Stores_UnityEngine_Purchasing_FastRegisterError319046887.h"
#include "Stores_UnityEngine_Purchasing_RestoreTransactionIDS182346372.h"
#include "Stores_UnityEngine_Purchasing_ValidateReceiptState2589674111.h"

// System.Void IAPDemo::.ctor()
extern "C"  void IAPDemo__ctor_m2472349788 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void IAPDemo_OnInitialized_m4145729570 (IAPDemo_t2300162107 * __this, Il2CppObject * ___controller0, Il2CppObject * ___extensions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseProcessingResult IAPDemo::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t IAPDemo_ProcessPurchase_m1313773462 (IAPDemo_t2300162107 * __this, PurchaseEventArgs_t816323924 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void IAPDemo_OnPurchaseFailed_m2134414947 (IAPDemo_t2300162107 * __this, Product_t3127875693 * ___item0, int32_t ___r1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void IAPDemo_OnInitializeFailed_m790429919 (IAPDemo_t2300162107 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::Awake()
extern "C"  void IAPDemo_Awake_m2709955007 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnTransactionsRestored(System.Boolean)
extern "C"  void IAPDemo_OnTransactionsRestored_m2391586217 (IAPDemo_t2300162107 * __this, bool ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::OnDeferred(UnityEngine.Purchasing.Product)
extern "C"  void IAPDemo_OnDeferred_m1837455280 (IAPDemo_t2300162107 * __this, Product_t3127875693 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::InitUI(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>)
extern "C"  void IAPDemo_InitUI_m1256308941 (IAPDemo_t2300162107 * __this, Il2CppObject* ___items0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::LoginResult(UnityEngine.Purchasing.LoginResultState,System.String)
extern "C"  void IAPDemo_LoginResult_m1288848458 (IAPDemo_t2300162107 * __this, int32_t ___state0, String_t* ___errorMsg1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::RegisterSucceeded(System.String)
extern "C"  void IAPDemo_RegisterSucceeded_m2669725322 (IAPDemo_t2300162107 * __this, String_t* ___cmUserName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::RegisterFailed(UnityEngine.Purchasing.FastRegisterError,System.String)
extern "C"  void IAPDemo_RegisterFailed_m3213545556 (IAPDemo_t2300162107 * __this, int32_t ___error0, String_t* ___errorMessage1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::UpdateHistoryUI()
extern "C"  void IAPDemo_UpdateHistoryUI_m2835966425 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::UpdateInteractable()
extern "C"  void IAPDemo_UpdateInteractable_m2185924321 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::Update()
extern "C"  void IAPDemo_Update_m1060294193 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Dropdown IAPDemo::GetDropdown()
extern "C"  Dropdown_t4201779933 * IAPDemo_GetDropdown_m664285184 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetBuyButton()
extern "C"  Button_t3896396478 * IAPDemo_GetBuyButton_m2634699276 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetRestoreButton()
extern "C"  Button_t3896396478 * IAPDemo_GetRestoreButton_m2508131476 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetRegisterButton()
extern "C"  Button_t3896396478 * IAPDemo_GetRegisterButton_m3708998051 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetLoginButton()
extern "C"  Button_t3896396478 * IAPDemo_GetLoginButton_m1272483631 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetValidateButton()
extern "C"  Button_t3896396478 * IAPDemo_GetValidateButton_m2914228502 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Button IAPDemo::GetButton(System.String)
extern "C"  Button_t3896396478 * IAPDemo_GetButton_m2771500066 (IAPDemo_t2300162107 * __this, String_t* ___buttonName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text IAPDemo::GetText(System.Boolean)
extern "C"  Text_t9039225 * IAPDemo_GetText_m1929841143 (IAPDemo_t2300162107 * __this, bool ___right0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__1(System.Int32)
extern "C"  void IAPDemo_U3CInitUIU3Em__1_m4122963739 (IAPDemo_t2300162107 * __this, int32_t ___selectedItem0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__2()
extern "C"  void IAPDemo_U3CInitUIU3Em__2_m3136461963 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__3()
extern "C"  void IAPDemo_U3CInitUIU3Em__3_m3136462924 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__4()
extern "C"  void IAPDemo_U3CInitUIU3Em__4_m3136463885 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__5()
extern "C"  void IAPDemo_U3CInitUIU3Em__5_m3136464846 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__6()
extern "C"  void IAPDemo_U3CInitUIU3Em__6_m3136465807 (IAPDemo_t2300162107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__7(UnityEngine.Purchasing.RestoreTransactionIDState)
extern "C"  void IAPDemo_U3CInitUIU3Em__7_m1209307907 (IAPDemo_t2300162107 * __this, int32_t ___restoreTransactionIDState0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void IAPDemo::<InitUI>m__8(System.String,UnityEngine.Purchasing.ValidateReceiptState,System.String)
extern "C"  void IAPDemo_U3CInitUIU3Em__8_m448640593 (Il2CppObject * __this /* static, unused */, String_t* ___transactionID0, int32_t ___state1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;

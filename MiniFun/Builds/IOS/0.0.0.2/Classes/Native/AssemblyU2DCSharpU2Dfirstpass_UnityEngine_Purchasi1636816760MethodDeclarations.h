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

// UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager
struct IAPButtonStoreManager_t1636816760;
// UnityEngine.Purchasing.IStoreController
struct IStoreController_t782956868;
// UnityEngine.Purchasing.IExtensionProvider
struct IExtensionProvider_t2226383159;
// System.String
struct String_t;
// UnityEngine.Purchasing.Product
struct Product_t3127875693;
// UnityEngine.Purchasing.IAPButton
struct IAPButton_t2420027752;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t816323924;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_Purchasi2420027752.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Init3875270060.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch353703105.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch816323924.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod3127875693.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2097848363.h"

// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::.ctor()
extern "C"  void IAPButtonStoreManager__ctor_m330277847 (IAPButtonStoreManager_t1636816760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::.cctor()
extern "C"  void IAPButtonStoreManager__cctor_m1166582454 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::get_Instance()
extern "C"  IAPButtonStoreManager_t1636816760 * IAPButtonStoreManager_get_Instance_m4072173336 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.IStoreController UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::get_StoreController()
extern "C"  Il2CppObject * IAPButtonStoreManager_get_StoreController_m4269583651 (IAPButtonStoreManager_t1636816760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.IExtensionProvider UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::get_ExtensionProvider()
extern "C"  Il2CppObject * IAPButtonStoreManager_get_ExtensionProvider_m1668836041 (IAPButtonStoreManager_t1636816760 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::HasProductInCatalog(System.String)
extern "C"  bool IAPButtonStoreManager_HasProductInCatalog_m3523430954 (IAPButtonStoreManager_t1636816760 * __this, String_t* ___productID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.Product UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::GetProduct(System.String)
extern "C"  Product_t3127875693 * IAPButtonStoreManager_GetProduct_m1698949581 (IAPButtonStoreManager_t1636816760 * __this, String_t* ___productID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::AddButton(UnityEngine.Purchasing.IAPButton)
extern "C"  void IAPButtonStoreManager_AddButton_m3213687991 (IAPButtonStoreManager_t1636816760 * __this, IAPButton_t2420027752 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::RemoveButton(UnityEngine.Purchasing.IAPButton)
extern "C"  void IAPButtonStoreManager_RemoveButton_m2906109234 (IAPButtonStoreManager_t1636816760 * __this, IAPButton_t2420027752 * ___button0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::InitiatePurchase(System.String)
extern "C"  void IAPButtonStoreManager_InitiatePurchase_m1561234843 (IAPButtonStoreManager_t1636816760 * __this, String_t* ___productID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
extern "C"  void IAPButtonStoreManager_OnInitialized_m3583304967 (IAPButtonStoreManager_t1636816760 * __this, Il2CppObject * ___controller0, Il2CppObject * ___extensions1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern "C"  void IAPButtonStoreManager_OnInitializeFailed_m1516300804 (IAPButtonStoreManager_t1636816760 * __this, int32_t ___error0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t IAPButtonStoreManager_ProcessPurchase_m2369550687 (IAPButtonStoreManager_t1636816760 * __this, PurchaseEventArgs_t816323924 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton/IAPButtonStoreManager::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void IAPButtonStoreManager_OnPurchaseFailed_m802698142 (IAPButtonStoreManager_t1636816760 * __this, Product_t3127875693 * ___product0, int32_t ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

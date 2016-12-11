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

// UnityEngine.Purchasing.IAPButton
struct IAPButton_t2420027752;
// UnityEngine.Purchasing.PurchaseEventArgs
struct PurchaseEventArgs_t816323924;
// UnityEngine.Purchasing.Product
struct Product_t3127875693;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch353703105.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purch816323924.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Prod3127875693.h"
#include "UnityEngine_Purchasing_UnityEngine_Purchasing_Purc2097848363.h"

// System.Void UnityEngine.Purchasing.IAPButton::.ctor()
extern "C"  void IAPButton__ctor_m3265638814 (IAPButton_t2420027752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::Start()
extern "C"  void IAPButton_Start_m2212776606 (IAPButton_t2420027752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::OnEnable()
extern "C"  void IAPButton_OnEnable_m3413264680 (IAPButton_t2420027752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::OnDisable()
extern "C"  void IAPButton_OnDisable_m3172927237 (IAPButton_t2420027752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::PurchaseProduct()
extern "C"  void IAPButton_PurchaseProduct_m3474776618 (IAPButton_t2420027752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IAPButton::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern "C"  int32_t IAPButton_ProcessPurchase_m2092087974 (IAPButton_t2420027752 * __this, PurchaseEventArgs_t816323924 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.IAPButton::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern "C"  void IAPButton_OnPurchaseFailed_m3106728485 (IAPButton_t2420027752 * __this, Product_t3127875693 * ___product0, int32_t ___reason1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

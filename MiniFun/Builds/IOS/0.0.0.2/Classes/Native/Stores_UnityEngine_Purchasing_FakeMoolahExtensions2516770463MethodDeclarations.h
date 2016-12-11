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

// UnityEngine.Purchasing.FakeMoolahExtensions
struct FakeMoolahExtensions_t2516770463;
// System.String
struct String_t;
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
#include "mscorlib_System_String7231557.h"

// System.Void UnityEngine.Purchasing.FakeMoolahExtensions::.ctor()
extern "C"  void FakeMoolahExtensions__ctor_m2078501407 (FakeMoolahExtensions_t2516770463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeMoolahExtensions::Login(System.String,System.String,System.Action`2<UnityEngine.Purchasing.LoginResultState,System.String>)
extern "C"  void FakeMoolahExtensions_Login_m1157046691 (FakeMoolahExtensions_t2516770463 * __this, String_t* ___CMUserName0, String_t* ___CMPassword1, Action_2_t2121585625 * ___LoginResult2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeMoolahExtensions::FastRegister(System.String,System.Action`1<System.String>,System.Action`2<UnityEngine.Purchasing.FastRegisterError,System.String>)
extern "C"  void FakeMoolahExtensions_FastRegister_m3458216379 (FakeMoolahExtensions_t2516770463 * __this, String_t* ___CMPassword0, Action_1_t403047693 * ___RegisterSucceed1, Action_2_t1266291229 * ___registerFailed2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeMoolahExtensions::RestoreTransactionID(System.Action`1<UnityEngine.Purchasing.RestoreTransactionIDState>)
extern "C"  void FakeMoolahExtensions_RestoreTransactionID_m1352824423 (FakeMoolahExtensions_t2516770463 * __this, Action_1_t578162508 * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeMoolahExtensions::ValidateReceipt(System.String,System.String,System.Action`3<System.String,UnityEngine.Purchasing.ValidateReceiptState,System.String>)
extern "C"  void FakeMoolahExtensions_ValidateReceipt_m3866486821 (FakeMoolahExtensions_t2516770463 * __this, String_t* ___transactionId0, String_t* ___receipt1, Action_3_t2197841745 * ___result2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Purchasing.FakeMoolahExtensions::RequestPayOut(System.String,System.Action`3<System.String,UnityEngine.Purchasing.RequestPayOutState,System.String>)
extern "C"  void FakeMoolahExtensions_RequestPayOut_m615309057 (FakeMoolahExtensions_t2516770463 * __this, String_t* ___transactionId0, Action_3_t77023632 * ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.DigestClient
struct DigestClient_t3690764489;
// System.Collections.Hashtable
struct Hashtable_t1407064410;
// System.Net.Authorization
struct Authorization_t3486603059;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t51806901;
// System.Net.ICredentials
struct ICredentials_t2177637613;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "System_System_Net_WebRequest51806901.h"

// System.Void System.Net.DigestClient::.ctor()
extern "C"  void DigestClient__ctor_m299255755 (DigestClient_t3690764489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::.cctor()
extern "C"  void DigestClient__cctor_m204897602 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.DigestClient::get_Cache()
extern "C"  Hashtable_t1407064410 * DigestClient_get_Cache_m499281433 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::CheckExpired(System.Int32)
extern "C"  void DigestClient_CheckExpired_m4238582311 (Il2CppObject * __this /* static, unused */, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3486603059 * DigestClient_Authenticate_m1457292628 (DigestClient_t3690764489 * __this, String_t* ___challenge0, WebRequest_t51806901 * ___webRequest1, Il2CppObject * ___credentials2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C"  Authorization_t3486603059 * DigestClient_PreAuthenticate_m3609215481 (DigestClient_t3690764489 * __this, WebRequest_t51806901 * ___webRequest0, Il2CppObject * ___credentials1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestClient::get_AuthenticationType()
extern "C"  String_t* DigestClient_get_AuthenticationType_m1949045937 (DigestClient_t3690764489 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

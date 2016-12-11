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

// UnityEngine.Purchasing.ProductCatalog
struct ProductCatalog_t3111118842;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem>
struct ICollection_1_t1296419280;
// System.String
struct String_t;
// UnityEngine.TextAsset
struct TextAsset_t3836129977;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_TextAsset3836129977.h"

// System.Void UnityEngine.Purchasing.ProductCatalog::.ctor()
extern "C"  void ProductCatalog__ctor_m1934426660 (ProductCatalog_t3111118842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::get_allProducts()
extern "C"  Il2CppObject* ProductCatalog_get_allProducts_m2280041110 (ProductCatalog_t3111118842 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::Deserialize(System.String)
extern "C"  ProductCatalog_t3111118842 * ProductCatalog_Deserialize_m515673233 (Il2CppObject * __this /* static, unused */, String_t* ___catalogJSON0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::FromTextAsset(UnityEngine.TextAsset)
extern "C"  ProductCatalog_t3111118842 * ProductCatalog_FromTextAsset_m3079605147 (Il2CppObject * __this /* static, unused */, TextAsset_t3836129977 * ___asset0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Purchasing.ProductCatalog UnityEngine.Purchasing.ProductCatalog::LoadDefaultCatalog()
extern "C"  ProductCatalog_t3111118842 * ProductCatalog_LoadDefaultCatalog_m297196590 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem>
struct List_1_t1770014845;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.ProductCatalog
struct  ProductCatalog_t3111118842  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Purchasing.ProductCatalogItem> UnityEngine.Purchasing.ProductCatalog::products
	List_1_t1770014845 * ___products_0;

public:
	inline static int32_t get_offset_of_products_0() { return static_cast<int32_t>(offsetof(ProductCatalog_t3111118842, ___products_0)); }
	inline List_1_t1770014845 * get_products_0() const { return ___products_0; }
	inline List_1_t1770014845 ** get_address_of_products_0() { return &___products_0; }
	inline void set_products_0(List_1_t1770014845 * value)
	{
		___products_0 = value;
		Il2CppCodeGenWriteBarrier(&___products_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

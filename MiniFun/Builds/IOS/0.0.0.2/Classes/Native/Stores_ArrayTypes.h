#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// UnityEngine.Purchasing.ProductCatalogItem
struct ProductCatalogItem_t401829293;
// UnityEngine.Purchasing.StoreID
struct StoreID_t1553078586;
// UnityEngine.Purchasing.LocalizedProductDescription
struct LocalizedProductDescription_t660098150;

#include "mscorlib_System_Array1146569071.h"
#include "Stores_UnityEngine_Purchasing_ProductCatalogItem401829293.h"
#include "Stores_UnityEngine_Purchasing_StoreID1553078586.h"
#include "Stores_UnityEngine_Purchasing_LocalizedProductDescr660098150.h"
#include "Stores_UnityEngine_Purchasing_AndroidStore2837959106.h"

#pragma once
// UnityEngine.Purchasing.ProductCatalogItem[]
struct ProductCatalogItemU5BU5D_t2409123072  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ProductCatalogItem_t401829293 * m_Items[1];

public:
	inline ProductCatalogItem_t401829293 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline ProductCatalogItem_t401829293 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, ProductCatalogItem_t401829293 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Purchasing.StoreID[]
struct StoreIDU5BU5D_t2677426335  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) StoreID_t1553078586 * m_Items[1];

public:
	inline StoreID_t1553078586 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline StoreID_t1553078586 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, StoreID_t1553078586 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Purchasing.LocalizedProductDescription[]
struct LocalizedProductDescriptionU5BU5D_t1283319619  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) LocalizedProductDescription_t660098150 * m_Items[1];

public:
	inline LocalizedProductDescription_t660098150 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline LocalizedProductDescription_t660098150 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, LocalizedProductDescription_t660098150 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.Purchasing.AndroidStore[]
struct AndroidStoreU5BU5D_t4148245751  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline int32_t* GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};

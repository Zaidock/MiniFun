﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Purchasing.Extension.IStore
struct IStore_t1928375778;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance
struct  StoreInstance_t603834631  : public Il2CppObject
{
public:
	// System.String UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::<storeName>k__BackingField
	String_t* ___U3CstoreNameU3Ek__BackingField_0;
	// UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.StandardPurchasingModule/StoreInstance::<instance>k__BackingField
	Il2CppObject * ___U3CinstanceU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstoreNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StoreInstance_t603834631, ___U3CstoreNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CstoreNameU3Ek__BackingField_0() const { return ___U3CstoreNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CstoreNameU3Ek__BackingField_0() { return &___U3CstoreNameU3Ek__BackingField_0; }
	inline void set_U3CstoreNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CstoreNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CstoreNameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CinstanceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StoreInstance_t603834631, ___U3CinstanceU3Ek__BackingField_1)); }
	inline Il2CppObject * get_U3CinstanceU3Ek__BackingField_1() const { return ___U3CinstanceU3Ek__BackingField_1; }
	inline Il2CppObject ** get_address_of_U3CinstanceU3Ek__BackingField_1() { return &___U3CinstanceU3Ek__BackingField_1; }
	inline void set_U3CinstanceU3Ek__BackingField_1(Il2CppObject * value)
	{
		___U3CinstanceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CinstanceU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

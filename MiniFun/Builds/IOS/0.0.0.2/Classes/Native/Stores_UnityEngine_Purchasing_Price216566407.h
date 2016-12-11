#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t3230847821;

#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Decimal1954350631.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.Price
struct  Price_t216566407  : public Il2CppObject
{
public:
	// System.Decimal UnityEngine.Purchasing.Price::value
	Decimal_t1954350631  ___value_0;
	// System.Int32[] UnityEngine.Purchasing.Price::data
	Int32U5BU5D_t3230847821* ___data_1;
	// System.Double UnityEngine.Purchasing.Price::num
	double ___num_2;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Price_t216566407, ___value_0)); }
	inline Decimal_t1954350631  get_value_0() const { return ___value_0; }
	inline Decimal_t1954350631 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t1954350631  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Price_t216566407, ___data_1)); }
	inline Int32U5BU5D_t3230847821* get_data_1() const { return ___data_1; }
	inline Int32U5BU5D_t3230847821** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Int32U5BU5D_t3230847821* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of_num_2() { return static_cast<int32_t>(offsetof(Price_t216566407, ___num_2)); }
	inline double get_num_2() const { return ___num_2; }
	inline double* get_address_of_num_2() { return &___num_2; }
	inline void set_num_2(double value)
	{
		___num_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

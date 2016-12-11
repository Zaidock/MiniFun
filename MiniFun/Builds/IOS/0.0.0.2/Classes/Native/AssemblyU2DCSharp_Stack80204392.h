#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stack
struct  Stack_t80204392  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Rigidbody2D Stack::rigi
	Rigidbody2D_t1743771669 * ___rigi_2;
	// System.Boolean Stack::down
	bool ___down_3;
	// System.Boolean Stack::addedNew
	bool ___addedNew_4;
	// System.Boolean Stack::hasStarted
	bool ___hasStarted_5;
	// UnityEngine.GameObject Stack::stack
	GameObject_t3674682005 * ___stack_6;
	// UnityEngine.Vector3 Stack::startingPos
	Vector3_t4282066566  ___startingPos_7;

public:
	inline static int32_t get_offset_of_rigi_2() { return static_cast<int32_t>(offsetof(Stack_t80204392, ___rigi_2)); }
	inline Rigidbody2D_t1743771669 * get_rigi_2() const { return ___rigi_2; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rigi_2() { return &___rigi_2; }
	inline void set_rigi_2(Rigidbody2D_t1743771669 * value)
	{
		___rigi_2 = value;
		Il2CppCodeGenWriteBarrier(&___rigi_2, value);
	}

	inline static int32_t get_offset_of_down_3() { return static_cast<int32_t>(offsetof(Stack_t80204392, ___down_3)); }
	inline bool get_down_3() const { return ___down_3; }
	inline bool* get_address_of_down_3() { return &___down_3; }
	inline void set_down_3(bool value)
	{
		___down_3 = value;
	}

	inline static int32_t get_offset_of_addedNew_4() { return static_cast<int32_t>(offsetof(Stack_t80204392, ___addedNew_4)); }
	inline bool get_addedNew_4() const { return ___addedNew_4; }
	inline bool* get_address_of_addedNew_4() { return &___addedNew_4; }
	inline void set_addedNew_4(bool value)
	{
		___addedNew_4 = value;
	}

	inline static int32_t get_offset_of_hasStarted_5() { return static_cast<int32_t>(offsetof(Stack_t80204392, ___hasStarted_5)); }
	inline bool get_hasStarted_5() const { return ___hasStarted_5; }
	inline bool* get_address_of_hasStarted_5() { return &___hasStarted_5; }
	inline void set_hasStarted_5(bool value)
	{
		___hasStarted_5 = value;
	}

	inline static int32_t get_offset_of_stack_6() { return static_cast<int32_t>(offsetof(Stack_t80204392, ___stack_6)); }
	inline GameObject_t3674682005 * get_stack_6() const { return ___stack_6; }
	inline GameObject_t3674682005 ** get_address_of_stack_6() { return &___stack_6; }
	inline void set_stack_6(GameObject_t3674682005 * value)
	{
		___stack_6 = value;
		Il2CppCodeGenWriteBarrier(&___stack_6, value);
	}

	inline static int32_t get_offset_of_startingPos_7() { return static_cast<int32_t>(offsetof(Stack_t80204392, ___startingPos_7)); }
	inline Vector3_t4282066566  get_startingPos_7() const { return ___startingPos_7; }
	inline Vector3_t4282066566 * get_address_of_startingPos_7() { return &___startingPos_7; }
	inline void set_startingPos_7(Vector3_t4282066566  value)
	{
		___startingPos_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Stack
struct Stack_t80204392;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameTower
struct  GameTower_t2994827799  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean GameTower::hasStarted
	bool ___hasStarted_2;
	// Stack GameTower::stack
	Stack_t80204392 * ___stack_3;

public:
	inline static int32_t get_offset_of_hasStarted_2() { return static_cast<int32_t>(offsetof(GameTower_t2994827799, ___hasStarted_2)); }
	inline bool get_hasStarted_2() const { return ___hasStarted_2; }
	inline bool* get_address_of_hasStarted_2() { return &___hasStarted_2; }
	inline void set_hasStarted_2(bool value)
	{
		___hasStarted_2 = value;
	}

	inline static int32_t get_offset_of_stack_3() { return static_cast<int32_t>(offsetof(GameTower_t2994827799, ___stack_3)); }
	inline Stack_t80204392 * get_stack_3() const { return ___stack_3; }
	inline Stack_t80204392 ** get_address_of_stack_3() { return &___stack_3; }
	inline void set_stack_3(Stack_t80204392 * value)
	{
		___stack_3 = value;
		Il2CppCodeGenWriteBarrier(&___stack_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

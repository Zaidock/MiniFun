#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform[]
struct TransformU5BU5D_t3792884695;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Spawner
struct  Spawner_t3948062024  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Transform[] Spawner::spawnLocation
	TransformU5BU5D_t3792884695* ___spawnLocation_2;
	// UnityEngine.GameObject[] Spawner::whatToSpawnPrefab
	GameObjectU5BU5D_t2662109048* ___whatToSpawnPrefab_3;
	// UnityEngine.GameObject[] Spawner::whatToSpawnClone
	GameObjectU5BU5D_t2662109048* ___whatToSpawnClone_4;

public:
	inline static int32_t get_offset_of_spawnLocation_2() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___spawnLocation_2)); }
	inline TransformU5BU5D_t3792884695* get_spawnLocation_2() const { return ___spawnLocation_2; }
	inline TransformU5BU5D_t3792884695** get_address_of_spawnLocation_2() { return &___spawnLocation_2; }
	inline void set_spawnLocation_2(TransformU5BU5D_t3792884695* value)
	{
		___spawnLocation_2 = value;
		Il2CppCodeGenWriteBarrier(&___spawnLocation_2, value);
	}

	inline static int32_t get_offset_of_whatToSpawnPrefab_3() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___whatToSpawnPrefab_3)); }
	inline GameObjectU5BU5D_t2662109048* get_whatToSpawnPrefab_3() const { return ___whatToSpawnPrefab_3; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_whatToSpawnPrefab_3() { return &___whatToSpawnPrefab_3; }
	inline void set_whatToSpawnPrefab_3(GameObjectU5BU5D_t2662109048* value)
	{
		___whatToSpawnPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___whatToSpawnPrefab_3, value);
	}

	inline static int32_t get_offset_of_whatToSpawnClone_4() { return static_cast<int32_t>(offsetof(Spawner_t3948062024, ___whatToSpawnClone_4)); }
	inline GameObjectU5BU5D_t2662109048* get_whatToSpawnClone_4() const { return ___whatToSpawnClone_4; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_whatToSpawnClone_4() { return &___whatToSpawnClone_4; }
	inline void set_whatToSpawnClone_4(GameObjectU5BU5D_t2662109048* value)
	{
		___whatToSpawnClone_4 = value;
		Il2CppCodeGenWriteBarrier(&___whatToSpawnClone_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

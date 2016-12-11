#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Collisions
struct Collisions_t381123489;
// UnityEngine.Collider2D
struct Collider2D_t1552025098;
// GameTower
struct GameTower_t2994827799;
// SceneHandler
struct SceneHandler_t2982524222;
// System.String
struct String_t;
// Spawner
struct Spawner_t3948062024;
// Stack
struct Stack_t80204392;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// System.Object
struct Il2CppObject;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_Collisions381123489.h"
#include "AssemblyU2DCSharp_Collisions381123489MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2D1552025098.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharp_GameTower2994827799.h"
#include "AssemblyU2DCSharp_GameTower2994827799MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "mscorlib_System_Int321153838500.h"
#include "AssemblyU2DCSharp_Stack80204392.h"
#include "AssemblyU2DCSharp_SceneHandler2982524222.h"
#include "AssemblyU2DCSharp_SceneHandler2982524222MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SceneManagement_SceneManag2940962239MethodDeclarations.h"
#include "AssemblyU2DCSharp_Spawner3948062024.h"
#include "AssemblyU2DCSharp_Spawner3948062024MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "mscorlib_System_Single4291918972.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "AssemblyU2DCSharp_Stack80204392MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time4241968337MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Space4209342076.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, method) ((  Rigidbody2D_t1743771669 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_AddComponent_TisIl2CppObject_m3131062005_gshared (GameObject_t3674682005 * __this, const MethodInfo* method);
#define GameObject_AddComponent_TisIl2CppObject_m3131062005(__this, method) ((  Il2CppObject * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m3131062005_gshared)(__this, method)
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody2D>()
#define GameObject_AddComponent_TisRigidbody2D_t1743771669_m2457016804(__this, method) ((  Rigidbody2D_t1743771669 * (*) (GameObject_t3674682005 *, const MethodInfo*))GameObject_AddComponent_TisIl2CppObject_m3131062005_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Collisions::.ctor()
extern "C"  void Collisions__ctor_m243180058 (Collisions_t381123489 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Collisions::OnTriggerEnter2D(UnityEngine.Collider2D)
extern Il2CppCodeGenString* _stringLiteral3602449046;
extern const uint32_t Collisions_OnTriggerEnter2D_m110930078_MetadataUsageId;
extern "C"  void Collisions_OnTriggerEnter2D_m110930078 (Collisions_t381123489 * __this, Collider2D_t1552025098 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Collisions_OnTriggerEnter2D_m110930078_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral3602449046, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameTower::.ctor()
extern "C"  void GameTower__ctor_m2998078772 (GameTower_t2994827799 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameTower::Start()
extern "C"  void GameTower_Start_m1945216564 (GameTower_t2994827799 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameTower::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2512637147;
extern const uint32_t GameTower_Update_m178023513_MetadataUsageId;
extern "C"  void GameTower_Update_m178023513 (GameTower_t2994827799 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (GameTower_Update_m178023513_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = __this->get_hasStarted_2();
		if (L_0)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_1 = Input_GetMouseButtonDown_m2031691843(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		__this->set_hasStarted_2((bool)1);
		Stack_t80204392 * L_2 = __this->get_stack_3();
		NullCheck(L_2);
		L_2->set_hasStarted_5((bool)1);
		MonoBehaviour_print_m1497342762(NULL /*static, unused*/, _stringLiteral2512637147, /*hidden argument*/NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.Void SceneHandler::.ctor()
extern "C"  void SceneHandler__ctor_m442975005 (SceneHandler_t2982524222 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void SceneHandler::loadScene(System.String)
extern "C"  void SceneHandler_loadScene_m2952273793 (SceneHandler_t2982524222 * __this, String_t* ___name0, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name0;
		SceneManager_LoadScene_m2167814033(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spawner::.ctor()
extern "C"  void Spawner__ctor_m1839725347 (Spawner_t3948062024 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spawner::Start()
extern "C"  void Spawner_Start_m786863139 (Spawner_t3948062024 * __this, const MethodInfo* method)
{
	{
		Spawner_spawnStack_m2058187310(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Spawner::spawnStack()
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* GameObject_t3674682005_il2cpp_TypeInfo_var;
extern const uint32_t Spawner_spawnStack_m2058187310_MetadataUsageId;
extern "C"  void Spawner_spawnStack_m2058187310 (Spawner_t3948062024 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Spawner_spawnStack_m2058187310_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObjectU5BU5D_t2662109048* L_0 = __this->get_whatToSpawnClone_4();
		GameObjectU5BU5D_t2662109048* L_1 = __this->get_whatToSpawnPrefab_3();
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		int32_t L_2 = 0;
		GameObject_t3674682005 * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		TransformU5BU5D_t3792884695* L_4 = __this->get_spawnLocation_2();
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		int32_t L_5 = 0;
		Transform_t1659122786 * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Transform_t1659122786 * L_7 = Component_get_transform_m4257140443(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t4282066566  L_8 = Transform_get_position_m2211398607(L_7, /*hidden argument*/NULL);
		Quaternion_t1553702882  L_9 = Quaternion_Euler_m1204688217(NULL /*static, unused*/, (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_t3071478659 * L_10 = Object_Instantiate_m2255090103(NULL /*static, unused*/, L_3, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, ((GameObject_t3674682005 *)IsInstSealed(L_10, GameObject_t3674682005_il2cpp_TypeInfo_var)));
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (GameObject_t3674682005 *)((GameObject_t3674682005 *)IsInstSealed(L_10, GameObject_t3674682005_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Stack::.ctor()
extern "C"  void Stack__ctor_m263203843 (Stack_t80204392 * __this, const MethodInfo* method)
{
	{
		Vector3_t4282066566  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector3__ctor_m2926210380(&L_0, (-3.0f), (3.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_startingPos_7(L_0);
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Stack::Awake()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var;
extern const uint32_t Stack_Awake_m500809062_MetadataUsageId;
extern "C"  void Stack_Awake_m500809062 (Stack_t80204392 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Stack_Awake_m500809062_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody2D_t1743771669 * L_0 = Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var);
		__this->set_rigi_2(L_0);
		return;
	}
}
// System.Void Stack::Start()
extern "C"  void Stack_Start_m3505308931 (Stack_t80204392 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Stack::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_AddComponent_TisRigidbody2D_t1743771669_m2457016804_MethodInfo_var;
extern const uint32_t Stack_Update_m1296246634_MetadataUsageId;
extern "C"  void Stack_Update_m1296246634 (Stack_t80204392 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (Stack_Update_m1296246634_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	Rigidbody2D_t1743771669 * V_1 = NULL;
	{
		bool L_0 = __this->get_hasStarted_5();
		if (!L_0)
		{
			goto IL_0073;
		}
	}
	{
		V_0 = (bool)0;
		bool L_1 = V_0;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		Stack_Scroll_m3866453102(__this, /*hidden argument*/NULL);
		V_0 = (bool)1;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetMouseButtonDown_m2031691843(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0073;
		}
	}
	{
		bool L_3 = __this->get_down_3();
		if (L_3)
		{
			goto IL_0073;
		}
	}
	{
		bool L_4 = __this->get_addedNew_4();
		if (L_4)
		{
			goto IL_0060;
		}
	}
	{
		GameObject_t3674682005 * L_5 = __this->get_stack_6();
		Vector3_t4282066566  L_6 = __this->get_startingPos_7();
		Transform_t1659122786 * L_7 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_t1553702882  L_8 = Transform_get_rotation_m11483428(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Instantiate_m2255090103(NULL /*static, unused*/, L_5, L_6, L_8, /*hidden argument*/NULL);
		__this->set_addedNew_4((bool)1);
	}

IL_0060:
	{
		GameObject_t3674682005 * L_9 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody2D_t1743771669 * L_10 = GameObject_AddComponent_TisRigidbody2D_t1743771669_m2457016804(L_9, /*hidden argument*/GameObject_AddComponent_TisRigidbody2D_t1743771669_m2457016804_MethodInfo_var);
		V_1 = L_10;
		__this->set_down_3((bool)1);
	}

IL_0073:
	{
		return;
	}
}
// System.Void Stack::Scroll()
extern "C"  void Stack_Scroll_m3866453102 (Stack_t80204392 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_down_3();
		if (L_0)
		{
			goto IL_0030;
		}
	}
	{
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_2 = Time_get_deltaTime_m2741110510(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_Translate_m2900276092(L_1, ((float)((float)(2.0f)*(float)L_2)), (0.0f), (0.0f), /*hidden argument*/NULL);
		goto IL_0056;
	}

IL_0030:
	{
		bool L_3 = __this->get_down_3();
		if (!L_3)
		{
			goto IL_0056;
		}
	}
	{
		Transform_t1659122786 * L_4 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_Translate_m4280329625(L_4, (0.0f), (0.0f), (0.0f), 0, /*hidden argument*/NULL);
	}

IL_0056:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

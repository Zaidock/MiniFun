#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// UnityEngine.Purchasing.IAPButton
struct IAPButton_t2420027752;

#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_Purchasi2420027752.h"

#pragma once
// UnityEngine.Purchasing.IAPButton[]
struct IAPButtonU5BU5D_t2977272825  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) IAPButton_t2420027752 * m_Items[1];

public:
	inline IAPButton_t2420027752 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline IAPButton_t2420027752 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, IAPButton_t2420027752 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

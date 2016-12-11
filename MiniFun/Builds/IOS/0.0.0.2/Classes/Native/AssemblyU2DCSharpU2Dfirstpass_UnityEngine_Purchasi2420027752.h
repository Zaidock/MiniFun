#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent
struct OnPurchaseCompletedEvent_t3071130829;
// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent
struct OnPurchaseFailedEvent_t3216874335;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Purchasing.IAPButton
struct  IAPButton_t2420027752  : public MonoBehaviour_t667441552
{
public:
	// System.String UnityEngine.Purchasing.IAPButton::productId
	String_t* ___productId_2;
	// System.Boolean UnityEngine.Purchasing.IAPButton::consumePurchase
	bool ___consumePurchase_3;
	// UnityEngine.Purchasing.IAPButton/OnPurchaseCompletedEvent UnityEngine.Purchasing.IAPButton::onPurchaseComplete
	OnPurchaseCompletedEvent_t3071130829 * ___onPurchaseComplete_4;
	// UnityEngine.Purchasing.IAPButton/OnPurchaseFailedEvent UnityEngine.Purchasing.IAPButton::onPurchaseFailed
	OnPurchaseFailedEvent_t3216874335 * ___onPurchaseFailed_5;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::titleText
	Text_t9039225 * ___titleText_6;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::descriptionText
	Text_t9039225 * ___descriptionText_7;
	// UnityEngine.UI.Text UnityEngine.Purchasing.IAPButton::priceText
	Text_t9039225 * ___priceText_8;

public:
	inline static int32_t get_offset_of_productId_2() { return static_cast<int32_t>(offsetof(IAPButton_t2420027752, ___productId_2)); }
	inline String_t* get_productId_2() const { return ___productId_2; }
	inline String_t** get_address_of_productId_2() { return &___productId_2; }
	inline void set_productId_2(String_t* value)
	{
		___productId_2 = value;
		Il2CppCodeGenWriteBarrier(&___productId_2, value);
	}

	inline static int32_t get_offset_of_consumePurchase_3() { return static_cast<int32_t>(offsetof(IAPButton_t2420027752, ___consumePurchase_3)); }
	inline bool get_consumePurchase_3() const { return ___consumePurchase_3; }
	inline bool* get_address_of_consumePurchase_3() { return &___consumePurchase_3; }
	inline void set_consumePurchase_3(bool value)
	{
		___consumePurchase_3 = value;
	}

	inline static int32_t get_offset_of_onPurchaseComplete_4() { return static_cast<int32_t>(offsetof(IAPButton_t2420027752, ___onPurchaseComplete_4)); }
	inline OnPurchaseCompletedEvent_t3071130829 * get_onPurchaseComplete_4() const { return ___onPurchaseComplete_4; }
	inline OnPurchaseCompletedEvent_t3071130829 ** get_address_of_onPurchaseComplete_4() { return &___onPurchaseComplete_4; }
	inline void set_onPurchaseComplete_4(OnPurchaseCompletedEvent_t3071130829 * value)
	{
		___onPurchaseComplete_4 = value;
		Il2CppCodeGenWriteBarrier(&___onPurchaseComplete_4, value);
	}

	inline static int32_t get_offset_of_onPurchaseFailed_5() { return static_cast<int32_t>(offsetof(IAPButton_t2420027752, ___onPurchaseFailed_5)); }
	inline OnPurchaseFailedEvent_t3216874335 * get_onPurchaseFailed_5() const { return ___onPurchaseFailed_5; }
	inline OnPurchaseFailedEvent_t3216874335 ** get_address_of_onPurchaseFailed_5() { return &___onPurchaseFailed_5; }
	inline void set_onPurchaseFailed_5(OnPurchaseFailedEvent_t3216874335 * value)
	{
		___onPurchaseFailed_5 = value;
		Il2CppCodeGenWriteBarrier(&___onPurchaseFailed_5, value);
	}

	inline static int32_t get_offset_of_titleText_6() { return static_cast<int32_t>(offsetof(IAPButton_t2420027752, ___titleText_6)); }
	inline Text_t9039225 * get_titleText_6() const { return ___titleText_6; }
	inline Text_t9039225 ** get_address_of_titleText_6() { return &___titleText_6; }
	inline void set_titleText_6(Text_t9039225 * value)
	{
		___titleText_6 = value;
		Il2CppCodeGenWriteBarrier(&___titleText_6, value);
	}

	inline static int32_t get_offset_of_descriptionText_7() { return static_cast<int32_t>(offsetof(IAPButton_t2420027752, ___descriptionText_7)); }
	inline Text_t9039225 * get_descriptionText_7() const { return ___descriptionText_7; }
	inline Text_t9039225 ** get_address_of_descriptionText_7() { return &___descriptionText_7; }
	inline void set_descriptionText_7(Text_t9039225 * value)
	{
		___descriptionText_7 = value;
		Il2CppCodeGenWriteBarrier(&___descriptionText_7, value);
	}

	inline static int32_t get_offset_of_priceText_8() { return static_cast<int32_t>(offsetof(IAPButton_t2420027752, ___priceText_8)); }
	inline Text_t9039225 * get_priceText_8() const { return ___priceText_8; }
	inline Text_t9039225 ** get_address_of_priceText_8() { return &___priceText_8; }
	inline void set_priceText_8(Text_t9039225 * value)
	{
		___priceText_8 = value;
		Il2CppCodeGenWriteBarrier(&___priceText_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Object
struct Il2CppObject;
// System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct Dictionary_2_t2152006384;
// System.Func`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct Func_2_t2696001142;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ThreadSafeStore`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object>
struct  ThreadSafeStore_2_t3893850024  : public Il2CppObject
{
public:
	// System.Object Newtonsoft.Json.Utilities.ThreadSafeStore`2::_lock
	Il2CppObject * ____lock_0;
	// System.Collections.Generic.Dictionary`2<TKey,TValue> Newtonsoft.Json.Utilities.ThreadSafeStore`2::_store
	Dictionary_2_t2152006384 * ____store_1;
	// System.Func`2<TKey,TValue> Newtonsoft.Json.Utilities.ThreadSafeStore`2::_creator
	Func_2_t2696001142 * ____creator_2;

public:
	inline static int32_t get_offset_of__lock_0() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t3893850024, ____lock_0)); }
	inline Il2CppObject * get__lock_0() const { return ____lock_0; }
	inline Il2CppObject ** get_address_of__lock_0() { return &____lock_0; }
	inline void set__lock_0(Il2CppObject * value)
	{
		____lock_0 = value;
		Il2CppCodeGenWriteBarrier(&____lock_0, value);
	}

	inline static int32_t get_offset_of__store_1() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t3893850024, ____store_1)); }
	inline Dictionary_2_t2152006384 * get__store_1() const { return ____store_1; }
	inline Dictionary_2_t2152006384 ** get_address_of__store_1() { return &____store_1; }
	inline void set__store_1(Dictionary_2_t2152006384 * value)
	{
		____store_1 = value;
		Il2CppCodeGenWriteBarrier(&____store_1, value);
	}

	inline static int32_t get_offset_of__creator_2() { return static_cast<int32_t>(offsetof(ThreadSafeStore_2_t3893850024, ____creator_2)); }
	inline Func_2_t2696001142 * get__creator_2() const { return ____creator_2; }
	inline Func_2_t2696001142 ** get_address_of__creator_2() { return &____creator_2; }
	inline void set__creator_2(Func_2_t2696001142 * value)
	{
		____creator_2 = value;
		Il2CppCodeGenWriteBarrier(&____creator_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

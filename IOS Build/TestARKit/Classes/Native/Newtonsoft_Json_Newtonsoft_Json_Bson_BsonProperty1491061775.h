﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Newtonsoft.Json.Bson.BsonString
struct BsonString_t3501425379;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t3582361217;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Bson.BsonProperty
struct  BsonProperty_t1491061775  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Bson.BsonString Newtonsoft.Json.Bson.BsonProperty::<Name>k__BackingField
	BsonString_t3501425379 * ___U3CNameU3Ek__BackingField_0;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonProperty::<Value>k__BackingField
	BsonToken_t3582361217 * ___U3CValueU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BsonProperty_t1491061775, ___U3CNameU3Ek__BackingField_0)); }
	inline BsonString_t3501425379 * get_U3CNameU3Ek__BackingField_0() const { return ___U3CNameU3Ek__BackingField_0; }
	inline BsonString_t3501425379 ** get_address_of_U3CNameU3Ek__BackingField_0() { return &___U3CNameU3Ek__BackingField_0; }
	inline void set_U3CNameU3Ek__BackingField_0(BsonString_t3501425379 * value)
	{
		___U3CNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CNameU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BsonProperty_t1491061775, ___U3CValueU3Ek__BackingField_1)); }
	inline BsonToken_t3582361217 * get_U3CValueU3Ek__BackingField_1() const { return ___U3CValueU3Ek__BackingField_1; }
	inline BsonToken_t3582361217 ** get_address_of_U3CValueU3Ek__BackingField_1() { return &___U3CValueU3Ek__BackingField_1; }
	inline void set_U3CValueU3Ek__BackingField_1(BsonToken_t3582361217 * value)
	{
		___U3CValueU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CValueU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

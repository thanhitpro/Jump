#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Uri
struct Uri_t19570940;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YoutubeLight.RequestResolver/ExtractionInfo
struct  ExtractionInfo_t2268263086  : public Il2CppObject
{
public:
	// System.Boolean YoutubeLight.RequestResolver/ExtractionInfo::<RequiresDecryption>k__BackingField
	bool ___U3CRequiresDecryptionU3Ek__BackingField_0;
	// System.Uri YoutubeLight.RequestResolver/ExtractionInfo::<Uri>k__BackingField
	Uri_t19570940 * ___U3CUriU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CRequiresDecryptionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ExtractionInfo_t2268263086, ___U3CRequiresDecryptionU3Ek__BackingField_0)); }
	inline bool get_U3CRequiresDecryptionU3Ek__BackingField_0() const { return ___U3CRequiresDecryptionU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CRequiresDecryptionU3Ek__BackingField_0() { return &___U3CRequiresDecryptionU3Ek__BackingField_0; }
	inline void set_U3CRequiresDecryptionU3Ek__BackingField_0(bool value)
	{
		___U3CRequiresDecryptionU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CUriU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ExtractionInfo_t2268263086, ___U3CUriU3Ek__BackingField_1)); }
	inline Uri_t19570940 * get_U3CUriU3Ek__BackingField_1() const { return ___U3CUriU3Ek__BackingField_1; }
	inline Uri_t19570940 ** get_address_of_U3CUriU3Ek__BackingField_1() { return &___U3CUriU3Ek__BackingField_1; }
	inline void set_U3CUriU3Ek__BackingField_1(Uri_t19570940 * value)
	{
		___U3CUriU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUriU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

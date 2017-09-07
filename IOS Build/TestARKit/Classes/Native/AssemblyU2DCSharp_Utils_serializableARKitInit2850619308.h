#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityEngine_XR_iOS_U3123075684.h"

// Utils.serializableARSessionConfiguration
struct serializableARSessionConfiguration_t908111522;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableARKitInit
struct  serializableARKitInit_t2850619308  : public Il2CppObject
{
public:
	// Utils.serializableARSessionConfiguration Utils.serializableARKitInit::config
	serializableARSessionConfiguration_t908111522 * ___config_0;
	// UnityEngine.XR.iOS.UnityARSessionRunOption Utils.serializableARKitInit::runOption
	int32_t ___runOption_1;

public:
	inline static int32_t get_offset_of_config_0() { return static_cast<int32_t>(offsetof(serializableARKitInit_t2850619308, ___config_0)); }
	inline serializableARSessionConfiguration_t908111522 * get_config_0() const { return ___config_0; }
	inline serializableARSessionConfiguration_t908111522 ** get_address_of_config_0() { return &___config_0; }
	inline void set_config_0(serializableARSessionConfiguration_t908111522 * value)
	{
		___config_0 = value;
		Il2CppCodeGenWriteBarrier(&___config_0, value);
	}

	inline static int32_t get_offset_of_runOption_1() { return static_cast<int32_t>(offsetof(serializableARKitInit_t2850619308, ___runOption_1)); }
	inline int32_t get_runOption_1() const { return ___runOption_1; }
	inline int32_t* get_address_of_runOption_1() { return &___runOption_1; }
	inline void set_runOption_1(int32_t value)
	{
		___runOption_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

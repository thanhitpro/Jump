#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "AssemblyU2DCSharp_ReactingLights_VideoSide772594807.h"

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t10059812;
// UnityEngine.Light[]
struct LightU5BU5D_t1037744493;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ReactingLights
struct  ReactingLights_t3090172056  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Video.VideoPlayer ReactingLights::videoSource
	VideoPlayer_t10059812 * ___videoSource_2;
	// UnityEngine.Light[] ReactingLights::lights
	LightU5BU5D_t1037744493* ___lights_3;
	// UnityEngine.Color ReactingLights::averageColor
	Color_t2020392075  ___averageColor_4;
	// UnityEngine.Texture2D ReactingLights::tex
	Texture2D_t3542995729 * ___tex_5;
	// ReactingLights/VideoSide ReactingLights::videoSide
	int32_t ___videoSide_6;
	// System.Boolean ReactingLights::createTexture
	bool ___createTexture_7;

public:
	inline static int32_t get_offset_of_videoSource_2() { return static_cast<int32_t>(offsetof(ReactingLights_t3090172056, ___videoSource_2)); }
	inline VideoPlayer_t10059812 * get_videoSource_2() const { return ___videoSource_2; }
	inline VideoPlayer_t10059812 ** get_address_of_videoSource_2() { return &___videoSource_2; }
	inline void set_videoSource_2(VideoPlayer_t10059812 * value)
	{
		___videoSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___videoSource_2, value);
	}

	inline static int32_t get_offset_of_lights_3() { return static_cast<int32_t>(offsetof(ReactingLights_t3090172056, ___lights_3)); }
	inline LightU5BU5D_t1037744493* get_lights_3() const { return ___lights_3; }
	inline LightU5BU5D_t1037744493** get_address_of_lights_3() { return &___lights_3; }
	inline void set_lights_3(LightU5BU5D_t1037744493* value)
	{
		___lights_3 = value;
		Il2CppCodeGenWriteBarrier(&___lights_3, value);
	}

	inline static int32_t get_offset_of_averageColor_4() { return static_cast<int32_t>(offsetof(ReactingLights_t3090172056, ___averageColor_4)); }
	inline Color_t2020392075  get_averageColor_4() const { return ___averageColor_4; }
	inline Color_t2020392075 * get_address_of_averageColor_4() { return &___averageColor_4; }
	inline void set_averageColor_4(Color_t2020392075  value)
	{
		___averageColor_4 = value;
	}

	inline static int32_t get_offset_of_tex_5() { return static_cast<int32_t>(offsetof(ReactingLights_t3090172056, ___tex_5)); }
	inline Texture2D_t3542995729 * get_tex_5() const { return ___tex_5; }
	inline Texture2D_t3542995729 ** get_address_of_tex_5() { return &___tex_5; }
	inline void set_tex_5(Texture2D_t3542995729 * value)
	{
		___tex_5 = value;
		Il2CppCodeGenWriteBarrier(&___tex_5, value);
	}

	inline static int32_t get_offset_of_videoSide_6() { return static_cast<int32_t>(offsetof(ReactingLights_t3090172056, ___videoSide_6)); }
	inline int32_t get_videoSide_6() const { return ___videoSide_6; }
	inline int32_t* get_address_of_videoSide_6() { return &___videoSide_6; }
	inline void set_videoSide_6(int32_t value)
	{
		___videoSide_6 = value;
	}

	inline static int32_t get_offset_of_createTexture_7() { return static_cast<int32_t>(offsetof(ReactingLights_t3090172056, ___createTexture_7)); }
	inline bool get_createTexture_7() const { return ___createTexture_7; }
	inline bool* get_address_of_createTexture_7() { return &___createTexture_7; }
	inline void set_createTexture_7(bool value)
	{
		___createTexture_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

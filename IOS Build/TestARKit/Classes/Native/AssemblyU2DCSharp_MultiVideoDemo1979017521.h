#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.Threading.Thread
struct Thread_t241561612;
// System.String
struct String_t;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t10059812;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MultiVideoDemo
struct  MultiVideoDemo_t1979017521  : public MonoBehaviour_t1158329972
{
public:
	// System.Threading.Thread MultiVideoDemo::m_Thread
	Thread_t241561612 * ___m_Thread_2;
	// System.String MultiVideoDemo::videoId
	String_t* ___videoId_3;
	// System.String MultiVideoDemo::videoUrl
	String_t* ___videoUrl_4;
	// System.Boolean MultiVideoDemo::videoAreReadyToPlay
	bool ___videoAreReadyToPlay_5;
	// System.Boolean MultiVideoDemo::useNewUnityPlayer
	bool ___useNewUnityPlayer_6;
	// UnityEngine.Video.VideoPlayer MultiVideoDemo::unityVideoPlayer
	VideoPlayer_t10059812 * ___unityVideoPlayer_7;
	// UnityEngine.GameObject[] MultiVideoDemo::objectsToPlayTheSameVIdeo
	GameObjectU5BU5D_t3057952154* ___objectsToPlayTheSameVIdeo_8;
	// System.Boolean MultiVideoDemo::playOnStart
	bool ___playOnStart_9;
	// System.Boolean MultiVideoDemo::checkIfVideoArePrepared
	bool ___checkIfVideoArePrepared_10;

public:
	inline static int32_t get_offset_of_m_Thread_2() { return static_cast<int32_t>(offsetof(MultiVideoDemo_t1979017521, ___m_Thread_2)); }
	inline Thread_t241561612 * get_m_Thread_2() const { return ___m_Thread_2; }
	inline Thread_t241561612 ** get_address_of_m_Thread_2() { return &___m_Thread_2; }
	inline void set_m_Thread_2(Thread_t241561612 * value)
	{
		___m_Thread_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Thread_2, value);
	}

	inline static int32_t get_offset_of_videoId_3() { return static_cast<int32_t>(offsetof(MultiVideoDemo_t1979017521, ___videoId_3)); }
	inline String_t* get_videoId_3() const { return ___videoId_3; }
	inline String_t** get_address_of_videoId_3() { return &___videoId_3; }
	inline void set_videoId_3(String_t* value)
	{
		___videoId_3 = value;
		Il2CppCodeGenWriteBarrier(&___videoId_3, value);
	}

	inline static int32_t get_offset_of_videoUrl_4() { return static_cast<int32_t>(offsetof(MultiVideoDemo_t1979017521, ___videoUrl_4)); }
	inline String_t* get_videoUrl_4() const { return ___videoUrl_4; }
	inline String_t** get_address_of_videoUrl_4() { return &___videoUrl_4; }
	inline void set_videoUrl_4(String_t* value)
	{
		___videoUrl_4 = value;
		Il2CppCodeGenWriteBarrier(&___videoUrl_4, value);
	}

	inline static int32_t get_offset_of_videoAreReadyToPlay_5() { return static_cast<int32_t>(offsetof(MultiVideoDemo_t1979017521, ___videoAreReadyToPlay_5)); }
	inline bool get_videoAreReadyToPlay_5() const { return ___videoAreReadyToPlay_5; }
	inline bool* get_address_of_videoAreReadyToPlay_5() { return &___videoAreReadyToPlay_5; }
	inline void set_videoAreReadyToPlay_5(bool value)
	{
		___videoAreReadyToPlay_5 = value;
	}

	inline static int32_t get_offset_of_useNewUnityPlayer_6() { return static_cast<int32_t>(offsetof(MultiVideoDemo_t1979017521, ___useNewUnityPlayer_6)); }
	inline bool get_useNewUnityPlayer_6() const { return ___useNewUnityPlayer_6; }
	inline bool* get_address_of_useNewUnityPlayer_6() { return &___useNewUnityPlayer_6; }
	inline void set_useNewUnityPlayer_6(bool value)
	{
		___useNewUnityPlayer_6 = value;
	}

	inline static int32_t get_offset_of_unityVideoPlayer_7() { return static_cast<int32_t>(offsetof(MultiVideoDemo_t1979017521, ___unityVideoPlayer_7)); }
	inline VideoPlayer_t10059812 * get_unityVideoPlayer_7() const { return ___unityVideoPlayer_7; }
	inline VideoPlayer_t10059812 ** get_address_of_unityVideoPlayer_7() { return &___unityVideoPlayer_7; }
	inline void set_unityVideoPlayer_7(VideoPlayer_t10059812 * value)
	{
		___unityVideoPlayer_7 = value;
		Il2CppCodeGenWriteBarrier(&___unityVideoPlayer_7, value);
	}

	inline static int32_t get_offset_of_objectsToPlayTheSameVIdeo_8() { return static_cast<int32_t>(offsetof(MultiVideoDemo_t1979017521, ___objectsToPlayTheSameVIdeo_8)); }
	inline GameObjectU5BU5D_t3057952154* get_objectsToPlayTheSameVIdeo_8() const { return ___objectsToPlayTheSameVIdeo_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_objectsToPlayTheSameVIdeo_8() { return &___objectsToPlayTheSameVIdeo_8; }
	inline void set_objectsToPlayTheSameVIdeo_8(GameObjectU5BU5D_t3057952154* value)
	{
		___objectsToPlayTheSameVIdeo_8 = value;
		Il2CppCodeGenWriteBarrier(&___objectsToPlayTheSameVIdeo_8, value);
	}

	inline static int32_t get_offset_of_playOnStart_9() { return static_cast<int32_t>(offsetof(MultiVideoDemo_t1979017521, ___playOnStart_9)); }
	inline bool get_playOnStart_9() const { return ___playOnStart_9; }
	inline bool* get_address_of_playOnStart_9() { return &___playOnStart_9; }
	inline void set_playOnStart_9(bool value)
	{
		___playOnStart_9 = value;
	}

	inline static int32_t get_offset_of_checkIfVideoArePrepared_10() { return static_cast<int32_t>(offsetof(MultiVideoDemo_t1979017521, ___checkIfVideoArePrepared_10)); }
	inline bool get_checkIfVideoArePrepared_10() const { return ___checkIfVideoArePrepared_10; }
	inline bool* get_address_of_checkIfVideoArePrepared_10() { return &___checkIfVideoArePrepared_10; }
	inline void set_checkIfVideoArePrepared_10(bool value)
	{
		___checkIfVideoArePrepared_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

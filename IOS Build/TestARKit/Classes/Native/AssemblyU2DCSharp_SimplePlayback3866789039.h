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




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SimplePlayback
struct  SimplePlayback_t3866789039  : public MonoBehaviour_t1158329972
{
public:
	// System.Threading.Thread SimplePlayback::m_Thread
	Thread_t241561612 * ___m_Thread_2;
	// System.String SimplePlayback::videoId
	String_t* ___videoId_3;
	// System.String SimplePlayback::videoUrl
	String_t* ___videoUrl_4;
	// System.Boolean SimplePlayback::videoAreReadyToPlay
	bool ___videoAreReadyToPlay_5;
	// System.Boolean SimplePlayback::useNewUnityPlayer
	bool ___useNewUnityPlayer_6;
	// UnityEngine.Video.VideoPlayer SimplePlayback::unityVideoPlayer
	VideoPlayer_t10059812 * ___unityVideoPlayer_7;
	// System.Boolean SimplePlayback::playOnStart
	bool ___playOnStart_8;
	// System.Boolean SimplePlayback::checkIfVideoArePrepared
	bool ___checkIfVideoArePrepared_9;

public:
	inline static int32_t get_offset_of_m_Thread_2() { return static_cast<int32_t>(offsetof(SimplePlayback_t3866789039, ___m_Thread_2)); }
	inline Thread_t241561612 * get_m_Thread_2() const { return ___m_Thread_2; }
	inline Thread_t241561612 ** get_address_of_m_Thread_2() { return &___m_Thread_2; }
	inline void set_m_Thread_2(Thread_t241561612 * value)
	{
		___m_Thread_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Thread_2, value);
	}

	inline static int32_t get_offset_of_videoId_3() { return static_cast<int32_t>(offsetof(SimplePlayback_t3866789039, ___videoId_3)); }
	inline String_t* get_videoId_3() const { return ___videoId_3; }
	inline String_t** get_address_of_videoId_3() { return &___videoId_3; }
	inline void set_videoId_3(String_t* value)
	{
		___videoId_3 = value;
		Il2CppCodeGenWriteBarrier(&___videoId_3, value);
	}

	inline static int32_t get_offset_of_videoUrl_4() { return static_cast<int32_t>(offsetof(SimplePlayback_t3866789039, ___videoUrl_4)); }
	inline String_t* get_videoUrl_4() const { return ___videoUrl_4; }
	inline String_t** get_address_of_videoUrl_4() { return &___videoUrl_4; }
	inline void set_videoUrl_4(String_t* value)
	{
		___videoUrl_4 = value;
		Il2CppCodeGenWriteBarrier(&___videoUrl_4, value);
	}

	inline static int32_t get_offset_of_videoAreReadyToPlay_5() { return static_cast<int32_t>(offsetof(SimplePlayback_t3866789039, ___videoAreReadyToPlay_5)); }
	inline bool get_videoAreReadyToPlay_5() const { return ___videoAreReadyToPlay_5; }
	inline bool* get_address_of_videoAreReadyToPlay_5() { return &___videoAreReadyToPlay_5; }
	inline void set_videoAreReadyToPlay_5(bool value)
	{
		___videoAreReadyToPlay_5 = value;
	}

	inline static int32_t get_offset_of_useNewUnityPlayer_6() { return static_cast<int32_t>(offsetof(SimplePlayback_t3866789039, ___useNewUnityPlayer_6)); }
	inline bool get_useNewUnityPlayer_6() const { return ___useNewUnityPlayer_6; }
	inline bool* get_address_of_useNewUnityPlayer_6() { return &___useNewUnityPlayer_6; }
	inline void set_useNewUnityPlayer_6(bool value)
	{
		___useNewUnityPlayer_6 = value;
	}

	inline static int32_t get_offset_of_unityVideoPlayer_7() { return static_cast<int32_t>(offsetof(SimplePlayback_t3866789039, ___unityVideoPlayer_7)); }
	inline VideoPlayer_t10059812 * get_unityVideoPlayer_7() const { return ___unityVideoPlayer_7; }
	inline VideoPlayer_t10059812 ** get_address_of_unityVideoPlayer_7() { return &___unityVideoPlayer_7; }
	inline void set_unityVideoPlayer_7(VideoPlayer_t10059812 * value)
	{
		___unityVideoPlayer_7 = value;
		Il2CppCodeGenWriteBarrier(&___unityVideoPlayer_7, value);
	}

	inline static int32_t get_offset_of_playOnStart_8() { return static_cast<int32_t>(offsetof(SimplePlayback_t3866789039, ___playOnStart_8)); }
	inline bool get_playOnStart_8() const { return ___playOnStart_8; }
	inline bool* get_address_of_playOnStart_8() { return &___playOnStart_8; }
	inline void set_playOnStart_8(bool value)
	{
		___playOnStart_8 = value;
	}

	inline static int32_t get_offset_of_checkIfVideoArePrepared_9() { return static_cast<int32_t>(offsetof(SimplePlayback_t3866789039, ___checkIfVideoArePrepared_9)); }
	inline bool get_checkIfVideoArePrepared_9() const { return ___checkIfVideoArePrepared_9; }
	inline bool* get_address_of_checkIfVideoArePrepared_9() { return &___checkIfVideoArePrepared_9; }
	inline void set_checkIfVideoArePrepared_9(bool value)
	{
		___checkIfVideoArePrepared_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

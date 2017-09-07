#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_HighQualityPlayback_VideoQuality3309253329.h"

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

// HighQualityPlayback
struct  HighQualityPlayback_t2550968764  : public MonoBehaviour_t1158329972
{
public:
	// System.Threading.Thread HighQualityPlayback::m_Thread
	Thread_t241561612 * ___m_Thread_2;
	// System.String HighQualityPlayback::videoId
	String_t* ___videoId_3;
	// HighQualityPlayback/VideoQuality HighQualityPlayback::videoQuality
	int32_t ___videoQuality_4;
	// System.String HighQualityPlayback::videoUrl
	String_t* ___videoUrl_5;
	// System.String HighQualityPlayback::audioVideoUrl
	String_t* ___audioVideoUrl_6;
	// System.Boolean HighQualityPlayback::videoAreReadyToPlay
	bool ___videoAreReadyToPlay_7;
	// System.Boolean HighQualityPlayback::useNewUnityPlayer
	bool ___useNewUnityPlayer_8;
	// UnityEngine.Video.VideoPlayer HighQualityPlayback::unityVideoPlayer
	VideoPlayer_t10059812 * ___unityVideoPlayer_9;
	// System.Boolean HighQualityPlayback::playOnStart
	bool ___playOnStart_10;
	// System.Boolean HighQualityPlayback::noHD
	bool ___noHD_11;
	// UnityEngine.Video.VideoPlayer HighQualityPlayback::audioVplayer
	VideoPlayer_t10059812 * ___audioVplayer_12;
	// System.Boolean HighQualityPlayback::checkIfVideoArePrepared
	bool ___checkIfVideoArePrepared_13;
	// System.Boolean HighQualityPlayback::videoPrepared
	bool ___videoPrepared_14;
	// System.Boolean HighQualityPlayback::audioPrepared
	bool ___audioPrepared_15;
	// System.Boolean HighQualityPlayback::isSyncing
	bool ___isSyncing_16;

public:
	inline static int32_t get_offset_of_m_Thread_2() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___m_Thread_2)); }
	inline Thread_t241561612 * get_m_Thread_2() const { return ___m_Thread_2; }
	inline Thread_t241561612 ** get_address_of_m_Thread_2() { return &___m_Thread_2; }
	inline void set_m_Thread_2(Thread_t241561612 * value)
	{
		___m_Thread_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_Thread_2, value);
	}

	inline static int32_t get_offset_of_videoId_3() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___videoId_3)); }
	inline String_t* get_videoId_3() const { return ___videoId_3; }
	inline String_t** get_address_of_videoId_3() { return &___videoId_3; }
	inline void set_videoId_3(String_t* value)
	{
		___videoId_3 = value;
		Il2CppCodeGenWriteBarrier(&___videoId_3, value);
	}

	inline static int32_t get_offset_of_videoQuality_4() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___videoQuality_4)); }
	inline int32_t get_videoQuality_4() const { return ___videoQuality_4; }
	inline int32_t* get_address_of_videoQuality_4() { return &___videoQuality_4; }
	inline void set_videoQuality_4(int32_t value)
	{
		___videoQuality_4 = value;
	}

	inline static int32_t get_offset_of_videoUrl_5() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___videoUrl_5)); }
	inline String_t* get_videoUrl_5() const { return ___videoUrl_5; }
	inline String_t** get_address_of_videoUrl_5() { return &___videoUrl_5; }
	inline void set_videoUrl_5(String_t* value)
	{
		___videoUrl_5 = value;
		Il2CppCodeGenWriteBarrier(&___videoUrl_5, value);
	}

	inline static int32_t get_offset_of_audioVideoUrl_6() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___audioVideoUrl_6)); }
	inline String_t* get_audioVideoUrl_6() const { return ___audioVideoUrl_6; }
	inline String_t** get_address_of_audioVideoUrl_6() { return &___audioVideoUrl_6; }
	inline void set_audioVideoUrl_6(String_t* value)
	{
		___audioVideoUrl_6 = value;
		Il2CppCodeGenWriteBarrier(&___audioVideoUrl_6, value);
	}

	inline static int32_t get_offset_of_videoAreReadyToPlay_7() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___videoAreReadyToPlay_7)); }
	inline bool get_videoAreReadyToPlay_7() const { return ___videoAreReadyToPlay_7; }
	inline bool* get_address_of_videoAreReadyToPlay_7() { return &___videoAreReadyToPlay_7; }
	inline void set_videoAreReadyToPlay_7(bool value)
	{
		___videoAreReadyToPlay_7 = value;
	}

	inline static int32_t get_offset_of_useNewUnityPlayer_8() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___useNewUnityPlayer_8)); }
	inline bool get_useNewUnityPlayer_8() const { return ___useNewUnityPlayer_8; }
	inline bool* get_address_of_useNewUnityPlayer_8() { return &___useNewUnityPlayer_8; }
	inline void set_useNewUnityPlayer_8(bool value)
	{
		___useNewUnityPlayer_8 = value;
	}

	inline static int32_t get_offset_of_unityVideoPlayer_9() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___unityVideoPlayer_9)); }
	inline VideoPlayer_t10059812 * get_unityVideoPlayer_9() const { return ___unityVideoPlayer_9; }
	inline VideoPlayer_t10059812 ** get_address_of_unityVideoPlayer_9() { return &___unityVideoPlayer_9; }
	inline void set_unityVideoPlayer_9(VideoPlayer_t10059812 * value)
	{
		___unityVideoPlayer_9 = value;
		Il2CppCodeGenWriteBarrier(&___unityVideoPlayer_9, value);
	}

	inline static int32_t get_offset_of_playOnStart_10() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___playOnStart_10)); }
	inline bool get_playOnStart_10() const { return ___playOnStart_10; }
	inline bool* get_address_of_playOnStart_10() { return &___playOnStart_10; }
	inline void set_playOnStart_10(bool value)
	{
		___playOnStart_10 = value;
	}

	inline static int32_t get_offset_of_noHD_11() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___noHD_11)); }
	inline bool get_noHD_11() const { return ___noHD_11; }
	inline bool* get_address_of_noHD_11() { return &___noHD_11; }
	inline void set_noHD_11(bool value)
	{
		___noHD_11 = value;
	}

	inline static int32_t get_offset_of_audioVplayer_12() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___audioVplayer_12)); }
	inline VideoPlayer_t10059812 * get_audioVplayer_12() const { return ___audioVplayer_12; }
	inline VideoPlayer_t10059812 ** get_address_of_audioVplayer_12() { return &___audioVplayer_12; }
	inline void set_audioVplayer_12(VideoPlayer_t10059812 * value)
	{
		___audioVplayer_12 = value;
		Il2CppCodeGenWriteBarrier(&___audioVplayer_12, value);
	}

	inline static int32_t get_offset_of_checkIfVideoArePrepared_13() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___checkIfVideoArePrepared_13)); }
	inline bool get_checkIfVideoArePrepared_13() const { return ___checkIfVideoArePrepared_13; }
	inline bool* get_address_of_checkIfVideoArePrepared_13() { return &___checkIfVideoArePrepared_13; }
	inline void set_checkIfVideoArePrepared_13(bool value)
	{
		___checkIfVideoArePrepared_13 = value;
	}

	inline static int32_t get_offset_of_videoPrepared_14() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___videoPrepared_14)); }
	inline bool get_videoPrepared_14() const { return ___videoPrepared_14; }
	inline bool* get_address_of_videoPrepared_14() { return &___videoPrepared_14; }
	inline void set_videoPrepared_14(bool value)
	{
		___videoPrepared_14 = value;
	}

	inline static int32_t get_offset_of_audioPrepared_15() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___audioPrepared_15)); }
	inline bool get_audioPrepared_15() const { return ___audioPrepared_15; }
	inline bool* get_address_of_audioPrepared_15() { return &___audioPrepared_15; }
	inline void set_audioPrepared_15(bool value)
	{
		___audioPrepared_15 = value;
	}

	inline static int32_t get_offset_of_isSyncing_16() { return static_cast<int32_t>(offsetof(HighQualityPlayback_t2550968764, ___isSyncing_16)); }
	inline bool get_isSyncing_16() const { return ___isSyncing_16; }
	inline bool* get_address_of_isSyncing_16() { return &___isSyncing_16; }
	inline void set_isSyncing_16(bool value)
	{
		___isSyncing_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

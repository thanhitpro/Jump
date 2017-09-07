#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t10059812;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Slider
struct Slider_t297367283;
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VideoController
struct  VideoController_t4244168663  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean VideoController::noHD
	bool ___noHD_2;
	// UnityEngine.Video.VideoPlayer VideoController::sourceVideo
	VideoPlayer_t10059812 * ___sourceVideo_3;
	// UnityEngine.Video.VideoPlayer VideoController::sourceAudioVideo
	VideoPlayer_t10059812 * ___sourceAudioVideo_4;
	// System.Boolean VideoController::hideControls
	bool ___hideControls_5;
	// System.Int32 VideoController::secondsToHideScreen
	int32_t ___secondsToHideScreen_6;
	// UnityEngine.GameObject VideoController::mainControllerUi
	GameObject_t1756533147 * ___mainControllerUi_7;
	// UnityEngine.UI.Slider VideoController::progressSlider
	Slider_t297367283 * ___progressSlider_8;
	// UnityEngine.GameObject VideoController::playImage
	GameObject_t1756533147 * ___playImage_9;
	// UnityEngine.UI.Slider VideoController::volumeSlider
	Slider_t297367283 * ___volumeSlider_10;
	// UnityEngine.UI.Slider VideoController::playbackSpeed
	Slider_t297367283 * ___playbackSpeed_11;
	// UnityEngine.UI.Text VideoController::currentTimeString
	Text_t356221433 * ___currentTimeString_12;
	// UnityEngine.UI.Text VideoController::totalTimeString
	Text_t356221433 * ___totalTimeString_13;
	// System.Single VideoController::totalVideoDuration
	float ___totalVideoDuration_14;
	// System.Single VideoController::currentVideoDuration
	float ___currentVideoDuration_15;
	// System.Boolean VideoController::videoSeekDone
	bool ___videoSeekDone_16;
	// System.Boolean VideoController::videoAudioSeekDone
	bool ___videoAudioSeekDone_17;
	// UnityEngine.GameObject VideoController::loadingPanel
	GameObject_t1756533147 * ___loadingPanel_18;
	// UnityEngine.UI.Text VideoController::loadingMessage
	Text_t356221433 * ___loadingMessage_19;
	// System.Single VideoController::hideScreenTime
	float ___hideScreenTime_20;
	// System.Boolean VideoController::finished
	bool ___finished_21;
	// System.Boolean VideoController::showingPlaybackSpeed
	bool ___showingPlaybackSpeed_22;
	// System.Boolean VideoController::showingVolume
	bool ___showingVolume_23;

public:
	inline static int32_t get_offset_of_noHD_2() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___noHD_2)); }
	inline bool get_noHD_2() const { return ___noHD_2; }
	inline bool* get_address_of_noHD_2() { return &___noHD_2; }
	inline void set_noHD_2(bool value)
	{
		___noHD_2 = value;
	}

	inline static int32_t get_offset_of_sourceVideo_3() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___sourceVideo_3)); }
	inline VideoPlayer_t10059812 * get_sourceVideo_3() const { return ___sourceVideo_3; }
	inline VideoPlayer_t10059812 ** get_address_of_sourceVideo_3() { return &___sourceVideo_3; }
	inline void set_sourceVideo_3(VideoPlayer_t10059812 * value)
	{
		___sourceVideo_3 = value;
		Il2CppCodeGenWriteBarrier(&___sourceVideo_3, value);
	}

	inline static int32_t get_offset_of_sourceAudioVideo_4() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___sourceAudioVideo_4)); }
	inline VideoPlayer_t10059812 * get_sourceAudioVideo_4() const { return ___sourceAudioVideo_4; }
	inline VideoPlayer_t10059812 ** get_address_of_sourceAudioVideo_4() { return &___sourceAudioVideo_4; }
	inline void set_sourceAudioVideo_4(VideoPlayer_t10059812 * value)
	{
		___sourceAudioVideo_4 = value;
		Il2CppCodeGenWriteBarrier(&___sourceAudioVideo_4, value);
	}

	inline static int32_t get_offset_of_hideControls_5() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___hideControls_5)); }
	inline bool get_hideControls_5() const { return ___hideControls_5; }
	inline bool* get_address_of_hideControls_5() { return &___hideControls_5; }
	inline void set_hideControls_5(bool value)
	{
		___hideControls_5 = value;
	}

	inline static int32_t get_offset_of_secondsToHideScreen_6() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___secondsToHideScreen_6)); }
	inline int32_t get_secondsToHideScreen_6() const { return ___secondsToHideScreen_6; }
	inline int32_t* get_address_of_secondsToHideScreen_6() { return &___secondsToHideScreen_6; }
	inline void set_secondsToHideScreen_6(int32_t value)
	{
		___secondsToHideScreen_6 = value;
	}

	inline static int32_t get_offset_of_mainControllerUi_7() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___mainControllerUi_7)); }
	inline GameObject_t1756533147 * get_mainControllerUi_7() const { return ___mainControllerUi_7; }
	inline GameObject_t1756533147 ** get_address_of_mainControllerUi_7() { return &___mainControllerUi_7; }
	inline void set_mainControllerUi_7(GameObject_t1756533147 * value)
	{
		___mainControllerUi_7 = value;
		Il2CppCodeGenWriteBarrier(&___mainControllerUi_7, value);
	}

	inline static int32_t get_offset_of_progressSlider_8() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___progressSlider_8)); }
	inline Slider_t297367283 * get_progressSlider_8() const { return ___progressSlider_8; }
	inline Slider_t297367283 ** get_address_of_progressSlider_8() { return &___progressSlider_8; }
	inline void set_progressSlider_8(Slider_t297367283 * value)
	{
		___progressSlider_8 = value;
		Il2CppCodeGenWriteBarrier(&___progressSlider_8, value);
	}

	inline static int32_t get_offset_of_playImage_9() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___playImage_9)); }
	inline GameObject_t1756533147 * get_playImage_9() const { return ___playImage_9; }
	inline GameObject_t1756533147 ** get_address_of_playImage_9() { return &___playImage_9; }
	inline void set_playImage_9(GameObject_t1756533147 * value)
	{
		___playImage_9 = value;
		Il2CppCodeGenWriteBarrier(&___playImage_9, value);
	}

	inline static int32_t get_offset_of_volumeSlider_10() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___volumeSlider_10)); }
	inline Slider_t297367283 * get_volumeSlider_10() const { return ___volumeSlider_10; }
	inline Slider_t297367283 ** get_address_of_volumeSlider_10() { return &___volumeSlider_10; }
	inline void set_volumeSlider_10(Slider_t297367283 * value)
	{
		___volumeSlider_10 = value;
		Il2CppCodeGenWriteBarrier(&___volumeSlider_10, value);
	}

	inline static int32_t get_offset_of_playbackSpeed_11() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___playbackSpeed_11)); }
	inline Slider_t297367283 * get_playbackSpeed_11() const { return ___playbackSpeed_11; }
	inline Slider_t297367283 ** get_address_of_playbackSpeed_11() { return &___playbackSpeed_11; }
	inline void set_playbackSpeed_11(Slider_t297367283 * value)
	{
		___playbackSpeed_11 = value;
		Il2CppCodeGenWriteBarrier(&___playbackSpeed_11, value);
	}

	inline static int32_t get_offset_of_currentTimeString_12() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___currentTimeString_12)); }
	inline Text_t356221433 * get_currentTimeString_12() const { return ___currentTimeString_12; }
	inline Text_t356221433 ** get_address_of_currentTimeString_12() { return &___currentTimeString_12; }
	inline void set_currentTimeString_12(Text_t356221433 * value)
	{
		___currentTimeString_12 = value;
		Il2CppCodeGenWriteBarrier(&___currentTimeString_12, value);
	}

	inline static int32_t get_offset_of_totalTimeString_13() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___totalTimeString_13)); }
	inline Text_t356221433 * get_totalTimeString_13() const { return ___totalTimeString_13; }
	inline Text_t356221433 ** get_address_of_totalTimeString_13() { return &___totalTimeString_13; }
	inline void set_totalTimeString_13(Text_t356221433 * value)
	{
		___totalTimeString_13 = value;
		Il2CppCodeGenWriteBarrier(&___totalTimeString_13, value);
	}

	inline static int32_t get_offset_of_totalVideoDuration_14() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___totalVideoDuration_14)); }
	inline float get_totalVideoDuration_14() const { return ___totalVideoDuration_14; }
	inline float* get_address_of_totalVideoDuration_14() { return &___totalVideoDuration_14; }
	inline void set_totalVideoDuration_14(float value)
	{
		___totalVideoDuration_14 = value;
	}

	inline static int32_t get_offset_of_currentVideoDuration_15() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___currentVideoDuration_15)); }
	inline float get_currentVideoDuration_15() const { return ___currentVideoDuration_15; }
	inline float* get_address_of_currentVideoDuration_15() { return &___currentVideoDuration_15; }
	inline void set_currentVideoDuration_15(float value)
	{
		___currentVideoDuration_15 = value;
	}

	inline static int32_t get_offset_of_videoSeekDone_16() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___videoSeekDone_16)); }
	inline bool get_videoSeekDone_16() const { return ___videoSeekDone_16; }
	inline bool* get_address_of_videoSeekDone_16() { return &___videoSeekDone_16; }
	inline void set_videoSeekDone_16(bool value)
	{
		___videoSeekDone_16 = value;
	}

	inline static int32_t get_offset_of_videoAudioSeekDone_17() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___videoAudioSeekDone_17)); }
	inline bool get_videoAudioSeekDone_17() const { return ___videoAudioSeekDone_17; }
	inline bool* get_address_of_videoAudioSeekDone_17() { return &___videoAudioSeekDone_17; }
	inline void set_videoAudioSeekDone_17(bool value)
	{
		___videoAudioSeekDone_17 = value;
	}

	inline static int32_t get_offset_of_loadingPanel_18() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___loadingPanel_18)); }
	inline GameObject_t1756533147 * get_loadingPanel_18() const { return ___loadingPanel_18; }
	inline GameObject_t1756533147 ** get_address_of_loadingPanel_18() { return &___loadingPanel_18; }
	inline void set_loadingPanel_18(GameObject_t1756533147 * value)
	{
		___loadingPanel_18 = value;
		Il2CppCodeGenWriteBarrier(&___loadingPanel_18, value);
	}

	inline static int32_t get_offset_of_loadingMessage_19() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___loadingMessage_19)); }
	inline Text_t356221433 * get_loadingMessage_19() const { return ___loadingMessage_19; }
	inline Text_t356221433 ** get_address_of_loadingMessage_19() { return &___loadingMessage_19; }
	inline void set_loadingMessage_19(Text_t356221433 * value)
	{
		___loadingMessage_19 = value;
		Il2CppCodeGenWriteBarrier(&___loadingMessage_19, value);
	}

	inline static int32_t get_offset_of_hideScreenTime_20() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___hideScreenTime_20)); }
	inline float get_hideScreenTime_20() const { return ___hideScreenTime_20; }
	inline float* get_address_of_hideScreenTime_20() { return &___hideScreenTime_20; }
	inline void set_hideScreenTime_20(float value)
	{
		___hideScreenTime_20 = value;
	}

	inline static int32_t get_offset_of_finished_21() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___finished_21)); }
	inline bool get_finished_21() const { return ___finished_21; }
	inline bool* get_address_of_finished_21() { return &___finished_21; }
	inline void set_finished_21(bool value)
	{
		___finished_21 = value;
	}

	inline static int32_t get_offset_of_showingPlaybackSpeed_22() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___showingPlaybackSpeed_22)); }
	inline bool get_showingPlaybackSpeed_22() const { return ___showingPlaybackSpeed_22; }
	inline bool* get_address_of_showingPlaybackSpeed_22() { return &___showingPlaybackSpeed_22; }
	inline void set_showingPlaybackSpeed_22(bool value)
	{
		___showingPlaybackSpeed_22 = value;
	}

	inline static int32_t get_offset_of_showingVolume_23() { return static_cast<int32_t>(offsetof(VideoController_t4244168663, ___showingVolume_23)); }
	inline bool get_showingVolume_23() const { return ___showingVolume_23; }
	inline bool* get_address_of_showingVolume_23() { return &___showingVolume_23; }
	inline void set_showingVolume_23(bool value)
	{
		___showingVolume_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

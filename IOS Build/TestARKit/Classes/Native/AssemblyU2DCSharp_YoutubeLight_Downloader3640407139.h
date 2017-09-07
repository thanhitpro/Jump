#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

// System.EventHandler
struct EventHandler_t277755526;
// System.String
struct String_t;
// YoutubeLight.VideoInfo
struct VideoInfo_t2025953517;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// YoutubeLight.Downloader
struct  Downloader_t3640407139  : public Il2CppObject
{
public:
	// System.EventHandler YoutubeLight.Downloader::DownloadFinished
	EventHandler_t277755526 * ___DownloadFinished_0;
	// System.EventHandler YoutubeLight.Downloader::DownloadStarted
	EventHandler_t277755526 * ___DownloadStarted_1;
	// System.Nullable`1<System.Int32> YoutubeLight.Downloader::<BytesToDownload>k__BackingField
	Nullable_1_t334943763  ___U3CBytesToDownloadU3Ek__BackingField_2;
	// System.String YoutubeLight.Downloader::<SavePath>k__BackingField
	String_t* ___U3CSavePathU3Ek__BackingField_3;
	// YoutubeLight.VideoInfo YoutubeLight.Downloader::<Video>k__BackingField
	VideoInfo_t2025953517 * ___U3CVideoU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_DownloadFinished_0() { return static_cast<int32_t>(offsetof(Downloader_t3640407139, ___DownloadFinished_0)); }
	inline EventHandler_t277755526 * get_DownloadFinished_0() const { return ___DownloadFinished_0; }
	inline EventHandler_t277755526 ** get_address_of_DownloadFinished_0() { return &___DownloadFinished_0; }
	inline void set_DownloadFinished_0(EventHandler_t277755526 * value)
	{
		___DownloadFinished_0 = value;
		Il2CppCodeGenWriteBarrier(&___DownloadFinished_0, value);
	}

	inline static int32_t get_offset_of_DownloadStarted_1() { return static_cast<int32_t>(offsetof(Downloader_t3640407139, ___DownloadStarted_1)); }
	inline EventHandler_t277755526 * get_DownloadStarted_1() const { return ___DownloadStarted_1; }
	inline EventHandler_t277755526 ** get_address_of_DownloadStarted_1() { return &___DownloadStarted_1; }
	inline void set_DownloadStarted_1(EventHandler_t277755526 * value)
	{
		___DownloadStarted_1 = value;
		Il2CppCodeGenWriteBarrier(&___DownloadStarted_1, value);
	}

	inline static int32_t get_offset_of_U3CBytesToDownloadU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(Downloader_t3640407139, ___U3CBytesToDownloadU3Ek__BackingField_2)); }
	inline Nullable_1_t334943763  get_U3CBytesToDownloadU3Ek__BackingField_2() const { return ___U3CBytesToDownloadU3Ek__BackingField_2; }
	inline Nullable_1_t334943763 * get_address_of_U3CBytesToDownloadU3Ek__BackingField_2() { return &___U3CBytesToDownloadU3Ek__BackingField_2; }
	inline void set_U3CBytesToDownloadU3Ek__BackingField_2(Nullable_1_t334943763  value)
	{
		___U3CBytesToDownloadU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CSavePathU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Downloader_t3640407139, ___U3CSavePathU3Ek__BackingField_3)); }
	inline String_t* get_U3CSavePathU3Ek__BackingField_3() const { return ___U3CSavePathU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CSavePathU3Ek__BackingField_3() { return &___U3CSavePathU3Ek__BackingField_3; }
	inline void set_U3CSavePathU3Ek__BackingField_3(String_t* value)
	{
		___U3CSavePathU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier(&___U3CSavePathU3Ek__BackingField_3, value);
	}

	inline static int32_t get_offset_of_U3CVideoU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Downloader_t3640407139, ___U3CVideoU3Ek__BackingField_4)); }
	inline VideoInfo_t2025953517 * get_U3CVideoU3Ek__BackingField_4() const { return ___U3CVideoU3Ek__BackingField_4; }
	inline VideoInfo_t2025953517 ** get_address_of_U3CVideoU3Ek__BackingField_4() { return &___U3CVideoU3Ek__BackingField_4; }
	inline void set_U3CVideoU3Ek__BackingField_4(VideoInfo_t2025953517 * value)
	{
		___U3CVideoU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CVideoU3Ek__BackingField_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Guid2533601593.h"

// Utils.serializableARKitInit
struct serializableARKitInit_t2850619308;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Utils.serializableFromEditorMessage
struct  serializableFromEditorMessage_t2894567809  : public Il2CppObject
{
public:
	// System.Guid Utils.serializableFromEditorMessage::subMessageId
	Guid_t  ___subMessageId_0;
	// Utils.serializableARKitInit Utils.serializableFromEditorMessage::arkitConfigMsg
	serializableARKitInit_t2850619308 * ___arkitConfigMsg_1;

public:
	inline static int32_t get_offset_of_subMessageId_0() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t2894567809, ___subMessageId_0)); }
	inline Guid_t  get_subMessageId_0() const { return ___subMessageId_0; }
	inline Guid_t * get_address_of_subMessageId_0() { return &___subMessageId_0; }
	inline void set_subMessageId_0(Guid_t  value)
	{
		___subMessageId_0 = value;
	}

	inline static int32_t get_offset_of_arkitConfigMsg_1() { return static_cast<int32_t>(offsetof(serializableFromEditorMessage_t2894567809, ___arkitConfigMsg_1)); }
	inline serializableARKitInit_t2850619308 * get_arkitConfigMsg_1() const { return ___arkitConfigMsg_1; }
	inline serializableARKitInit_t2850619308 ** get_address_of_arkitConfigMsg_1() { return &___arkitConfigMsg_1; }
	inline void set_arkitConfigMsg_1(serializableARKitInit_t2850619308 * value)
	{
		___arkitConfigMsg_1 = value;
		Il2CppCodeGenWriteBarrier(&___arkitConfigMsg_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

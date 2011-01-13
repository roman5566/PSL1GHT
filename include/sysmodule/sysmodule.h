#pragma once

#include <psl1ght/types.h>

EXTERN_BEGIN

typedef enum
{
	SYSMODULE_NET=0,
	SYSMODULE_HTTP=1,

	SYSMODULE_RTC=9,
	
	SYSMODULE_SYNC=0xd,
	SYSMODULE_FS,
	SYSMODULE_JPGDEC,
	SYSMODULE_GCM_SYS,
	SYSMODULE_AUDIO,
	
	SYSMODULE_NETCTL=0x14,
	SYSMODULE_SYSUTIL,
	SYSMODULE_SYSUTIL_NP,
	SYSMODULE_IO,
	SYSMODULE_PNGDEC,
	
	SYSMODULE_USBD = 0x1c,
	
	SYSMODULE_CAM = 0x23,
	
	SYSMODULE_MOVE = 0x5a,
	
} id_module;

int SysLoadModule(id_module id);
int SysUnloadModule(id_module id);

EXTERN_END

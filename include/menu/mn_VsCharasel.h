#ifndef MENU_MN_VSCHARASEL_H
#define MENU_MN_VSCHARASEL_H

#include "menu/menu.h"

/* The versus character select's global block (0x1C bytes, gVsCharasel). */
typedef struct VsCharaselGlobal {
    void *file[2];
    s32 f8;
    s32 fC;
    s32 f10;
    Task *task;
    s32 f18;
} VsCharaselGlobal;

extern VsCharaselGlobal *gVsCharasel;

#endif

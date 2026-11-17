#ifndef STORY_OPENING_H
#define STORY_OPENING_H

#include "menu/menu.h"

/* opening.c's work area (0x14 bytes, gOpening). */
typedef struct OpeningWork {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
} OpeningWork;

extern OpeningWork *gOpening;

#endif

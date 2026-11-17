#ifndef STORY_STR_STATUS_H
#define STORY_STR_STATUS_H

#include "menu/menu.h"

/* The story status work block (D_00470910). Only the fields the matched functions use are named so far. */
typedef struct StrStatusWork {
    char pad0[0x4];
    void *f4;               /* 0x04: a record whose s16 at +4 is the state (StrStatus_TaskMain) */
    char pad8[0x38 - 0x8];
    Task *f38;              /* 0x38: the task made by StrStatus_Start */
    char pad3C[0x274 - 0x3C];
    s32 f274;               /* 0x274 */
    s32 f278;               /* 0x278 */
    char pad27C[0x284 - 0x27C];
    s32 f284;               /* 0x284 */
    s32 f288[12];           /* 0x288..0x2B4: copied bytes by func_002BD400 */
    char pad2B8[0x2D4 - 0x2B8];
    s32 f2D4;               /* 0x2D4 */
    char pad2D8[0x2DC - 0x2D8];
    s32 f2DC[7];            /* 0x2DC..0x2F4 */
} StrStatusWork;

extern StrStatusWork *D_00470910;

#endif

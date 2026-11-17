#ifndef BATTLE_SCRIPT_H
#define BATTLE_SCRIPT_H

#include "battle/battle.h"

/* The script interpreter's objects as the commands of scr_func.c see them (inferred). A command function gets
 * the running thread and the command (ScriptCtx, battle.h); it returns 1 to go on, 3 to wait (the thread's `wait`
 * function is then called each frame until it returns 1). */
typedef struct ScriptObj {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 unk04[2];
    /* 0x0C */ s32 state;                    /* 3: paused (guess) */
} ScriptObj;

typedef struct ScriptThread {
    /* 0x00 */ ScriptObj *obj;
    /* 0x04 */ s32 unk04[3];
    /* 0x10 */ s32 (*wait)(struct ScriptThread *t, ScriptCtx *ctx);
    /* 0x14 */ void *unk14;
    /* 0x18 */ s32 unk18[3];
    /* 0x24 */ s32 count;
    /* 0x28 */ s8 unk28;
    /* 0x2C */ f32 time;
    /* 0x30 */ s32 unk30[2];
    /* 0x38 */ f32 unk38;
} ScriptThread;

#endif

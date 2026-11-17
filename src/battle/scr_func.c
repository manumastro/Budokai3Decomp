#include "common.h"

#include "battle/script.h"

extern u8 D_005BC9E0[];
extern s32 amAdx_IsPlaying(s32);
extern void amAdx_Pause(s32, s32);

extern u8 D_005BC560[];
extern u8 D_005BCD20[];
extern void amCdFs_ReleaseCache(s32);

typedef struct ScrLightSub {
    /* 0x0000 */ u8 unk0000[0x2094];
    /* 0x2094 */ f32 unk2094;
    /* 0x2098 */ s32 unk2098;
    /* 0x209C */ s32 unk209C;
    /* 0x20A0 */ u8 unk20A0[0x20E0 - 0x20A0];
} ScrLightSub;

typedef struct ScrLight {
    /* 0x0000 */ ScrLightSub sub[4];
    /* 0x8380 */ u8 unk8380[0];
} ScrLight;

typedef struct ScrFlag {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u16 flags;
} ScrFlag;

typedef struct ScrModel {
    /* 0x00 */ u8 unk00[0x08];
    /* 0x08 */ ScrFlag *flag;
    /* 0x0C */ u8 unk0C[0x14 - 0x0C];
    /* 0x14 */ f32 speed;
    /* 0x18 */ u8 unk18[0x20 - 0x18];
    /* 0x20 */ f32 color[4];
} ScrModel;

typedef struct ScrEffectSub {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ f32 speed;
    /* 0x14 */ u8 unk14[0xB0 - 0x14];
} ScrEffectSub;

typedef struct ScrEffect {
    /* 0x000 */ ScrEffectSub sub[2];
} ScrEffect;

typedef struct ScrTimerRes {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ s32 unk68;
    /* 0x6C */ s32 unk6C;
} ScrTimerRes;

extern s32 D_004700AC;
extern f32 D_004708F0[2];
extern f32 D_004708F8;
extern s32 gSoundState;
extern ScrLightSub D_005ABA80[][4];
extern ScrModel D_005BC440[][3];
extern ScrEffectSub D_005BC180[][2];
extern void func_002A9930(void);
extern void func_002A9AE0(void);
extern void func_002A9C00(void);
extern void func_002A9EA0(void);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Stop(s32);
extern void amAdx_Pause(s32, s32);
extern s32 amAdx_PlayFile(s32, s32, s32);
extern s32 amAdx_IsStopped(s32);
extern void func_00144A40(s32, s32, f32);
extern void func_00144770(s32, f32);
extern void SoundRpc_SendWord(s32);
extern void func_001445C0(s32);
extern void SoundRpc_SendWord2(s32);
extern void func_00144050(s32, s32, s32, s32, f32, f32, f32);
extern void func_00143E70(s32, s32, s32);
extern void SoundRpc_Send3(s32, s32, s32, s32);
s32 func_002AB690(ScriptThread *t, ScriptCtx *ctx);

INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9080);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A92B0);
extern u8 D_004E6560[];
extern u8 D_005AB3A0[];
extern s32 D_00511768[];
extern void func_00298E10(s32);
extern void func_00298E00(s32);
// GIVEN UP: the vector copy, the two calls and the clear match; the compiler splits the slot offset 0x1240 as 0x80 + 0x11C0 (its slot base sits at +0x80), the original keeps the slot base in a register (about 7 of 30 differ)
#if 0
void func_002A93E0(void) {
    u8 *base = D_004E6560;
    s32 idx = *(s8 *)(base + 0x2AEF0);
    u8 *src = D_005AB3A0;
    s32 v = *(s32 *)(src + 0x10);
    u8 *e = base + idx * 4624;
    u8 *p = e + 0x1240;

    __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(src), "r"(p) : "memory");
    *(s32 *)(e + 0x1250) = v;
    func_00298E10(-1);
    func_00298E00(-1);
    D_00511768[0] = 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A93E0);
extern u8 D_005AB3A0[];
void Scr_SetRecord(s32 *a0, s32 a1) {
    s32 *d = (s32 *)D_005AB3A0;
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(a0), "r"(d) : "memory");
    d[4] = a1;
}
void func_002A9480(s32 n) {
    if (n < 0 || n > 29) {
        n = 0;
    }
    D_004700AC = n + 0x0BB80000;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A94B0);
s32 Scr_CmdGlobalTime(ScriptThread *t, ScriptCtx *ctx) {
    ctx->ret = D_004708F0[0];
    return 3;
}
void func_002A9780(s32 a0, s32 a1, s32 a2, s32 a3, s32 t0) {
    s32 *s3 = (s32 *)(D_005BC560 + a0 * 576 + a1 * 36) + 6;

    if (s3[0] != 0) {
        amCdFs_ReleaseCache(s3[0]);
    }
    s3[0] = a2;
    s3[1] = a3;
    s3[2] = t0;
}
void func_002A9810(s32 a0, s32 a1, s32 a2, s32 a3, s32 t0) {
    s32 *s3 = (s32 *)(D_005BC560 + a0 * 576 + a1 * 36) + 3;

    if (s3[0] != 0) {
        amCdFs_ReleaseCache(s3[0]);
    }
    s3[0] = a2;
    s3[1] = a3;
    s3[2] = t0;
}
void func_002A98A0(s32 a0, s32 a1, s32 a2, s32 a3, s32 t0) {
    s32 *s3 = (s32 *)(D_005BC560 + a0 * 576 + (a1 + 15) * 36);

    if (s3[0] != 0) {
        amCdFs_ReleaseCache(s3[0]);
    }
    s3[0] = a2;
    s3[1] = a3;
    s3[2] = t0;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9930);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9AE0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9C00);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9D30);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9EA0);
void func_002AA050(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 *s2 = (s32 *)(D_005BCD20 + a0 * 160 + a1 * 40);

    if (s2[0] != 0) {
        amCdFs_ReleaseCache(s2[0]);
        s2[0] = 0;
    }
    s2[0] = a2;
    s2[2] = a3;
}
void func_002AA0D0(void) {
    func_002A9930();
}
void func_002AA0E0(void) {
    func_002A9AE0();
}
extern void amFile_Load(s32);
extern void amNode_Free(void *);
extern void *amNode_Alloc(void);
void func_002AA0F0(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 *e = (s32 *)((u8 *)D_005BC440 + a0 * 144 + (a1 + 1) * 48);

    if (e[0] != 0) {
        amCdFs_ReleaseCache(e[0]);
    }
    if (e[2] != 0) {
        amNode_Free((void *)e[2]);
    }
    e[0] = a2;
    e[1] = a3;
    amFile_Load(e[1]);
    e[2] = (s32)amNode_Alloc();
    e[3] = 0;
    e[4] = 0;
    *(f32 *)&e[5] = D_004708F8;
    e[6] = 0;
}
extern void amFile_Load(s32);
extern void amCamera_Init(void *);
void ScrCamSlot_Load(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 *e = (s32 *)((u8 *)D_005BC180 + a0 * 352 + a1 * 176);

    if (e[0] != 0) {
        amCdFs_ReleaseCache(e[0]);
    }
    e[0] = a2;
    e[1] = a3;
    amFile_Load(e[1]);
    amCamera_Init(e + 8);
    e[2] = 0;
    e[3] = 0;
    *(f32 *)&e[4] = D_004708F8;
    e[5] = 0;
}
// GIVEN UP: the arithmetic and the calls match; the original keeps the slot offset and recomputes the entry after the release call (0xD0 against 0xC4 bytes)
#if 0
void func_002AA260(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    u8 *s1 = (u8 *)D_005ABA80 + ((a0 * 33 * 8) - a0) * 128 + ((a1 * 33 * 8) - a1) * 32;
    s32 *s5 = (s32 *)(s1 + a2 * 4 + 0x14);

    if (*s5 != 0) {
        amCdFs_ReleaseCache(*s5);
    }
    *s5 = a3;
    amFile_Load(a4);
    *(s32 *)(s1 + a2 * 4 + 0x30) = a4;
    amMotSet_Bind(s1 + 0x40, a2, a4);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA260);
void func_002AA330(void) {
    func_002A9C00();
}
void func_002AA340(s32 a0, s32 a1, s32 a2, s32 a3) {
    u8 *e0 = (u8 *)D_005ABA80 + ((a0 * 33 * 8) - a0) * 128;
    u8 *e = e0 + ((a1 * 33 * 8) - a1) * 32;

    if (*(s32 *)(e + 8) != 0) {
        amCdFs_ReleaseCache(*(s32 *)(e + 8));
    }
    *(s32 *)(e + 8) = a2;
    *(s32 *)(e + 0x24) = a3;
}
void func_002AA3D0(void) {
    func_002A9EA0();
}
s32 Scr_CmdTimerClear(ScriptThread *t, ScriptCtx *ctx) {
    ScrTimerRes *r = ctx->unk38;
    r->unk68 = 0;
    r->unk6C = 0;
    return 1;
}
s32 Scr_WaitGlobalTime(ScriptThread *t, ScriptCtx *ctx) {
    if (!(D_004708F0[0] <= ((f32 *)ctx->args)[0])) {
        t->wait = 0;
        return 1;
    }
    return 3;
}
s32 Scr_CmdWaitGlobalTime(ScriptThread *t, ScriptCtx *ctx) {
    if ((s32)((f32 *)ctx->args)[0] <= 0) {
        return 1;
    }
    t->wait = Scr_WaitGlobalTime;
    return 3;
}
s32 Scr_WaitObjFrames(ScriptThread *t, ScriptCtx *ctx) {
    if (!(0.5f + (D_004708F0[t->obj->id] - t->time) < (f32)t->count)) {
        t->wait = 0;
        return 1;
    }
    return 3;
}
s32 Scr_CmdWaitObjFrames(ScriptThread *t, ScriptCtx *ctx) {
    t->count = ctx->args[0];
    t->time = D_004708F0[t->obj->id];
    t->wait = Scr_WaitObjFrames;
    return 3;
}
s32 Scr_CmdObjTime(ScriptThread *t, ScriptCtx *ctx) {
    ctx->ret = 0.5f + D_004708F0[t->obj->id];
    return 1;
}
s32 Scr_ObjTimerTick(ScriptThread *t, ScriptCtx *ctx) {
    ScriptObj *o = t->obj;
    if (o->state != 3) {
        D_004708F0[o->id] += D_004708F8;
    }
    return 3;
}
s32 Scr_CmdObjTimerStart(ScriptThread *t, ScriptCtx *ctx) {
    ScriptObj *o;
    t->wait = Scr_ObjTimerTick;
    D_004708F0[t->obj->id] = 0.0f;
    o = t->obj;
    if (o->state != 3) {
        D_004708F0[o->id] += D_004708F8;
    }
    return 3;
}
s32 func_002AA600(s32 *a0, s32 *a1) {
    s32 i = *(s32 *)a0[0];
    s32 *p = *(s32 **)((u8 *)a1 + 0x2C);
    u8 *e = (u8 *)D_005BC9E0 + i * 416 + p[1] * 208;
    u8 *tbl = *(u8 **)(e + 4);
    u8 *base = tbl + *(s32 *)(tbl + 0x14);
    u8 *rec = tbl + *(s32 *)(base + *(s32 *)(e + 8) * 4);

    if (p[0] == 0) {
        *(f32 *)((u8 *)a1 + 0x40) = (f32)*(s16 *)(rec + 0x10);
    } else {
        *(f32 *)((u8 *)a1 + 0x40) = (f32)*(s16 *)(rec + 0x12);
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA6B0);
// GIVEN UP: the same tail-call shape as func_002AAB40 and 16 bytes short (0xD0 against 0xE0): the extra instructions are not placed
#if 0
s32 func_002AA8A0(s32 *a0, s32 *a1) {
    u8 *p = *(u8 **)((u8 *)a1 + 0x2C);
    s32 i = *(s32 *)a0[0];
    s32 j = *(s32 *)(p + 0xC);
    u8 *e = (u8 *)((s32)(j * 208) + ((s32)D_005BC9E0 + i * 416));
    u8 *sub = *(u8 **)((u8 *)a1 + 0x38);
    s32 *q = (s32 *)(sub + 0x68);
    s32 k;

    *(f32 *)(e + 0x24) = *(f32 *)(p + 8);
    *(f32 *)(e + 0x28) = *(f32 *)(p + 4);
    *(f32 *)(e + 0x2C) = *(f32 *)(p + 0);
    k = (s32)*(f32 *)(e + 0x24);
    if (*(s32 *)(sub + 0x6C) != 0) {
        q[0] += k;
    } else {
        q[0] = k + (s32)D_004708F0[i];
    }
    q[1] = 1;
    a0[4] = (s32)func_002AA6B0;
    return func_002AA6B0(a0, a1);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA8A0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA980);
// GIVEN UP: a tail call and the stores match; the original is 16 bytes longer (0xF0 against 0xE0): the order of the index sums differs
#if 0
s32 func_002AAB40(s32 *a0, s32 *a1) {
    u8 *p = *(u8 **)((u8 *)a1 + 0x2C);
    s32 i = *(s32 *)a0[0];
    s32 j = *(s32 *)(p + 0x10);
    u8 *e = (u8 *)D_005BC9E0 + i * 416 + j * 208;
    u8 *sub = *(u8 **)((u8 *)a1 + 0x38);
    s32 *q = (s32 *)(sub + 0x68);
    s32 k;

    *(f32 *)(e + 0x20) = *(f32 *)(p + 0xC);
    *(f32 *)(e + 0xB0) = *(f32 *)(p + 8);
    *(f32 *)(e + 0xB4) = *(f32 *)(p + 4);
    *(f32 *)(e + 0xB8) = *(f32 *)(p + 0);
    *(s32 *)(e + 0xBC) = 0x3F800000;
    k = (s32)*(f32 *)(e + 0x20);
    if (*(s32 *)(sub + 0x6C) != 0) {
        q[0] += k;
    } else {
        q[0] = k + (s32)D_004708F0[i];
    }
    q[1] = 1;
    a0[4] = (s32)func_002AA980;
    return func_002AA980(a0, a1);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AAB40);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AAC30);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AAD80);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AAF30);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AB020);
// differs: 1 of 66 instructions: the store at offset 0x84 uses f4 in ours and f3 (the value of p[0]) in the original; float local orders tried.
#if 0
s32 func_002AB1D0(s32 *a0, s32 *a1) {
    s32 *p = *(s32 **)((u8 *)a1 + 0x2C);
    f32 *f = (f32 *)p;
    f32 x2 = f[2];
    f32 x1 = f[1];
    f32 x0 = f[0];
    s32 i = *(s32 *)a0[0];
    u8 *e = (u8 *)D_005BC9E0 + i * 416 + p[3] * 208;

    *(f32 *)(e + 0x80) = x2;
    *(f32 *)(e + 0x84) = x0;
    if (*(s32 *)(e + 0x14) & 1) {
        f32 h = 0.5f * *(f32 *)(e + 0x50);
        *(f32 *)(e + 0x60) = *(f32 *)(e + 0x80) - h;
        *(f32 *)(e + 0x70) = *(f32 *)(e + 0x80) + h;
    } else {
        *(f32 *)(e + 0x60) = x2;
        *(f32 *)(e + 0x70) = x2 + *(f32 *)(e + 0x50);
    }
    if (*(s32 *)(e + 0x14) & 2) {
        f32 h = 0.5f * *(f32 *)(e + 0x54);
        *(f32 *)(e + 0x64) = *(f32 *)(e + 0x84) - h;
        *(f32 *)(e + 0x74) = *(f32 *)(e + 0x84) + h;
    } else {
        *(f32 *)(e + 0x64) = x1;
        *(f32 *)(e + 0x74) = x1 + *(f32 *)(e + 0x54);
    }
    *(f32 *)(e + 0x68) = x0;
    *(f32 *)(e + 0x78) = x0;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AB1D0);
s32 func_002AB2E0(s32 *a0, s32 *a1) {
    s32 *p = *(s32 **)((u8 *)a1 + 0x2C);
    f32 *f = (f32 *)p;
    s32 i = *(s32 *)a0[0];
    u8 *e = (u8 *)D_005BC9E0 + i * 416 + p[2] * 208;

    *(f32 *)(e + 0x50) = f[1];
    *(f32 *)(e + 0x54) = f[0];
    if (*(s32 *)(e + 0x14) & 1) {
        f32 h = 0.5f * *(f32 *)(e + 0x50);
        *(f32 *)(e + 0x60) = *(f32 *)(e + 0x80) - h;
        *(f32 *)(e + 0x70) = *(f32 *)(e + 0x80) + h;
    } else {
        *(f32 *)(e + 0x70) = *(f32 *)(e + 0x60) + *(f32 *)(e + 0x50);
    }
    if (*(s32 *)(e + 0x14) & 2) {
        f32 h = 0.5f * *(f32 *)(e + 0x54);
        *(f32 *)(e + 0x64) = *(f32 *)(e + 0x84) - h;
        *(f32 *)(e + 0x74) = *(f32 *)(e + 0x84) + h;
    } else {
        *(f32 *)(e + 0x74) = *(f32 *)(e + 0x64) + *(f32 *)(e + 0x54);
    }
    return 1;
}
s32 func_002AB3E0(s32 *a0, s32 *a1) {
    s32 *t0 = (s32 *)a1[11];
    s32 a3 = ((s32 *)a0[0])[0];
    u8 *e = D_005BC9E0 + a3 * 416 + t0[4] * 208;

    *(f32 *)(e + 0x90) = *(f32 *)&t0[3];
    *(f32 *)(e + 0x94) = *(f32 *)&t0[2];
    *(f32 *)(e + 0x98) = *(f32 *)&t0[1];
    *(f32 *)(e + 0x9C) = *(f32 *)&t0[0];
    return 1;
}
s32 func_002AB450(s32 *a0, s32 *a1) {
    s32 *p = *(s32 **)((u8 *)a1 + 0x2C);
    s32 i = *(s32 *)a0[0];
    s32 j = p[6];
    u8 *e = (u8 *)D_005BC9E0 + i * 416 + j * 208;

    *(s32 *)(e + 8) = p[5];
    *(s32 *)(e + 0xC) = p[4];
    *(f32 *)(e + 0x30) = (f32)p[3];
    *(f32 *)(e + 0x34) = (f32)p[2];
    *(f32 *)(e + 0x40) = (f32)p[1] - 0.5f;
    *(f32 *)(e + 0x44) = (f32)p[0];
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AB4F0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AB690);
s32 func_002AB9C0(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    if (a[0] != 0) {
        t->unk14 = func_002AB690;
        t->unk28 = a[1];
    } else if (t->unk14 == func_002AB690) {
        t->unk14 = 0;
    }
    return 1;
}
s32 ScrAdx_SetVolume(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    amAdx_SetVolume(a[1], ((f32 *)a)[0]);
    return 1;
}
s32 ScrAdx_Stop(ScriptThread *t, ScriptCtx *ctx) {
    amAdx_Stop(ctx->args[0]);
    return 1;
}
// GIVEN UP: the branch layout of the return values differs (tried two forms); the original has a 0x80-byte frame and a different branch order (0x6C against 0x80)
s32 func_002ABA70(s32 *a0, s32 *a1) {
    s32 *s0 = (s32 *)a1[11];
    s32 r;
    if (((s32 *)a0[0])[3] == 3) {
        r = 3;
    } else {
        if (!amAdx_IsPlaying(s0[0])) {
            r = 3;
        } else {
            amAdx_Pause(s0[0], 0);
            a0[4] = 0;
            r = 1;
        }
    }
    return r;
}
// GIVEN UP: the callback store and the return value are right; the frame keeps one register more than the original and the join differs
s32 func_002ABAF0(s32 *a0, s32 *a1) {
    s32 *s0;
    s32 r;
    a0[4] = (s32)func_002ABA70;
    s0 = (s32 *)a1[11];
    if (((s32 *)a0[0])[3] == 3) {
        r = 3;
    } else {
        if (!amAdx_IsPlaying(s0[0])) {
            r = 3;
        } else {
            amAdx_Pause(s0[0], 0);
            a0[4] = 0;
            r = 1;
        }
    }
    return r;
}
s32 ScrAdx_Pause(ScriptThread *t, ScriptCtx *ctx) {
    amAdx_Pause(ctx->args[0], 0);
    return 1;
}
s32 ScrAdx_PlayPaused(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    ctx->ret = amAdx_PlayFile(a[1], ctx->base + a[0], 0);
    amAdx_Pause(ctx->ret, 1);
    return 1;
}
s32 ScrAdx_WaitStop(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    if (t->obj->state == 3) {
        return 3;
    }
    if (amAdx_IsStopped(a[0]) != 0) {
        return 3;
    }
    t->wait = 0;
    return 1;
}
s32 ScrAdx_CheckStopped(ScriptThread *t, ScriptCtx *ctx) {
    if (amAdx_IsStopped(ctx->args[0]) != 0) {
        return 1;
    }
    t->wait = ScrAdx_WaitStop;
    return 3;
}
s32 ScrAdx_WaitPlayEnd(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    if (t->obj->state == 3) {
        return 3;
    }
    if (amAdx_IsStopped(a[0]) != 0) {
        return 3;
    }
    t->wait = 0;
    return 1;
}
s32 ScrAdx_PlayFileWait(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    ctx->ret = amAdx_PlayFile(a[1], ctx->base + a[0], 0);
    t->wait = ScrAdx_WaitPlayEnd;
    return 3;
}
s32 ScrAdx_PlayFile(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    ctx->ret = amAdx_PlayFile(a[1], ctx->base + a[0], 0);
    return 1;
}
s32 func_002ABDC0(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    func_00144A40(a[1], 0, ((f32 *)a)[0]);
    return 1;
}
s32 func_002ABDF0(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    func_00144770(a[1], ((f32 *)a)[0]);
    return 1;
}
s32 Scr_WaitSound(ScriptThread *t, ScriptCtx *ctx) {
    if (gSoundState != 0) {
        t->wait = Scr_WaitSound;
        return 3;
    }
    t->wait = 0;
    return 1;
}
// GIVEN UP: the loads and the calls match; the frame is 0x10 bytes short (0xC0 against 0xD0): the order of the index sums and the locals differ
#if 0
s32 func_002ABE50(s32 *a0, s32 *a1) {
    s32 j = *(s32 *)*(s32 **)((u8 *)a1 + 0x2C);
    s32 i = *(s32 *)*a0;
    s32 *e = (s32 *)((u8 *)D_005BC560 + i * 576 + j * 36);
    s32 loc[5];
    s32 r;

    if (e[4] != 0 && e[7] != 0) {
        loc[0] = j;
        loc[1] = e[5];
        loc[2] = e[8];
        loc[3] = e[4];
        loc[4] = e[7];
        r = amSound_LoadStream(loc, e + 3);
        if (r != 0) {
            a0[4] = (s32)func_002ABE50;
            return 3;
        }
    }
    a0[4] = 0;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ABE50);
extern s32 amSound_LoadBank2(void *, void *);
extern s32 func_002ABF20(s32 *, s32 *);
s32 func_002ABF20(s32 *a0, s32 *a1) {
    s32 loc[3];
    s32 *e;
    s32 i = *(s32 *)a0[0];
    s32 j = *(s32 *)*(s32 **)((u8 *)a1 + 0x2C);
    s32 r;

    e = (s32 *)((u8 *)D_005BC560 + i * 576 + (j + 15) * 36);
    loc[0] = j;
    loc[1] = e[2];
    loc[2] = e[1];
    r = amSound_LoadBank2(loc, D_005BC560);
    if (r != 0) {
        a0[4] = (s32)func_002ABF20;
        return 3;
    }
    a0[4] = 0;
    return 1;
}
extern s32 amSound_LoadBank(void *, s32);
extern s32 func_002ABFC0(s32 *, s32 *);
s32 func_002ABFC0(s32 *a0, s32 *a1) {
    s32 loc[3];
    s32 *e;
    s32 j = *(s32 *)*(s32 **)((u8 *)a1 + 0x2C);
    s32 i = *(s32 *)a0[0];
    s32 r;

    e = (s32 *)((u8 *)D_005BC560 + i * 576 + j * 36);
    loc[0] = j;
    loc[1] = e[2];
    loc[2] = e[1];
    r = amSound_LoadBank(loc, i * 576);
    if (r != 0) {
        a0[4] = (s32)func_002ABFC0;
        return 3;
    }
    a0[4] = 0;
    return 1;
}
s32 Scr_CmdSoundWord(ScriptThread *t, ScriptCtx *ctx) {
    SoundRpc_SendWord(ctx->args[0]);
    return 1;
}
s32 func_002AC090(ScriptThread *t, ScriptCtx *ctx) {
    func_001445C0(ctx->args[0]);
    return 1;
}
s32 Scr_CmdSoundWord2(ScriptThread *t, ScriptCtx *ctx) {
    SoundRpc_SendWord2(ctx->args[0]);
    return 1;
}
s32 func_002AC0F0(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    func_00144050(a[6], a[5], a[4], a[3], ((f32 *)a)[2], ((f32 *)a)[1], a[0]);
    return 1;
}
s32 func_002AC130(ScriptThread *t, ScriptCtx *ctx) {
    func_00143E70(ctx->args[0], -1, 0);
    return 1;
}
s32 Scr_CmdSoundSend3(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    SoundRpc_Send3(a[2], a[1], a[0], 0);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC190);
extern void func_002AC190(s32 *, s32 *);
void func_002AC330(s32 *a0, s32 *a1) {
    s32 *a3 = *(s32 **)((u8 *)a1 + 0x2C);
    s32 *a2 = (s32 *)(*(u8 **)((u8 *)a1 + 0x38) + 0x70);

    if (a3[2] != 0) {
        a0[15] = a3[2];
        a2[0] = 0;
        a2[1] = 0;
        *(f32 *)&a2[2] = *(f32 *)&a3[1];
        *(f32 *)&a2[3] = *(f32 *)&a3[0];
        a0[4] = (s32)func_002AC190;
        func_002AC190(a0, a1);
    } else {
        if (a0[4] == (s32)func_002AC190) {
            a0[4] = 0;
        }
    }
    func_002AC190(a0, a1);
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC3D0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC520);
s32 Scr_CmdLightF2094(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    ScrLightSub *s = D_005ABA80[t->obj->id];
    s[a[1]].unk2094 = ((f32 *)a)[0];
    return 1;
}
s32 Scr_CmdModelColor(ScriptThread *t, ScriptCtx *ctx) {
    f32 *a = (f32 *)ctx->args;
    ScrModel *m = D_005BC440[t->obj->id];
    m->color[0] = a[3];
    m->color[1] = a[2];
    m->color[2] = a[1];
    m->color[3] = a[0];
    return 1;
}
extern f32 D_00459390[];
extern f32 D_004593A0[];
extern f32 D_004593B0[];
// GIVEN UP: the loads and the copies match; the model pointer is kept in a0 instead of v1, and the D_ loads are placed in another order (7 of 32 differ)
#if 0
s32 func_002AC710(s32 *a0, s32 *a1) {
    s32 *o = (s32 *)*a0;
    ScrModel *m = D_005BC440[o[0]];
    f32 v[4];

    v[0] = D_00459390[2];
    v[1] = D_004593A0[2];
    v[2] = D_004593B0[2];
    *(s32 *)&v[3] = 0;
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(v), "r"((u8 *)m->flag + 0x10) : "memory");
    __asm__ volatile ("lqc2 $vf1, 0(%1) ; sqc2 $vf1, 0(%0)" : : "r"((u8 *)m->flag + 0x20), "r"(m->color) : "memory");
    return 0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC710);
extern s32 func_002AC710(s32 *, s32 *);
s32 func_002AC790(s32 *a0, s32 *a1) {
    s32 *e = (s32 *)((u8 *)D_005BC440 + *(s32 *)a0[0] * 144);
    s32 flag = *(s32 *)*(s32 **)((u8 *)a1 + 0x2C);

    if (flag == 0) {
        if (a0[5] == (s32)func_002AC710) {
            a0[5] = 0;
        }
        if (e[2] != 0) {
            amNode_Free((void *)e[2]);
            e[2] = 0;
        }
    } else {
        a0[5] = (s32)func_002AC710;
        if (e[2] == 0) {
            e[2] = (s32)amNode_Alloc();
        }
        *(s16 *)((u8 *)e[2] + 0x30) = 0;
        *(u16 *)((u8 *)e[2] + 0x32) |= 3;
    }
    return 1;
}
s32 Scr_CmdModelClearFlags(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    ScrModel *m = &D_005BC440[t->obj->id][a[1] + 1];
    m->flag->flags &= ~(u16)a[0];
    return 1;
}
extern u8 D_0047CAD0[];
s32 func_002AC8C0(s32 *a0, u8 *a1) {
    u8 *p = *(u8 **)(a1 + 0x2C);
    u16 f = *(u16 *)p;
    ScrModel *m = D_005BC440[*(s32 *)(*a0)];
    ScrModel *e = &m[*(s32 *)(p + 4) + 1];
    ScrFlag *fl = e->flag;

    if (f & 0x30) {
        fl->flags &= 0xFFCF;
    }
    fl->flags |= f;
    return 1;
}
// GIVEN UP: the VU0 copy and the constant store match; the three loads are placed in the wrong order and get other FPU registers (7 of 21 differ)
#if 0
s32 func_002AC930(s32 a0, u8 *a1) {
    f32 *p = *(f32 **)(a1 + 0x2C);
    f32 v[4];
    f32 z = p[2];
    f32 y = p[1];
    f32 x = p[0];

    v[0] = z;
    v[1] = y;
    v[2] = x;
    v[3] = 1.0f;
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(v), "r"(D_0047CAD0) : "memory");
    *(f32 *)(D_0047CAD0 + 0xC) = 0.0f;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC930);
s32 Scr_CmdModelSpeed(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    s32 i = a[1] + 1;
    ScrModel *m = D_005BC440[t->obj->id];
    m[i].speed = ((f32 *)a)[0] * D_004708F8;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC9F0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ACBF0);
s32 Scr_CmdEffectSpeed(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    ScrEffectSub *e = D_005BC180[t->obj->id];
    e[a[1]].speed = ((f32 *)a)[0] * D_004708F8;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ACDB0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AD180);
s32 Scr_CmdLightSetPair(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    ScrLightSub *s = &D_005ABA80[t->obj->id][a[2]];
    s->unk2098 = a[1];
    s->unk209C = a[0];
    return 1;
}
s32 Scr_CmdSetStep(ScriptThread *t, ScriptCtx *ctx) {
    t->unk38 = ((f32 *)ctx->args)[0] * D_004708F8;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AD610);
// GIVEN UP: the same shape as func_002AA8A0 (a tail call) but the order of the stores and the loads differs (45 of 52 instructions)
#if 0
s32 func_002AD800(s32 *a0, s32 *a1) {
    u8 *obj = (u8 *)a0;
    u8 *p = *(u8 **)((u8 *)a1 + 0x2C);
    u8 *sub = *(u8 **)((u8 *)a1 + 0x38);
    s32 *q = (s32 *)(sub + 0x68);
    s32 v;

    *(u8 *)(obj + 0x2A) = (u8)*(s32 *)(p + 0x10);
    *(s32 *)(obj + 0x34) = *(s32 *)(p + 8) | ((*(s32 *)(p + 0xC) + 1) << 16);
    *(f32 *)(obj + 0x2C) = *(f32 *)(p + 4) - *(f32 *)(obj + 0x38);
    *(f32 *)(obj + 0x30) = 1.0f + *(f32 *)(p + 0);
    *(u8 *)(obj + 0x2B) = 1;
    v = (s32)(*(f32 *)(obj + 0x30) - *(f32 *)(obj + 0x2C));
    if (*(s32 *)(sub + 0x6C) != 0) {
        q[0] += v;
    } else {
        q[0] = v + (s32)D_004708F0[*(s32 *)*a0];
    }
    q[1] = 1;
    a0[4] = (s32)func_002AD610;
    return func_002AD610(a0, a1);
}
#endif
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AD800);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AD8D0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ADA70);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ADB70);

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
extern f32 gScrTimers[2];
extern f32 D_004708F8;
extern s32 gSoundState;
extern ScrLightSub D_005ABA80[][4];
extern ScrModel D_005BC440[][3];
extern ScrEffectSub D_005BC180[][2];
extern void func_002A9930(void);
extern void func_002A9AE0(s32, s32, s32, s32);
extern void func_002A9C00(s32, s32, s32, s32, s32);
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
extern void memset(void *, s32, s32);
extern void func_002B0A40(s32);
extern u8 D_005AB3C0[];
extern u8 D_005AB610[];
extern s32 D_005AB7F0[];
void func_002A92B0(s32 a0) {
    u8 *w;
    u8 *r;
    u8 *q;
    u8 *p;
    s32 i;

    i = 0;
    p = D_005AB3C0 + a0 * 104;
    q = p;
    for (; i < 2; i++) {
        memset(q, 0, 0x34);
        q += 0x34;
    }
    memset(p, 0, 0x68);
    i = 0;
    r = D_005AB610 + a0 * 240;
    for (; i < 10; i++) {
        memset(r, 0, 0x18);
        r += 0x18;
    }
    D_005AB7F0[0] = 0;
    w = (u8 *)D_005AB7F0;
    *(s32 *)(w + 0xB0) = 0;
    *(s32 *)(w + 0xB0) = 0;
    *(s32 *)(w + 0xB4) = 0;
    *(s32 *)(w + 0xB4) = 0;
    *(s32 *)(w + 0xB8) = 0;
    *(s32 *)(w + 0xB8) = 0;
    *(s32 *)(w + 0xBC) = 0;
    *(s32 *)(w + 0xBC) = 0;
    *(s32 *)(w + 0xC0) = 0;
    *(s32 *)(w + 0xC0) = 0;
    *(s32 *)(w + 0xC4) = 0;
    *(s32 *)(w + 0xC8) = 0;
    *(s32 *)(w + 0xCC) = 0;
    *(s32 *)(w + 0xD0) = 0;
    *(s32 *)(w + 0xD4) = 0;
    func_002B0A40(a0);
}
extern u8 D_004E6560[];
extern u8 D_005AB3A0[];
extern s32 D_00511768[];
extern void func_00298E10(s32);
extern void func_00298E00(s32);
void func_002A93E0(void) {
    u8 *base = D_004E6560;
    s32 idx = *(s8 *)(base + 0x2AEF0);
    u8 *src = D_005AB3A0;
    s32 v = *(s32 *)(src + 0x10);
    u8 *e = base + idx * 4624 + 0x80; /* folding +0x80 into the slot base is what matches */

    __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(src), "r"(e + 0x11C0) : "memory");
    *(s32 *)(e + 0x11D0) = v;
    func_00298E10(-1);
    func_00298E00(-1);
    D_00511768[0] = 0;
}
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
    ctx->ret = gScrTimers[0];
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
extern f32 D_0047042C;
extern f32 D_00470430;
void func_002A9AE0(s32 a0, s32 a1, s32 a2, s32 a3) {
    u8 *e = (u8 *)D_005BC9E0 + a0 * 416 + a1 * 208;

    if (*(s32 *)e != 0) {
        amCdFs_ReleaseCache(*(s32 *)e);
    }
    *(s32 *)(e + 0x00) = a2;
    *(s32 *)(e + 0x04) = a3;
    *(s32 *)(e + 0x08) = -1;
    *(s32 *)(e + 0x10) = 0x40000124;
    *(s32 *)(e + 0x14) = 0;
    *(s32 *)(e + 0x30) = 0;
    *(s32 *)(e + 0x34) = 0;
    *(f32 *)(e + 0x38) = 1.0f;
    *(f32 *)(e + 0x40) = 1.0f;
    *(f32 *)(e + 0x44) = 1.0f;
    *(f32 *)(e + 0x48) = 1.0f;
    *(f32 *)(e + 0x60) = 0.0f;
    *(f32 *)(e + 0x64) = 0.0f;
    *(f32 *)(e + 0x68) = 0.0f;
    *(f32 *)(e + 0x6C) = 1.0f;
    *(f32 *)(e + 0x70) = 0.0f;
    *(f32 *)(e + 0x74) = 0.0f;
    *(f32 *)(e + 0x78) = 0.0f;
    *(f32 *)(e + 0x7C) = 1.0f;
    *(f32 *)(e + 0x80) = D_0047042C / 2.0f;
    *(f32 *)(e + 0x84) = D_00470430 / 2.0f;
    *(f32 *)(e + 0x90) = 1.0f;
    *(f32 *)(e + 0x94) = 1.0f;
    *(f32 *)(e + 0x98) = 1.0f;
    *(f32 *)(e + 0x9C) = 1.0f;
    *(s64 *)(e + 0xC0) = 0x44;
    *(s64 *)(e + 0xC8) = 0;
}
typedef struct ScrLtE {
    /* 0x0000 */ s32 f0;
    /* 0x0004 */ s32 f4;
    /* 0x0008 */ s32 f8;
    /* 0x000C */ s32 res[5];
    /* 0x0020 */ s32 f20;
    /* 0x0024 */ s32 f24;
    /* 0x0028 */ s32 id[4];
    /* 0x0038 */ s32 f38;
    /* 0x003C */ s32 f3C;
    /* 0x0040 */ u8 anim[0x208C - 0x40];
    /* 0x208C */ s32 f208C;
    /* 0x2090 */ s32 f2090;
    /* 0x2094 */ s32 f2094;
    /* 0x2098 */ u8 pad2098[8];
    /* 0x20A0 */ s8 f20A0;
} ScrLtE;
extern void *amMotion_CreateFromObj(s32, s32, s32);
extern void *amMotion_Create(s32, s32, s32);
extern void amMotion_BindAnim(s32, s32, s32);
extern void amFile_Load(s32);
void func_002A9C00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    ScrLtE *e = (ScrLtE *)&D_005ABA80[a0][a1];

    if (e->res[a2] != 0) {
        amCdFs_ReleaseCache(e->res[a2]);
    }
    e->res[a2] = a3;
    e->id[a2] = a4;
    amFile_Load(a4);
    if (e->f3C == 0) {
        if (e->f38 != 0) {
            e->f3C = (s32)amMotion_CreateFromObj(e->f38, 0, 0);
        } else if (e->f4 != 0) {
            e->f3C = (s32)amMotion_Create(e->f20, 0, 0);
        }
    }
    if (e->f3C != 0) {
        amMotion_BindAnim(e->f3C, a2, e->id[a2]);
    }
    e->f20A0 = 0;
    e->f2094 = 0;
    e->f208C = 0;
}
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
void func_002AA0E0(s32 a0, s32 a1, s32 a2, s32 a3) {
    func_002A9AE0(a0, a1, a2, a3);
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
typedef struct ScrAnmEnt {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 res[4];
    /* 0x24 */ u8 unk24[0x30 - 0x24];
    /* 0x30 */ s32 id[4];
} ScrAnmEnt;
void func_002AA260(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    ScrAnmEnt *e = (ScrAnmEnt *)((u8 *)D_005ABA80 + ((a0 * 33 * 8) - a0) * 128 + ((a1 * 33 * 8) - a1) * 32);

    if (e->res[a2] != 0) {
        amCdFs_ReleaseCache(e->res[a2]);
    }
    e->res[a2] = a3;
    e->id[a2] = a4;
    amFile_Load(a4);
    amMotSet_Bind((u8 *)e + 0x40, a2, a4);
}
void func_002AA330(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4) {
    func_002A9C00(a0, a1, a2, a3, a4);
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
    if (!(gScrTimers[0] <= ((f32 *)ctx->args)[0])) {
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
    if (!(0.5f + (gScrTimers[t->obj->id] - t->time) < (f32)t->count)) {
        t->wait = 0;
        return 1;
    }
    return 3;
}
s32 Scr_CmdWaitObjFrames(ScriptThread *t, ScriptCtx *ctx) {
    t->count = ctx->args[0];
    t->time = gScrTimers[t->obj->id];
    t->wait = Scr_WaitObjFrames;
    return 3;
}
s32 Scr_CmdObjTime(ScriptThread *t, ScriptCtx *ctx) {
    ctx->ret = 0.5f + gScrTimers[t->obj->id];
    return 1;
}
s32 Scr_ObjTimerTick(ScriptThread *t, ScriptCtx *ctx) {
    ScriptObj *o = t->obj;
    if (o->state != 3) {
        gScrTimers[o->id] += D_004708F8;
    }
    return 3;
}
s32 Scr_CmdObjTimerStart(ScriptThread *t, ScriptCtx *ctx) {
    ScriptObj *o;
    t->wait = Scr_ObjTimerTick;
    gScrTimers[t->obj->id] = 0.0f;
    o = t->obj;
    if (o->state != 3) {
        gScrTimers[o->id] += D_004708F8;
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
extern s32 func_002AA6B0(s32 *, s32 *);
s32 func_002AA8A0(s32 *a0, s32 *a1) {
    u8 *p = *(u8 **)((u8 *)a1 + 0x2C);
    s32 j = *(s32 *)(p + 0xC);
    s32 i = *(s32 *)a0[0];
    u8 *sub;
    s32 k;
    s32 *q;
    u8 *e = (u8 *)D_005BC9E0 + i * 416 + j * 208;
    *(f32 *)(e + 0x24) = *(f32 *)(p + 8);
    *(f32 *)(e + 0x28) = *(f32 *)(p + 4);
    *(f32 *)(e + 0x2C) = *(f32 *)(p + 0);
    k = (s32)*(f32 *)(e + 0x24);
    sub = *(u8 **)((u8 *)a1 + 0x38);
    q = (s32 *)(sub + 0x68);
    if (*(s32 *)(sub + 0x6C) == 0) {
        q[0] = k + (s32)gScrTimers[*(s32 *)a0[0]];
    } else {
        q[0] += k;
    }
    q[1] = 1;
    a0[4] = (s32)func_002AA6B0;
    return func_002AA6B0(a0, a1);
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA980);
extern s32 func_002AA980(s32 *, s32 *);
s32 func_002AAB40(s32 *a0, s32 *a1) {
    u8 *p = *(u8 **)((u8 *)a1 + 0x2C);
    s32 i = *(s32 *)a0[0];
    s32 j = *(s32 *)(p + 0x10);
    u8 *sub;
    u8 *e = (u8 *)D_005BC9E0 + i * 416 + j * 208;
    s32 k;
    s32 *q;

    *(f32 *)(e + 0x20) = *(f32 *)(p + 0xC);
    *(f32 *)(e + 0xB0) = *(f32 *)(p + 8);
    *(f32 *)(e + 0xB4) = *(f32 *)(p + 4);
    *(f32 *)(e + 0xB8) = *(f32 *)(p + 0);
    *(s32 *)(e + 0xBC) = 0x3F800000;
    k = (s32)*(f32 *)(e + 0x20);
    sub = *(u8 **)((u8 *)a1 + 0x38);
    q = (s32 *)(sub + 0x68);
    if (*(s32 *)(sub + 0x6C) == 0) {
        q[0] = k + (s32)gScrTimers[*(s32 *)a0[0]];
    } else {
        q[0] += k;
    }
    q[1] = 1;
    a0[4] = (s32)func_002AA980;
    return func_002AA980(a0, a1);
}
s32 func_002AAC30(s32 *a0, s32 *a1) {
    s32 *p = *(s32 **)((u8 *)a1 + 0x2C);
    f32 *f = (f32 *)p;
    s32 i = *(s32 *)a0[0];
    u8 *e = (u8 *)D_005BC9E0 + i * 416 + p[2] * 208;
    u8 *tbl = *(u8 **)(e + 4);
    u8 *base = tbl + *(s32 *)(tbl + 0x14);
    u8 *rec = tbl + *(s32 *)(base + *(s32 *)(e + 8) * 4);

    *(f32 *)(e + 0x50) = (f32)*(s16 *)(rec + 0x10) * f[1];
    *(f32 *)(e + 0x54) = (f32)*(s16 *)(rec + 0x12) * f[0];
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
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AAD80);
extern s32 func_002AAD80(s32 *, s32 *);
s32 func_002AAF30(s32 *a0, s32 *a1) {
    u8 *p = *(u8 **)((u8 *)a1 + 0x2C);
    s32 i = *(s32 *)a0[0];
    s32 j = *(s32 *)(p + 0x14);
    u8 *sub;
    u8 *e = (u8 *)D_005BC9E0 + i * 416 + j * 208;
    s32 k;
    s32 *q;

    *(f32 *)(e + 0x1C) = *(f32 *)(p + 0x10);
    *(f32 *)(e + 0xA0) = *(f32 *)(p + 0xC);
    *(f32 *)(e + 0xA4) = *(f32 *)(p + 8);
    *(f32 *)(e + 0xA8) = *(f32 *)(p + 4);
    *(f32 *)(e + 0xAC) = *(f32 *)(p + 0);
    k = (s32)*(f32 *)(e + 0x1C);
    sub = *(u8 **)((u8 *)a1 + 0x38);
    q = (s32 *)(sub + 0x68);
    if (*(s32 *)(sub + 0x6C) == 0) {
        q[0] = k + (s32)gScrTimers[*(s32 *)a0[0]];
    } else {
        q[0] += k;
    }
    q[1] = 1;
    a0[4] = (s32)func_002AAD80;
    return func_002AAD80(a0, a1);
}
s32 func_002AB020(s32 *a0, s32 *a1) {
    s32 *p = *(s32 **)((u8 *)a1 + 0x2C);
    s32 i = *(s32 *)a0[0];
    u8 *e = (u8 *)D_005BC9E0 + i * 416 + p[1] * 208;

    *(s32 *)(e + 0x14) = p[0];
    if (*(s32 *)(e + 0x14) & 1) {
        f32 h = 0.5f * (1.0f + *(f32 *)(e + 0x50));
        *(f32 *)(e + 0x60) = *(f32 *)(e + 0x80) - h;
        *(f32 *)(e + 0x70) = *(f32 *)(e + 0x80) + h;
    } else {
        *(f32 *)(e + 0x70) = *(f32 *)(e + 0x60) + *(f32 *)(e + 0x50);
    }
    if (*(s32 *)(e + 0x14) & 2) {
        f32 h = 0.5f * (1.0f + *(f32 *)(e + 0x54));
        *(f32 *)(e + 0x64) = *(f32 *)(e + 0x84) - h;
        *(f32 *)(e + 0x74) = *(f32 *)(e + 0x84) + h;
    } else {
        *(f32 *)(e + 0x74) = *(f32 *)(e + 0x64) + *(f32 *)(e + 0x54);
    }
    if (*(s32 *)(e + 0x14) & 4) {
        *(s32 *)(e + 0x10) |= 0x800;
    } else {
        *(s32 *)(e + 0x10) &= ~0x800;
    }
    if (*(s32 *)(e + 0x14) & 8) {
        *(s32 *)(e + 0x10) |= 0x1000;
    } else {
        *(s32 *)(e + 0x10) &= ~0x1000;
    }
    if (*(s32 *)(e + 0x14) & 0x10) {
        *(s64 *)(e + 0xC0) = 0x48;
    } else {
        *(s64 *)(e + 0xC0) = 0x44;
    }
    if (*(s32 *)(e + 0x14) & 0x20) {
        *(s64 *)(e + 0xC8) = 5;
    } else {
        *(s64 *)(e + 0xC8) = 0;
    }
    return 1;
}
s32 func_002AB1D0(s32 *a0, s32 *a1) {
    s32 *p = *(s32 **)((u8 *)a1 + 0x2C);
    f32 *f = (f32 *)p;
    f32 x2 = f[2];
    f32 x1 = f[1];
    f32 x0 = f[0];
    s32 i = *(s32 *)a0[0];
    u8 *e = (u8 *)D_005BC9E0 + i * 416 + p[3] * 208;

    *(f32 *)(e + 0x80) = x2;
    *(f32 *)(e + 0x84) = x1;
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
// differs: round 7: 104 words each, control flow equal; differs in register/schedule only. The original loads p[3],p[2],p[1],p[0] into a0/v1/v0 up front and hoists li 1 (a1) and 1.0f (a2); ours picks other registers and sinks the p[] loads. tsweep (1500 orders/types) found nothing better.
#if 0
s32 func_002AB4F0(s32 *a0, s32 *a1) {
    s32 *p = *(s32 **)((u8 *)a1 + 0x2C);
    s32 i = *(s32 *)a0[0];
    s32 v3 = p[3];
    s32 v2 = v2;
    s32 v1 = v1;
    s32 v0 = p[0];
    u8 *e = (u8 *)D_005BC9E0 + i * 416 + v3 * 208;
    u8 *tbl;
    u8 *base;
    u8 *rec;

    *(s32 *)(e + 8) = v2;
    *(s32 *)(e + 0xC) = v1;
    tbl = *(u8 **)(e + 4);
    base = tbl + *(s32 *)(tbl + 0x14);
    rec = tbl + *(s32 *)(base + v2 * 4);
    *(f32 *)(e + 0x50) = (f32)*(s16 *)(rec + 0x10);
    *(f32 *)(e + 0x54) = (f32)*(s16 *)(rec + 0x12);
    *(s32 *)(e + 0x30) = 0;
    *(s32 *)(e + 0x34) = 0;
    *(f32 *)(e + 0x38) = 1.0f;
    *(f32 *)(e + 0x3C) = 1.0f;
    if (v0 == 1) {
        *(f32 *)(e + 0x40) = *(f32 *)(e + 0x50);
    } else {
        *(f32 *)(e + 0x40) = *(f32 *)(e + 0x50) - 0.5f;
    }
    *(f32 *)(e + 0x44) = *(f32 *)(e + 0x54);
    *(f32 *)(e + 0x48) = 1.0f;
    *(f32 *)(e + 0x4C) = 1.0f;
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
#endif
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
// // differs: 11 of 50 (round 5 chr2): the frame, the branches and the tail match; the original loads *(a1+0x2C) before *a0 and copies a0 to s0 before that load, ours does the reverse (declaration orders, double dereference and a pointer copy tried); the index is i*576 + j*36 with the same operands.
#if 0
s32 func_002ABE50(s32 *a0, s32 *a1) {
    s32 *p = a0;
    s32 j = **(s32 **)((u8 *)a1 + 0x2C);
    s32 i = **(s32 **)p;
    s32 *e = (s32 *)((u8 *)D_005BC560 + i * 576 + j * 36);
    s32 *x = e + 3;
    s32 *v = e + 6;
    s32 loc[5];
    s32 r;

    if (e[4] != 0 && v[1] != 0) {
        loc[0] = j;
        loc[1] = x[2];
        loc[2] = v[2];
        loc[3] = x[1];
        loc[4] = v[1];
        r = amSound_LoadStream(loc, x);
        if (r != 0) {
            a0[4] = (s32)func_002ABE50;
            return 3;
        }
    }
    a0[4] = 0;
    return 1;
}
#endif
extern s32 amSound_LoadStream(void *);

s32 func_002ABE50(ScriptThread *t, ScriptCtx *ctx) {
    s32 *args = ctx->args;
    s32 j = *args;
    s32 i = t->obj->id;
    s32 *e = (s32 *)((u8 *)D_005BC560 + i * 576 + j * 36);
    s32 *x = e + 3;
    s32 *v = e + 6;
    s32 loc[5];

    if (e[4] != 0 && v[1] != 0) {
        loc[0] = j;
        loc[1] = x[2];
        loc[2] = v[2];
        loc[3] = x[1];
        loc[4] = v[1];
        if (amSound_LoadStream(loc) != 0) {
            t->wait = func_002ABE50;
            return 3;
        }
    }
    t->wait = NULL;
    return 1;
}
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
extern f32 D_00495718[];
extern f32 D_00495758[];
s32 func_002AC190(s32 *a0, s32 *a1) {
    f32 *uv = (f32 *)(*(u8 **)((u8 *)a1 + 0x38) + 0x70);
    f32 u;
    f32 v;

    if (a0[15] == 0) {
        a0[4] = 0;
        return 1;
    }
    u = uv[0];
    v = uv[1];
    if (((s32 *)a0[0])[3] != 3) {
        u += uv[2];
        v += uv[3];
        while (u < 0.0f) {
            u += 1.0f;
        }
        while (u >= 1.0f) {
            u -= 1.0f;
        }
        while (v < 0.0f) {
            v += 1.0f;
        }
        while (v >= 1.0f) {
            v -= 1.0f;
        }
        uv[0] = u;
        uv[1] = v;
        if (a0[15] > 0) {
            a0[15]--;
        }
    }
    D_00495718[0] = u;
    D_00495758[0] = v;
    D_00495718[1] = u;
    D_00495758[1] = v;
    D_00495718[2] = u;
    D_00495718[3] = u;
    D_00495758[2] = v;
    D_00495758[3] = v;
    return 3;
}
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
extern void amMotSet_Apply(void *, f32, s32);
s32 func_002AC3D0(s32 *a0, s32 *a1) {
    u8 *t = (u8 *)a0;
    s8 c;
    f32 len = *(f32 *)(t + 0x30);
    ScrLightSub *e = &D_005ABA80[*(s32 *)a0[0]][*(s8 *)(t + 0x2A)];

    if (((s32 *)a0[0])[3] != 3) {
        *(f32 *)(t + 0x2C) += *(f32 *)(t + 0x38);
        if (*(s8 *)(t + 0x2B) == 1) {
            len -= 1.0f;
            if (!(*(f32 *)(t + 0x2C) <= len)) {
                *(f32 *)(t + 0x2C) -= len;
                (*(s8 *)(t + 0x2B))--;
                *(s32 *)(t + 0x10) = 0;
                return 1;
            }
        } else {
            if (!(*(f32 *)(t + 0x2C) < len)) {
                *(f32 *)(t + 0x2C) -= len;
                c = *(s8 *)(t + 0x2B);
                if (c != -1) {
                    *(s8 *)(t + 0x2B) = c - 1;
                    if (*(s8 *)(t + 0x2B) <= 0) {
                        *(s32 *)(t + 0x10) = 0;
                        return 1;
                    }
                }
            }
        }
        if (*(s8 *)((u8 *)e + 0x20A2) != 0) {
            amMotSet_Apply((u8 *)e + 0x40, (f32)(s32)*(f32 *)(t + 0x2C), *(s32 *)(t + 0x34));
        } else {
            amMotSet_Apply((u8 *)e + 0x40, *(f32 *)(t + 0x2C), *(s32 *)(t + 0x34));
        }
    }
    return 3;
}
// differs: round 7: 16 of 80 differ (register numbers only): the original keeps the packed word in a2, the thread table pointer in v1 and the scaled indices in a3/a2; ours puts the word in v1 and the table pointer in a3. Typed table struct (tbl[k]->recs[r]) fixes the address order; tsweep over all 6 local orders/types gave 16 at best; w as a local and inline helper variants did not move it.
#if 0
extern s32 func_002AC3D0(s32 *, s32 *);
typedef struct ScrRec {
    s32 w0;
    s32 w4;
    s32 f8;
    s32 wC;
} ScrRec;
typedef struct ScrRecTbl {
    u8 pad[0x14];
    ScrRec *recs;
} ScrRecTbl;
typedef struct ScrAnmE {
    u8 pad[0x44];
    ScrRecTbl *tbl[1];
} ScrAnmE;
static inline s32 srecw(ScrAnmE *e, u8 *o) {
    s32 k = (*(s32 *)(o + 0x34) >> 16) - 1;
    s32 r = *(s32 *)(o + 0x34) & 0xFFFF;
    return e->tbl[k]->recs[r].f8;
}
#define SRECW(e, o) srecw(e, o)
s32 func_002AC520(s32 *a0, s32 *a1) {
    u8 *obj = (u8 *)a0;
    s32 *p = *(s32 **)((u8 *)a1 + 0x2C);
    ScrAnmE *e = (ScrAnmE *)&D_005ABA80[*(s32 *)a0[0]][p[3]];
    u8 *sub;
    s32 *q;
    s32 v;

    *(u8 *)(obj + 0x2A) = (u8)p[3];
    *(s32 *)(obj + 0x34) = ((p[2] + 1) << 16) | p[1];
    *(f32 *)(obj + 0x2C) = -*(f32 *)(obj + 0x38);
    *(f32 *)(obj + 0x30) = (f32)SRECW(e, obj);
    *(u8 *)(obj + 0x2B) = (u8)p[0];
    v = SRECW(e, obj);
    sub = *(u8 **)((u8 *)a1 + 0x38);
    q = (s32 *)(sub + 0x68);
    if (*(s32 *)(sub + 0x6C) == 0) {
        q[0] = v + (s32)gScrTimers[*(s32 *)a0[0]];
    } else {
        q[0] += v;
    }
    q[1] = 1;
    a0[4] = (s32)func_002AC3D0;
    return func_002AC3D0(a0, a1);
}
#endif
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
// GIVEN UP: the loads and the copies match; the model pointer is kept in a0 instead of v1, and the D_ loads are placed in another order (7 of 32 differ). Round 7: 6 attempts in total (u8 *e = base + id*144 with a folded base, one asm per copy with swapped operands, reload of the model pointer between copies, a1 reassigned to the vec), all still 7/32: the compiler picks a0 as the entry/base register and swaps the copy-2 registers.
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
extern f32 D_004593A0[];
extern f32 D_004593B0[];
// GIVEN UP (round 5 chr2): 7 of 32 differ. The original keeps the index in a0 and the base pointer in v1 (addu v1,v0,v1); ours puts the base in a0.
// The two copies have their base registers swapped (the asm operand order does not change it). Tried: operand order, index in a1, declaration order.
#if 0
s32 func_002AC710(s32 *a0, s32 *a1) {
    f32 f2;
    f32 f1;
    f32 f0;
    u8 *v1;
    f32 vec[4] __attribute__((aligned(16)));

    f2 = D_00459390[2];
    a0 = (s32 *)*(s32 *)(*a0);
    f1 = D_004593A0[2];
    f0 = D_004593B0[2];
    vec[0] = f2;
    vec[1] = f1;
    vec[2] = f0;
    *(s32 *)&vec[3] = 0;
    v1 = (u8 *)D_005BC440 + (s32)a0 * 144;
    __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; sqc2 $vf1, 0x0(%1)" : : "r"(vec), "r"(*(u8 **)(v1 + 8) + 0x10));
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(*(u8 **)(v1 + 8) + 0x20), "r"(v1 + 0x20));
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
typedef struct Vec16 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
} Vec16 __attribute__((aligned(16)));
s32 func_002AC930(s32 a0, u8 *a1) {
    Vec16 t;
    f32 f0;
    f32 f1;
    f32 f2;

    a1 = *(u8 **)(a1 + 0x2C);
    f2 = *(f32 *)(a1 + 0);
    f1 = *(f32 *)(a1 + 4);
    f0 = *(f32 *)(a1 + 8);
    t.x = f0;
    t.y = f1;
    t.z = f2;
    *(s32 *)&t.w = 0x3F800000;
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(D_0047CAD0), "r"(&t));
    *(f32 *)(D_0047CAD0 + 0xC) = 0.0f;
    return 1;
}
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
extern s32 func_002AD610(s32 *, s32 *);
s32 func_002AD800(s32 *a0, s32 *a1) {
    s32 v;
    s32 *q;
    u8 *sub;
    u8 *p = *(u8 **)((u8 *)a1 + 0x2C);
    u8 *obj = (u8 *)a0;
    *(u8 *)(obj + 0x2A) = (u8)*(s32 *)(p + 0x10);
    *(s32 *)(obj + 0x34) = ((*(s32 *)(p + 0xC) + 1) << 16) | *(s32 *)(p + 8);
    *(f32 *)(obj + 0x2C) = *(f32 *)(p + 4) - *(f32 *)(obj + 0x38);
    *(f32 *)(obj + 0x30) = 1.0f + *(f32 *)(p + 0);
    *(u8 *)(obj + 0x2B) = 1;
    v = (s32)(*(f32 *)(obj + 0x30) - *(f32 *)(obj + 0x2C));
    sub = *(u8 **)((u8 *)a1 + 0x38);
    q = (s32 *)(sub + 0x68);
    if (*(s32 *)(sub + 0x6C) == 0) {
        q[0] = v + (s32)gScrTimers[*(s32 *)a0[0]];
    } else {
        q[0] += v;
    }
    q[1] = 1;
    a0[4] = (s32)func_002AD610;
    return func_002AD610(a0, a1);
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AD8D0);
#define SCH(s) (*(u8 **)(*(u8 **)(*(u8 **)(*(u8 **)((u8 *)(s) + 0x1C) + 0x14) + 4) + 8))
s32 func_002ADA70(s32 *a0, s32 *a1) {
    f32 *p = *(f32 **)((u8 *)a1 + 0x2C);
    ScrLightSub *s = &D_005ABA80[*(s32 *)a0[0]][((s32 *)p)[3]];
    f32 v[4] = {0};

    v[0] = p[2];
    v[1] = p[1];
    v[2] = p[0];
    *(f32 *)(SCH(s) + 0x10) += v[0];
    *(f32 *)(SCH(s) + 0x14) += v[1];
    *(f32 *)(SCH(s) + 0x18) += v[2];
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ADB70);

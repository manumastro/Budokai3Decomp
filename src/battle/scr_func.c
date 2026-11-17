#include "common.h"

#include "battle/script.h"

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
extern void func_00144650(s32);
extern void func_001445C0(s32);
extern void func_00144B70(s32);
extern void func_00144050(s32, s32, s32, s32, f32, f32, f32);
extern void func_00143E70(s32, s32, s32);
extern void func_00143D60(s32, s32, s32, s32);
s32 func_002AB690(ScriptThread *t, ScriptCtx *ctx);

INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9080);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A92B0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A93E0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9460);
void func_002A9480(s32 n) {
    if (n < 0 || n > 29) {
        n = 0;
    }
    D_004700AC = n + 0x0BB80000;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A94B0);
s32 func_002A9760(ScriptThread *t, ScriptCtx *ctx) {
    ctx->ret = D_004708F0[0];
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9780);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9810);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A98A0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9930);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9AE0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9C00);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9D30);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002A9EA0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA050);
void func_002AA0D0(void) {
    func_002A9930();
}
void func_002AA0E0(void) {
    func_002A9AE0();
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA0F0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA1B0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA260);
void func_002AA330(void) {
    func_002A9C00();
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA340);
void func_002AA3D0(void) {
    func_002A9EA0();
}
s32 func_002AA3E0(ScriptThread *t, ScriptCtx *ctx) {
    ScrTimerRes *r = ctx->unk38;
    r->unk68 = 0;
    r->unk6C = 0;
    return 1;
}
s32 func_002AA400(ScriptThread *t, ScriptCtx *ctx) {
    if (!(D_004708F0[0] <= ((f32 *)ctx->args)[0])) {
        t->wait = 0;
        return 1;
    }
    return 3;
}
s32 func_002AA440(ScriptThread *t, ScriptCtx *ctx) {
    if ((s32)((f32 *)ctx->args)[0] <= 0) {
        return 1;
    }
    t->wait = func_002AA400;
    return 3;
}
s32 func_002AA480(ScriptThread *t, ScriptCtx *ctx) {
    if (!(0.5f + (D_004708F0[t->obj->id] - t->time) < (f32)t->count)) {
        t->wait = 0;
        return 1;
    }
    return 3;
}
s32 func_002AA4E0(ScriptThread *t, ScriptCtx *ctx) {
    t->count = ctx->args[0];
    t->time = D_004708F0[t->obj->id];
    t->wait = func_002AA480;
    return 3;
}
s32 func_002AA520(ScriptThread *t, ScriptCtx *ctx) {
    ctx->ret = 0.5f + D_004708F0[t->obj->id];
    return 1;
}
s32 func_002AA560(ScriptThread *t, ScriptCtx *ctx) {
    ScriptObj *o = t->obj;
    if (o->state != 3) {
        D_004708F0[o->id] += D_004708F8;
    }
    return 3;
}
s32 func_002AA5A0(ScriptThread *t, ScriptCtx *ctx) {
    ScriptObj *o;
    t->wait = func_002AA560;
    D_004708F0[t->obj->id] = 0.0f;
    o = t->obj;
    if (o->state != 3) {
        D_004708F0[o->id] += D_004708F8;
    }
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA600);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA6B0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA8A0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AA980);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AAB40);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AAC30);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AAD80);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AAF30);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AB020);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AB1D0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AB2E0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AB3E0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AB450);
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
s32 func_002ABA10(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    amAdx_SetVolume(a[1], ((f32 *)a)[0]);
    return 1;
}
s32 func_002ABA40(ScriptThread *t, ScriptCtx *ctx) {
    amAdx_Stop(ctx->args[0]);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ABA70);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ABAF0);
s32 func_002ABB80(ScriptThread *t, ScriptCtx *ctx) {
    amAdx_Pause(ctx->args[0], 0);
    return 1;
}
s32 func_002ABBB0(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    ctx->ret = amAdx_PlayFile(a[1], ctx->base + a[0], 0);
    amAdx_Pause(ctx->ret, 1);
    return 1;
}
s32 func_002ABC00(ScriptThread *t, ScriptCtx *ctx) {
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
s32 func_002ABC60(ScriptThread *t, ScriptCtx *ctx) {
    if (amAdx_IsStopped(ctx->args[0]) != 0) {
        return 1;
    }
    t->wait = func_002ABC00;
    return 3;
}
s32 func_002ABCB0(ScriptThread *t, ScriptCtx *ctx) {
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
s32 func_002ABD10(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    ctx->ret = amAdx_PlayFile(a[1], ctx->base + a[0], 0);
    t->wait = func_002ABCB0;
    return 3;
}
s32 func_002ABD70(ScriptThread *t, ScriptCtx *ctx) {
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
s32 func_002ABE20(ScriptThread *t, ScriptCtx *ctx) {
    if (gSoundState != 0) {
        t->wait = func_002ABE20;
        return 3;
    }
    t->wait = 0;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ABE50);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ABF20);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ABFC0);
s32 func_002AC060(ScriptThread *t, ScriptCtx *ctx) {
    func_00144650(ctx->args[0]);
    return 1;
}
s32 func_002AC090(ScriptThread *t, ScriptCtx *ctx) {
    func_001445C0(ctx->args[0]);
    return 1;
}
s32 func_002AC0C0(ScriptThread *t, ScriptCtx *ctx) {
    func_00144B70(ctx->args[0]);
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
s32 func_002AC160(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    func_00143D60(a[2], a[1], a[0], 0);
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC190);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC330);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC3D0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC520);
s32 func_002AC660(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    ScrLightSub *s = D_005ABA80[t->obj->id];
    s[a[1]].unk2094 = ((f32 *)a)[0];
    return 1;
}
s32 func_002AC6C0(ScriptThread *t, ScriptCtx *ctx) {
    f32 *a = (f32 *)ctx->args;
    ScrModel *m = D_005BC440[t->obj->id];
    m->color[0] = a[3];
    m->color[1] = a[2];
    m->color[2] = a[1];
    m->color[3] = a[0];
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC710);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC790);
s32 func_002AC860(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    ScrModel *m = &D_005BC440[t->obj->id][a[1] + 1];
    m->flag->flags &= ~(u16)a[0];
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC8C0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC930);
s32 func_002AC990(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    s32 i = a[1] + 1;
    ScrModel *m = D_005BC440[t->obj->id];
    m[i].speed = ((f32 *)a)[0] * D_004708F8;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AC9F0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ACBF0);
s32 func_002ACD50(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    ScrEffectSub *e = D_005BC180[t->obj->id];
    e[a[1]].speed = ((f32 *)a)[0] * D_004708F8;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ACDB0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AD180);
s32 func_002AD590(ScriptThread *t, ScriptCtx *ctx) {
    s32 *a = ctx->args;
    ScrLightSub *s = &D_005ABA80[t->obj->id][a[2]];
    s->unk2098 = a[1];
    s->unk209C = a[0];
    return 1;
}
s32 func_002AD5F0(ScriptThread *t, ScriptCtx *ctx) {
    t->unk38 = ((f32 *)ctx->args)[0] * D_004708F8;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AD610);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AD800);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002AD8D0);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ADA70);
INCLUDE_ASM("asm/nonmatchings/battle/scr_func", func_002ADB70);

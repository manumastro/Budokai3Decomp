#include "common.h"

extern void func_002E7400(u8 *, f32);
extern void amSofdec_Stop(s32);
#include "menu/menu.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E6BE0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E6DC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E6FA0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E70E0);
#if 0
// differs: vector copies: the original loads D_00456EE0 into a3 and orders the 16-byte copies differently; the float param is stored in the delay slot of the first call (f12 kept), frame 0x70 vs 0x80 here; 64 of 81 differ
typedef struct {
    u32 w[4];
} __attribute__((aligned(16))) Lm16;
extern Lm16 D_00456EE0;
extern Lm16 D_00456EF0;
extern Lm16 D_00456F00;
extern void func_0013B0B0(s32);
extern void amModel_SetCurrent(s32, s32);
extern void func_00136E80(s32, void *, s32, s32, s32);
extern void func_00137560(void *, void *);
extern void amDraw_FlushPacket(void);
extern void func_0013B110(s32);

void func_002E72C0(f32 f, void *a0) {
    u8 *s2;
    u32 *s1;
    u8 *s0;
    Lm16 c60;
    Lm16 c50;
    Lm16 c40;
    u8 *t1;

    s0 = (u8 *)a0;
    c60 = D_00456EE0;
    c50 = D_00456EF0;
    c40 = D_00456F00;
    *(f32 *)&c40.w[3] = f;
    func_0013B0B0(0x3F0800);
    amModel_SetCurrent(*(s32 *)s0, 0x1000);
    t1 = *(u8 **)s0;
    func_00136E80(0x40000E24, &c40, 1, 0x44, 5);
    s2 = t1 + *(s32 *)(t1 + *(s32 *)(t1 + 0x14) + ((1 - *(s32 *)(t1 + 0x18)) << 2));
    c60.w[0] = 0;
    s1 = &c60.w[1];
    *s1 = 0;
    s0 = (u8 *)&c50.w[1];
    c50.w[0] = 0;
    *(u32 *)s0 = 0;
    func_00137560(&c60, &c50);
    c60.w[0] = 0x44160000;
    *s1 = 0x43E10000;
    *(f32 *)&c50.w[0] = (f32)*(s16 *)(s2 + 0x10);
    *(f32 *)s0 = (f32)*(s16 *)(s2 + 0x12);
    func_00137560(&c60, &c50);
    amDraw_FlushPacket();
    func_0013B110(1);
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E72C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7400);
extern void Scene_Request(s32, s32);
extern void func_001F07E0(s32, s32);

/* Stops the logo mark's two effects and clears the task's function. */
void Logomark_Close(Task *t) {
    Scene_Request(2, 0);
    func_001F07E0(10, 0);
    t->func = 0;
}
extern f32 gFrameDelta;
extern void func_002E6BE0(f32, void *);
extern void Logomark_EndMovie(u8 *);
extern void func_002E8190(u8 *);
extern void func_002E8270(u8 *);
extern s32 amSofdec_GetStat(void *);
extern void *amSofdec_Create(void *);
extern void amSofdec_StartAfs(void *, s32, s32);
extern s32 D_0046FD5C;
extern void Logomark_Close(Task *);

void func_002E7630(u8 *a0) {
    u8 *s0;
    void *f;
    s0 = a0 + 0x30;
    func_002E6BE0(*(f32 *)(a0 + 0x34) / 50.0f, s0);
    *(f32 *)(s0 + 4) = *(f32 *)(s0 + 4) - gFrameDelta;
    if (*(f32 *)(s0 + 4) < 0.0f) {
        f = (void *)Logomark_Close;
        *(void **)(a0 + 0x1C) = (f == 0) ? 0 : f;
    }
}
extern f32 gFrameDelta;
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern void func_002E6BE0(f32, void *);
extern void func_002E7630();

void func_002E76C0(u8 *a0) {
    u8 *s0;
    s0 = a0 + 0x30;
    func_002E6BE0(1.0f, s0);
    if (((D_00492FCE[0] | D_00493086[0]) & 8) != 0) {
        *(f32 *)(s0 + 0x4) = gFrameDelta;
    }
    *(f32 *)(s0 + 0x4) = *(f32 *)(s0 + 0x4) - gFrameDelta;
    if (*(f32 *)(s0 + 0x4) < 0.0f) {
        *(s32 *)(s0 + 0x4) = 0x42480000;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7630 == 0) ? 0 : (void *)func_002E7630;
    }
}
extern f32 gFrameDelta;
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern void func_002E76C0();

void func_002E7770(u8 *a0) {
    u8 *s0;
    f32 f20;
    s0 = a0 + 0x30;
    f20 = (50.0f - *(f32 *)(a0 + 0x34)) / 50.0f;
    func_002E6BE0(f20, s0);
    if (((D_00492FCE[0] | D_00493086[0]) & 8) != 0) {
        *(f32 *)(s0 + 0x4) = 50.0f * f20;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7630 == 0) ? 0 : (void *)func_002E7630;
    } else {
        *(f32 *)(s0 + 0x4) = *(f32 *)(s0 + 0x4) - gFrameDelta;
        if (*(f32 *)(s0 + 0x4) < 0.0f) {
            *(s32 *)(s0 + 0x4) = 0x43340000;
            *(void **)(a0 + 0x1C) = ((void *)func_002E76C0 == 0) ? 0 : (void *)func_002E76C0;
        }
    }
}
extern f32 gFrameDelta;
extern void func_002E6DC0(f32, void *);

void func_002E7850(u8 *a0) {
    u8 *s0;
    s0 = a0 + 0x30;
    func_002E6DC0(*(f32 *)(a0 + 0x34) / 50.0f, s0);
    *(f32 *)(s0 + 4) = *(f32 *)(s0 + 4) - gFrameDelta;
    if (*(f32 *)(s0 + 4) < 0.0f) {
        *(s32 *)(s0 + 4) = 0x42480000;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7770 == 0) ? 0 : (void *)func_002E7770;
    }
}
extern f32 gFrameDelta;
extern void func_002E6DC0(f32, void *);

void func_002E78E0(u8 *a0) {
    u8 *s0;
    s0 = a0 + 0x30;
    func_002E6DC0(1.0f, s0);
    *(f32 *)(s0 + 4) = *(f32 *)(s0 + 4) - gFrameDelta;
    if (*(f32 *)(s0 + 4) < 0.0f) {
        *(s32 *)(s0 + 4) = 0x42480000;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7850 == 0) ? 0 : (void *)func_002E7850;
    }
}
extern f32 gFrameDelta;
extern void func_002E6DC0(f32, void *);

void func_002E7960(u8 *a0) {
    u8 *s0;
    s0 = a0 + 0x30;
    func_002E6DC0((50.0f - *(f32 *)(a0 + 0x34)) / 50.0f, s0);
    *(f32 *)(s0 + 4) = *(f32 *)(s0 + 4) - gFrameDelta;
    if (*(f32 *)(s0 + 4) < 0.0f) {
        *(s32 *)(s0 + 4) = 0x42F00000;
        *(void **)(a0 + 0x1C) = ((void *)func_002E78E0 == 0) ? 0 : (void *)func_002E78E0;
    }
}
extern f32 gFrameDelta;
extern void func_002E6FA0(f32, void *);

void func_002E7A00(u8 *a0) {
    u8 *s0;
    s0 = a0 + 0x30;
    func_002E6FA0(*(f32 *)(a0 + 0x34) / 50.0f, s0);
    *(f32 *)(s0 + 4) = *(f32 *)(s0 + 4) - gFrameDelta;
    if (*(f32 *)(s0 + 4) < 0.0f) {
        *(s32 *)(s0 + 4) = 0x42480000;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7960 == 0) ? 0 : (void *)func_002E7960;
    }
}
extern f32 gFrameDelta;
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern void func_002E6FA0(f32, void *);
extern void func_002E7A00();

void func_002E7A90(u8 *a0) {
    u8 *s0;
    s0 = a0 + 0x30;
    func_002E6FA0(1.0f, s0);
    if (((D_00492FCE[0] | D_00493086[0]) & 8) != 0) {
        *(f32 *)(s0 + 0x4) = gFrameDelta;
    }
    *(f32 *)(s0 + 0x4) = *(f32 *)(s0 + 0x4) - gFrameDelta;
    if (*(f32 *)(s0 + 0x4) < 0.0f) {
        *(s32 *)(s0 + 0x4) = 0x42480000;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7A00 == 0) ? 0 : (void *)func_002E7A00;
    }
}
extern f32 gFrameDelta;
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern void func_002E6FA0(f32, void *);
extern void func_002E7A90();
extern void func_002E7A00();

void func_002E7B40(u8 *a0) {
    u8 *s0;
    f32 f20;
    s0 = a0 + 0x30;
    f20 = (50.0f - *(f32 *)(a0 + 0x34)) / 50.0f;
    func_002E6FA0(f20, s0);
    if (((D_00492FCE[0] | D_00493086[0]) & 8) != 0) {
        *(f32 *)(s0 + 0x4) = 50.0f * f20;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7A00 == 0) ? 0 : (void *)func_002E7A00;
    } else {
        *(f32 *)(s0 + 0x4) = *(f32 *)(s0 + 0x4) - gFrameDelta;
        if (*(f32 *)(s0 + 0x4) < 0.0f) {
            *(s32 *)(s0 + 0x4) = 0x42F00000;
            *(void **)(a0 + 0x1C) = ((void *)func_002E7A90 == 0) ? 0 : (void *)func_002E7A90;
        }
    }
}
extern f32 gFrameDelta;
extern void func_002E70E0(f32, void *);

void func_002E7C20(u8 *a0) {
    u8 *s0;
    s0 = a0 + 0x30;
    func_002E70E0(*(f32 *)(a0 + 0x34) / 50.0f, s0);
    *(f32 *)(s0 + 4) = *(f32 *)(s0 + 4) - gFrameDelta;
    if (*(f32 *)(s0 + 4) < 0.0f) {
        *(s32 *)(s0 + 4) = 0x42480000;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7B40 == 0) ? 0 : (void *)func_002E7B40;
    }
}
extern f32 gFrameDelta;
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern void func_002E70E0(f32, void *);

void func_002E7CB0(u8 *a0) {
    u8 *s0;
    s0 = a0 + 0x30;
    func_002E70E0(1.0f, s0);
    if ((D_00492FCE[0] | D_00493086[0]) & 8) {
        *(f32 *)(s0 + 4) = gFrameDelta;
    }
    *(f32 *)(s0 + 4) = *(f32 *)(s0 + 4) - gFrameDelta;
    if (*(f32 *)(s0 + 4) <= 0.0f) {
        *(s32 *)(s0 + 4) = 0x42480000;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7C20 == 0) ? 0 : (void *)func_002E7C20;
    }
}
extern f32 gFrameDelta;
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern void func_002E70E0(f32, void *);
extern void func_002E7CB0();
extern void func_002E7C20();

void func_002E7D60(u8 *a0) {
    u8 *s0;
    f32 f20;
    s0 = a0 + 0x30;
    f20 = (50.0f - *(f32 *)(a0 + 0x34)) / 50.0f;
    func_002E70E0(f20, s0);
    if (((D_00492FCE[0] | D_00493086[0]) & 8) != 0) {
        *(f32 *)(s0 + 0x4) = 50.0f * f20;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7C20 == 0) ? 0 : (void *)func_002E7C20;
    } else {
        *(f32 *)(s0 + 0x4) = *(f32 *)(s0 + 0x4) - gFrameDelta;
        if (*(f32 *)(s0 + 0x4) <= 0.0f) {
            *(s32 *)(s0 + 0x4) = 0x42F00000;
            *(void **)(a0 + 0x1C) = ((void *)func_002E7CB0 == 0) ? 0 : (void *)func_002E7CB0;
        }
    }
}
extern f32 gFrameDelta;
extern void func_002E72C0(f32, void *);

void func_002E7E40(u8 *a0) {
    u8 *s0;
    s0 = a0 + 0x30;
    func_002E72C0(*(f32 *)(a0 + 0x34) / 50.0f, s0);
    *(f32 *)(s0 + 4) = *(f32 *)(s0 + 4) - gFrameDelta;
    if (*(f32 *)(s0 + 4) < 0.0f) {
        *(s32 *)(s0 + 4) = 0x42480000;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7D60 == 0) ? 0 : (void *)func_002E7D60;
    }
}
extern f32 gFrameDelta;
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern void func_002E72C0(f32, void *);
extern void func_002E7E40();

void func_002E7ED0(u8 *a0) {
    u8 *s0;
    s0 = a0 + 0x30;
    func_002E72C0(1.0f, s0);
    if (((D_00492FCE[0] | D_00493086[0]) & 8) != 0) {
        *(f32 *)(s0 + 0x4) = gFrameDelta;
    }
    *(f32 *)(s0 + 0x4) = *(f32 *)(s0 + 0x4) - gFrameDelta;
    if (*(f32 *)(s0 + 0x4) <= 0.0f) {
        *(s32 *)(s0 + 0x4) = 0x42480000;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7E40 == 0) ? 0 : (void *)func_002E7E40;
    }
}
extern f32 gFrameDelta;
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern void func_002E72C0(f32, void *);
extern void func_002E7ED0();
extern void func_002E7E40();

void func_002E7F80(u8 *a0) {
    u8 *s0;
    f32 f20;
    s0 = a0 + 0x30;
    f20 = (50.0f - *(f32 *)(a0 + 0x34)) / 50.0f;
    func_002E72C0(f20, s0);
    if (((D_00492FCE[0] | D_00493086[0]) & 8) != 0) {
        *(f32 *)(s0 + 0x4) = 50.0f * f20;
        *(void **)(a0 + 0x1C) = ((void *)func_002E7E40 == 0) ? 0 : (void *)func_002E7E40;
    } else {
        *(f32 *)(s0 + 0x4) = *(f32 *)(s0 + 0x4) - gFrameDelta;
        if (*(f32 *)(s0 + 0x4) <= 0.0f) {
            *(s32 *)(s0 + 0x4) = 0x42A00000;
            *(void **)(a0 + 0x1C) = ((void *)func_002E7ED0 == 0) ? 0 : (void *)func_002E7ED0;
        }
    }
}
extern s32 amSofdec_IsStopped(s32);
extern void amSofdec_Destroy(s32);
extern void amVram_Apply(s32);
extern void func_002E7F80();

void Logomark_EndMovie(u8 *a0) {
    u8 *s0;
    void *f;
    s0 = a0 + 0x30;
    if (*(s32 *)(a0 + 0x3C) >= 0) {
        if (amSofdec_IsStopped(*(s32 *)(a0 + 0x3C)) == 0) {
            return;
        }
        amSofdec_Destroy(*(s32 *)(s0 + 0xC));
        amSofdec_Destroy(-1);
        *(s32 *)(s0 + 0xC) = -1;
    }
    amVram_Apply(2);
    *(s32 *)(s0 + 0x4) = 0x42480000;
    *(s32 *)(s0 + 0x8) = 0;
    *(void **)(a0 + 0x1C) = ((void *)func_002E7F80 == 0) ? 0 : (void *)func_002E7F80;
}
void Logomark_StopMovie(u8 *a0) {
    u8 *s0;
    u8 *s1;
    f32 f;
    f32 f1;

    s0 = a0;
    s1 = s0 + 0x30;
    f = 1.0f;
    if (*(s32 *)(s0 + 0x38) == 1) {
        f = *(f32 *)(s1 + 4) / 50.0f;
    }
    func_002E7400(s1, f);
    f1 = *(f32 *)(s1 + 4) - gFrameDelta;
    *(f32 *)(s1 + 4) = f1;
    if (f1 <= 0.0f) {
        amSofdec_Stop(*(s32 *)(s1 + 0xC));
        *(void **)(s0 + 0x1C) = ((void *)Logomark_EndMovie == 0) ? 0 : (void *)Logomark_EndMovie;
    }
}
#if 0
// differs: 37 of 57 differ: the first branch order is inverted (original beqz on the flag test, mine bnez), the flag test loads are in other registers, and the sofdec call sites need the same reordering
void func_002E8190(u8 *a0) {
    u8 *s1;
    u8 *s0;
    s32 v;
    f32 f1;

    s1 = a0;
    s0 = s1 + 0x30;
    func_002E7400(s0, 1.0f);
    f1 = *(f32 *)(s0 + 4) - gFrameDelta;
    *(f32 *)(s0 + 4) = f1;
    if (((D_00492FCE[0] | D_00493086[0]) & 8) == 0) {
        v = amSofdec_GetStat(*(void **)(s0 + 0xC));
        if (v == 3 || *(f32 *)(s0 + 4) <= 0.0f) {
            *(void **)(s1 + 0x1C) = ((void *)Logomark_StopMovie == 0) ? 0 : (void *)Logomark_StopMovie;
        }
    } else {
        *(f32 *)(s0 + 4) = 50.0f;
        *(s32 *)(s0 + 8) = 1;
        *(void **)(s1 + 0x1C) = ((void *)Logomark_StopMovie == 0) ? 0 : (void *)Logomark_StopMovie;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E8190);
#if 0
// differs: the parameter block is filled in another order (the value 1 is loaded before the frame is set up and stored later), so the scheduling and registers differ
void func_002E8270(u8 *a0) {
    u8 *s1;
    u8 *s0;
    u8 blk[0x24];

    s1 = a0;
    *(s32 *)(blk + 4) = 1;
    *(s32 *)(blk + 8) = 0xA00000;
    *(s32 *)(blk + 0xC) = 0x280;
    *(s32 *)(blk + 0x10) = 0x200;
    *(s32 *)blk = 0;
    s0 = s1 + 0x30;
    *(s16 *)(blk + 0x20) = 0;
    *(s32 *)(blk + 0x14) = 3;
    *(s32 *)(blk + 0x18) = -1;
    *(s32 *)(blk + 0x1C) = D_0046FD5C;
    *(void **)(s0 + 0xC) = amSofdec_Create(blk);
    *(s32 *)(s0 + 4) = 0x43700000;
    *(s32 *)(s0 + 0x10) = 0;
    amSofdec_StartAfs(*(void **)(s0 + 0xC), 0xF4E, 1);
    *(void **)(s1 + 0x1C) = ((void *)func_002E8190 == 0) ? 0 : (void *)func_002E8190;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E8270);

/* Sets the task's function to func_002E8270 (the logo mark's main step). */
void Logomark_Begin(Task *t) {
    TASK_SET_FUNC(t, func_002E8270);
}
extern void *D_0047094C;
extern void amCdFs_Close(void *, s32);
extern void amFile_Load(s32);
extern void SoundRpc_SendWord2(s32);
extern void SoundRpc_SendWord(s32);
extern void amAdx_Stop(s32);
extern void func_00264140(s32, s32);
extern void Logomark_Begin();

void func_002E8340(Task *a0) {
    u8 *o;
    u8 *p;
    u8 *c;
    u8 *a1;
    void *f;
    c = D_0047094C;
    o = (u8 *)a0;
    a1 = *(u8 **)c;
    p = o + 0x30;
    if (*(s16 *)(a1 + 4) == 3) {
        *(s32 *)p = *(s32 *)(a1 + 0x54);
        *(s32 *)(*(u8 **)c + 0x54) = 0;
        amCdFs_Close(*(void **)c, 0);
        *(s32 *)c = 0;
        amFile_Load(*(s32 *)p);
        SoundRpc_SendWord2(-1);
        SoundRpc_SendWord(0);
        amAdx_Stop(-1);
        func_00264140(-1, 0);
        f = (void *)Logomark_Begin;
        *(void **)(o + 0x1C) = (f == 0) ? 0 : f;
    }
}
extern void *D_0047094C;

/* Clears the logo mark's flag D_0047094C. */
void Logomark_ClearFlag(void) {
    D_0047094C = 0;
}
typedef struct LogomarkGlobal {
    void *file;   /* 0x0 */
    Task *task;   /* 0x4 */
} LogomarkGlobal;

extern void amCdFs_Close(void *, s32);
extern void amTask_Kill(Task *);

/* Frees the logo mark: its task and the file, then the block D_0047094C. */
void Logomark_Free(void) {
    Task *task;
    LogomarkGlobal *g;

    g = (LogomarkGlobal *)D_0047094C;
    task = g->task;
    if (task != 0) {
        amHeap_Free(task->data.work);
        amTask_Kill(task);
    }
    if (g->file != 0) {
        amCdFs_Close(g->file, 0);
    }
    amHeap_Free(g);
    D_0047094C = 0;
}
extern void func_002E8340(Task *);
extern char D_0046F570[];
extern void func_001484A0(s32);
extern void Scene_SetReady(void);
extern void memset(void *, s32, s32);

/* Creates the logo mark's task (func_002E8340) and clears its 0x14-byte work area. */
void Logomark_Start(void) {
    LogomarkGlobal *g = (LogomarkGlobal *)D_0047094C;
    Task *t = amTask_Create(func_002E8340, 0, 0x1001, 8, 2, D_0046F570);
    g->task = t;
    memset(&t->data, 0, 0x14);
    func_001484A0(0);
    Scene_SetReady();
}
extern char D_0046F580[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);

/* Allocates the logo mark's 8-byte block (D_0047094C), reads file 0x10ABF into it. */
void Logomark_Load(void) {
    void *w;
    w = D_0047094C = amHeap_Alloc(8, 0, D_0046F580, 0xEE);
    ((s32 *)w)[1] = 0;
    ((s32 *)w)[0] = amCdFs_ReadFileId(0x10ABF, 0, 0);
}

#include "common.h"

extern s32 gEssShop;
extern u8 D_004E0660[];
extern void func_0026E000(u8 *, s32);
extern s32 D_00452FA0[];
extern u8 D_004E066A[];
extern void func_00274120(void);
extern s32 func_00283BF0(void);
extern void SklSheet_Free(void);
extern void func_002759F0(void);

#if 0
// differs: the original is 8 bytes longer (its loop and the clamp are laid out differently; the register choice also differs)
s32 func_00272D30(void) {
    u8 *d;
    s32 t0;
    s32 v1;
    s32 i;
    s32 a1;
    u8 *p;
    s32 *q;
    s32 v;
    s32 w;
    s32 a0;

    d = (u8 *)gEssShop;
    t0 = 0;
    v1 = *(s32 *)(d + 0x60);
    if (v1 == 0) {
        t0 = *(s32 *)(d + 0x6C);
    } else if (0 < *(s32 *)(d + 0x6C)) {
        a1 = v1 - 1;
        i = 0;
        p = d;
        q = (s32 *)(d + 0x6C);
        do {
            if (*(s16 *)(p + 0x80) == a1) {
                t0++;
            }
            i++;
            p += 0x14;
        } while (i < *q);
    }
    if (t0 == 0) {
        return 0;
    }
    {
        v1 = (t0 < 4) ? t0 - 1 : 3;
        v = *(s32 *)(d + 0x68) + 1;
        *(s32 *)(d + 0x68) = v;
        if (v1 < v) {
            *(s32 *)((u8 *)gEssShop + 0x68) = v1;
            if (t0 < 5) {
                return 0;
            }
            a0 = t0 - 4;
            w = *(s32 *)((u8 *)gEssShop + 0x64) + 1;
            *(s32 *)((u8 *)gEssShop + 0x64) = w;
            if (a0 < w) {
                *(s32 *)((u8 *)gEssShop + 0x64) = a0;
                return 0;
            }
            return 1;
        }
        return 1;
    }
}
#endif
#if 0
// differs: size 0xE8 vs 0xF0: 2 instructions short; the original shares one epilogue for its returns (b to 272E18), single-exit form gives 0xC8
s32 func_00272D30(void) {
    u8 *a0;
    u8 *p2;
    s32 t0;
    s32 v1;
    s32 v0;
    s32 a1;
    s32 a3;
    s32 n;
    s32 nb;

    a0 = (u8 *)gEssShop;
    v1 = *(s32 *)(a0 + 0x60);
    t0 = 0;
    if (v1 == 0) {
        t0 = *(s32 *)(a0 + 0x6C);
    } else {
        nb = *(s32 *)(a0 + 0x6C);
        if (0 < nb) {
            a1 = v1 - 1;
            p2 = a0;
            a3 = 0;
            do {
                if (*(s16 *)(p2 + 0x80) == a1) {
                    t0++;
                }
                a3++;
                p2 += 0x14;
            } while (a3 < nb);
        }
    }
    if (t0 == 0) {
        return 0;
    }
    v1 = t0 - 1;
    if (!(t0 < 4)) {
        v1 = 3;
    }
    v0 = *(s32 *)(a0 + 0x68) + 1;
    *(s32 *)(a0 + 0x68) = v0;
    if (v1 < v0) {
        *(s32 *)((u8 *)gEssShop + 0x68) = v1;
        if (t0 < 5) {
            return 0;
        }
        n = t0 - 4;
        v0 = *(s32 *)((u8 *)gEssShop + 0x64) + 1;
        *(s32 *)((u8 *)gEssShop + 0x64) = v0;
        if (n < v0) {
            *(s32 *)((u8 *)gEssShop + 0x64) = n;
            return 0;
        }
        return 1;
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00272D30);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00272E20);
#if 0
// differs: the table and mode logic match in order, but the branch layout of the 0x242 test and the mode dispatch (beq/beqz chain) and the register of the table base differ
void func_002730B0(u8 *a0, s32 a1) {
    u8 *e;
    s32 a3;
    s32 mode;

    *(s32 *)(a0 + 4) = a1;
    e = D_004E0660 + a1 * 40;
    if (*(s32 *)a0 != 0x242) {
        a3 = *(u16 *)(e + 0x26);
        if (a3 == 0) {
            *(s32 *)(a0 + 8) = D_00452FA0[e[0xA] >> 4];
        } else {
            *(s32 *)(a0 + 8) = a3 * 100;
        }
        *(s16 *)(a0 + 0xC) = D_004E066A[a1 * 40] & 3;
    } else {
        *(s32 *)(a0 + 8) = 0x1388;
        *(s16 *)(a0 + 0xC) = -1;
    }
    mode = ((u8 *)(*(s32 *)(gEssShop + 0x54)))[a1];
    if (mode == 1) {
        if (e[0xB] & 8) {
            *(s32 *)(a0 + 0x10) &= -3;
            *(s32 *)(a0 + 0x10) |= 4;
        } else {
            *(s32 *)(a0 + 0x10) &= -7;
        }
    } else if (mode == 0) {
        *(s32 *)(a0 + 0x10) &= -5;
        *(s32 *)(a0 + 0x10) |= 2;
    } else {
        *(s32 *)(a0 + 0x10) &= -7;
    }
    if (*(s32 *)a0 == 0x242) {
        *(s32 *)(a0 + 0x10) &= -7;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_002730B0);
#if 0
// differs: register roles of the 64-bit mask loop differ (best of 300 declaration orders: 38 of 70 instructions); the pointer is in a2 here, v1 in the original
extern u8 D_0058F710[];
extern s16 D_004530D0[];

s32 func_00273210(void) {
    s32 t2;
    u8 *t0;
    u8 *ent;
    s32 a2;
    s32 t4;
    s32 a1;
    s32 a0;
    s32 v0;
    u64 t5;
    u8 *v1;

    t0 = *(u8 **)(gEssShop + 0x54);
    t5 = *(u64 *)(D_0058F710 + *(s32 *)(gEssShop + 0x50) * 0xD680);
    a2 = -1;
    a1 = 10;
    a0 = 0;
    v0 = -1;
    v1 = (u8 *)D_004530D0;
    do {
        if (t0[*(s16 *)(v1 + 2)] == 0) {
            break;
        }
        t4 = *(s16 *)v1;
        ent = D_004E0660 + t4 * 40;
        if (*(u64 *)ent != 0 && (t5 & *(u64 *)ent) == 0) {
            break;
        }
        t2 = t0[t4];
        if (t2 == 0) {
            v0 = D_004530D0[a0 * 2];
            break;
        }
        if (t2 < ent[0xD] && t2 < a1) {
            a2 = (s16)t4;
            a1 = t2;
        }
        a0++;
        v1 += 4;
    } while (a0 < 0x4F);
    if (v0 > 0) {
        return v0;
    }
    if (a2 > 0) {
        return a2;
    }
    return -1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00273210);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00273330);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_002735D0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_002737C0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00273AF0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00273E20);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00274120);
#if 0
// differs: 36 of 85: the counter preamble and the flag test match; the store order of the gEssShop fields and the argument registers of func_0026D570 differ, and the function-pointer tail is laid out differently
extern s32 gEssShop;
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern void func_00274120();
extern void amAdx_Pause(s32, s32);
extern void Zenie_Close(s32);
extern void func_0026D570();
extern void func_00276470();

void func_00274A00(u8 *a0) {
    u8 *s1;
    u8 *s0;
    void *fp;
    s1 = a0;
    s0 = a0 + 0x30;
    *(s32 *)((u8 *)gEssShop + 0x1D4) = *(s32 *)((u8 *)gEssShop + 0x1D4) + 1;
    *(s32 *)((u8 *)gEssShop + 0x204) = *(s32 *)((u8 *)gEssShop + 0x204) + 1;
    *(s32 *)((u8 *)gEssShop + 0x234) = *(s32 *)((u8 *)gEssShop + 0x234) + 1;
    *(s32 *)((u8 *)gEssShop + 0x264) = *(s32 *)((u8 *)gEssShop + 0x264) + 1;
    *(s32 *)((u8 *)gEssShop + 0x294) = *(s32 *)((u8 *)gEssShop + 0x294) + 1;
    *(s32 *)((u8 *)gEssShop + 0x2C4) = *(s32 *)((u8 *)gEssShop + 0x2C4) + 1;
    *(s32 *)((u8 *)gEssShop + 0x3B4) = *(s32 *)((u8 *)gEssShop + 0x3B4) + 1;
    func_00274120();
    if ((D_00492FCE[0] | D_00493086[0]) != 0) {
        amAdx_Pause(1, 1);
        Zenie_Close(0);
        *(s32 *)s0 = 0x3C;
        *(s32 *)((u8 *)gEssShop + 0x1CC) = 1;
        *(s32 *)((u8 *)gEssShop + 0x1D4) = 0;
        *(s32 *)((u8 *)gEssShop + 0x22C) = 0x17;
        *(s32 *)((u8 *)gEssShop + 0x234) = 0;
        *(s32 *)((u8 *)gEssShop + 0x1FC) = 0x14;
        *(s32 *)((u8 *)gEssShop + 0x204) = 0;
        *(s32 *)((u8 *)gEssShop + 0x20C) = -1;
        *(s32 *)((u8 *)gEssShop + 0x3AC) = 1;
        *(s32 *)((u8 *)gEssShop + 0x3B4) = 0;
        func_0026D570(0, gEssShop);
        fp = (void *)func_00276470;
        *(void **)(s1 + 0x1C) = (fp == 0) ? 0 : fp;
    }
}
#endif
#if 0
// differs: 33 of 83 instructions differ (relocation lines masked): the first seven field increments and the call match; the second block reloads gEssShop once per group in the original (a2/a1 reused), and the callback select lands at another offset
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern void func_00274120(void);
extern void amAdx_Pause(s32, s32);
extern void Zenie_Close(s32);
extern void func_0026D570(s32);
extern void func_00276470(u8 *);

void func_00274A00(u8 *a0) {
    u8 *s1;
    u8 *s0;

    s1 = a0;
    s0 = s1 + 0x30;
    *(s32 *)(gEssShop + 0x1D4) = *(s32 *)(gEssShop + 0x1D4) + 1;
    *(s32 *)(gEssShop + 0x204) = *(s32 *)(gEssShop + 0x204) + 1;
    *(s32 *)(gEssShop + 0x234) = *(s32 *)(gEssShop + 0x234) + 1;
    *(s32 *)(gEssShop + 0x264) = *(s32 *)(gEssShop + 0x264) + 1;
    *(s32 *)(gEssShop + 0x294) = *(s32 *)(gEssShop + 0x294) + 1;
    *(s32 *)(gEssShop + 0x2C4) = *(s32 *)(gEssShop + 0x2C4) + 1;
    *(s32 *)(gEssShop + 0x3B4) = *(s32 *)(gEssShop + 0x3B4) + 1;
    func_00274120();
    if ((D_00492FCE[0] | D_00493086[0]) != 0) {
        amAdx_Pause(1, 1);
        Zenie_Close(0);
        *(s32 *)s0 = 0x3C;
        *(s32 *)(gEssShop + 0x1CC) = 1;
        *(s32 *)(gEssShop + 0x1D4) = 0;
        *(s32 *)(gEssShop + 0x22C) = 0x17;
        *(s32 *)(gEssShop + 0x234) = 0;
        *(s32 *)(gEssShop + 0x1FC) = 0x14;
        *(s32 *)(gEssShop + 0x204) = 0;
        *(s32 *)(gEssShop + 0x20C) = -1;
        *(s32 *)(gEssShop + 0x3AC) = 1;
        *(s32 *)(gEssShop + 0x3B4) = 0;
        func_0026D570(0);
        *(void **)(s1 + 0x1C) = ((void *)func_00276470 == 0) ? 0 : (void *)func_00276470;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00274A00);
void func_00274B40(u8 *a0) {
    u8 *s0;

    s0 = a0;
    *(s32 *)((u8 *)gEssShop + 0x1D4) += 1;
    *(s32 *)((u8 *)gEssShop + 0x204) += 1;
    *(s32 *)((u8 *)gEssShop + 0x234) += 1;
    *(s32 *)((u8 *)gEssShop + 0x264) += 1;
    *(s32 *)((u8 *)gEssShop + 0x294) += 1;
    *(s32 *)((u8 *)gEssShop + 0x2C4) += 1;
    *(s32 *)((u8 *)gEssShop + 0x3B4) += 1;
    func_00274120();
    if (func_00283BF0() == 8) {
        *(void **)(s0 + 0x1C) = ((void *)func_002759F0 == 0) ? 0 : (void *)func_002759F0;
        SklSheet_Free();
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00274C10);
extern s32 gEssShop;
extern f32 gFrameDelta;
extern s32 func_0022BC30(s32, f32);
extern void func_00274120();
extern void func_00273E20();
extern void func_002759F0();

void func_00274E70(u8 *a0) {
    u8 *s3;
    u8 *s2;
    u8 *s1;
    s32 s0;
    void *fp;
    s3 = a0;
    *(s32 *)((u8 *)gEssShop + 0x1D4) = *(s32 *)((u8 *)gEssShop + 0x1D4) + 1;
    *(s32 *)((u8 *)gEssShop + 0x204) = *(s32 *)((u8 *)gEssShop + 0x204) + 1;
    *(s32 *)((u8 *)gEssShop + 0x234) = *(s32 *)((u8 *)gEssShop + 0x234) + 1;
    *(s32 *)((u8 *)gEssShop + 0x264) = *(s32 *)((u8 *)gEssShop + 0x264) + 1;
    *(s32 *)((u8 *)gEssShop + 0x294) = *(s32 *)((u8 *)gEssShop + 0x294) + 1;
    *(s32 *)((u8 *)gEssShop + 0x2C4) = *(s32 *)((u8 *)gEssShop + 0x2C4) + 1;
    *(s32 *)((u8 *)gEssShop + 0x3B4) = *(s32 *)((u8 *)gEssShop + 0x3B4) + 1;
    func_00274120();
    *(s32 *)((u8 *)gEssShop + 0x2F4) = *(s32 *)((u8 *)gEssShop + 0x2F4) + 1;
    *(s32 *)((u8 *)gEssShop + 0x324) = *(s32 *)((u8 *)gEssShop + 0x324) + 1;
    *(s32 *)((u8 *)gEssShop + 0x354) = *(s32 *)((u8 *)gEssShop + 0x354) + 1;
    *(s32 *)((u8 *)gEssShop + 0x384) = *(s32 *)((u8 *)gEssShop + 0x384) + 1;
    func_00273E20();
    s0 = -1;
    s2 = *(u8 **)((u8 *)gEssShop + 0x28);
    s1 = (u8 *)gEssShop + 0x2EC;
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + *(s32 *)((u8 *)gEssShop + 0x2FC) * 4), (f32)*(s32 *)((u8 *)gEssShop + 0x2F4) * gFrameDelta);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + *(s32 *)(s1 + 0x14) * 4), (f32)*(s32 *)(s1 + 0x8) * gFrameDelta);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + *(s32 *)((u8 *)gEssShop + 0x31C) * 4), (f32)*(s32 *)((u8 *)gEssShop + 0x324) * gFrameDelta);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + *(s32 *)((u8 *)gEssShop + 0x34C) * 4), (f32)*(s32 *)((u8 *)gEssShop + 0x354) * gFrameDelta);
    if (s0 == 0xFF) {
        fp = (void *)func_002759F0;
        *(void **)(s3 + 0x1C) = (fp == 0) ? 0 : fp;
    }
}
extern s32 gEssShop;
extern f32 gFrameDelta;
extern s32 func_0022BC30(s32, f32);
extern void func_00274120();
extern void func_00273E20();
extern void func_00275230();

void func_00275050(u8 *a0) {
    u8 *s3;
    u8 *s2;
    u8 *s1;
    s32 s0;
    void *fp;
    s3 = a0;
    *(s32 *)((u8 *)gEssShop + 0x1D4) = *(s32 *)((u8 *)gEssShop + 0x1D4) + 1;
    *(s32 *)((u8 *)gEssShop + 0x204) = *(s32 *)((u8 *)gEssShop + 0x204) + 1;
    *(s32 *)((u8 *)gEssShop + 0x234) = *(s32 *)((u8 *)gEssShop + 0x234) + 1;
    *(s32 *)((u8 *)gEssShop + 0x264) = *(s32 *)((u8 *)gEssShop + 0x264) + 1;
    *(s32 *)((u8 *)gEssShop + 0x294) = *(s32 *)((u8 *)gEssShop + 0x294) + 1;
    *(s32 *)((u8 *)gEssShop + 0x2C4) = *(s32 *)((u8 *)gEssShop + 0x2C4) + 1;
    *(s32 *)((u8 *)gEssShop + 0x3B4) = *(s32 *)((u8 *)gEssShop + 0x3B4) + 1;
    func_00274120();
    *(s32 *)((u8 *)gEssShop + 0x2F4) = *(s32 *)((u8 *)gEssShop + 0x2F4) + 1;
    *(s32 *)((u8 *)gEssShop + 0x324) = *(s32 *)((u8 *)gEssShop + 0x324) + 1;
    *(s32 *)((u8 *)gEssShop + 0x354) = *(s32 *)((u8 *)gEssShop + 0x354) + 1;
    *(s32 *)((u8 *)gEssShop + 0x384) = *(s32 *)((u8 *)gEssShop + 0x384) + 1;
    func_00273E20();
    s0 = -1;
    s2 = *(u8 **)((u8 *)gEssShop + 0x28);
    s1 = (u8 *)gEssShop + 0x2EC;
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + *(s32 *)((u8 *)gEssShop + 0x2FC) * 4), (f32)*(s32 *)((u8 *)gEssShop + 0x2F4) * gFrameDelta);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + *(s32 *)(s1 + 0x14) * 4), (f32)*(s32 *)(s1 + 0x8) * gFrameDelta);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + *(s32 *)((u8 *)gEssShop + 0x31C) * 4), (f32)*(s32 *)((u8 *)gEssShop + 0x324) * gFrameDelta);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + *(s32 *)((u8 *)gEssShop + 0x34C) * 4), (f32)*(s32 *)((u8 *)gEssShop + 0x354) * gFrameDelta);
    if (s0 == 0xFF) {
        fp = (void *)func_00275230;
        *(void **)(s3 + 0x1C) = (fp == 0) ? 0 : fp;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00275230);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_002759F0);
extern s32 amAdx_IsStopped(s32);
extern void func_0026D6A0(void);

void EssShop_TaskWaitVoice(u8 *a0) {
    u8 *s0;
    s0 = a0;
    *(s32 *)(a0 + 0x30) += 1;
    if (amAdx_IsStopped(1) & 5) {
        func_0026D6A0();
        *(s32 *)(s0 + 0x1C) = 0;
    }
}
extern s32 amAdx_IsStopped(s32);
extern void func_0026D570(s32);
extern void Zenie_Open(s32);
extern void func_00276610(void);

void func_00276400(u8 *a0) {
    u8 *s0;
    void *f;
    s0 = a0;
    *(s32 *)(a0 + 0x30) += 1;
    if (amAdx_IsStopped(1) & 5) {
        func_0026D570(1);
        Zenie_Open(0);
        f = (void *)func_00276610;
        *(void **)(s0 + 0x1C) = (f == 0) ? 0 : f;
    }
}
extern s32 gEssShop;
extern f32 gFrameDelta;
extern f32 D_004E0618[];
extern s32 func_0022BC30(s32, f32);
extern void func_00274120();
extern s32 EssMain_GetFlag();
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern void EssShop_TaskWaitVoice();

void func_00276470(u8 *a0) {
    u8 *s3;
    u8 *s2;
    u8 *s1;
    s32 s0;
    void *fp;
    s3 = a0;
    s2 = a0 + 0x30;
    *(s32 *)((u8 *)gEssShop + 0x1D4) = *(s32 *)((u8 *)gEssShop + 0x1D4) + 1;
    *(s32 *)((u8 *)gEssShop + 0x204) = *(s32 *)((u8 *)gEssShop + 0x204) + 1;
    *(s32 *)((u8 *)gEssShop + 0x234) = *(s32 *)((u8 *)gEssShop + 0x234) + 1;
    *(s32 *)((u8 *)gEssShop + 0x264) = *(s32 *)((u8 *)gEssShop + 0x264) + 1;
    *(s32 *)((u8 *)gEssShop + 0x294) = *(s32 *)((u8 *)gEssShop + 0x294) + 1;
    *(s32 *)((u8 *)gEssShop + 0x2C4) = *(s32 *)((u8 *)gEssShop + 0x2C4) + 1;
    *(s32 *)((u8 *)gEssShop + 0x3B4) = *(s32 *)((u8 *)gEssShop + 0x3B4) + 1;
    func_00274120();
    s0 = -1;
    s1 = *(u8 **)((u8 *)gEssShop + 0x28);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s1 + 0x1C) + *(s32 *)((u8 *)gEssShop + 0x1CC) * 4), (f32)*(s32 *)((u8 *)gEssShop + 0x1D4) * gFrameDelta);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s1 + 0x1C) + *(s32 *)((u8 *)gEssShop + 0x22C) * 4), (f32)*(s32 *)((u8 *)gEssShop + 0x234) * gFrameDelta);
    if (s0 == 0xFF) {
        if (EssMain_GetFlag() != 0) {
            *(s32 *)s2 = 0;
            fp = (void *)EssShop_TaskWaitVoice;
            *(void **)(s3 + 0x1C) = (fp == 0) ? 0 : fp;
            amAdx_SetVolume(1, D_004E0618[0]);
            amAdx_Pause(1, 0);
            amAdx_PlayAfs(1, 0x210D8, 0);
        } else {
            func_0026D6A0();
            *(s32 *)(s3 + 0x1C) = 0;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276610);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276840);
extern s32 gEssShop;
extern void Zenie_Init(void);
extern void SklSheet_Clear(void);

/* Clears gEssShop, then sets up the Zenie display. */
void Shop_InitZenie(void) {
    gEssShop = 0;
    Zenie_Init();
    SklSheet_Clear();
}
extern void *amTask_Create();
extern void func_00276840();
extern char D_0046B530[];

void EssShop_Start(void) {
    u8 *s0;
    *(void **)((u8 *)gEssShop + 0x20) = amTask_Create(func_00276840, 0, 0x3000, 0x200, 4, D_0046B530);
    s0 = *(u8 **)((u8 *)gEssShop + 0x20) + 0x30;
    memset(s0, 0, 0x1C);
    *(s32 *)s0 = 0x3C;
}
extern void StrStatus_Exit();
extern void amTask_KillGroup(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void Zenie_Release();

void EssShop_Exit(void) {
    s32 i;
    s32 off;
    *(s32 *)(*(u8 **)((u8 *)gEssShop + 0x24) + 0x34) = 0;
    StrStatus_Exit(*(void **)((u8 *)gEssShop + 0x24));
    amTask_KillGroup(0x200, 4, 0);
    for (i = 0, off = 0; i < 4; i++, off += 4) {
        void *p = *(void **)((u8 *)gEssShop + off);
        if (p != 0) {
            amCdFs_Close(p, 0);
        }
    }
    amHeap_Free((void *)gEssShop);
    gEssShop = 0;
    Zenie_Release();
}
#if 0
// differs: differs in the init order: the mult and the two table addresses are computed in another order and the tail (Zenie block) is scheduled differently (size differs)
extern s32 gEssShop;
extern char D_0046B520[];
extern s32 D_0058F680[];
extern s32 D_0058F718[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void Zenie_Create(s32, s32, s32, s32);
extern void func_002737C0();
extern void Zenie_SetValue(s32, s32);

void func_00276B50(s32 a0) {
    s32 t;
    s32 t3;
    s32 v;
    if (gEssShop != 0) {
        amHeap_Free((void *)gEssShop);
    }
    gEssShop = (s32)amHeap_Alloc(0x3E0, 0, D_0046B520, 0x168);
    memset((void *)gEssShop, 0, 0x3E0);
    *(s32 *)((u8 *)gEssShop + 0x50) = a0;
    t = amCdFs_ReadFileId(0x107F7, 0, 1);
    *(s32 *)((u8 *)gEssShop + 0x0) = t;
    t = amCdFs_ReadFileId(0x107F8, 0, 1);
    *(s32 *)((u8 *)gEssShop + 0x4) = t;
    t = amCdFs_ReadFileId(0x10AB1, 0, 1);
    *(s32 *)((u8 *)gEssShop + 0x8) = t;
    t = amCdFs_ReadFileId(0x10850, 0, 1);
    *(s32 *)((u8 *)gEssShop + 0xC) = t;
    t3 = a0 * 0xD680;
    v = *(s32 *)((u8 *)D_0058F718 + t3);
    *(s32 *)((u8 *)gEssShop + 0x54) = (s32)((u8 *)D_0058F680 + t3 + 0xD41D);
    *(s32 *)((u8 *)gEssShop + 0x70) = v;
    Zenie_Create(0x3210, 1, 0x114012A0, 0);
    func_002737C0();
    Zenie_SetValue(*(s32 *)((u8 *)gEssShop + 0x70), *(s32 *)((u8 *)gEssShop + 0x70));
    *(s32 *)((u8 *)gEssShop + 0x1CC) = 0;
    *(s32 *)((u8 *)gEssShop + 0x22C) = 0x16;
    *(s32 *)((u8 *)gEssShop + 0x1FC) = 0x13;
    *(s32 *)((u8 *)gEssShop + 0x3AC) = 0;
    *(s32 *)((u8 *)gEssShop + 0x268) = 1;
    *(s32 *)((u8 *)gEssShop + 0x298) = 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276B50);
void func_00276CE0(u8 *a0, s32 a1) {
    s32 *q;
    s32 j;
    s32 i;
    s32 e;
    u8 *p;
    u8 *s1;
    s32 s0;

    s1 = a0;
    s0 = a1;
    i = 0;
    do {
        e = *(s32 *)(s1 + i * 4 + 4);
        if (e <= 0) {
            break;
        }
        p = D_004E0660 + e * 40;
        if (*(u16 *)(p + 0x10) == s0 || *(u16 *)(p + 0x12) == s0) {
            func_00276CE0(s1, e);
            i = 0;
        }
        i++;
    } while (i < 7);
    j = 0;
    q = (s32 *)s1;
    do {
        if (q[1] == s0) {
            { s32 *t = (s32 *)(s1 + 4); t[j] = -1; }
            break;
        }
        j++;
        q++;
    } while (j < 7);
    func_0026E000(s1, 0xF0);
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00276DC0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00277010);
INCLUDE_ASM("asm/nonmatchings/menu/ess_shop", func_00277310);

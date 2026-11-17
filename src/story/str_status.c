#include "common.h"
#include "menu/menu.h"
#include "menu/mn_TourMode.h"
#include "story/str_status.h"

extern s32 *D_0046FE44;
extern s32 *D_0047011C;
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern s32 func_0022D670(s32, f32);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);
extern void func_002C0860(s32 *);
extern void func_002BDF50(void *, void *);
extern void Obj_ResetF38(s32);
extern void func_00215230(s32, s32);
extern void func_00214FD0(void);
extern void amTask_KillGroup(s32, s32, s32);
extern void *gWave;
extern char D_005BCF80[];
extern void memset(void *, s32, s32);
extern s16 D_0046EE50[];
extern s32 *D_0046FE48;
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 func_00243E50(s32, s32);
extern void func_00243ED0(void);
extern void func_002CA3F0(void);
extern void func_00209450(s32, s32);
extern void func_00243F20(void);
extern void func_002CA440(void);
extern void StrStatus_ReleaseBuffers(void);
extern void func_00215900(void);
extern void func_00244150(void);
extern void func_002BE320(s32);
extern void func_002BEB50(void);
extern void func_002CA4A0(void);
extern void StrStatus_TaskComment(s32 *);
extern void A2d_FlushList();
extern TourModeGlobal *gTourMode;
extern char D_0046EE10[];
extern void (*D_0046EE30[])(void *);
extern void func_0028EB40(Task *, s32, void (*)(Task *), s32);
extern void func_002BD140(Task *);
extern void amCdFs_Close(s32, s32);
extern void amFile_Load(s32);

INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BD140);
void StrStatus_TaskMain(Task *t) {
    if (((s16 *)gStrStatus->f4)[2] == 3) {
        if (gStrStatus->f284 != 0) {
            func_0028EB40(t, 10, func_002BD140, 0);
        } else {
            func_002BD140(t);
        }
    }
}
typedef struct StrStatusCopy {
    u8 b00, b01, b02, b03, b04, b05, b06, b07, b08, b09, b0A, b0B;
    s32 w0C;
    s32 w10;
    char pad14[4];
    s32 w18;
    s32 w1C;
    s32 w20;
    s32 w24;
    s32 w28;
    s32 w2C;
    s32 w30;
} StrStatusCopy;

void func_002BD400(StrStatusCopy *out) {
    out->b00 = gStrStatus->f288[0];
    out->b01 = gStrStatus->f288[1];
    out->b02 = gStrStatus->f288[2];
    out->b03 = gStrStatus->f288[3];
    out->b04 = gStrStatus->f288[4];
    out->w0C = gStrStatus->f2D4;
    out->w10 = 0;
    out->b05 = gStrStatus->f288[5];
    out->b06 = gStrStatus->f288[6];
    out->b07 = gStrStatus->f288[7];
    out->b08 = gStrStatus->f288[8];
    out->b09 = gStrStatus->f288[9];
    out->b0A = gStrStatus->f288[10];
    out->b0B = gStrStatus->f288[11];
    out->w18 = gStrStatus->f2DC[0];
    out->w1C = gStrStatus->f2DC[1];
    out->w20 = gStrStatus->f2DC[2];
    out->w24 = gStrStatus->f2DC[3];
    out->w28 = gStrStatus->f2DC[4];
    out->w2C = gStrStatus->f2DC[5];
    out->w30 = gStrStatus->f2DC[6];
}
void StrStatus_ClearWork(void) {
    gStrStatus = NULL;
}
extern void Character_Release(s32);
extern void func_0029E450(s32);
extern void Help_Exit(void);
extern void OutputPass_Release(void);

extern void Character_Release(s32);
extern void func_0029E450(s32);
extern void Help_Exit(void);
extern void OutputPass_Release(void);

void StrStatus_Free(void) {
    s32 i;
    if (gStrStatus != 0) {
        for (i = 0; i < 0x45; i++) {
            if (((s32 *)gStrStatus)[0xE + i] != 0) {
                amTask_Kill((Task *)((s32 *)gStrStatus)[0xE + i]);
            }
        }
        for (i = 0; i < 7; i++) {
            if (((s32 *)gStrStatus)[i] != 0) {
                amCdFs_Close(((s32 *)gStrStatus)[i], 0);
            }
            if (((s32 *)gStrStatus)[7 + i] != 0) {
                amCdFs_ReleaseCache(((s32 *)gStrStatus)[7 + i]);
            }
        }
        for (i = 0; i < 0x3C; i++) {
            if (((s32 *)gStrStatus)[0x5A + i] != 0) {
                func_0022D0E0(((s32 *)gStrStatus)[0x5A + i], 1);
            }
        }
        if (((s32 *)gStrStatus)[0x96] != 0) {
            Character_Release(((s32 *)gStrStatus)[0x96]);
        }
        if (((s32 *)gStrStatus)[0x97] != 0) {
            func_0029E450(((s32 *)gStrStatus)[0x97]);
        }
        Help_Exit();
        OutputPass_Release();
        amHeap_Free((void *)gStrStatus);
        gStrStatus = 0;
    }
}
void StrStatus_Start(s32 a, s32 b) {
    gStrStatus->f274 = a;
    gStrStatus->f278 = b;
    gStrStatus->f38 = amTask_Create(StrStatus_TaskMain, NULL, a, 2, b, D_0046EE10);
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BD6B0);
extern void func_0013B160(s32);
extern void func_00142100(void *, void *);
extern void func_00208D70(s32);
#if 0
// func_002BDC50: the VU0 moves are inline asm; the two globals get the other saved registers (ours: E48 in s0 loaded first, original: E44 in s1 loaded first); four orders tried
void func_002BDC50(void) {
    s32 *s0 = D_0046FE48;
    s32 *s1 = D_0046FE44;
    if (*(s16 *)((char *)s1 + 0x100) != 1) {
        return;
    }
    if ((s1[0x2C / 4] & 1) != 0) {
        return;
    }
    if (*(s16 *)((char *)s1 + 0x36) != 0xE) {
        return;
    }
    func_0013B160(0);
    func_00142100((char *)s1 + 0x50, (char *)s1 + 0x60);
    D_00470238 = 0;
    amModel_SetCurrent(s0[0x1A0 / 4], 0x3003000);
    if (s1[0x70 / 4] != 0) {
        func_00208D70(s1[0x70 / 4]);
    }
    if (s1[0x74 / 4] != 0) {
        func_00208D70(s1[0x74 / 4]);
    }
    __asm__ volatile ("vmove.xyzw $vf28, $vf24 ; vmove.xyzw $vf29, $vf25 ; vmove.xyzw $vf30, $vf26 ; vmove.xyzw $vf31, $vf27");
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BDC50);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BDD10);
extern u8 D_003F0800[];
extern void func_00131B90(void *);
extern void func_00131F00(void *, f32, f32);
extern void func_00132DF0(s32);
extern void func_00209D20(s32);
extern void func_00209C50(void);
extern void func_0013B110(s32);
void func_002BDE80(void) {
    s32 tmp[4];
    s32 vec[24];
    func_0013B0B0(D_003F0800);
    func_00131B90(vec);
    func_00131F00(vec, 0.0f, 0.0f);
    func_00132DF0(0);
    tmp[0] = 0xC1000000;
    tmp[1] = 0x3F800000;
    tmp[2] = 0xC1C00000;
    tmp[3] = 0x3F800000;
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; vmulax.xyzw ACC, $vf28, $vf1x ; vmadday.xyzw ACC, $vf29, $vf1y ; vmaddaz.xyzw ACC, $vf30, $vf1z ; vmaddw.xyzw $vf31, $vf31, $vf0w" : : "r"(tmp) : "memory");
    func_00209D20(0);
    D_00470238 = 0;
    {
        s32 *g = D_0047011C;
        if (g[0xD0 / 4] != 0) {
            amModel_SetCurrent(g[0xD0 / 4], g[0xD8 / 4]);
        }
        g = D_0047011C;
        if (g[0x1B4 / 4] != 0) {
            func_00208D70(g[0x1B4 / 4]);
        }
    }
    func_0013B110(1);
    func_00209C50();
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BDF50);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE0B0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE320);

void func_002BE4E0(s32 *a0) {
    s32 m = a0[0x14 / 4];
    s32 *g = D_0046FE44;
    switch (m) {
    case 0:
        g[0x2C / 4] = g[0x2C / 4] | 2;
        break;
    case 1:
        g[0x2C / 4] = g[0x2C / 4] & -3;
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE530);
void func_002BE710(s32 *a0) {
    s32 m = a0[0x14 / 4];
    switch (m) {
    case 0:
        if (D_0047011C[0x1B4 / 4] != 0) {
            Obj_ResetF38(D_0047011C[0x1B4 / 4]);
            D_0047011C[0x1B4 / 4] = 0;
        }
        *(s16 *)((char *)a0 + 0x2A) = 0xE;
        *(s16 *)((char *)a0 + 0x2C) = 0;
        a0[0x24 / 4] = 0x400010;
        func_002BDF50((void *)((char *)D_0047011C + 0x1B4), a0);
        break;
    case 1:
        if (D_0047011C[0x1B4 / 4] != 0) {
            Obj_ResetF38(D_0047011C[0x1B4 / 4]);
            D_0047011C[0x1B4 / 4] = 0;
        }
        break;
    }
}

void func_002BE7C0(s32 *a0) {
    s32 m = a0[0x14 / 4];
    switch (m) {
    case 0:
        D_0047011C[0x1BC / 4] = D_0047011C[0x1BC / 4] | 1;
        D_0047011C[0x1C0 / 4] = 0;
        break;
    case 1:
        D_0047011C[0x1BC / 4] = D_0047011C[0x1BC / 4] & -2;
        D_0047011C[0x1C0 / 4] = 0;
        break;
    }
}

void func_002BE830(char *p) {
    *(s16 *)(p + 0x2A) = 6;
    *(s16 *)(p + 0x2C) = 0;
    *(s32 *)(p + 0x24) = 0x400010;
    func_002BDF50((char *)D_0047011C + (D_0047011C[0x1A8 / 4] << 2) + 0x160, p);
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BE870);
void StrStatus_ReleaseBuffers(void) {
    s32 i;
    if (D_0047011C[0x2D8 / 4] != 0) {
        amCdFs_ReleaseCache(D_0047011C[0x2D4 / 4]);
        D_0047011C[0x2D4 / 4] = 0;
        D_0047011C[0x2D8 / 4] = 0;
    } else {
        if (D_0047011C[0x2D4 / 4] != 0) {
            amCdFs_Close(D_0047011C[0x2D4 / 4], 0);
            D_0047011C[0x2D4 / 4] = 0;
        }
    }
    for (i = 0; i < 0x20; i++) {
        if (D_0047011C[0x254 / 4 + i] != 0) {
            amHeap_Free((void *)D_0047011C[0x254 / 4 + i]);
        }
        D_0047011C[0x254 / 4 + i] = 0;
    }
    func_00209450(0x400008, 1);
    func_00209450(0x400010, 1);
    func_00209450(0x400020, 1);
    func_00209450(0x400040, 1);
    func_00209450(0x400080, 1);
    memset(D_005BCF80, 0, 0x2E0);
}
#if 0
// func_002BEB50: size matches (0x160) but 22 of 88 instructions differ: the original keeps the list in s4, the entry in s3, the call result in s2, the counter in s1 and the offset in s0 (the global is loaded into a0 there, v1 here); the layout of the >= 0 test is fixed; 24 orders of list/ent/res/i tried
extern void *BtlCmd_GetMotEntry(void *, s32);
extern s32 func_001A50F0(s32, s32);
extern s32 func_00127E88(s32, char *, s32);
extern void func_0020A100(s32);
extern void *amObject_Create(void *, void *);
extern char D_0046EEA8[];
void func_002BEB50(void) {
    s32 *list;
    s32 *ent;
    s32 res;
    s32 i;
    s32 *p;
    s32 off;
    p = (s32 *)D_0047011C[0x2D4 / 4];
    if (p != 0) {
        D_0047011C[0x2D4 / 4] = p[0x40 / 4];
        D_0047011C[0x2D8 / 4] = ((s32 *)p[0x40 / 4])[0x50 / 4];
        amFile_Load(D_0047011C[0x2D8 / 4]);
        p[0x40 / 4] = 0;
        amCdFs_Close((s32)p, 0);
        list = (s32 *)D_0047011C[0x2D8 / 4];
        if (0 < list[0x10 / 4]) {
            i = 0;
            off = 0;
            do {
                ent = (s32 *)BtlCmd_GetMotEntry(list, i);
                res = func_001A50F0((s32)list, i);
                if (ent[0x8 / 4] >= 0) {
                    amFile_Load(res);
                } else {
                    if (func_00127E88(res, D_0046EEA8, 4) == 0) {
                        func_0020A100(res);
                    }
                }
                *(s32 *)((u8 *)D_0047011C + off + 0x1D4) = res;
                if (ent[0x8 / 4] == 1) {
                    *(s32 *)((u8 *)D_0047011C + off + 0x254) = (s32)amObject_Create(*(void **)((u8 *)D_0047011C + off + 0x1D4), 0);
                }
                i++;
                off += 4;
            } while (i < list[0x10 / 4]);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BEB50);
extern s16 D_0046EE50[];
extern s32 *D_0046FE48;
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 func_00243E50(s32, s32);

extern s16 D_0046EE50[];
extern s32 *D_0046FE48;
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 func_00243E50(s32, s32);

// func_002BECB0: the switch with a default gives the out-of-line then-block (the if/else forms did not)
s32 func_002BECB0(s32 a0, s32 a1) {
    s32 s1 = D_0046EE50[a0];
    s32 s0 = a1;
    s32 *s2;
    s32 r;
    switch (s1) {
    case 7:
        if (a1 == 3) {
            s0 = 4;
        }
        break;
    default:
        break;
    }
    *(s32 *)((char *)D_0046FE48 + 0x3C8) = amCdFs_ReadFileId(0xC, 0, 1);
    *(s16 *)((char *)D_0046FE44 + 0x102) = 1;
    r = func_00243E50(0, s1);
    s2 = D_0046FE44;
    memset(s2, 0, 0x80);
    s2[0] = 0;
    *(f32 *)&s2[1] = 1.0f;
    s2[2] = 0;
    *(f32 *)&s2[3] = 1.0f;
    *(s8 *)((char *)s2 + 0x38) = 0;
    *(s16 *)((char *)s2 + 0x34) = (s16)s0;
    *(s16 *)((char *)s2 + 0x36) = (s16)s1;
    return r;
}
#if 0
// func_002BED90: the case tests: the original tests 0x12, 0x11, 0xF, 0x10 in that order with out-of-line blocks; ours (if chain or switch) reorders them; the rest matches
extern s32 D_005BD1A0;
extern s32 func_00209540(s32, s32, s32);

void func_002BED90(s32 a0) {
    s32 *s0 = (s32 *)D_0046FE44;
    s32 *a0p;
    s32 *a2;
    s32 *a1;
    s32 v;
    if (D_0047011C[0x1A4 / 4] != 0) {
        Obj_ResetF38(D_0047011C[0x1A4 / 4]);
        D_0047011C[0x1A4 / 4] = 0;
    }
    a0p = (s32 *)D_005BD1A0;
    a2 = (s32 *)((s32 *)((char *)a0p + a0p[0xC / 4]))[0x24 / 4];
    a1 = (s32 *)a2[0x28 / 4];
    v = *(s16 *)((char *)s0 + 0x34) * 2 + 0x1A;
    a2[0xA4 / 4] = v;
    v = *(s16 *)((char *)s0 + 0x34) * 2 + 0x1A;
    a1[0xA4 / 4] = v;
    switch (a0) {
    case 0x12:
        a2[0x5C / 4] = 0x41A00000;
        a2[0xA0 / 4] = 0;
        a1[0x5C / 4] = 0x41400000;
        a1[0xA0 / 4] = 2;
        break;
    case 0x11:
        a2[0x5C / 4] = 0x41B00000;
        a2[0xA0 / 4] = 0;
        a1[0x5C / 4] = 0x41800000;
        a1[0xA0 / 4] = 1;
        break;
    case 0xF:
    case 0x10:
        a2[0x5C / 4] = 0x41700000;
        a2[0xA0 / 4] = 0;
        a1[0x5C / 4] = 0x40E00000;
        a1[0xA0 / 4] = 1;
        break;
    default:
        a2[0x5C / 4] = 0;
        a2[0xA0 / 4] = 0;
        a1[0x5C / 4] = 0;
        a1[0xA0 / 4] = 1;
        break;
    }
    D_0047011C[0x1A4 / 4] = func_00209540((s32)a0p, 0x400020, 0);
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BED90);
void func_002BEEE0(void *a0) {
    if (a0 != 0) {
        u8 *p = (u8 *)D_0047011C + 0x10;
        __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(a0), "r"(p) : "memory");
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BEF00);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF000);

void func_002BF310(void) {
    s32 i;
    s32 off = 0;
    for (i = 0; i < 8; i++) {
        if (*(s32 *)((char *)D_0047011C + off + 0x160) != 0) {
            Obj_ResetF38(*(s32 *)((char *)D_0047011C + off + 0x160));
            *(s32 *)((char *)D_0047011C + off + 0x160) = 0;
        }
        *(s32 *)((char *)D_0047011C + off + 0x180) = -1;
        off += 4;
    }
    if (D_0047011C[0x1AC / 4] != 0) {
        amTask_Kill((Task *)D_0047011C[0x1AC / 4]);
        D_0047011C[0x1AC / 4] = 0;
    }
}
#if 0
// func_002BF3B0: 5 instructions short (0x15C vs 0x170): the original keeps the third call result (func_00240EF0) in s2 and has 5 saved registers (frame 0x60); ours keeps it in v0 and has 4; float test layout and the global in s4 done; 120 declaration orders of the pointers and f tried
extern u8 *func_00240EF0(s32);
extern u8 *func_00240F40(s32, s32);
void func_002BF3B0(void) {
    s32 *s4 = D_0046FE44;
    u8 *s3;
    u8 *s2;
    u8 *s1;
    u8 *s0;
    f32 f;
    s32 a;
    if (*(s16 *)((u8 *)s4 + 0x100) == 1) {
        s3 = func_00240F40(0, 0);
        s0 = *(u8 **)(func_00240F40(0, 1) + 0x24);
        s1 = *(u8 **)(s3 + 0x24);
        s2 = func_00240EF0(*(s8 *)((u8 *)s4 + 0x3A));
        *(s32 **)(s2 + 0x68) = s4;
        *(s32 **)(s3 + 0x68) = s4;
        f = *(f32 *)((u8 *)s4 + 0x24);
        if (f > 0.0f) {
            *(f32 *)(s3 + 0x60) = *(f32 *)(s2 + 0x0) + *(f32 *)(s2 + 0x4) * f;
            *(f32 *)(s2 + 0x60) = *(f32 *)(s2 + 0x1C) + *(f32 *)(s2 + 0x20) * f;
        } else {
            *(f32 *)(s3 + 0x60) = 0.0f;
            *(f32 *)(s2 + 0x60) = 0.0f;
        }
        a = *(s32 *)((u8 *)s4 + 0x2C);
        if (a & 2) {
            *(s32 *)(s3 + 0x54) = 0x40800000;
            *(f32 *)(s3 + 0x5C) = *(f32 *)(s2 + 0xC);
            *(f32 *)(s3 + 0x60) = *(f32 *)(s2 + 0x10);
            *(f32 *)(s1 + 0x60) = *(f32 *)(s2 + 0x14);
            *(s32 *)(s2 + 0x54) = 0x40800000;
            *(f32 *)(s2 + 0x5C) = *(f32 *)(s2 + 0x28);
            *(f32 *)(s2 + 0x60) = *(f32 *)(s2 + 0x2C);
            *(f32 *)(s0 + 0x60) = *(f32 *)(s2 + 0x30);
        } else if (a & 0x20) {
            *(s32 *)(s3 + 0x60) = 0;
            *(s32 *)(s2 + 0x60) = 0;
        } else {
            *(s32 *)(s3 + 0x54) = 0xC0400000;
            *(f32 *)(s3 + 0x5C) = *(f32 *)(s2 + 0x8);
            *(f32 *)(s1 + 0x60) = *(f32 *)(s2 + 0x18);
            *(s32 *)(s2 + 0x54) = 0xC0400000;
            *(f32 *)(s2 + 0x5C) = *(f32 *)(s2 + 0x24);
            *(f32 *)(s0 + 0x60) = *(f32 *)(s2 + 0x34);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF3B0);
extern s32 D_0046FD18;
extern void func_00133780(s32, s32);
extern void func_0013B110(s32);
extern void func_002BDE80(void);
extern void func_00209E50(s32);
extern void func_00208D70(s32);
extern s32 amGs_SetReg32(s32, s32);

void func_002BF520(void) {
    s32 s0;
    if (*(s16 *)((u8 *)D_0046FE44 + 0x100) != 1) {
        return;
    }
    s0 = D_0046FD18;
    func_00133780(2, 1);
    if (D_0047011C[0x1BC / 4] & 1) {
        func_002BDE80();
    } else if (D_0047011C[0x1BC / 4] & 2) {
        D_00470238 = 0;
        if (D_0047011C[0xD0 / 4] != 0) {
            amModel_SetCurrent(D_0047011C[0xD0 / 4], D_0047011C[0xD8 / 4]);
        }
        func_0013B0B0(0);
        __asm__ volatile ("lqc2 $vf1, 0x0(%0) ; vmulax.xyzw ACC, $vf28, $vf1x ; vmadday.xyzw ACC, $vf29, $vf1y ; vmaddaz.xyzw ACC, $vf30, $vf1z ; vmaddw.xyzw $vf31, $vf31, $vf0w"
            : : "r"((u8 *)D_0047011C + 0x20));
        func_00209E50(0);
        if (D_0047011C[0x1B8 / 4] != 0) {
            func_00208D70(D_0047011C[0x1B8 / 4]);
        }
        func_0013B110(1);
    }
    func_00133780(2, 0);
    amGs_SetReg32(0, s0);
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF610);
extern void func_002BE0B0(s32);
extern void func_00243280(s32);
extern void func_00240FF0(s32, s32);
extern void func_00208E50(s32, s32);
extern u8 D_0051D9A8[];

void func_002BF850(u8 *a0) {
    u8 *s0 = (u8 *)D_0046FE44;
    u8 *g;
    f32 f5;
    if (*(s16 *)(s0 + 0x100) == 1) {
        if (D_0047011C[0x1BC / 4] & 1) {
            func_002BE0B0(*(s32 *)(*(u8 **)(a0 + 0x25C)));
            f5 = (f32)*(s32 *)(a0 + 0x298);
            f5 = f5 / 99.0f;
            *(f32 *)((u8 *)D_0047011C + 0x1C0) = *(f32 *)((u8 *)D_0047011C + 0x1C0) + 0.02f * *(f32 *)D_0051D9A8;
            if (*(f32 *)((u8 *)D_0047011C + 0x1C0) > 1.0f) {
                *(f32 *)((u8 *)D_0047011C + 0x1C0) = 1.0f;
                *(f32 *)(s0 + 0x24) = f5;
            } else {
                *(f32 *)(s0 + 0x24) = *(f32 *)((u8 *)D_0047011C + 0x1C0) * f5;
            }
            if (*(f32 *)(s0 + 0x24) > 1.0f) {
                *(f32 *)(s0 + 0x24) = 1.0f;
            }
            func_00243280(0);
            func_00240FF0(0, *(s8 *)(s0 + 0x39));
            func_00208E50(0x400010, 1);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF970);

void StrStatus_Dispatch(s32 *p) {
    if (p[4] >= 0 && p[4] < 6) {
        D_0046EE30[p[4]](p);
    }
}

void func_002BFC50(void) {
    func_00215230(-1, -1);
    func_00214FD0();
    amTask_KillGroup(0x400, 0x20000, 0);
    memset(gWave, 0, 0xA0);
    D_0047011C[0x1BC / 4] &= -3;
    if (D_0047011C[0x1A4 / 4] != 0) {
        Obj_ResetF38(D_0047011C[0x1A4 / 4]);
        D_0047011C[0x1A4 / 4] = 0;
    }
    func_00209450(0x400010, 1);
    func_00209450(0x400020, 1);
}

void func_002BFCF0(void) {
    memset(gWave, 0, 0xA0);
    func_00243ED0();
    func_002CA3F0();
    func_00209450(0x400008, 1);
    func_00209450(0x400010, 1);
    func_00209450(0x400020, 1);
    func_00209450(0x400040, 1);
    func_00209450(0x400080, 1);
    memset(D_005BCF80, 0, 0x2E0);
}

void func_002BFD90(void) {
    func_00215230(-1, -1);
    func_00214FD0();
    amTask_KillGroup(0x400, 0x20000, 0);
    memset(gWave, 0, 0xA0);
    D_0047011C[0x1BC / 4] &= -3;
    if (D_0047011C[0x1A4 / 4] != 0) {
        Obj_ResetF38(D_0047011C[0x1A4 / 4]);
        D_0047011C[0x1A4 / 4] = 0;
    }
    func_00209450(0x400010, 1);
    func_00209450(0x400020, 1);
    func_00209450(0x400008, 1);
    func_00243F20();
    func_002CA440();
    StrStatus_ReleaseBuffers();
}

void func_002BFE60(s32 a0) {
    if (a0 == 0 || D_0047011C[0x1C4 / 4] != 0) {
        return;
    }
    func_00215900();
    func_00244150();
    func_002BE320(a0);
    func_002BEB50();
    func_002CA4A0();
    D_0047011C[0x1C4 / 4] = 1;
    D_0047011C[0x1CC / 4] = a0;
}
extern s32 func_002BECB0(s32, s32);
#if 0
// func_002BFEE0: the switch matches (case order, beq chain, gp loads); the last 2 instructions differ: the original's `return 0` is `b` to the epilogue with the move in its delay slot, ours falls through; 6 variants tried
s32 func_002BFEE0(s32 a0, s32 a1, s32 a2) {
    s32 r;
    *(s16 *)((char *)D_0046FE44 + 0x100) = 1;
    switch (a2) {
    default:
        r = 0;
        break;
    case 1:
        if (D_0047011C[0x1C4 / 4] != 1 || D_0047011C[0x1D0 / 4] != 2) {
            func_002BECB0(a0, a1);
            D_0047011C[0x2D4 / 4] = amCdFs_ReadFileId(0xE82, 0, 1);
            r = D_0047011C[0x2D4 / 4];
            D_0047011C[0x1C4 / 4] = 0;
        }
        D_0047011C[0x1D0 / 4] = 1;
        return r;
    case 2:
        func_002BECB0(a0, a1);
        D_0047011C[0x2D4 / 4] = amCdFs_ReadFileId(0xE82, 0, 1);
        r = D_0047011C[0x2D4 / 4];
        D_0047011C[0x1D0 / 4] = 2;
        D_0047011C[0x1C4 / 4] = 0;
        return r;
    }
    return r;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BFEE0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BFFD0);
extern void func_00133B50(s32, s32);
extern void func_00133780(s32, s32);
extern void func_002BFFD0(void *, s32);
extern void func_002C02C0(s32 *);

extern void func_00133B50(s32, s32);
extern void func_00133780(s32, s32);
extern void func_002BFFD0(void *, s32);
extern void func_002C02C0(s32 *);

void func_002C0220(s32 *a0) {
    char *s0 = (char *)a0 + 0x30;
    if ((*(u16 *)((char *)a0 + 0x3A) & 1) == 0) {
        func_00133B50(0, 0);
    }
    if ((*(u16 *)(s0 + 0xA) & 2) != 0) {
        func_00133780(0, 1);
    }
    func_002BFFD0(s0, 0);
    func_00133780(0, 0);
    {
        s32 *p = (s32 *)s0;
        if (p[0x10 / 4] != p[0xC / 4]) {
            void *f = func_002C02C0;
            p[0x10 / 4] = p[0xC / 4];
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
}
void func_002C02C0(s32 *a0) {
    char *s0 = (char *)a0;
    s32 *q = (s32 *)(s0 + 0x30);
    f32 *p = (f32 *)(s0 + 0x30);
    void *f;
    if ((*(u16 *)(s0 + 0x3A) & 1) == 0) {
        func_00133B50(0, 0);
    }
    p[6] = p[6] - p[7];
    if (p[6] < 0.0f) {
        p[6] = 0.0f;
    }
    func_002BFFD0(q, 0);
    func_002BFFD0(q, 1);
    if (p[6] <= 0.0f) {
        p[6] = 1.0f;
        q[5] = q[4];
        if (q[3] == -1) {
            f = StrStatus_TaskComment;
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
            return;
        }
        f = func_002C0220;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
extern void func_002C02C0(s32 *);

extern void func_002C02C0(s32 *);

void StrStatus_TaskComment(s32 *a0) {
    s32 *a2 = a0 + 0x30 / 4;
    s32 a1 = a0[0x3C / 4];
    if (a1 != -1) {
        void *f = func_002C02C0;
        a2[0x10 / 4] = a1;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}

#if 0
// func_002C03E0: 7 of 35 instructions differ: the function address and the constant 2 swap registers (lui/li); six variants tried
void func_002C03E0(s32 *a0) {
    s32 *s0 = a0 + 0x30 / 4;
    s32 *p;
    *(s16 *)((char *)a0 + 0x38) = 1;
    p = (s32 *)a0[0x30 / 4];
    if (*(s16 *)((char *)p + 4) == 3) {
        s0[1] = p[0x54 / 4];
        ((s32 *)s0[0])[0x54 / 4] = 0;
        amCdFs_Close(s0[0], 0);
        s0[0] = 0;
        amFile_Load(s0[1]);
        *(s16 *)((char *)s0 + 8) = 2;
        {
            void *f = StrStatus_TaskComment;
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C03E0);
void Obj_CopyVec4F50(u8 *a0, void *a1) {
    u8 *p = a0 + 0x30;
    p += 0x20;
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(a1), "r"(p) : "memory");
}
void Obj_SetF3C(void *p, s16 v) {
    ((s32 *)p)[0xF] = v;
}
void *func_002C04A0(void) {
    return NULL;
}
void StrStatus_Exit(Task *p) {
    s32 *s0 = (s32 *)((char *)p + 0x30);
    if (s0[0] != 0) {
        amCdFs_Close(s0[0], 0);
    }
    if (s0[1] != 0) {
        amHeap_Free((void *)s0[1]);
    }
    amTask_Kill(p);
}
#if 0
// func_002C0510: the 16-byte copies (lq/sq) and the amTask_Create call match; the saved registers of the parameter a2 and the two pointers are permuted (ours a2 in s0, original s2); four orders tried
typedef struct StrCopy16S {
    s32 w[4];
} __attribute__((aligned(16))) StrCopy16S;
extern s32 D_00456310[4] __attribute__((aligned(16)));
extern s32 D_00456320[4] __attribute__((aligned(16)));
extern char D_0046EEC8[];
void *func_002C0510(s32 a0, s32 a1, s32 a2) {
    StrCopy16S b;
    StrCopy16S a;
    s32 *s0;
    Task *s1;
    b = *(StrCopy16S *)D_00456310;
    a = *(StrCopy16S *)D_00456320;
    s1 = (Task *)amTask_Create((void (*)(Task *))StrStatus_TaskComment, NULL, (s16)a1, 8, 2, D_0046EEC8);
    s0 = (s32 *)((char *)s1 + 0x30);
    memset(s0, 0, 0x40);
    if (a2 == 0) {
        *(StrCopy16S *)((char *)s0 + 0x20) = b;
        *(f32 *)((char *)s0 + 0x2C) = 1.0f;
        *(StrCopy16S *)((char *)s0 + 0x30) = a;
    }
    s0[1] = a0;
    *(s16 *)((char *)s0 + 0x8) = 2;
    *(f32 *)((char *)s0 + 0x18) = 1.0f;
    *(f32 *)((char *)s0 + 0x1C) = 1.0f;
    s0[3] = -1;
    s0[4] = -1;
    s0[5] = -1;
    return s1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0510);
#if 0
// func_002C0630: the same shape as func_002C0510 (two 16-byte copies, amTask_Create, memset); the parameter a2 is saved into a different saved register (ours s2 at the top, original s0 after the first copy); five orders tried
typedef struct StrCopy16S {
    s32 w[4];
} __attribute__((aligned(16))) StrCopy16S;
extern s32 D_004562F0[4] __attribute__((aligned(16)));
extern s32 D_00456300[4] __attribute__((aligned(16)));
extern void func_002C03E0(s32 *);
extern char D_0046EEC8[];
void *func_002C0630(s32 a0, s32 a1, s32 a2) {
    StrCopy16S b;
    StrCopy16S a;
    Task *s2;
    s32 *s1;
    s32 flag;
    b = *(StrCopy16S *)D_004562F0;
    flag = a2;
    a = *(StrCopy16S *)D_00456300;
    s2 = (Task *)amTask_Create((void (*)(Task *))func_002C03E0, NULL, (s16)a1, 8, 2, D_0046EEC8);
    s1 = (s32 *)((char *)s2 + 0x30);
    memset(s1, 0, 0x40);
    if (flag == 0) {
        *(StrCopy16S *)((char *)s1 + 0x20) = b;
        *(f32 *)((char *)s1 + 0x2C) = 1.0f;
        *(StrCopy16S *)((char *)s1 + 0x30) = a;
    }
    s1[0] = amCdFs_ReadFileId(a0, 0, 0);
    *(s16 *)((char *)s1 + 0x8) = 0;
    *(f32 *)((char *)s1 + 0x18) = 1.0f;
    *(f32 *)((char *)s1 + 0x1C) = 1.0f;
    s1[3] = -1;
    s1[4] = -1;
    s1[5] = -1;
    return s2;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0630);
#if 0
// func_002C0750: the byte-clear loop is unrolled or laid out differently and the table sits at another frame offset (the original keeps a0 in s1); six forms tried
void func_002C0750(char *a0) {
    char *s1;
    s32 i;
    s32 j;
    s32 k;
    s32 tbl[4];
    {
        char *p = (char *)tbl;
        if (p != 0) {
            s32 n = 16;
            do {
                *p = 0;
                p++;
                n--;
            } while (n > 0);
        }
    }
    tbl[0] = (s32)(a0 + 0xC);
    tbl[1] = (s32)(a0 + 0x10);
    tbl[2] = (s32)(a0 + 0x2C);
    tbl[3] = (s32)(a0 + 0x14);
    for (i = 0; i < 4; i++) {
        s32 *e = (s32 *)tbl[i];
        if (*e != 0) {
            func_0022D0E0(*e, 1);
        }
        *e = 0;
    }
    s1 = a0;
    for (k = 0; k < 8; k++) {
        char *s0 = s1;
        for (j = 0; j < 3; j++) {
            s32 *e = (s32 *)(s0 + 0x3C);
            if (*e != 0) {
                func_0022D0E0(*e, 1);
            }
            *e = 0;
            s0 += 4;
        }
        s1 += 0xC;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0750);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0860);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C0FC0);
typedef struct {
    u8 b[16];
} __attribute__((aligned(16))) StsCp16;
extern u8 D_00456380[];

#if 0
// differs: 0x1AC against 0x1C0 (five instructions short); the zero loop of the 9-pointer table compiles to bgtz, the original bnez; 1 form tried
void func_002C1160(s32 *a0) {
    s32 *ptr[9];
    s16 t[9] __attribute__((aligned(16)));
    s32 i;
    {
        u8 *q = (u8 *)ptr;
        s32 n = 0x24;
        if (q != 0) {
            do {
                *q = 0;
                q++;
                n--;
            } while (n != 0);
        }
    }
    ptr[0] = (s32 *)((u8 *)a0 + 0xC);
    ptr[1] = (s32 *)((u8 *)a0 + 0x10);
    ptr[2] = (s32 *)((u8 *)a0 + 0x14);
    ptr[3] = (s32 *)((u8 *)a0 + 0x18);
    ptr[4] = (s32 *)((u8 *)a0 + 0x1C);
    ptr[5] = (s32 *)((u8 *)a0 + 0x20);
    ptr[6] = (s32 *)((u8 *)a0 + 0x2C);
    ptr[7] = (s32 *)((u8 *)a0 + 0x28);
    ptr[8] = (s32 *)((u8 *)a0 + 0x30);
    *(StsCp16 *)t = *(StsCp16 *)D_00456380;
    t[8] = *(s16 *)(D_00456380 + 0x10);
    D_00470704 = a0[1];
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(a0[1], 0x2000);
    D_00470238 = 0;
    for (i = 0; i < 9; i++) {
        if (*ptr[i] != 0) {
            func_0022D0E0(*ptr[i], 1);
        }
        *ptr[i] = func_0022D670(((s32 *)*(s32 *)((u8 *)a0[0] + 0x1C))[t[i]], 0.0f);
    }
    if (a0[0xD] != 0) {
        func_0022D0E0(a0[0xD], 1);
        a0[0xD] = func_0022D670(((s32 *)*(s32 *)((u8 *)a0[0] + 0x1C))[0x20], 0.0f);
    }
    if (a0[0xE] != 0) {
        func_0022D0E0(a0[0xE], 1);
        a0[0xE] = func_0022D670(((s32 *)*(s32 *)((u8 *)a0[0] + 0x1C))[0x21], 0.0f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1160);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1320);
extern s32 func_0022D670(s32, f32);

extern s32 func_0022D670(s32, f32);

extern s32 func_0022D670(s32, f32);

#if 0
// func_002C15E0: the body matches the call sequence, but ours keeps two saved registers (frame 0x30, s0 and s1) where the original keeps one (frame 0x20); 3 forms tried (table local, parameter copy, direct parameter)
void func_002C15E0(s32 *a0) {
    D_00470704 = a0[1];
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(a0[1], 0x2000);
    D_00470238 = 0;
    if (a0[0x34 / 4] != 0) {
        func_0022D0E0(a0[0x34 / 4], 1);
    }
    if (*(u8 *)((char *)a0 + 0xAC) > 0) {
        a0[0x34 / 4] = func_0022D670(((s32 *)((s32 *)a0[0])[0x1C / 4])[0x68 / 4], 0.0f);
    } else {
        a0[0x34 / 4] = 0;
    }
    if (a0[0x38 / 4] != 0) {
        func_0022D0E0(a0[0x38 / 4], 1);
    }
    if (*(u8 *)((char *)a0 + 0xAC) < 7) {
        a0[0x38 / 4] = func_0022D670(((s32 *)((s32 *)a0[0])[0x1C / 4])[0x6C / 4], 0.0f);
    } else {
        a0[0x38 / 4] = 0;
    }
    if (a0[0x24 / 4] != 0) {
        func_0022D0E0(a0[0x24 / 4], 1);
    }
    a0[0x24 / 4] = func_0022D670(((s32 *)((s32 *)a0[0])[0x1C / 4])[*(u8 *)((char *)a0 + 0xAC) + 0x12], 0.0f);
    if (a0[0x28 / 4] != 0) {
        func_0022D0E0(a0[0x28 / 4], 1);
    }
    a0[0x28 / 4] = func_0022D670(((s32 *)((s32 *)a0[0])[0x1C / 4])[0xB8 / 4], 0.0f);
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C15E0);
extern s32 func_0022D670(s32, f32);

#if 0
// func_002C1720: the parameter is copied to a saved register first in the original (move s0,a0); ours uses a0 directly, 74 of 80 differ; 1 form tried
void func_002C1720(s32 *a0) {
    u8 *b = (u8 *)a0;
    s32 *s0 = a0;
    D_00470704 = s0[1];
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(s0[1], 0x2000);
    D_00470238 = 0;
    if (s0[0x24 / 4] != 0) {
        func_0022D0E0(s0[0x24 / 4], 1);
    }
    s0[0x24 / 4] = func_0022D670(((s32 *)((s32 *)s0[0])[0x1C / 4])[b[0xAB] + 0x2A], 0.0f);
    if (s0[0x28 / 4] != 0) {
        func_0022D0E0(s0[0x28 / 4], 1);
        s0[0x28 / 4] = 0;
    }
    if (s0[0x34 / 4] != 0) {
        func_0022D0E0(s0[0x34 / 4], 1);
    }
    if (b[0xAB] != 0) {
        s0[0x34 / 4] = func_0022D670(((s32 *)((s32 *)s0[0])[0x1C / 4])[0x68 / 4], 0.0f);
    } else {
        s0[0x34 / 4] = 0;
    }
    if (s0[0x38 / 4] != 0) {
        func_0022D0E0(s0[0x38 / 4], 1);
    }
    if (b[0xAB] < b[0xAD] || b[0xAB] < 2) {
        s0[0x38 / 4] = func_0022D670(((s32 *)((s32 *)s0[0])[0x1C / 4])[0x6C / 4], 0.0f);
    } else {
        s0[0x38 / 4] = 0;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1720);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1860);

void VsCharaselEd_TaskMain(Task *task) {
    A2d_FlushList(task);
}
// func_002C1A00: the model pointer is a local in each amModel block (the original loads it into the argument register once).
void func_002C1A00(s32 *a0) {
    s32 *s1;
    s32 *s0;

    s1 = (s32 *)a0[0xC];
    {
        s32 m = s1[1];
        D_00470704 = m;
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent(m, 0x2000);
    }
    D_00470238 = 0;
    {
        s32 m = s1[1];
        D_00470704 = m;
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent(m, 0x2000);
    }
    D_00470238 = 0;
    s0 = (s32 *)s1[2];
    if (s0 != 0) {
        func_0022C060((s32)s0, 1.0f);
        func_0022CD00((s32)s0);
    }
    func_002C0860(s1);
    A2d_FlushList();
    func_00133B50(0, 0);
}
extern s32 func_0027DAB0(s32);
extern void func_0027E120(s32);
extern char D_005C4140[];
extern void func_00304DC0(s32, s32);
extern void Scene_Request(s32, s32);
extern void Scene_FadeTo(s32, s32);
extern void func_002C1A00(s32 *);

void StrStatus_TaskRequestScene(s32 *a0) {
    s32 *s0 = (s32 *)a0[0x30 / 4];
    s32 *s2;
    s32 r;
    void *f;
    s32 v;
    v = s0[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    v = s0[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    s2 = (s32 *)s0[0x8 / 4];
    if (s2 != 0) {
        func_0022C060((s32)s2, 1.0f);
        func_0022CD00((s32)s2);
    }
    func_002C0860(s0);
    A2d_FlushList();
    func_00133B50(0, 0);
    r = func_0027DAB0(s0[0xA0 / 4]);
    if ((s8)r >= 7) {
        func_0027E120(s0[0xA0 / 4]);
        s0[0xA0 / 4] = 0;
        D_005C4140[0] = *(u8 *)((char *)s0 + 0xAC);
        func_00304DC0((s32)D_005C4140, *(u8 *)((char *)s0 + 0xAB));
        Scene_Request(0x11, 0xFF);
        Scene_FadeTo(0xA, 0);
        f = (void *)func_002C1A00;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
extern s32 func_0027E2D0(s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_002C2470(Task *);

#if 0
// func_002C1BC0: 1 instruction differs: the table byte address is added as v0+s0 in the original (addu v0,v0,s0); three operand orders tried
void func_002C1BC0(s32 *a0) {
    s32 *s0 = (s32 *)a0[0x30 / 4];
    s32 r;
    void *f;
    s32 bt;
    s32 bb;
    s32 nv;
    s32 s0v;
    s32 s2;
    s0v = s0[0x4 / 4];
    D_00470704 = s0v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(s0v, 0x2000);
    D_00470238 = 0;
    s0v = s0[0x4 / 4];
    D_00470704 = s0v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(s0v, 0x2000);
    D_00470238 = 0;
    s2 = s0[0x8 / 4];
    if (s2 != 0) {
        func_0022C060((s32)s2, 1.0f);
        func_0022CD00((s32)s2);
    }
    func_002C0860(s0);
    A2d_FlushList();
    func_00133B50(0, 0);
    r = func_0027DAB0(s0[0xA0 / 4]);
    if ((s8)r >= 7) {
        func_0027E120(s0[0xA0 / 4]);
        s0[0xA0 / 4] = 0;
        bb = *(u8 *)((char *)s0 + 0xB2);
        bt = *(u8 *)(2 * bb + (char *)s0 + 0xB4);
        nv = (bb + 1) & 0xFF;
        s0[0xA0 / 4] = func_0027E2D0(3, 6, nv, (s8)bb, bt, 0, 0, 3);
        *(s32 *)((char *)s0 + 0xC4) = 0x42700000;
        f = (void *)func_002C2470;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1BC0);
extern s32 func_0027DAB0(s32);
extern void func_0027E120(s32);
extern void func_002C0750(s32 *);
extern void func_002C1320(s32 *);
extern void func_002C2FF0(s32 *);
extern void func_002C0860(s32 *);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);

extern s32 func_0027DAB0(s32);
extern void func_0027E120(s32);
extern void func_002C0750(s32 *);
extern void func_002C1320(s32 *);
extern void func_002C2FF0(s32 *);
extern void func_002C0860(s32 *);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);

extern s32 func_0027DAB0(s32);
extern void func_0027E120(s32);
extern void func_002C0750(s32 *);
extern void func_002C1320(s32 *);
extern void func_002C2FF0(s32 *);
extern void func_002C0860(s32 *);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);

extern s32 func_0027DAB0(s32);
extern void func_0027E120(s32);
extern void func_002C0750(s32 *);
extern void func_002C1320(s32 *);
extern void func_002C2FF0(s32 *);
extern void func_002C0860(s32 *);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);

void func_002C1CF0(s32 *a0) {
    s32 *s0 = (s32 *)a0[0x30 / 4];
    s32 s2;
    s32 v;
    s32 r;
    void *f;
    v = s0[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    v = s0[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    s2 = s0[0x8 / 4];
    if (s2 != 0) {
        func_0022C060(s2, 1.0f);
        func_0022CD00(s2);
    }
    func_002C0860(s0);
    A2d_FlushList();
    func_00133B50(0, 0);
    r = func_0027DAB0(s0[0xA0 / 4]);
    if ((s8)r >= 7) {
        func_0027E120(s0[0xA0 / 4]);
        s0[0xA0 / 4] = 0;
        *(u8 *)((char *)s0 + 0xAC) = *(u8 *)((char *)s0 + 0xAC) - 1;
        *(s32 *)((char *)s0 + 0xC4) = 0x41F00000;
        *(u8 *)((char *)s0 + 0xAF) = 5;
        func_002C0750(s0);
        func_002C1320(s0);
        f = (void *)func_002C2FF0;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
extern s32 func_0027E2D0(s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_002C2470(Task *);

extern s32 func_0027E2D0(s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_002C2470(Task *);

#if 0
// func_002C1E10: the saved registers: ours keeps the parameter and the sub-object in s2/s1 and needs an extra s3 (frame 0x50 against 0x40); the tail (table byte, call with 8 arguments, float and pointer) matches in shape; 2 forms tried
void func_002C1E10(s32 *a0) {
    s32 *s0 = (s32 *)a0[0x30 / 4];
    s32 r;
    void *f;
    s32 bt;
    s32 bb;
    s32 nv;
    s32 s0v;
    s32 *q;
    s32 s2;
    s0v = s0[0x4 / 4];
    D_00470704 = s0v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(s0v, 0x2000);
    D_00470238 = 0;
    s0v = s0[0x4 / 4];
    D_00470704 = s0v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(s0v, 0x2000);
    D_00470238 = 0;
    s2 = s0[0x8 / 4];
    if (s2 != 0) {
        func_0022C060((s32)s2, 1.0f);
        func_0022CD00((s32)s2);
    }
    func_002C0860(s0);
    A2d_FlushList();
    func_00133B50(0, 0);
    r = func_0027DAB0(s0[0xA0 / 4]);
    if ((s8)r >= 7) {
        func_0027E120(s0[0xA0 / 4]);
        s0[0xA0 / 4] = 0;
        *(u8 *)((char *)s0 + 0xB2) = (u8)(*(u8 *)((char *)s0 + 0xB2) - 1);
        bb = *(u8 *)((char *)s0 + 0xB2);
        q = (s32 *)((char *)s0 + bb * 12 + 0x44);
        if (q[0] != 0) {
            func_0022D0E0(q[0], 1);
            q[0] = 0;
        }
        bb = *(u8 *)((char *)s0 + 0xB2);
        bt = *(u8 *)(2 * bb + (char *)s0 + 0xB4);
        nv = (bb + 1) & 0xFF;
        s0[0xA0 / 4] = func_0027E2D0(3, 6, nv, (s8)bb, bt, 0, 0, 3);
        *(u8 *)((char *)s0 + 0xAF) = 0xB;
        *(s32 *)((char *)s0 + 0xC4) = 0x42700000;
        f = (void *)func_002C2470;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1E10);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1F90);
#if 0
// func_002C2470: 7 of 58 differ: the tail (the 0xB byte and the function pointer) takes a0 and v1 the other way round; pointer as void*, s32, direct store tried
extern f32 gFrameDelta;
extern void func_002C1F90(void);

void func_002C2470(s32 *a0) {
    s32 *s1 = (s32 *)a0[0x30 / 4];
    s32 *s0;
    s32 v;
    void *f;
    v = s1[1];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    v = s1[1];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    s0 = (s32 *)s1[2];
    if (s0 != 0) {
        func_0022C060((s32)s0, 1.0f);
        func_0022CD00((s32)s0);
    }
    func_002C0860(s1);
    A2d_FlushList();
    func_00133B50(0, 0);
    *(f32 *)((char *)s1 + 0xC4) = *(f32 *)((char *)s1 + 0xC4) - gFrameDelta;
    if (*(f32 *)((char *)s1 + 0xC4) <= 0.0f) {
        *(u8 *)((char *)s1 + 0xAF) = 0xB;
        f = (void *)func_002C1F90;
        a0[7] = (s32)((f == 0) ? 0 : f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C2470);

INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C2560);
extern void func_002C2560(void);

#if 0
// func_002C27B0: the tail (pointer, byte, float) and the sub-object: the original has a 0x40 frame (s0-s2), ours 0x50 (an extra saved register); 8 variants tried
void func_002C27B0(s32 *a0) {
    s32 *s0 = (s32 *)a0[0x30 / 4];
    s32 *s2;
    void *f;
    s32 v;
    v = s0[1];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    v = s0[1];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    s2 = (s32 *)s0[2];
    if (s2 != 0) {
        func_0022C060((s32)s2, 1.0f);
        func_0022CD00((s32)s2);
    }
    func_002C0860(s0);
    A2d_FlushList();
    func_00133B50(0, 0);
    SeReady_Start();
    *(u8 *)((char *)s0 + 0xAC) = *(u8 *)((char *)s0 + 0xAC) + 1;
    *(s32 *)((char *)s0 + 0xC4) = 0x41F00000;
    *(u8 *)((char *)s0 + 0xAF) = 9;
    a0[7] = (s32)((f == 0) ? 0 : f);
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C27B0);


extern void func_002C1720(s32 *);
extern void func_002C3A10(s32 *);
extern f32 gFrameDelta;

extern void func_002C1720(s32 *);
extern void func_002C3A10(s32 *);
extern f32 gFrameDelta;

void func_002C28A0(s32 *a0) {
    s32 *s2 = (s32 *)a0[0x30 / 4];
    s32 *s1;
    void *f;
    f32 t;
    s32 v;
    v = s2[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    v = s2[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    s1 = (s32 *)s2[0x8 / 4];
    if (s1 != 0) {
        func_0022C060((s32)s1, 1.0f);
        func_0022CD00((s32)s1);
    }
    func_002C0860(s2);
    A2d_FlushList();
    func_00133B50(0, 0);
    t = *(f32 *)&s2[0xC4 / 4] - gFrameDelta;
    *(f32 *)&s2[0xC4 / 4] = t;
    if (t <= 0.0f) {
        *(s32 *)&s2[0xC4 / 4] = 0x41F00000;
        *(u8 *)((char *)s2 + 0xAF) = 4;
        func_002C1720(s2);
        f = (void *)func_002C3A10;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C29A0);
extern s32 amAdx_PlayAfs(s32, s32, s32);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void Obj_SetF3C(void *, s16);
extern void func_002C29A0(void);
extern f32 D_004E0618[];
extern f32 gFrameDelta;

#if 0
// func_002C2FF0: the pointer and the 6 of the flag take a0 and v1 the other way round (as func_002C2470); 4 tail orders tried
void func_002C2FF0(s32 *a0) {
    s32 *s2 = (s32 *)a0[0x30 / 4];
    s32 *s1;
    void *f;
    f32 t;
    s32 v;
    v = s2[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    v = s2[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    s1 = (s32 *)s2[0x8 / 4];
    if (s1 != 0) {
        func_0022C060((s32)s1, 1.0f);
        func_0022CD00((s32)s1);
    }
    func_002C0860(s2);
    A2d_FlushList();
    func_00133B50(0, 0);
    t = *(f32 *)&s2[0xC4 / 4] - gFrameDelta;
    *(f32 *)&s2[0xC4 / 4] = t;
    if (t <= 0.0f) {
        v = amAdx_PlayAfs(1, 0x2119D, 0);
        s2[0xC8 / 4] = v;
        amAdx_SetVolume(s2[0xC8 / 4], D_004E0618[0]);
        amAdx_Pause(s2[0xC8 / 4], 0);
        Obj_SetF3C((void *)s2[0x9C / 4], 4);
        f = (void *)func_002C29A0;
        *(u8 *)((char *)s2 + 0xAF) = 6;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C2FF0);
extern void func_002C15E0(s32 *);
extern void func_002C2FF0(s32 *);
extern f32 gFrameDelta;

void func_002C3120(s32 *a0) {
    s32 *s2 = (s32 *)a0[0x30 / 4];
    s32 *s1;
    void *f;
    f32 t;
    s32 v;
    v = s2[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    v = s2[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    s1 = (s32 *)s2[0x8 / 4];
    if (s1 != 0) {
        func_0022C060((s32)s1, 1.0f);
        func_0022CD00((s32)s1);
    }
    func_002C0860(s2);
    A2d_FlushList();
    func_00133B50(0, 0);
    t = *(f32 *)&s2[0xC4 / 4] - gFrameDelta;
    *(f32 *)&s2[0xC4 / 4] = t;
    if (t <= 0.0f) {
        *(s32 *)&s2[0xC4 / 4] = 0x41F00000;
        *(u8 *)((char *)s2 + 0xAF) = 5;
        func_002C15E0(s2);
        f = (void *)func_002C2FF0;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
void func_002C3220(s32 *a0) {
    s32 *s1;
    s32 *s0;

    s1 = (s32 *)a0[0xC];
    {
        s32 m = s1[1];
        D_00470704 = m;
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent(m, 0x2000);
    }
    D_00470238 = 0;
    {
        s32 m = s1[1];
        D_00470704 = m;
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent(m, 0x2000);
    }
    D_00470238 = 0;
    s0 = (s32 *)s1[2];
    if (s0 != 0) {
        func_0022C060((s32)s0, 1.0f);
        func_0022CD00((s32)s0);
    }
    func_002C0860(s1);
    A2d_FlushList();
    func_00133B50(0, 0);
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C32C0);
extern void func_002C32C0(void);
void func_002C3A10(s32 *a0) {
    s32 *s2 = (s32 *)a0[0x30 / 4];
    s32 *s1;
    void *f;
    f32 t;
    s32 v;
    v = s2[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    v = s2[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x2000);
    D_00470238 = 0;
    s1 = (s32 *)s2[0x8 / 4];
    if (s1 != 0) {
        func_0022C060((s32)s1, 1.0f);
        func_0022CD00((s32)s1);
    }
    func_002C0860(s2);
    A2d_FlushList();
    func_00133B50(0, 0);
    t = *(f32 *)&s2[0xC4 / 4] - gFrameDelta;
    *(f32 *)&s2[0xC4 / 4] = t;
    if (t <= 0.0f) {
        s2[0xC8 / 4] = amAdx_PlayAfs(1, 0x21123, 0);
        amAdx_SetVolume(s2[0xC8 / 4], D_004E0618[0]);
        amAdx_Pause(s2[0xC8 / 4], 0);
        *(u8 *)((char *)s2 + 0xAF) = 1;
        Obj_SetF3C((void *)s2[0x9C / 4], *(u8 *)((char *)s2 + 0xAE));
        f = (void *)func_002C32C0;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3B40);
extern void func_0022E0B0(s32);
extern void Fade_Request(s32, s32, s32);
extern void func_002C1860(s32 *);
extern void func_002C3B40(void);
extern s32 func_0022D670(s32, f32);

extern void func_0022E0B0(s32);
extern void Fade_Request(s32, s32, s32);
extern void func_002C1860(s32 *);
extern void func_002C3B40(void);
extern s32 func_0022D670(s32, f32);

#if 0
// func_002C3D20: 7 of 66 differ: the function pointer and the 0x41F00000 store take v1/a0 the other way round (same as func_002C2470); 3 tail orders tried
void func_002C3D20(s32 *a0) {
    s32 *s1 = (s32 *)a0[0x30 / 4];
    s32 *s0 = (s32 *)gTourMode;
    void *f;
    s32 v;
    if (*(s16 *)((char *)((s32 *)s0[1]) + 4) == 3) {
        s1[0] = ((s32 *)s0[0])[0x54 / 4];
        ((s32 *)s0[0])[0x54 / 4] = 0;
        amCdFs_Close(s0[0], 0);
        s1[1] = ((s32 *)s0[1])[0x54 / 4];
        ((s32 *)s0[1])[0x54 / 4] = 0;
        amCdFs_Close(s0[1], 0);
        func_0022E0B0(s1[0]);
        amFile_Load(s1[1]);
        Fade_Request(-1, 0, 0);
        v = s1[1];
        D_00470704 = v;
        D_0047070C = 0x2000;
        D_00470708 = 0;
        amModel_SetCurrent(v, 0x2000);
        D_00470238 = 0;
        s1[2] = func_0022D670(((s32 *)((s32 *)s1[0])[0x1C / 4])[0], 0.0f);
        func_002C1860(s1);
        *(s32 *)((char *)s1 + 0xC4) = 0x41F00000;
        f = (void *)func_002C3B40;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3D20);

void StrStatus_ClearTourMode(void) {
    gTourMode = NULL;
}
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3E40);

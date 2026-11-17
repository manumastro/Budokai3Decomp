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
extern void func_00145CC0(s32, s32);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);
extern void func_002C0860(s32 *);
extern void func_002BDF50(void *, void *);
extern void func_00209530(s32);
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
extern void func_002BEA30(void);
extern void func_00215900(void);
extern void func_00244150(void);
extern void func_002BE320(s32);
extern void func_002BEB50(void);
extern void func_002CA4A0(void);
extern void func_002C03B0(s32 *);
extern void func_0022C700();
extern TourModeGlobal *gTourMode;
extern char D_0046EE10[];
extern void (*D_0046EE30[])(void *);
extern void func_0028EB40(Task *, s32, void (*)(Task *), s32);
extern void func_002BD140(Task *);
extern void amCdFs_Close(s32, s32);
extern void amFile_Load(s32);

INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BD140);
void StrStatus_TaskMain(Task *t) {
    if (((s16 *)D_00470910->f4)[2] == 3) {
        if (D_00470910->f284 != 0) {
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
    out->b00 = D_00470910->f288[0];
    out->b01 = D_00470910->f288[1];
    out->b02 = D_00470910->f288[2];
    out->b03 = D_00470910->f288[3];
    out->b04 = D_00470910->f288[4];
    out->w0C = D_00470910->f2D4;
    out->w10 = 0;
    out->b05 = D_00470910->f288[5];
    out->b06 = D_00470910->f288[6];
    out->b07 = D_00470910->f288[7];
    out->b08 = D_00470910->f288[8];
    out->b09 = D_00470910->f288[9];
    out->b0A = D_00470910->f288[10];
    out->b0B = D_00470910->f288[11];
    out->w18 = D_00470910->f2DC[0];
    out->w1C = D_00470910->f2DC[1];
    out->w20 = D_00470910->f2DC[2];
    out->w24 = D_00470910->f2DC[3];
    out->w28 = D_00470910->f2DC[4];
    out->w2C = D_00470910->f2DC[5];
    out->w30 = D_00470910->f2DC[6];
}
void StrStatus_ClearWork(void) {
    D_00470910 = NULL;
}
extern void Character_Release(s32);
extern void func_0029E450(s32);
extern void Help_Exit(void);
extern void func_002F54C0(void);

extern void Character_Release(s32);
extern void func_0029E450(s32);
extern void Help_Exit(void);
extern void func_002F54C0(void);

void func_002BD510(void) {
    s32 i;
    if (D_00470910 != 0) {
        for (i = 0; i < 0x45; i++) {
            if (((s32 *)D_00470910)[0xE + i] != 0) {
                amTask_Kill((Task *)((s32 *)D_00470910)[0xE + i]);
            }
        }
        for (i = 0; i < 7; i++) {
            if (((s32 *)D_00470910)[i] != 0) {
                amCdFs_Close(((s32 *)D_00470910)[i], 0);
            }
            if (((s32 *)D_00470910)[7 + i] != 0) {
                amCdFs_ReleaseCache(((s32 *)D_00470910)[7 + i]);
            }
        }
        for (i = 0; i < 0x3C; i++) {
            if (((s32 *)D_00470910)[0x5A + i] != 0) {
                func_0022D0E0(((s32 *)D_00470910)[0x5A + i], 1);
            }
        }
        if (((s32 *)D_00470910)[0x96] != 0) {
            Character_Release(((s32 *)D_00470910)[0x96]);
        }
        if (((s32 *)D_00470910)[0x97] != 0) {
            func_0029E450(((s32 *)D_00470910)[0x97]);
        }
        Help_Exit();
        func_002F54C0();
        amHeap_Free((void *)D_00470910);
        D_00470910 = 0;
    }
}
void StrStatus_Start(s32 a, s32 b) {
    D_00470910->f274 = a;
    D_00470910->f278 = b;
    D_00470910->f38 = amTask_Create(StrStatus_TaskMain, NULL, a, 2, b, D_0046EE10);
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
    func_00145CC0(s0[0x1A0 / 4], 0x3003000);
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
            func_00145CC0(g[0xD0 / 4], g[0xD8 / 4]);
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
            func_00209530(D_0047011C[0x1B4 / 4]);
            D_0047011C[0x1B4 / 4] = 0;
        }
        *(s16 *)((char *)a0 + 0x2A) = 0xE;
        *(s16 *)((char *)a0 + 0x2C) = 0;
        a0[0x24 / 4] = 0x400010;
        func_002BDF50((void *)((char *)D_0047011C + 0x1B4), a0);
        break;
    case 1:
        if (D_0047011C[0x1B4 / 4] != 0) {
            func_00209530(D_0047011C[0x1B4 / 4]);
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
void func_002BEA30(void) {
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
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BEB50);
extern s16 D_0046EE50[];
extern s32 *D_0046FE48;
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 func_00243E50(s32, s32);

extern s16 D_0046EE50[];
extern s32 *D_0046FE48;
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 func_00243E50(s32, s32);

#if 0
// func_002BECB0: the layout of the table test (the then-block after a branch to the join) differs; three forms tried
s32 func_002BECB0(s32 a0, s32 a1) {
    s32 s1 = D_0046EE50[a0];
    s32 s0 = a1;
    s32 *s2;
    s32 r;
    if (s1 != 7) {
        ;
    } else {
        if (a1 == 3) {
            s0 = 4;
        }
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
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BECB0);
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
        func_00209530(D_0047011C[0x1A4 / 4]);
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
            func_00209530(*(s32 *)((char *)D_0047011C + off + 0x160));
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
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF3B0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF520);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF610);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002BF850);
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
        func_00209530(D_0047011C[0x1A4 / 4]);
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
        func_00209530(D_0047011C[0x1A4 / 4]);
        D_0047011C[0x1A4 / 4] = 0;
    }
    func_00209450(0x400010, 1);
    func_00209450(0x400020, 1);
    func_00209450(0x400008, 1);
    func_00243F20();
    func_002CA440();
    func_002BEA30();
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
            f = func_002C03B0;
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
            return;
        }
        f = func_002C0220;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
extern void func_002C02C0(s32 *);

extern void func_002C02C0(s32 *);

void func_002C03B0(s32 *a0) {
    s32 *a2 = a0 + 0x30 / 4;
    s32 a1 = a0[0x3C / 4];
    if (a1 != -1) {
        void *f = func_002C02C0;
        a2[0x10 / 4] = a1;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}

#if 0
// func_002C03E0: all but the last two registers agree; the function address and the constant 2 swap registers; four variants tried
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
        {
            void *f = func_002C03B0;
            *(s16 *)((char *)s0 + 8) = 2;
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C03E0);
void func_002C0470(u8 *a0, void *a1) {
    u8 *p = a0 + 0x30;
    p += 0x20;
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(a1), "r"(p) : "memory");
}
void func_002C0490(void *p, s16 v) {
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
    s1 = (Task *)amTask_Create((void (*)(Task *))func_002C03B0, NULL, (s16)a1, 8, 2, D_0046EEC8);
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
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1160);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1320);
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
    func_00145CC0(s0[1], 0x2000);
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
    func_0022C700(task);
}
// func_002C1A00: the loads of the work block and the order of the two calls differ; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1A00);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1AA0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C1BC0);
extern s32 func_0027DAB0(s32);
extern void func_0027E120(s32);
extern void func_002C0750(s32 *);
extern void func_002C1320(s32 *);
extern void func_002C2FF0(void);
extern void func_002C0860(s32 *);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);

extern s32 func_0027DAB0(s32);
extern void func_0027E120(s32);
extern void func_002C0750(s32 *);
extern void func_002C1320(s32 *);
extern void func_002C2FF0(void);
extern void func_002C0860(s32 *);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);

extern s32 func_0027DAB0(s32);
extern void func_0027E120(s32);
extern void func_002C0750(s32 *);
extern void func_002C1320(s32 *);
extern void func_002C2FF0(void);
extern void func_002C0860(s32 *);
extern void func_0022C060(s32, f32);
extern void func_0022CD00(s32);

extern s32 func_0027DAB0(s32);
extern void func_0027E120(s32);
extern void func_002C0750(s32 *);
extern void func_002C1320(s32 *);
extern void func_002C2FF0(void);
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
    func_00145CC0(v, 0x2000);
    D_00470238 = 0;
    v = s0[0x4 / 4];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    func_00145CC0(v, 0x2000);
    D_00470238 = 0;
    s2 = s0[0x8 / 4];
    if (s2 != 0) {
        func_0022C060(s2, 1.0f);
        func_0022CD00(s2);
    }
    func_002C0860(s0);
    func_0022C700();
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
    func_00145CC0(v, 0x2000);
    D_00470238 = 0;
    v = s1[1];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    func_00145CC0(v, 0x2000);
    D_00470238 = 0;
    s0 = (s32 *)s1[2];
    if (s0 != 0) {
        func_0022C060((s32)s0, 1.0f);
        func_0022CD00((s32)s0);
    }
    func_002C0860(s1);
    func_0022C700();
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
#if 0
// func_002C27B0: the calls and globals match; the tail (func pointer, byte at 0xAC and float at 0xC4) takes the other registers (v1 vs a2) in ours, 12 of 57 instructions differ; 7 variants tried
extern void func_002C2560(void);

void func_002C27B0(s32 *a0) {
    s32 *s0 = (s32 *)a0[0x30 / 4];
    s32 *s2;
    void *f;
    s32 v;
    v = s0[1];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    func_00145CC0(v, 0x2000);
    D_00470238 = 0;
    v = s0[1];
    D_00470704 = v;
    D_0047070C = 0x2000;
    D_00470708 = 0;
    func_00145CC0(v, 0x2000);
    D_00470238 = 0;
    s2 = (s32 *)s0[2];
    if (s2 != 0) {
        func_0022C060((s32)s2, 1.0f);
        func_0022CD00((s32)s2);
    }
    func_002C0860(s0);
    func_0022C700();
    func_00133B50(0, 0);
    func_003105B0();
    f = (void *)func_002C2560;
    *(u8 *)((char *)s0 + 0xAC) = *(u8 *)((char *)s0 + 0xAC) + 1;
    *(s32 *)((char *)s0 + 0xC4) = 0x41F00000;
    *(u8 *)((char *)s0 + 0xAF) = 9;
    a0[7] = (s32)((f == 0) ? 0 : f);
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C27B0);

INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C28A0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C29A0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C2FF0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3120);
// func_002C3220: the same shape as func_002C1A00; not matched yet.
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3220);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C32C0);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3A10);
INCLUDE_ASM("asm/nonmatchings/story/str_status", func_002C3B40);
extern void func_0022E0B0(s32);
extern void func_00264260(s32, s32, s32);
extern void func_002C1860(s32 *);
extern void func_002C3B40(void);
extern s32 func_0022D670(s32, f32);

extern void func_0022E0B0(s32);
extern void func_00264260(s32, s32, s32);
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
        func_00264260(-1, 0, 0);
        v = s1[1];
        D_00470704 = v;
        D_0047070C = 0x2000;
        D_00470708 = 0;
        func_00145CC0(v, 0x2000);
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

#include "common.h"
#include "menu/menu.h"

extern void func_002A0700(s32, s32, f32 *);
extern void func_002A07A0(s32, s32, f32 *);
extern void func_002A0CE0(s32, s32, f32 *);

INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1510);
extern s32 *gEvtWork;
extern u64 D_004700D8;
extern s8 D_004B4B63[];
extern char D_004E77C4[];
extern s8 D_00511450[];
extern char D_00492FCE[];
extern void amCdFs_Close(s32, s32);
extern void Scr_SetData(s32, s32);
extern void func_002A6210(void);
extern void Zenie_Update(void *);
extern void Zenie_Draw(void);
extern void Zenie_Close(s32);
extern s32 func_002A1020(s32);

#if 0
// func_002A1640: the original loads the global into a saved register in the delay slot of amTask_Kill (lw s0); ours loads it into v0 after the call; four forms tried
void func_002A1640(void *a0) {
    void *p = a0;
    Zenie_Update(p);
    Zenie_Draw();
    if (func_002A1020(5) == 0) {
        amTask_Kill(p);
        gEvtWork[0x40 / 4] = 0;
        Zenie_Close(0);
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1640);
extern void func_002A1640(void *);
extern void Zenie_SetF18(s32);
extern void Zenie_SetStep(s32);

void EvtZenie_TaskMain(s32 *a0) {
    void *f;
    Zenie_Update(a0);
    Zenie_Draw();
    if (func_002A1020(4) == 0) {
        f = func_002A1640;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        Zenie_SetF18(0);
        Zenie_SetStep(0x98967F);
    }
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1700);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A17D0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A18A0);
extern void func_002A18A0(void);

void func_002A1980(s32 *a0) {
    s32 *g = gEvtWork;
    if (g[0x64 / 4] == 1) {
        void *f = func_002A18A0;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A19B0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1B30);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1C20);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1DB0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A1F30);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2020);
extern void func_002A2020();

void func_002A21E0(void) {
    func_002A2020();
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A21F0);
extern void func_002A5B00(void);
extern void func_0029A9F0(void);

void func_002A22C0(void) {
    s32 *s0 = gEvtWork;
    if (s0[2] != 0) {
        func_002A5B00();
    }
    if (s0[0x124 / 4] >= 0) {
        func_0029A9F0();
    }
}
extern void func_00264300(s32, void *, s32);
extern void func_002A22C0(void);

void *func_002A2310(void) {
    func_00264300(10, func_002A22C0, 0);
    return NULL;
}
void *func_002A2340(void) {
    return NULL;
}
#if 0
// func_002A2350: the 64-bit local is copied through a pointer and the table index load comes after the args load in the original; ours keeps the index load early; five forms tried
s32 func_002A2350(void *a0, char *a1) {
    u64 bits;
    u64 *pb = &bits;
    u32 *w;
    s32 *args;
    u16 row;
    *pb = D_004700D8;
    w = (u32 *)pb;
    args = *(s32 **)(a1 + 0x2C);
    row = *(u16 *)(D_00492FCE + D_004B4B63[0] * 0xB8);
    if ((row & w[args[0]]) != 0) {
        *(s32 *)a1 = 1;
    } else {
        *(s32 *)a1 = 0;
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2350);
extern void func_002987E0(s32, s32);
extern void func_001F07D0(void);

s32 func_002A23D0(void) {
    s8 *e = (s8 *)(D_004E77C4 + D_00511450[0] * 4624);
    if ((*e & 0x7F) == 0x7F) {
        func_002987E0(1, 0);
    } else {
        func_002987E0(2, 0);
    }
    func_001F07D0();
    e = (s8 *)(D_004E77C4 + D_00511450[0] * 4624);
    *e = 0;
    return 1;
}
s32 func_002A2480(void) {
    return 3;
}
extern s32 func_002A2480(void);

s32 func_002A2490(void *p) {
    *(void **)((char *)p + 0x10) = func_002A2480;
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A24B0);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern s32 D_005AB8A0[];
extern s32 D_005AB8A4[];
extern s32 D_005AB8A8[];
extern s32 D_005AB8AC[];
extern s32 D_005AB8B0[];
extern void func_002A24B0(s32 *, s32);

void func_002A2670(s32 *a0, s32 a1) {
    D_005AB8A0[0] = amCdFs_ReadFileId(0x609, 0, 1);
    D_005AB8A4[0] = amCdFs_ReadFileId(0x60A, 0, 1);
    D_005AB8A8[0] = amCdFs_ReadFileId(0x608, 0, 1);
    D_005AB8AC[0] = amCdFs_ReadFileId(0x606, 0, 1);
    D_005AB8B0[0] = amCdFs_ReadFileId(0x607, 0, 1);
    a0[0x10 / 4] = (s32)func_002A24B0;
    func_002A24B0(a0, a1);
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2730);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2890);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2AA0);
extern s32 func_0029E7F0(s32);
extern void func_0029E610(s32);
extern void func_0029E120(s32, s32, s32, f32, f32);
extern s32 D_005AB7F0;

extern s32 func_0029E7F0(s32);
extern void func_0029E610(s32);
extern void func_0029E120(s32, s32, s32, f32, f32);
extern s32 D_005AB7F0;

extern s32 func_0029E7F0(s32);
extern void func_0029E610(s32);
extern void func_0029E120(s32, s32, s32, f32, f32);
extern s32 D_005AB7F0;

extern s32 func_0029E7F0(s32);
extern void func_0029E610(s32);
extern void func_0029E120(s32, s32, s32, f32, f32);
extern s32 D_005AB7F0;

#if 0
// func_002A2BB0: the range test is laid out with the other register and branch sense; three forms tried
s32 func_002A2BB0(s32 *a0) {
    s32 s1 = D_00511450[0];
    s32 s0;
    if (s1 < 0x16) {
        ;
    } else {
        if (s1 < 0x1A) {
            s1 += 5;
        } else {
            s1 += 6;
        }
    }
    s0 = D_005AB7F0;
    if (func_0029E7F0(s0) != 0) {
        a0[0x10 / 4] = 0;
        func_0029E610(s0);
        func_0029E120(s0, s1, 1, 1.0f, 0.0f);
        return 1;
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2BB0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A2C70);
extern s32 func_00283BF0(void);
extern void func_00283C20(void);
extern void func_00283D00(s32, s32, s32, s32);
extern void SklSheet_SetIndex(s32);
extern s32 func_002A13B0(void);
extern void func_002A13C0(s32);
extern void func_002A0D50(s32);

s32 func_002A2E50(s32 *a0) {
    s32 *g = gEvtWork;
    s32 s1v;
    if (g[0xFC / 4] >= g[0xF8 / 4]) {
        if (func_00283BF0() >= 8) {
            func_002A0D50(1);
            func_002A13C0(func_002A13B0() + 1);
            a0[0x10 / 4] = 0;
            return 1;
        }
    }
    if (func_00283BF0() >= 8) {
        s1v = g[0x100 / 4 + g[0xFC / 4]];
        func_00283C20();
        func_00283D00(0x9500, s1v, 1, 0x11403000);
        SklSheet_SetIndex(g[0x110 / 4 + g[0xFC / 4]]);
        g[0xFC / 4] = g[0xFC / 4] + 1;
    }
    return 3;
}
extern void func_00283D00(s32, s32, s32, s32);
extern void SklSheet_SetIndex(s32);
extern void func_002A0D50(s32);

extern void func_00283D00(s32, s32, s32, s32);
extern void SklSheet_SetIndex(s32);
extern void func_002A0D50(s32);
extern s32 func_002A2E50(s32 *);

extern s32 func_002A13B0(void);
extern void func_002A13C0(s32);

s32 func_002A2F30(s32 *a0) {
    s32 *s0 = (s32 *)gEvtWork;
    if (s0[0x100 / 4] > 0) {
        func_00283D00(0x9500, s0[0x100 / 4], 1, 0x11403000);
        {
            s32 k4 = s0[0xFC / 4] * 4;
            SklSheet_SetIndex(*(s32 *)((char *)k4 + (s32)s0 + 0x110));
        }
        s0[0xFC / 4] = s0[0xFC / 4] + 1;
        func_002A0D50(0);
        a0[0x10 / 4] = (s32)func_002A2E50;
        return 3;
    }
    {
        s32 v = func_002A13B0();
        func_002A13C0(v + 1);
    }
    return 1;
}
extern s32 D_004700A0;

s32 func_002A2FD0(void *a0, char *a1) {
    D_004700A0 = *(s32 *)(*(char **)(a1 + 0x2C));
    return 1;
}
extern s32 func_002A1310(void *);

s32 func_002A2FF0(void *a0, s32 *a1) {
    *a1 = func_002A1310(a0);
    return 1;
}
extern void func_002A1320(s32);
extern void func_002A12E0(s32);
extern void func_002A1300(s32);
extern void func_002A12F0(s32);

s32 func_002A3020(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 C = args[2];
    s32 A = args[1];
    s32 B = args[0];
    func_002A1320(args[3]);
    func_002A12E0(C);
    func_002A1300(A);
    func_002A12F0(B);
    return 1;
}
extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

extern u32 func_0012EAE0(s32);

#if 0
// func_002A3080: the local registers come out in another order (the copy of a1 and the two loads of the arguments); seven variants tried
s32 func_002A3080(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 *out = (s32 *)a1;
    s32 s1 = args[1];
    s32 s0 = args[0];
    u32 r = func_0012EAE0(0x20) & 0x7FFFFFFF;
    *out = (s32)(r % (u32)(s0 - s1)) + s1;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3080);
extern void Zenie_Open(s32);
extern s32 *gEvtWork;

s32 Evt_CmdZenieOpen(void) {
    Zenie_Open(0);
    gEvtWork[0x64 / 4] = 1;
    return 1;
}
extern void func_002987E0(s32, s32);
extern void func_001F07D0(void);
extern void func_00298E10(s32);
extern void func_00298E00(s32);
extern s32 D_004700A4;

s32 func_002A3120(void) {
    func_002987E0(0, 0);
    func_001F07D0();
    if (D_004700A0 != -1) {
        func_00298E10(D_004700A0);
        D_004700A0 = -1;
    }
    if (D_004700A4 != -1) {
        func_00298E00(D_004700A4);
        D_004700A4 = -1;
    }
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3190);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A37E0);
#if 0
// func_002A3910: the argument and state loads come in another order (the scheduler hoists the state load); three variants tried
s32 func_002A3910(s32 *a0, char *a1) {
    s32 *s1 = a0;
    s32 *s0 = (s32 *)a0[0x1C / 4];
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 *a2 = (s32 *)a0[0];
    if (*(s16 *)((char *)s0 + 4) == 3) {
        s32 *q = (s32 *)s0[0x40 / 4];
        func_002A2020(*(s32 *)a2, (args[1] + 1) & 1, (s32)q, q[0x50 / 4]);
        s0[0x40 / 4] = 0;
        amCdFs_Close((s32)s0, 0);
        if (s1[0x18 / 4] != 0) {
            amCdFs_Close(s1[0x18 / 4], 0);
        }
        s1[0x18 / 4] = 0;
        s1[0x1C / 4] = 0;
        s1[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3910);
extern void func_002AFCA0(s32 *, char *);
extern s32 func_002A3910(s32 *, char *);

s32 func_002A39C0(s32 *a0, char *a1) {
    a0[0x18 / 4] = 0;
    func_002AFCA0(a0 + 0x1C / 4, a1);
    a0[0x10 / 4] = (s32)func_002A3910;
    return func_002A3910(a0, a1);
}
extern s32 *gEvtWork;

#if 0
// func_002A3A10: the flag test gives movz for both constants (also with an early return), the original branches (b to the end); seven variants tried
s32 func_002A3A10(void) {
    s32 *g = gEvtWork;
    s32 r;
    if (g[0xC / 4] & 0x2) {
        r = 1;
    } else {
        r = 3;
    }
    return r;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3A10);
#if 0
// func_002A3A40: the parameter and the global take the other saved registers in ours (s1/s2 swapped against the original); 3 orders tried
extern s32 func_002A8330(s32);
extern void func_00298B70(s32, s32);
extern void func_002A80D0(void);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void func_002A6E40(Task *);
extern s32 func_002A3A10(void);
extern s32 D_004700AC;
extern char D_0046EA68[];

s32 func_002A3A40(s32 *a0) {
    s32 *p = (s32 *)a0[0];
    s32 s0 = p[0];
    s32 s2 = D_004700AC;
    s32 s4 = (s32)((u32)s2 >> 16) & 0xFFFF;
    s32 s3;
    s32 v;
    s32 *g;
    s3 = func_002A8330(s4);
    if (s4 != 0xBB8) {
        func_00298B70(s2, s2 | 0x8000);
    }
    func_002A80D0();
    v = amCdFs_ReadFileId(s3, 0, 1);
    g = gEvtWork;
    g[0x18 / 4] = v;
    g[0x14 / 4] = s2;
    g[0xC / 4] = 0;
    g[0x8 / 4] = (s32)amTask_Create(func_002A6E40, NULL, 0x2000, 0x4000, 0, D_0046EA68);
    D_004700AC = -1;
    g = gEvtWork;
    g[0] = s0;
    g[0x10 / 4] = 1;
    g[0x3C / 4] = 0;
    a0[0x10 / 4] = (s32)func_002A3A10;
    return (gEvtWork[0xC / 4] & 2) ? 1 : 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3A40);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3B50);
extern f32 D_00470410;
extern s32 func_002A3B50(s32 *);

s32 func_002A3C30(void *a0, char *a1) {
    s32 loc[4];
    f32 v = *(f32 *)*(s32 **)(a1 + 0x2C);
    loc[0] = 0;
    *(f32 *)&loc[1] = 0.0f;
    *(f32 *)&loc[2] = v;
    *(f32 *)&loc[3] = 1.0f;
    func_002A3B50(loc);
    loc[0] = 0;
    *(f32 *)&loc[1] = 2.0f + (D_00470410 - 60.0f);
    *(f32 *)&loc[2] = v;
    *(f32 *)&loc[3] = 1.0f;
    func_002A3B50(loc);
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A3CD0);
extern void func_002A3CD0(void);

s32 func_002A3DE0(s32 *p) {
    p[0x2C / 4] = 0;
    p[0x30 / 4] = 0x42080000;
    p[0x38 / 4] = 0x3FE1E1E2;
    p[0x10 / 4] = (s32)func_002A3CD0;
    return 3;
}
s32 func_002A3E10(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    if (func_002A1020(args[0]) == 0) {
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
extern s32 func_002A3E10(s32 *, char *);

s32 func_002A3E60(s32 *a0, char *a1) {
    a0[0x10 / 4] = (s32)func_002A3E10;
    if (func_002A1020((*(s32 **)(a1 + 0x2C))[0]) == 0) {
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}

s32 func_002A3EC0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[4];
    f32 t0 = fa[1];
    s32 a1v = args[3];
    f32 t1 = fa[0];
    f32 t2 = fa[2];
    v[0] = t2;
    v[1] = t0;
    v[2] = t1;
    v[3] = 1.0f;
    func_002A0700(a0v, a1v, v);
    return 1;
}

extern char D_005AB610[];
extern void func_002A0750(s32, s32, s32, s32);

s32 func_002A3F10(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 t0 = **(s32 **)a0;
    char *row = D_005AB610 + t0 * 240 + args[2] * 24;
    func_002A0750(args[2], *(s32 *)(row + 0x14), args[1], args[0]);
    return 1;
}
extern void func_002A07D0(s32, s32, f32);

s32 func_002A3F70(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A07D0(args[2], args[1], *(f32 *)args);
    return 1;
}
s32 func_002A3FA0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[4];
    f32 t0 = fa[1];
    s32 a1v = args[3];
    f32 t1 = fa[0];
    f32 t2 = fa[2];
    v[0] = t2;
    v[1] = t0;
    v[2] = t1;
    v[3] = 1.0f;
    func_002A07A0(a0v, a1v, v);
    return 1;
}

extern s32 func_002A1360(s32);
extern s32 func_002A1340();
extern void func_002A0830(s32, s32, s32, s32);

extern s32 func_002A1360(s32);
extern s32 func_002A1340();
extern void func_002A0830(s32, s32, s32, s32);

s32 func_002A3FF0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 s3 = args[3];
    s32 s2 = args[2];
    s32 s1 = args[1];
    s32 s0 = args[0];
    s32 v;
    if (func_002A1360(s2) != 0) {
        v = func_002A1340();
        if (s0 >= 0 && v < 0) {
            s0 -= v;
        } else if (s1 >= 0 && v > 0) {
            s1 += v;
        }
    }
    func_002A0830(s3, s2, s1, s0);
    return 1;
}
extern void func_002A09A0(s32, s32);

s32 func_002A40A0(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 s0 = args[0];
    char *row = D_005AB610 + (**(s32 **)a0) * 240 + s0 * 24;
    func_002A0750(s0, *(s32 *)(row + 0x14), (s0 << 8) + 0x850000, 0);
    func_002A09A0(s0, *(s32 *)(row + 0x10));
    return 1;
}
extern s32 func_002A1380(void);
extern void func_002A09C0(s32);



#if 0
// func_002A4130: the counter is set in the delay slot of the first call in the original; ours sets it before the call
s32 func_002A4130(s32 *a0) {
    s32 n = func_002A1380();
    s32 i = 0;
    s32 off = 0;
    if (0 < n) {
        do {
            char *row = D_005AB610 + (**(s32 **)a0) * 240 + off;
            func_002A09C0(*(s32 *)(row + 0x10));
            off += 24;
            i++;
            n = func_002A1380();
        } while (i < n);
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4130);
#if 0
// func_002A41D0: the original moves a0 to s3 first and loads the slot into a1 before the test; reordering the locals swaps the saved registers s0/s1; 4 variants tried
s32 func_002A41D0(s32 *a0, char *a1) {
    s32 *s3 = a0;
    s32 *s2 = (s32 *)a0[0x1C / 4];
    s32 slot = ((s32 *)*(s32 **)(a1 + 0x2C))[1];
    if (*(s16 *)((char *)s2 + 4) == 3) {
        s32 idx = *(s32 *)s3[0];
        s32 *s0 = (s32 *)s2[0x40 / 4];
        s32 s1 = s0[0x50 / 4];
        s32 *s4 = (s32 *)(D_005AB610 + idx * 240 + slot * 24);
        if (s4[3] != 0) {
            amCdFs_ReleaseCache(s4[3]);
            s4[3] = 0;
        }
        s4[3] = (s32)s0;
        s4[5] = s1;
        s3[4] = 0;
        s2[0x40 / 4] = 0;
        amCdFs_Close((s32)s2, 0);
        if (s3[6] != 0) {
            amCdFs_Close(a0[6], 0);
        }
        s3[6] = 0;
        s3[7] = 0;
        return 1;
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A41D0);
extern s32 func_002A41D0(s32 *, char *);

s32 func_002A42C0(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    *(s32 *)a1 = args[1];
    a0[0x18 / 4] = 0;
    func_002AFCA0(a0 + 0x1C / 4, a1);
    a0[0x10 / 4] = (s32)func_002A41D0;
    return func_002A41D0(a0, a1);
}
#if 0
// func_002A4320: same shape as func_002A41D0 (offsets 0x8/0x10); the original returns 3 through a bne with v0 set before the branch; locals reordered; not matched
s32 func_002A4320(s32 *a0, char *a1) {
    s32 *s2 = (s32 *)a0[0x1C / 4];
    s32 slot = ((s32 *)*(s32 **)(a1 + 0x2C))[1];
    s32 *s3;
    s32 idx;
    s32 *s0;
    s32 s1;
    s32 *s4;
    if (*(s16 *)((char *)s2 + 4) != 3) {
        return 3;
    }
    s3 = a0;
    idx = *(s32 *)s3[0];
    s0 = (s32 *)s2[0x40 / 4];
    s1 = s0[0x50 / 4];
    s4 = (s32 *)(D_005AB610 + idx * 240 + slot * 24);
    if (s4[2] != 0) {
        amCdFs_ReleaseCache(s4[2]);
        s4[2] = 0;
    }
    s4[2] = (s32)s0;
    s4[4] = s1;
    s3[4] = 0;
    s2[0x40 / 4] = 0;
    amCdFs_Close((s32)s2, 0);
    if (s3[6] != 0) {
        amCdFs_Close(s3[6], 0);
    }
    s3[6] = 0;
    s3[7] = 0;
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4320);
extern s32 func_002A4320(s32 *, char *);

s32 func_002A4410(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    *(s32 *)a1 = args[1];
    a0[0x18 / 4] = 0;
    func_002AFCA0(a0 + 0x1C / 4, a1);
    a0[0x10 / 4] = (s32)func_002A4320;
    return func_002A4320(a0, a1);
}
extern void func_002A09F0(s32, s32, f32 *);

s32 func_002A4470(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[4];
    f32 t0 = fa[1];
    s32 a1v = args[3];
    f32 t1 = fa[0];
    f32 t2 = fa[2];
    v[0] = t2;
    v[1] = t0;
    v[2] = t1;
    v[3] = 1.0f;
    func_002A09F0(a0v, a1v, v);
    return 1;
}

extern void func_002A0A30(s32, s32, s32);

s32 func_002A44C0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A0A30(args[2], args[1], (s32)(f32)args[0]);
    return 1;
}
extern void func_002A0A60(s32, s32);

s32 func_002A4500(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A0A60(args[1], args[0]);
    return 1;
}
extern void func_002A0AD0(s32, s32, f32 *);

s32 func_002A4530(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[4];
    f32 t0 = fa[1];
    s32 a1v = args[3];
    f32 t1 = fa[0];
    f32 t2 = fa[2];
    v[0] = t2;
    v[1] = t0;
    v[2] = t1;
    v[3] = 1.0f;
    func_002A0AD0(a0v, a1v, v);
    return 1;
}

INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4580);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4620);
extern void func_002A0BC0(s32, s32, s32, f32 *);

s32 func_002A46C0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[4];
    f32 t0 = fa[1];
    s32 a1v = args[3];
    f32 t1 = fa[0];
    s32 a2v = args[2];
    v[0] = t0;
    v[1] = t1;
    v[2] = 1.0f;
    v[3] = 1.0f;
    func_002A0BC0(a0v, a1v, a2v, v);
    return 1;
}

extern void func_002A0C10(s32, s32, s32, f32 *);

s32 func_002A4710(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[5];
    f32 t0 = fa[1];
    s32 a1v = args[4];
    f32 t1 = fa[0];
    s32 a2v = args[3];
    f32 t2 = fa[2];
    v[0] = t2;
    v[1] = t0;
    v[2] = t1;
    v[3] = 1.0f;
    func_002A0C10(a0v, a1v, a2v, v);
    return 1;
}

extern void func_002A0C60(s32, s32, s32, f32 *);

s32 func_002A4760(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[5];
    f32 t0 = fa[1];
    s32 a1v = args[4];
    f32 t1 = fa[0];
    s32 a2v = args[3];
    f32 t2 = fa[2];
    v[0] = t2;
    v[1] = t0;
    v[2] = t1;
    v[3] = 1.0f;
    func_002A0C60(a0v, a1v, a2v, v);
    return 1;
}

extern void func_002A0CB0(s32, s32, s32);

s32 func_002A47B0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A0CB0(args[2], args[1], args[0]);
    return 1;
}
extern void func_002A0D20(s32, s32, s32);

s32 func_002A47E0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 *fa = (f32 *)args;
    f32 v[4];
    s32 a0v = args[3];
    f32 t0 = fa[1];
    s32 a1v = args[2];
    f32 t1 = fa[0];
    v[0] = t0;
    v[1] = t1;
    v[2] = 0.0f;
    v[3] = 1.0f;
    func_002A0CE0(a0v, a1v, v);
    return 1;
}
s32 func_002A4830(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A0D20(args[2], args[1], args[0]);
    return 1;
}

extern s32 func_002A0D70(void *);



s32 func_002A4860(s32 *a0) {
    if (func_002A0D70(a0) == 0) {
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
extern s32 func_002A4860(s32 *);
extern s32 func_002A3B50(s32 *);
extern f32 D_00470410;

extern s32 func_002A4860(s32 *);

extern s32 func_002A4860(s32 *);

#if 0
// func_002A48A0: the store through the copy of the pointer and the call through the parameter are ordered differently; six variants tried
s32 func_002A48A0(s32 *a0) {
    s32 *p = a0;
    func_002A0D70(p);
    p[0x10 / 4] = (s32)func_002A4860;
    if (func_002A0D70(p) == 0) {
        p[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A48A0);
extern f32 func_002A1050(s32, s32, s32);

s32 func_002A48F0(void *a0, s32 *a1) {
    s32 *args = *(s32 **)((char *)a1 + 0x2C);
    *a1 = (s32)func_002A1050(args[1], args[0], 1);
    return 1;
}
extern f32 func_002A1050(s32, s32, s32);

s32 func_002A4940(void *a0, s32 *a1) {
    s32 *args = *(s32 **)((char *)a1 + 0x2C);
    *a1 = (s32)func_002A1050(args[1], args[0], 0);
    return 1;
}
#if 0
// func_002A4990: the count is kept in two registers and the loop-start moves are placed differently (delay slots); four forms tried
s32 func_002A4990(void) {
    s32 i;
    s32 j;
    s32 n;
    s32 m;
    func_002A13A0();
    n = m = func_002A1390();
    if (0 < n) {
        i = 0;
        do {
            if (0 < m) {
                j = 0;
                do {
                    func_002A10F0(i, j);
                    j++;
                } while (j < m);
            }
            i++;
        } while (i < n);
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4990);
extern s32 func_002A1390();
extern void func_002A11C0(s32, s32, s32);


#if 0
// func_002A4A30: the counter and the row share registers differently (original: idx in s2, counter in s1 set in the beqz delay slot); the scheduler moves the counter store after the row; four orders tried
s32 func_002A4A30(s32 *a0) {
    s32 i;
    s32 idx = **(s32 **)a0;
    s32 n = func_002A1390(a0);
    if (0 < n) {
        char *row;
        i = 0;
        row = D_005AB610 + idx * 240;
        do {
            func_002A11C0(i, *(s32 *)(row + 4), 0x800000 + ((i + 1) << 8));
            i++;
            row += 0x18;
        } while (i < n);
    }
    return 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4A30);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4AD0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4BD0);
extern s8 D_004B4B63[];
extern char D_00492FCE[];
s32 func_002A4D60(s32 *a0);

#if 0
// func_002A4CF0: the store of the function pointer comes first (as in the original); the global's test is scheduled before the index load (ours lw before lb); three forms tried
s32 func_002A4CF0(s32 *a0) {
    s32 idx;
    u16 *row;
    a0[0x10 / 4] = (s32)func_002A4D60;
    idx = D_004B4B63[0];
    row = (u16 *)(D_00492FCE + idx * 0xB8);
    if ((gEvtWork[0x14 / 4] & 0x8000) != 0) {
        if ((*row & 0x8) != 0) {
            return 1;
        }
    }
    return 3;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A4CF0);
s32 func_002A4D60(s32 *a0) {
    s32 idx = D_004B4B63[0];
    u16 *row = (u16 *)(D_00492FCE + idx * 0xB8);
    if ((*row & 0x8) != 0) {
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
s32 func_002A4DC0(s32 *a0) {
    s32 idx = D_004B4B63[0];
    u16 *row = (u16 *)(D_00492FCE + idx * 0xB8);
    a0[0x10 / 4] = (s32)func_002A4D60;
    if ((*row & 0x8) != 0) {
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
extern s32 func_002A13A0(void);
extern s32 func_002A13B0(void);
extern void func_002A13C0(s32);



s32 func_002A4E20(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 s0 = args[0];
    s32 v = func_002A13A0();
    if (v <= s0) {
        s0 = v - 1;
    }
    if (s0 < 0) {
        s0 += v;
    }
    if (func_002A13B0() < s0) {
        func_002A13C0(s0);
    }
    return 1;
}
extern void func_002A1420(s32);

s32 func_002A4E90(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A1420(args[0]);
    return 1;
}
extern void func_002A1430(s32, s32, s32, s32);

s32 func_002A4EC0(void *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    func_002A1430(args[3], args[2], args[1], args[0]);
    return 1;
}
s32 func_002A4EF0(void) {
    return 1;
}
void func_002A4F00(void) {
    gEvtWork[0x144 / 4] = 1;
}
extern void func_00264380(f32);
extern f32 gFrameDelta;

s32 func_002A4F10(s32 *a0) {
    s32 *g = gEvtWork;
    if (g[0x144 / 4] == 1) {
        a0[0x10 / 4] = 0;
        g[0x144 / 4] = 0;
        func_00264380(0.01f * gFrameDelta);
        return 1;
    }
    return 3;
}
s32 func_002A4F70(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    s32 *s1 = gEvtWork;
    f32 f20 = *(f32 *)args;
    func_00264300(10, func_002A4F00, 0);
    s1[0x144 / 4] = 0;
    func_00264380(100.0f * (0.01f * gFrameDelta) / f20);
    a0[0x10 / 4] = (s32)func_002A4F10;
    return 3;
}
extern s32 D_004700B0;

s32 func_002A5010(void *a0, char *a1) {
    D_004700B0 = *(s32 *)(*(char **)(a1 + 0x2C));
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5030);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A51E0);
extern f32 D_004708DC;
extern void amDraw3d_ScreenShot(void);
extern f32 func_002B06A0(void);
s32 func_002A5330(s32 *);

s32 func_002A52B0(s32 *a0, char *a1) {
    s32 *args = *(s32 **)(a1 + 0x2C);
    f32 v;
    D_004708DC = *(f32 *)args;
    a0[0x10 / 4] = (s32)func_002A5330;
    amDraw3d_ScreenShot();
    v = D_004708DC + (f32)D_004700B0 * func_002B06A0();
    D_004708DC = v;
    if (v < 0.0f) {
        D_004708DC = 0.0f;
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
s32 func_002A5330(s32 *a0) {
    f32 v;
    amDraw3d_ScreenShot();
    v = D_004708DC + (f32)D_004700B0 * func_002B06A0();
    D_004708DC = v;
    if (v < 0.0f) {
        D_004708DC = 0.0f;
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
s32 func_002A53A0(s32 *a0) {
    f32 v;
    D_004708DC = 1.0f;
    D_004700B0 = 0;
    a0[0x10 / 4] = (s32)func_002A5330;
    amDraw3d_ScreenShot();
    v = D_004708DC + (f32)D_004700B0 * func_002B06A0();
    D_004708DC = v;
    if (v < 0.0f) {
        D_004708DC = 0.0f;
        a0[0x10 / 4] = 0;
        return 1;
    }
    return 3;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5420);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5580);
#if 0
// func_002A56A0: the copy loop keeps the counter in a2 and the pointer in a1 in the original; ours takes the other registers (240 vs 232 bytes, 41 instructions differ); 5 variants tried
extern s32 func_002B4C80(s32);
extern void func_002B4CC0(s32, s32 *);
extern void SklEdit_Close(void);
extern s32 D_005AA604;

void func_002A56A0(void) {
    s32 *g = gEvtWork;
    s32 buf[8];
    s32 i;
    s32 *p;
    s16 *tab;
    if (func_002B4C80(0) >= 9) {
        func_002A0D50(1);
        func_002A13C0(func_002A13B0() + 1);
        func_002B4CC0(0, buf);
        SklEdit_Close();
        i = 0;
        tab = (s16 *)((char *)D_005AA604 + 0x11F0);
        if (buf[0] > 0) {
            p = buf;
            do {
                tab[i] = (s16)p[1];
                p++;
                i++;
            } while (i < buf[0]);
        }
        if (i < 7) {
            s16 *q = tab + i;
            do {
                *q = -1;
                q++;
                i++;
            } while (i < 7);
        }
        amTask_Kill((void *)g[0x9C / 4]);
        g[0x9C / 4] = 0;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A56A0);

extern void SklEdit_Open(s32, char *, s32, s32, s32);
extern void func_002B5030(s32, s32, s32);
extern void func_002B4E40(s32, void *, void *, s32);
extern void func_002A0D50(s32);
extern void func_002A56A0(void);
extern char D_00511479[];

void func_002A5790(s32 *a0) {
    s32 *g = gEvtWork;
    void *f;
    if (func_002A1020(g[0xA0 / 4]) == 0) {
        SklEdit_Open(0x5000, D_00511479, 0, 0x601000, 0);
        func_002B5030(0, D_004B4B63[0], D_00511450[0]);
        if (*(s8 *)((char *)g + 0xC4) == 1) {
            func_002B4E40(0, (char *)g + 0xA4, (char *)g + 0xA8, 0);
        } else {
            func_002B4E40(0, (char *)g + 0xA4, 0, 0);
        }
        func_002A0D50(0);
        f = func_002A56A0;
        a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
    }
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5870);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5B00);
void func_002A5D70(void) {
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5D80);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A5F50);
extern void amCdFs_ReleaseCache(s32);

void func_002A6090(s32 a0, s32 a1, s32 a2, s32 a3) {
    s32 *row = (s32 *)(D_005AB610 + a0 * 240 + a1 * 24);
    if (row[0] != 0) {
        amCdFs_ReleaseCache(row[0]);
        row[0] = 0;
    }
    row[0] = a2;
    row[1] = a3;
}

void func_002A6110(s32 a0, s32 a1, s32 a2, s32 a3) {
    char *row = D_005AB610 + a0 * 240 + a1 * 24;
    if (*(s32 *)(row + 0x8) != 0) {
        amCdFs_ReleaseCache(*(s32 *)(row + 0x8));
        *(s32 *)(row + 0x8) = 0;
    }
    *(s32 *)(row + 0x8) = a2;
    *(s32 *)(row + 0x10) = a3;
}

void func_002A6190(s32 a0, s32 a1, s32 a2, s32 a3) {
    char *row = D_005AB610 + a0 * 240 + a1 * 24;
    if (*(s32 *)(row + 0xC) != 0) {
        amCdFs_ReleaseCache(*(s32 *)(row + 0xC));
        *(s32 *)(row + 0xC) = 0;
    }
    *(s32 *)(row + 0xC) = a2;
    *(s32 *)(row + 0x14) = a3;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A6210);
void func_002A6DB0(s32 *a0) {
    s32 *s1 = gEvtWork;
    s32 *p = (s32 *)s1[0x38 / 4];
    if (*(s16 *)((char *)p + 4) == 3) {
        s1[0x38 / 4] = p[0x40 / 4];
        s1[0x3C / 4] = ((s32 *)p[0x40 / 4])[0x50 / 4];
        p[0x40 / 4] = 0;
        amCdFs_Close((s32)p, 0);
        s1[0xD4 / 4] = 0;
        Scr_SetData(s1[0], s1[0x3C / 4]);
        {
            void *f = func_002A6210;
            a0[0x1C / 4] = (s32)((f == 0) ? 0 : f);
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A6E40);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A6FD0);
extern f32 func_002B06A0(void);
extern void func_0029AAC0(s32, s32, s32);
extern s32 *gStrMap;

void func_002A7160(s32 a0) {
    s32 *s0 = gEvtWork;
    f32 t;
    f32 v;
    if (s0 == 0) {
        if (a0 != 0) {
            amTask_Kill((void *)a0);
        }
        return;
    }
    if (func_002A1020(2) != 0) {
        return;
    }
    t = func_002B06A0();
    v = *(f32 *)&s0[0x12C / 4] + t;
    *(f32 *)&s0[0x12C / 4] = v;
    if (v < 10.0f) {
        return;
    }
    if (gStrMap != 0) {
        func_0029AAC0(0x3000, 0x4000, s0[0x124 / 4]);
    } else {
        if (a0 != 0) {
            amTask_Kill((void *)a0);
        }
    }
    if (s0[0x128 / 4] != 0) {
        amTask_Kill((void *)s0[0x128 / 4]);
        s0[0x128 / 4] = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7240);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7400);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A75C0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A76E0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7820);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7940);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7B50);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7CB0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A7F70);
extern void amHeap_Free(void *);
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void memset(void *, s32, s32);
extern s8 D_00511450[];
extern char D_0046EAE8[];
extern s8 D_004E6560[];

void func_002A80D0(void) {
    s32 *g;
    s8 *e;
    if (gEvtWork != 0) {
        amHeap_Free(gEvtWork);
        gEvtWork = 0;
    }
    gEvtWork = (s32 *)amHeap_Alloc(0x150, 0, D_0046EAE8, 0xC3C);
    memset(gEvtWork, 0, 0x150);
    e = D_004E6560 + D_00511450[0] * 4624;
    g = gEvtWork;
    g[0x130 / 4] = -1;
    g[0x134 / 4] = e[0x1261];
    g[0x138 / 4] = e[0x1262];
    g[0x13C / 4] = e[0x1263];
    g[0x140 / 4] = -1;
    g[0x124 / 4] = -1;
    g[0xFC / 4] = 0;
    g[0xF8 / 4] = 0;
    g[0x100 / 4] = -1;
    g[0x104 / 4] = -1;
    g[0x108 / 4] = -1;
    g[0x10C / 4] = -1;
    g = gEvtWork;
    g[0x4C / 4] = 0;
    g[0x50 / 4] = 0;
    g[0x54 / 4] = 0;
    g[0x58 / 4] = 0;
    g[0x64 / 4] = 0;
    g[0x68 / 4] = 0;
}
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A81B0);
INCLUDE_ASM("asm/nonmatchings/story/evt_scrp", func_002A8330);

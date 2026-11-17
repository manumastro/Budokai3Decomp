#include "common.h"

extern u8 D_005C2050[];
extern u8 D_005C2060[];
extern void amTask_Kill(s32);
extern void func_001F7DB0(void);
extern void func_001F7BF0(void);
extern void func_001F7820(void);
extern void func_001F7690(void);
extern void func_001F6E50(void);
extern void func_001F7470(s32);
extern s32 D_0051CD20[];
extern void func_001F6D60(void);
extern void func_001F5B10(void *, s32);
extern void func_002CDC20(void);
extern void func_00208F70(void *);
extern void BtbObj_RemoveFromList(void *);
extern void amModel_SetCurrent(s32, s32);
extern void func_001F3DF0(void *);
extern void BtbObj_CheckDrawFlags(void *);
extern void func_00208D70(void *);
extern s32 D_00470238;
extern void func_001F5D50(void *);
extern void func_001F5E20(void *);
extern void amMotion_BuildMatrices(s32);
extern s32 func_001F5EF0(s32, s32);
extern u8 *func_001F5FD0(s32, void *, s32, void *, void *);
extern void func_002CED60(void);
extern u8 D_0046F258[];
extern void func_001444E0(void *, f32, s32);
extern void func_00144430(void *);
extern u8 D_005C206C[];
extern u8 D_005C2074[];
extern u8 *gBattle;
extern s32 D_00470148;
extern s32 D_0047014C;
extern s32 D_00470150;
extern u8 D_005C2070[];
extern f32 D_00470154;
extern f32 func_00146E30(s32, s32);
extern u8 D_005C2068[];
extern s32 D_0051CD0C[];
extern s32 func_001A50F0(s32, s32);
extern s32 func_00209540(s32, s32, s32);
extern u8 D_0046F218[];
extern void memset(void *, s32, s32);
extern u8 D_0046F230[];
extern void BtbObj_RemoveByIdx(s32, s32);
extern void func_001F5B50(u8 *, s32);
extern void BtbObj_RemoveByKey(void *);
extern void func_00125740(void *, void *, s32);
extern void func_001F5A70(s32);
extern void func_0013E2A0(s32);
extern void func_0013E170(s32);
extern void func_0013E0A0(s32);
extern u8 D_00495718[];
extern u8 D_00495758[];
extern u8 *D_0051CD00[];
extern void func_001F5B70(u8 *);
extern void func_002CEA60(void);
extern s32 gBtbBg[];
extern void func_00200270(f32, f32);
extern void func_002CDD50(void);
extern void func_002CDD00(void);
extern void func_002CDA30(void);
extern void func_002CD9E0(void);

INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CD5F0);
void func_002CD810(void) {
    s32 i;
    s32 *p = (s32 *)D_005C2050;
    for (i = 0; i < 4; i++) {
        if (*p != 0) {
            amTask_Kill(*p);
        }
        *p = 0;
        p++;
    }
}
void memset(void *, s32, s32);
void func_002CD870(void) {
    memset(D_005C2050, 0, 0x10);
}
void func_002CD890(void) {
    func_001F7DB0();
    func_001F7BF0();
    func_001F7820();
    func_001F7690();
    func_001F6E50();
    switch (D_0051CD20[0]) {
    case 0:
        func_001F7470(0);
        break;
    }
}
void func_002CD8F0(void) {
    func_001F7DB0();
    func_001F7BF0();
    func_001F7820();
    func_001F7690();
    func_001F6E50();
    func_001F6D60();
    switch (D_0051CD20[0]) {
    case 0:
        func_001F7470(0);
        break;
    }
}
void func_002CD960(void) {
    func_001F7DB0();
    func_001F7BF0();
    func_001F7820();
    func_001F7690();
    func_001F6E50();
    switch (D_0051CD20[0]) {
    case 0:
        func_001F7470(0);
        break;
    case 1:
        func_002CDC20();
        break;
    }
}
#if 0
void func_002CD9E0(u8 *p) {
    u8 *q = p + 0x30;
    func_00208F70(*(void **)(p + 0x38));
    if (*(s32 *)(*(u8 **)(q + 8) + 0x38) < 0) {
        BtbObj_RemoveFromList(p);
    }
}
// differs: the original keeps p in s1 and q = p+0x30 in s0 across the first call (frame 0x30, sq s1 and s0); the compiler folds q+8 into p+0x38 and keeps only p (frame 0x20). Tried: q before/after the call, a Sub30 struct view
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CD9E0);
#if 0
void func_002CDA30(u8 *p) {
    u8 *q = p + 0x30;
    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)(p + 0x34), 0x2003000);
    func_001F3DF0(p);
    func_00208D70(*(void **)(q + 8));
    BtbObj_CheckDrawFlags(p);
}
// differs: the original saves two registers (p and p+0x30) and computes the field address after the first call; the frame is 0x30 here 0x20
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CDA30);
#if 0
void func_002CDA90(void) {
    s32 s1 = 0;
    s32 s2 = D_0051CD0C[0];
    u8 *s0;
    s32 a0 = func_001A50F0(s2, 0xFF);
    if (a0 != 0) {
        s1 = func_00209540(a0, 0x2000004, 0);
        if (s1 != 0) {
            u8 *p = func_001F5FD0(0x85000000, D_0046F218, 0, func_002CDA30, func_002CD9E0);
            *(s32 *)(p + 0x20) &= ~0x800;
            *(s32 *)(p + 0x20) |= 0x800;
            s0 = p;
            memset(s0 + 0x30, 0, 0x80);
            *(s32 *)(s0 + 0x38) = s1;
            s0 += 0x30;
            *(s32 *)(s0 + 4) = func_001A50F0(s2, 0x280);
        }
    }
}
// differs: the driver value lands in s0 and the node in s1 (the original: driver s2, result s1, node s0); the declaration orders tried did not change the allocation
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CDA90);
void func_002CDB70(u8 *p) {
    func_00208F70(*(void **)(p + 0x34));
}
extern void func_0013B0B0(void *);
extern void func_00131F00(u8 *, f32, f32);
extern void func_00132DF0(s32);
extern void func_0013B110(s32);
extern void func_00133780(s32, s32);
extern u8 D_0047CA40[];
void func_002CDB80(u8 *p) {
    u8 *q = p + 0x30;
    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)(p + 0x30), 0x2003000);
    func_0013B0B0(0);
    __asm__ volatile ("lqc2 $vf28, 0(%0) ; lqc2 $vf29, 16(%0) ; lqc2 $vf30, 32(%0) ; lqc2 $vf31, 48(%0)" : : "r"(gBattle + 0x60) : "memory");
    func_00131F00(D_0047CA40, 0.0f, 0.0f);
    func_00132DF0(0);
    func_0013B110(1);
    func_00133780(2, 1);
    func_00208D70(*(void **)(q + 4));
    func_00133780(2, 0);
}
extern u8 D_0046F228[];
extern u8 D_004566D0[];
extern u8 D_00456680[];
extern u8 D_00459390[];
extern u8 *D_004566A4[];
extern u8 *D_00456730[];
extern u8 *D_00456734[];
extern s32 func_002096D0(u8 *, s32, s32);
extern void func_002CDA90(void);
void func_002CDC20(void) {
    u8 *q;
    s32 s1 = func_001A50F0(D_0051CD0C[0], 0x280);
    u8 *p = func_001F5FD0(0x85000000, D_0046F228, 0, func_002CDB80, func_002CDB70);
    *(s32 *)(p + 0x20) &= ~0x800;
    *(s32 *)(p + 0x20) |= 0x800;
    q = p + 0x30;
    memset(q, 0, 0x80);
    *(s32 *)q = s1;
    D_004566A4[0] = D_004566D0;
    D_00456730[0] = D_0047CA40;
    D_00456734[0] = D_00459390;
    *(s32 *)(q + 4) = func_002096D0(D_00456680, 0x2000004, 0);
    func_002CDA90();
}
#if 0
void func_002CDD00(u8 *p) {
    u8 *q = p + 0x30;
    func_00208F70(*(void **)(p + 0x38));
    if (*(s32 *)(*(u8 **)(q + 8) + 0x38) < 0) {
        BtbObj_RemoveFromList(p);
    }
}
// differs: same as func_002CD9E0 (the q = p+0x30 register is folded away)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CDD00);
#if 0
void func_002CDD50(u8 *p) {
    u8 *q = p + 0x30;
    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)(p + 0x34), 0x2003000);
    func_001F3DF0(p);
    func_00208D70(*(void **)(q + 8));
    BtbObj_CheckDrawFlags(p);
}
// differs: the original keeps p in s1 and q = p+0x30 in s0 across the first call (frame 0x30, sq s1 and s0, q computed in the delay slot of the first jal); the compiler folds q+8 into p+0x38 and keeps only p (frame 0x20). Tried: asm "+r" barrier on q, q = p; q += 0x30
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CDD50);
#if 0
void func_002CDDB0(void) {
    s32 s2 = D_0051CD0C[0];
    s32 s1 = 0;
    u8 *s0;
    s32 a0 = func_001A50F0(s2, 0x212);
    if (a0 != 0) {
        s1 = func_00209540(a0, 0x2000004, 0);
        if (s1 != 0) {
            s0 = func_001F5FD0(0x85000000, D_0046F230, 0, func_002CDD50, func_002CDD00);
            *(s32 *)(s0 + 0x20) &= ~0x800;
            *(s32 *)(s0 + 0x20) |= 0x800;
            memset(s0 + 0x30, 0, 0x80);
            *(s32 *)(s0 + 0x38) = s1;
            s0 += 0x30;
            *(s32 *)(s0 + 4) = func_001A50F0(s2, 0x280);
        }
    }
}
// differs: the same allocation pattern as func_002CDA90: the driver value, the result and the node take other saved registers, and the frame is 0xD0 against 0xE0; the declaration orders (6 of them) give the same 0xD0 size, the driver lands in s0 and the node in s1 (original: driver s2, result s1, node s0)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CDDB0);
void func_002CDE90(void) {
    u8 *v;
    func_001F7DB0();
    func_001F7BF0();
    func_001F7820();
    func_001F7690();
    func_001F6E50();
    switch (D_0051CD20[0]) {
    case 0:
        func_001F7470(0);
        BtbObj_RemoveByIdx(4, 2);
        v = (u8 *)func_001F5EF0(3, 1);
        *(s16 *)(*(u8 **)(v + 0x10) + 0xE) = 1;
        func_001F5B50(v, 1);
        v = (u8 *)func_001F5EF0(0, 0);
        *(s16 *)(*(u8 **)(v + 0x10) + 0xE) = 2;
        func_001F5B50(v, 2);
        func_002CDDB0();
        break;
    case 1:
        func_002CDC20();
        break;
    }
}
void func_002CDF70(void) {
    func_001F7DB0();
    func_001F7BF0();
    func_001F7820();
    func_001F7690();
    func_001F6E50();
    switch (D_0051CD20[0]) {
    case 0:
        break;
    case 1:
        func_001F7470(0);
        break;
    }
}
void func_002CDFE0(void) {
    u8 *v;
    func_001F7DB0();
    func_001F7BF0();
    func_001F7820();
    func_001F7690();
    func_001F6E50();
    func_001F6D60();
    switch (D_0051CD20[0]) {
    case 0:
        func_001F7470(0);
        v = (u8 *)func_001F5EF0(3, 3);
        func_001F5B10(*(u8 **)(v + 4), 0);
        v = (u8 *)func_001F5EF0(4, 4);
        BtbObj_RemoveByKey(v);
        break;
    case 1:
        func_001F7470(2);
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CE0A0);
extern u8 D_0051CD24[];
extern void func_001F5CB0(u8 *);
#if 0
void func_002CE2A0(u8 *a0) {
    u8 *t3;
    u8 *t4 = a0 + 0x30;
    s32 t1 = 0;
    f32 k = *(f32 *)D_0051CD24;
    s32 t2;
    s32 a3;
    u8 *t0;
    f32 f2;
    t3 = *(u8 **)(a0 + 0x30);
    if (t3 != NULL) {
        t2 = *(s32 *)t3;
        do {
            a3 = *(s32 *)(t3 + 0x4);
            if (((u32)t1 >> a3 & 1) == 0) {
                f2 = *(f32 *)(t3 + 0x8);
                t0 = t4 + (a3 - 6) * 4;
                *(f32 *)(t0 + 0x10) = *(f32 *)(t0 + 0x10) + f2 * k;
                f2 = *(f32 *)(t3 + 0xC);
                *(f32 *)(t0 + 0x20) = *(f32 *)(t0 + 0x20) + f2 * k;
                f2 = *(f32 *)(t0 + 0x10);
                if (f2 > 1.0f) {
                    *(s32 *)(t0 + 0x10) = 0;
                } else if (f2 < 0.0f) {
                    *(f32 *)(t0 + 0x10) = 1.0f;
                }
                f2 = *(f32 *)(t0 + 0x20);
                if (f2 > 1.0f) {
                    *(f32 *)(t0 + 0x20) = 0.0f;
                } else if (f2 < 0.0f) {
                    *(f32 *)(t0 + 0x20) = 1.0f;
                }
                t1 = t1 | (1 << a3);
                if (t1 == 0x3C00) {
                    break;
                }
            }
            t3 = t3 + 0x10;
        } while (*(s32 *)t3 == t2);
    }
    a0 = *(u8 **)(a0 + 0x10);
    if (*(u8 **)(a0 + 0x10) != NULL) {
        func_001F5CB0(a0);
    }
}
// differs: a clamp loop over a table of f32 pairs; the constants (k in f3 and 1.0 in f0) and the address registers come out in another order; the clamps are written out in full (not matched)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CE2A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CE3D0);
extern void func_001F5CB0(u8 *);
#if 0
void func_002CE500(u8 *p) {
    u8 *e = *(u8 **)(p + 0x30);
    s32 first;
    u32 mask;
    s32 bit;
    f32 *arr;
    if (e != 0) {
        first = *(s32 *)e;
        mask = 0;
        arr = (f32 *)(p + 0x30);
        do {
            bit = *(s32 *)(e + 4);
            if (((mask >> bit) & 1) == 0) {
                f32 *q = arr + (bit - 6);
                q[4] = q[4] + *(f32 *)(e + 8) * *(f32 *)D_0051CD24;
                if (q[4] > 1.0f) {
                    *(s32 *)&q[4] = 0;
                } else if (q[4] < 0.0f) {
                    q[4] = 1.0f;
                }
                q[8] = q[8] + *(f32 *)(e + 12) * *(f32 *)D_0051CD24;
                if (q[8] > 1.0f) {
                    *(s32 *)&q[8] = 0;
                } else if (q[8] < 0.0f) {
                    q[8] = 1.0f;
                }
                mask = mask | (1 << bit);
                if (mask == 0x3C00) {
                    break;
                }
            }
            e += 0x10;
        } while (*(s32 *)e == first);
    }
    {
        u8 *o = *(u8 **)(p + 0x10);
        if (*(s32 *)(o + 0x10) != 0) {
            func_001F5CB0(o);
        }
    }
}
// differs: 276 bytes against 304 (the original is 7 instructions longer): it reloads D_0051CD24 for each product and keeps 0.0 in $f3 and 1.0 in $f4; the clamp shape and the srlv bit test (u32 mask) match
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CE500);
#if 0
void func_002CE630(f32 x, f32 y) {
    f32 tmp[4];
    gBtbBg[0] = 0;
    __asm__ volatile ("sqc2 $vf0, 0(%0)" : : "r"(tmp) : "memory");
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(*(u8 **)(gBattle + 0x264)), "r"(tmp) : "memory");
    func_00200270(x - tmp[0], y - tmp[2]);
    gBtbBg[0] = 1;
}
// differs: the VU0 copy matches; the constant 1 of the last store is in v1 in the original, v0 here (tried inline operands)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CE630);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CE690);
#if 0
void func_002CE7E0(u8 *s) {
    u8 *e = *(u8 **)(s + 0x30);
    f32 k = *(f32 *)D_0051CD24;
    f32 *arr = (f32 *)(s + 0x30);
    s32 first;
    u32 mask;
    s32 bit;
    u8 *o;
    if (e != 0) {
        first = *(s32 *)e;
        mask = 0;
        do {
            bit = *(s32 *)(e + 4);
            if (((mask >> bit) & 1) == 0) {
                f32 *q = arr + (bit - 6);
                q[4] = q[4] + *(f32 *)(e + 8) * k;
                if (q[4] > 1.0f) {
                    *(s32 *)&q[4] = 0;
                } else if (q[4] < 0.0f) {
                    q[4] = 1.0f;
                }
                q[8] = q[8] + *(f32 *)(e + 12) * k;
                if (q[8] > 1.0f) {
                    *(s32 *)&q[8] = 0;
                } else if (q[8] < 0.0f) {
                    q[8] = 1.0f;
                }
                mask = mask | (1 << bit);
                if (mask == 0x3C00) {
                    break;
                }
            }
            e += 0x10;
        } while (*(s32 *)e == first);
    }
    o = *(u8 **)(s + 0x10);
    if (*(s32 *)(o + 0xC) != 0) {
        func_001F5D50(o);
    }
    if (*(s32 *)(o + 0x8) != 0) {
        func_001F5E20(o);
        amMotion_BuildMatrices(**(s32 **)(*(u8 **)(s + 0x10) + 8));
    }
    o = *(u8 **)(s + 0x10);
    if (*(s32 *)(o + 0x10) != 0) {
        if (*(f32 *)(*(u8 **)(o + 8) + 4) == 0.0f) {
            *(f32 *)(*(u8 **)(s + 0x10) + 0x10 + 4) = 0.0f;
        }
        func_001F5CB0(*(u8 **)(s + 0x10));
    }
}
// differs: 0x184 against 0x1A0 bytes (9 instructions short, the same clamp loop as func_002CE500): the constant 1.0 and 0.0 registers and the k product are arranged differently; the tail reloads of s->0x10 match except the first load. Four variants tried (hoisted constants, tail reuse).
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CE7E0);
void func_002CE980(u8 *a0) {
    u8 *s0 = a0;
    u8 *s2 = a0 + 0x30;
    s32 s1 = *(s32 *)((u8 *)D_0051CD00[0] + 0x1C);
    u8 *v;
    if (*(s32 *)(s0 + 0x30) != 0) {
        func_00125740(D_00495718, s2 + 0x10, 0x10);
        func_00125740(D_00495758, s2 + 0x20, 0x10);
    }
    if (s1 != 0) {
        D_00470238 = 0;
        amModel_SetCurrent(s1, 0x2001000);
    }
    func_001F5A70(*(s32 *)(s0 + 0x10));
    v = *(u8 **)(s0 + 0x10);
    s1 = *(s32 *)(v + 8);
    func_001F3DF0(s0);
    if (s1 != 0) {
        func_0013E2A0(*(s32 *)s1);
        func_0013E170(*(s32 *)s1);
    } else {
        func_0013E0A0(*(s32 *)(*(u8 **)(s0 + 0x10) + 4));
    }
    BtbObj_CheckDrawFlags(s0);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CEA60);
void func_002CEC50(void) {
    s32 d;
    s32 r;
    u8 *v;
    func_001F7DB0();
    func_001F7BF0();
    func_001F7820();
    func_001F7690();
    func_001F6E50();
    func_001F6D60();
    d = D_0051CD0C[0];
    switch (D_0051CD20[0]) {
    case 0:
        v = (u8 *)func_001F5EF0(4, 3);
        BtbObj_RemoveByKey(v);
        v = (u8 *)func_001F5EF0(3, 2);
        func_001F5B10(*(u8 **)(v + 4), 0);
        v = (u8 *)func_001F5EF0(1, 0);
        func_001F5B10(*(u8 **)(v + 4), 0);
        break;
    case 1:
        v = (u8 *)func_001F5EF0(3, 1);
        *(s16 *)(*(u8 **)(v + 0x10) + 0xE) = 1;
        r = func_001A50F0(d, 0x27E);
        *(s32 *)(*(u8 **)(v + 0x10)) = r;
        func_001F5B70(v);
        func_002CEA60();
        func_001F7470(2);
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CED60);
void func_002CF010(u8 *a) {
    u8 *s = *(u8 **)(a + 0x10);
    if (*(s32 *)(s + 0xC) != 0) {
        func_001F5D50(s);
    }
    if (*(s32 *)(s + 8) != 0) {
        func_001F5E20(s);
        amMotion_BuildMatrices(*(s32 *)*(u8 **)(s + 8));
    }
}
void func_002CF070(void) {
    s32 v = func_001F5EF0(0, 0);
    u8 *o = func_001F5FD0(0x84000000, D_0046F258, v, func_002CED60, func_002CF010);
    *(s32 *)(o + 0x20) &= ~0x100;
    *(s32 *)(o + 0x20) |= 0x100;
    memset(o + 0x30, 0, 0x80);
}
void func_002CF0E0(void) {
    u8 *v;
    func_001F7DB0();
    func_001F7BF0();
    func_001F7820();
    func_001F7690();
    func_001F6E50();
    switch (D_0051CD20[0]) {
    case 0:
        v = (u8 *)func_001F5EF0(3, 1);
        func_001F5B10(*(u8 **)(v + 4), 0);
        BtbObj_RemoveByIdx(4, 3);
        func_001F7470(2);
        break;
    case 1:
        func_002CDC20();
        break;
    }
}
#if 0
s32 func_002CF180(u8 *s0) {
    s32 k = *(s32 *)s0;
    u8 *p = D_005C206C + k * 40;
    f32 f0;
    if (*(s32 *)p != 0) {
        return 0;
    }
    *(s32 *)p += 1;
    *(u8 **)(D_005C2074 + k * 40) = D_005C2060 + k * 40 + 0x18;
    *(s32 *)(s0 + 8) = 9;
    *(s32 *)(s0 + 0xC) = 0;
    *(s32 *)(s0 + 0x10) = 0;
    f0 = func_00146E30(*(s32 *)(gBattle + 0x264), *(s32 *)(s0 + 4));
    f0 = D_00470154 / f0;
    f0 = (f0 > 1.0f) ? 1.0f : f0;
    *(f32 *)(s0 + 0x14) = f0;
    k = *(s32 *)s0;
    *(f32 *)(D_005C2070 + k * 40) = f0;
    return 1;
}
// differs: the counter test and the return value are laid out differently (the original tests the counter with beqz and returns 0 in the delay slot of a b): 0xE8 against 0x100 bytes
#endif
s32 func_002CF180(u8 *p) {
    s32 k = *(s32 *)p;
    s32 *e = (s32 *)(D_005C206C + k * 40);
    f32 f;
    if (e[0] != 0) {
        return 0;
    }
    e[0] = e[0] + 1;
    k = *(s32 *)p;
    *(s32 *)(D_005C2074 + k * 40) = (s32)(D_005C2060 + k * 40 + 0x18);
    ((s32 *)p)[2] = 9;
    ((s32 *)p)[3] = 0;
    ((s32 *)p)[4] = 0;
    f = func_00146E30(*(s32 *)(gBattle + 0x264), ((s32 *)p)[1]);
    f = D_00470154 / f;
    f = (f > 1.0f) ? 1.0f : f;
    ((f32 *)p)[5] = f;
    k = *(s32 *)p;
    *(f32 *)(D_005C2070 + k * 40) = f;
    return 1;
}
s32 func_002CF280(void) {
    return 0;
}
s32 func_002CF290(void) {
    return 0;
}
s32 func_002CF2A0(void) {
    return 0;
}
s32 func_002CF2B0(u8 *s0) {
    f32 f20 = 1.0f;
    s32 k = *(s32 *)s0;
    u8 *p = D_005C2068 + k * 40;
    f32 f0;
    if (*(s32 *)p != 0) {
        f20 = 0.3f;
    } else {
        *(s32 *)p += 1;
    }
    k = *(s32 *)s0;
    *(s32 *)(D_005C2074 + k * 40) = 0;
    *(s32 *)(s0 + 8) = 3;
    *(s32 *)(s0 + 0xC) = 0;
    *(s32 *)(s0 + 0x10) = 0;
    f0 = func_00146E30(*(s32 *)(gBattle + 0x264), *(s32 *)(s0 + 4));
    f0 = D_00470154 / f0;
    f0 = (f0 > 1.0f) ? 1.0f : f0;
    *(f32 *)(s0 + 0x14) = f20 * f0;
    return 1;
}
s32 func_002CF3A0(void) {
    return 0;
}
extern u8 D_005C2064[];
extern u32 func_0012EAE0(s32);
#if 0
s32 func_002CF3B0(u8 *p) {
    s32 k = *(s32 *)p;
    s32 *e = (s32 *)(D_005C2064 + k * 40);
    u32 r;
    f32 f;
    f32 g;
    f32 f2;
    if (e[0] != 0) {
        return 0;
    }
    e[0] = e[0] + 1;
    r = func_0012EAE0(0x20) % 10 + 1;
    f = (f32)r / 20.0f;
    f2 = f / 0.1f;
    k = *(s32 *)p;
    *(s32 *)(D_005C2074 + k * 40) = 0;
    ((s32 *)p)[2] = 1;
    ((s32 *)p)[3] = 0;
    ((s32 *)p)[4] = 0;
    g = func_00146E30(*(s32 *)(gBattle + 0x264), ((s32 *)p)[1]);
    f2 = f2 + g;
    g = D_00470154 / g;
    if (g > 1.0f) {
        g = 1.0f;
    }
    ((f32 *)p)[5] = f2 * g;
    return 1;
}
// differs: same shape as func_002CF180 (table of 0x28 entries, a random value divided by 20 and a 0.1f division); the 0.1f constant is loaded before the k reload in the original and the division sits in the delay slot of the call: 39 of 87 differ with the division placed after the first stores (62 with it before).
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CF3B0);
#if 0
s32 func_002CF500(u8 *p) {
    s32 k = *(s32 *)p;
    s32 *e = (s32 *)(D_005C2060 + k * 40);
    u32 r;
    f32 f;
    f32 g;
    f32 f2;
    if (e[0] != 0) {
        return 0;
    }
    e[0] = e[0] + 1;
    r = func_0012EAE0(0x20) % 10 + 1;
    f = (f32)r / 20.0f;
    f2 = f / 0.1f;
    k = *(s32 *)p;
    *(s32 *)(D_005C2074 + k * 40) = 0;
    ((s32 *)p)[2] = D_0051CD20[0] << 4;
    ((s32 *)p)[3] = 0;
    ((s32 *)p)[4] = 0;
    g = func_00146E30(*(s32 *)(gBattle + 0x264), ((s32 *)p)[1]);
    f2 = f2 + g;
    g = D_00470154 / g;
    if (g > 1.0f) {
        g = 1.0f;
    }
    ((f32 *)p)[5] = f2 * g;
    return 1;
}
// differs: same shape as func_002CF180 (table of 0x28 entries, a random value divided by 20 and a 0.1f division); the 0.1f constant is loaded before the k reload in the original and the division sits in the delay slot of the call: 39 of 87 differ with the division placed after the first stores (62 with it before).
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CF500);
void func_002CF650(s32 flag) {
    s32 i;
    u8 *p = D_005C2060;
    for (i = 0; i < 2; i++) {
        if (*(void **)(p + 0x14) != NULL) {
            if (flag != 0) {
                func_001444E0(*(void **)(p + 0x14), 0.0f, 0);
            } else {
                func_001444E0(*(void **)(p + 0x14), *(f32 *)(p + 0x10), 0);
            }
        }
        p += 0x28;
    }
}
void func_002CF6E0(s32 i, s32 kind) {
    s32 off;
    switch (kind) {
    case 9:
        off = i * 40;
        func_00144430(D_005C2060 + off + 0x18);
        *(s32 *)(D_005C206C + off) = 0;
        *(s32 *)(D_005C2074 + off) = 0;
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CF750);
#if 0
void func_002CF820(void) {
    s32 i = 0;
    u8 *p = D_005C2060;
    if (*(s32 *)(gBattle + 0x88D8) > 0) {
        do {
            if (*(s32 *)(p) != 0) {
                s32 t = *(s32 *)(p) + 1;
                *(s32 *)(p) = t;
                if (t > D_00470148) {
                    *(s32 *)(p) = 0;
                }
            }
            if (*(s32 *)(p + 4) != 0) {
                s32 t = *(s32 *)(p + 4) + 1;
                *(s32 *)(p + 4) = t;
                if (t > D_0047014C) {
                    *(s32 *)(p + 4) = 0;
                }
            }
            if (*(s32 *)(p + 8) != 0) {
                s32 t = *(s32 *)(p + 8) + 1;
                *(s32 *)(p + 8) = t;
                if (t > D_00470150) {
                    *(s32 *)(p + 8) = 0;
                }
            }
            i += 1;
            p += 0x28;
        } while (i < *(s32 *)(gBattle + 0x88D8));
    }
}
// differs: the counter updates match; the build is one nop short (0xC0 bytes against 0xC4): the original pads the join after the third counter
#endif
void func_002CF820(void) {
    s32 i = 0;
    s32 *p;
    if (0 < *(s32 *)(gBattle + 0x88D8)) {
        p = (s32 *)D_005C2060;
        do {
            if (p[0] != 0) {
                s32 v = p[0] + 1;
                p[0] = v;
                if (D_00470148 < v) {
                    p[0] = 0;
                }
            }
            if (p[1] != 0) {
                s32 v = p[1] + 1;
                p[1] = v;
                if (D_0047014C < v) {
                    p[1] = 0;
                }
            }
            if (p[2] != 0) {
                s32 v = p[2] + 1;
                p[2] = v;
                if (D_00470150 < v) {
                    p[2] = 0;
                }
            }
            i++;
            p += 10;
        } while (i < *(s32 *)(gBattle + 0x88D8));
    }
}

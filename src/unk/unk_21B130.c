#include "common.h"

f32 func_0011F320(f32);
void func_0022C7D0(f32, s32);
void func_0022ACF0(s32);

extern s32 D_00470698;
extern s32 D_004706A0[2];
extern void (*D_0046A450[])(void);
void func_00125740(void *, void *, s32);
s32 func_002408C0(void);

typedef struct V16 {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} V16;
extern V16 D_0044F710;
extern s32 D_00470688;
void func_0012F2C0(void);
void func_00133780(s32, s32);
s32 amGs_SetReg32(s32, s32);
void func_00139620(s32, void *, s32, s32, s32, f32);
void func_00228430(s32);
void func_002284D0(s32);

extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
void amModel_SetCurrent(s32, s32);
void func_0022C060(f32);
void func_0021B1E0(void);

extern s32 D_0047068C;
s32 func_00225380(void);
void func_00224F90(void);
void func_0023A7A0(void);
void func_0022D0E0(s32, s32);
void func_002401A0(void);
void func_00259FE0(void);
void func_002CD810(void);
void func_002E9770(void);
void amTask_KillGroup(s32, s32, s32);

extern s32 D_0047068C;
extern f32 D_00470690;
extern f32 D_00470710;
extern f32 D_00470694;
typedef struct FPair {
    f32 a;
    f32 b;
} FPair;
void func_0022DB20(f32, f32);
void func_0021BEA0(u8 *, s32);
void func_0022C560(s32);

extern s32 D_0046A470[];
void func_002400E0(void);

void func_0022D0E0(s32, s32);

extern u8 *gBattle;
extern s32 D_00470680;
extern s32 D_00470684;
extern s32 D_00470688;
extern s32 D_00470698;
extern s32 D_0046A470[];
extern void memset(void *, s32, s32);
extern void func_00133780(s32, s32);
extern s32 amGs_SetReg32(s32, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void func_00228410();
extern void func_0022C560(s32);
extern void func_0021B130(void);
extern void func_0023FBB0(void);
extern void func_0021CA20(void);

extern u8 *gBtlSys;
extern s32 D_00470680;
extern s32 D_00470684;

#if 0
void func_0021B130(void) {
    s32 m = D_00470684 & D_00470680;
    FPair p;

    if ((m & 0x80000000) && (m & 2) == 2) {
        if (D_0047068C != 0) {
            p.b = D_00470690;
            p.a = D_00470694;
            func_0022DB20(p.b, p.a);
            func_0021BEA0((u8 *)D_0047068C, 0x18);
            func_0022C560(D_0047068C);
            func_0022DB20(0.0f, 0.0f);
        }
    }
}
// differs: the two float arguments are copied through the stack (lwc1 to 24 and 28 of a 0x30 frame) in the original, the same copy as func_0023FBB0 in unk_23A890; the local forms tried do not give that copy; round 5: `volatile FPair p` does not compile (mwcc aborts on the volatile struct)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B130);
void func_0021B1E0(void) {
    u8 *sys = gBtlSys;
    f32 f1;
    f32 f2;
    f32 f3;
    s32 mode;
    s32 st;

    f1 = *(f32 *)(sys + 0xE00) + D_00470710;
    *(f32 *)(sys + 0xE00) = f1;
    if (f1 > *(f32 *)(sys + 0xE08)) {
        *(s32 *)(sys + 0xDF8) = 0;
        return;
    }
    if (f1 < *(f32 *)(sys + 0xE04)) {
        return;
    }
    f2 = f1 - *(f32 *)(sys + 0xE04);
    mode = *(s32 *)(sys + 0xDFC);
    f3 = *(f32 *)(sys + 0xE0C);
    f1 = *(f32 *)(sys + 0xE10);
    switch (mode) {
    case 0:
        if (!(f2 < f1)) {
            f2 = f2 - f1;
            *(s32 *)(sys + 0xDF8) = 1;
            f3 = f3 - f1;
        }
        break;
    case 1:
        f3 = f3 - f1;
        if (!(f2 < f3)) {
            *(s32 *)(sys + 0xDF8) = 3;
        }
        break;
    case 2:
        f3 = f3 / 2.0f;
        f1 = f1 / 2.0f;
        if (!(f2 < f3)) {
            f2 = f2 - f3;
            if (!(f2 < f1)) {
                f2 = f2 - f1;
                *(s32 *)(sys + 0xDF8) = 1;
                f3 = f3 - f1;
            }
        } else {
            f3 = f3 - f1;
            if (!(f2 < f3)) {
                *(s32 *)(sys + 0xDF8) = 3;
            }
        }
        break;
    case 3:
        f3 = f3 / 2.0f;
        f1 = f1 / 2.0f;
        if (!(f2 < f3)) {
            f2 = f2 - f3;
            if (!(f2 < f3)) {
                *(s32 *)(sys + 0xDF8) = 3;
            }
        } else {
            f3 = f3 - f1;
            if (!(f2 < f1)) {
                f2 = f2 - f1;
                *(s32 *)(sys + 0xDF8) = 1;
                f3 = f3 - f1;
            }
        }
        break;
    }
    st = *(s32 *)(sys + 0xDF8);
    switch (st) {
    case 1:
        f1 = 1.0f - f2 / f3;
        break;
    case 2:
        f1 = f2 / f3;
        break;
    case 3:
        f1 = 1.0f;
        break;
    default:
        f1 = 0.0f;
        break;
    }
    if (f1 < 0.0f) {
        f1 = 0.0f;
    }
    if (f1 > 1.0f) {
        f1 = 1.0f;
    }
    *(f32 *)(sys + 0xE2C) = f1;
}
#if 0
void func_0021B420(void) {
    u8 *sys = gBtlSys;
    f32 x;
    f32 q;
    f32 r;
    s32 n;

    if (*(f32 *)(sys + 0xDF4) == -2.0f) {
        return;
    }
    if (*(f32 *)(sys + 0xDF4) == -1.0f) {
        return;
    }
    x = *(f32 *)(sys + 0x640);
    if (x < 0.0f) {
        x = 0.0f;
    }
    q = x / 60.0f;
    r = func_0011F320(q);
    if (r < q) {
        r = r + 1.0f;
    }
    n = (s32)r;
    if (*(f32 *)((u8 *)D_0047068C + 0x10) == (f32)n) {
        return;
    }
    D_00470704 = *(s32 *)(sys + 0xE60);
    D_0047070C = 0x04000000;
    D_00470708 = 0;
    amModel_SetCurrent(*(s32 *)(sys + 0xE60), 0x04000000);
    D_00470238 = 0;
    func_0022C7D0((f32)n, 1);
    func_0022ACF0(D_0047068C);
}
// differs: 22 of 72 (round 5). The (s32) cast is NOT the problem: the original's word 0x46000024 is what the cast emits too (the disassemblers only name it differently). Tried live: the two early exits as one `||` test (shares the return), D_0047068C loaded before the cast, the px = sys+0x640 pointer, and the call func_0022C7D0(D_0047068C, (f32)n, 1) (signature (s32, f32, s32), the file's first declaration must match). Left: the last call func_0022ACF0 gets a nop before the epilogue and the early exits jump past ld ra/lq s1, the original's exits go to the epilogue directly.
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B420);
s32 func_0021B540(void) {
    s32 r = 0;
    s32 *p = &D_00470698;
    s32 *tbl = (s32 *)(void *)D_0046A470;
    s32 f;

    f = amCdFs_ReadFileId((tbl[1] << 16) | tbl[0], 0, 0);
    if (f != 0) {
        *p = f;
        r = f;
    }
    f = amCdFs_ReadFileId(0x10001, 0, 0);
    if (f != 0) {
        D_004706A0[0] = f;
        r = f;
    }
    return r;
}
s32 func_0021B5D0(void) {
    s32 r = 0;
    s32 *p = &D_00470698;
    s32 *tbl = (s32 *)(void *)D_0046A470;
    s32 f;

    f = amCdFs_ReadFileId((tbl[1] << 16) | tbl[0], 0, 0);
    if (f != 0) {
        *p = f;
        r = f;
    }
    f = amCdFs_ReadFileId(0x10003, 0, 0);
    if (f != 0) {
        D_004706A0[0] = f;
        r = f;
    }
    return r;
}
s32 func_0021B660(void) {
    s32 r = 0;
    s32 *p = &D_00470698;
    s32 *tbl = (s32 *)(void *)D_0046A470;
    s32 f;

    f = amCdFs_ReadFileId((tbl[1] << 16) | tbl[0], 0, 0);
    if (f != 0) {
        *p = f;
        r = f;
    }
    f = amCdFs_ReadFileId(0x10002, 0, 0);
    if (f != 0) {
        D_004706A0[0] = f;
        r = f;
    }
    return r;
}
s32 func_0021B6F0(void) {
    s32 r = 0;
    s32 *p = &D_00470698;
    s32 *tbl = (s32 *)(void *)D_0046A470;
    s32 f;

    f = amCdFs_ReadFileId((tbl[1] << 16) | tbl[0], 0, 0);
    if (f != 0) {
        *p = f;
        r = f;
    }
    return r;
}
// differs: the table address is kept in v0 for its two loads (lui/addiu once), here it is folded into each load; the pointer to D_00470698 in s0 is the same
void func_0021B760(void) {
    func_00228410();
    func_00133780(2, 0);
    amGs_SetReg32(2, D_00470688);
}
void func_0021B7A0(u8 *obj) {
    s32 *p;

    if (*(s8 *)(gBattle + 0x8975) != 1) {
        p = (s32 *)(obj + 0x30);
        if (*(s32 *)(obj + 0x30) != 0) {
            func_0022C560(*(s32 *)(obj + 0x30));
        }
        if (p[1] != 0) {
            func_0022C560(p[1]);
        }
    }
}
void func_0021B810(void) {
    if (*(s8 *)(gBattle + 0x8975) != 1) {
        if (D_00470680 & 0x80000000) {
            func_0021B130();
            func_0023FBB0();
        }
    }
}
void func_0021B870(void) {
    u8 *sys = gBtlSys;
    V16 t;

    func_0012F2C0();
    func_00133780(2, 1);
    D_00470688 = amGs_SetReg32(2, 0x30000);
    t = D_0044F710;
    func_00139620(0x902, &t, -1, 0x48, 0, 0.0f);
    amGs_SetReg32(2, 0x33001);
    if (*(s32 *)(sys + 0xDF8) != 0) {
        if (*(f32 *)(gBtlSys + 0xE00) >= *(f32 *)(gBtlSys + 0xE04)) {
            func_00139620(0x902, gBtlSys + 0xE20, -1, 0x44, 0, 0.0f);
        }
    }
    func_00228430(0);
    func_002284D0(0);
}
void func_0021B940(void) {
    u8 *v = *(u8 **)(gBtlSys + 0xEE8);
    s32 *s0;

    if (v != 0) {
        s0 = (s32 *)(v + 0x30);
        if (*(s32 *)(v + 0x30) != 0) {
            func_0022D0E0(*(s32 *)(v + 0x30), 1);
        }
        s0[0] = 0;
        if (s0[1] != 0) {
            func_0022D0E0(s0[1], 1);
        }
        s0[1] = 0;
    }
}
#if 0
void func_0021B9A0(void) {
    s32 *s1;
    u8 *sys = gBtlSys;
    u8 *v;
    s32 e;

    if (*(s32 *)(gBattle + 0x88EC) == 0) {
        e = *(s32 *)(sys + 0xE64);
        D_00470704 = e;
        D_0047070C = 0x04001000;
        D_00470708 = 0;
        amModel_SetCurrent(e, 0x04001000);
        D_00470238 = 0;
        v = *(u8 **)(sys + 0xEE8);
        if (v != 0) {
            s1 = (s32 *)(v + 0x30);
            if (*(s32 *)(v + 0x30) != 0) {
                func_0022C060(1.0f);
            }
            if (s1[1] != 0) {
                func_0022C060(1.0f);
            }
        }
        if (*(s32 *)(sys + 0xDF8) != 0) {
            func_0021B1E0();
        }
    }
}
// differs: the entry pointer is set up in a delay slot in the original, and its first field is loaded into a0 before the test (the temporaries differ in a few instructions). Round 5: sys = gBtlSys moved into the branch gives 37 of 49 (the load sits after a nop in the delay slot); with the test restructured (s1 set after the first test) the entry is kept in s1 instead of v1: 7 of 47. Still to do: keep the entry in v1 (the original sets s1 = entry + 0x30 in the delay slot of the first beqz, after the load).
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B9A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021BA60);
void func_0021BEA0(u8 *a0, s32 a1) {
    u8 *s0;
    u8 *s3;

    s0 = *(u8 **)(a0 + 0x2C);
    if (s0 != 0) {
        s3 = *(u8 **)(s0 + 0x2C);
        if (s3 != 0) {
            if (*(u8 **)(s3 + 0x2C) != 0) {
                func_0021BEA0(*(u8 **)(s3 + 0x2C), a1);
            }
            if (*(u8 **)(s3 + 0x28) != 0) {
                func_0021BEA0(*(u8 **)(s3 + 0x28), a1);
            }
            if (*(u8 **)(s3 + 0x30) != 0) {
                *(s32 *)(*(u8 **)(s3 + 0x30) + 4) |= a1;
            }
        }
        s3 = *(u8 **)(s0 + 0x28);
        if (s3 != 0) {
            if (*(u8 **)(s3 + 0x2C) != 0) {
                func_0021BEA0(*(u8 **)(s3 + 0x2C), a1);
            }
            if (*(u8 **)(s3 + 0x28) != 0) {
                func_0021BEA0(*(u8 **)(s3 + 0x28), a1);
            }
            if (*(u8 **)(s3 + 0x30) != 0) {
                *(s32 *)(*(u8 **)(s3 + 0x30) + 4) |= a1;
            }
        }
        if (*(u8 **)(s0 + 0x30) != 0) {
            *(s32 *)(*(u8 **)(s0 + 0x30) + 4) |= a1;
        }
    }
    s0 = *(u8 **)(a0 + 0x28);
    if (s0 != 0) {
        s3 = *(u8 **)(s0 + 0x2C);
        if (s3 != 0) {
            if (*(u8 **)(s3 + 0x2C) != 0) {
                func_0021BEA0(*(u8 **)(s3 + 0x2C), a1);
            }
            if (*(u8 **)(s3 + 0x28) != 0) {
                func_0021BEA0(*(u8 **)(s3 + 0x28), a1);
            }
            if (*(u8 **)(s3 + 0x30) != 0) {
                *(s32 *)(*(u8 **)(s3 + 0x30) + 4) |= a1;
            }
        }
        s3 = *(u8 **)(s0 + 0x28);
        if (s3 != 0) {
            if (*(u8 **)(s3 + 0x2C) != 0) {
                func_0021BEA0(*(u8 **)(s3 + 0x2C), a1);
            }
            if (*(u8 **)(s3 + 0x28) != 0) {
                func_0021BEA0(*(u8 **)(s3 + 0x28), a1);
            }
            if (*(u8 **)(s3 + 0x30) != 0) {
                *(s32 *)(*(u8 **)(s3 + 0x30) + 4) |= a1;
            }
        }
        if (*(u8 **)(s0 + 0x30) != 0) {
            *(s32 *)(*(u8 **)(s0 + 0x30) + 4) |= a1;
        }
    }
    if (*(u8 **)(a0 + 0x30) != 0) {
        *(s32 *)(*(u8 **)(a0 + 0x30) + 4) |= a1;
    }
}
u8 *func_0021C250(u8 *, u8 *);
#if 0
// differs: 11 of 116 (round 5). Recursive tree walk: the copies and the flag tests match; left: the sibling walk at the end (a2&1 block) takes the saved registers the other way round (original: the sibling goes into s2, the node pointer register reused after its last read). Reusing the parameter (a0 = sibling) changes the flag registers and the prologue (26 to 30 differ); declaration permutations tried, none better
void func_0021C080(u8 *a0, u8 *a1, s32 a2) {
    u8 *dst;
    u8 *s6;
    u8 *s2;
    u8 *s3;
    dst = *(u8 **)(a0 + 0x30);
    *(f32 *)(dst + 0x50) = *(f32 *)a1;
    *(f32 *)(dst + 0x54) = *(f32 *)(a1 + 4);
    *(f32 *)(dst + 0x58) = *(f32 *)(a1 + 8);
    if ((a2 & 4) != 0) {
        *(f32 *)(dst + 0x5C) = *(f32 *)(a1 + 0xC);
    }
    *(u8 *)(dst + 0x1C) = *(u8 *)(a1 + 0x10);
    *(u8 *)(dst + 0x1D) = *(u8 *)(a1 + 0x11);
    *(u8 *)(dst + 0x1E) = *(u8 *)(a1 + 0x12);
    *(u8 *)(dst + 0x1F) = *(u8 *)(a1 + 0x13);
    *(s32 *)(dst + 8) = *(s32 *)(a1 + 0x14);
    if ((a2 & 2) != 0) {
        s3 = *(u8 **)(a0 + 0x28);
        if (s3 != 0) {
            s6 = *(u8 **)(s3 + 0x30);
            *(f32 *)(s6 + 0x50) = *(f32 *)a1;
            *(f32 *)(s6 + 0x54) = *(f32 *)(a1 + 4);
            *(f32 *)(s6 + 0x58) = *(f32 *)(a1 + 8);
            if ((a2 & 4) != 0) {
                *(f32 *)(s6 + 0x5C) = *(f32 *)(a1 + 0xC);
            }
            func_0021C250(s6 + 0x1C, a1 + 0x10);
            *(s32 *)(s6 + 8) = *(s32 *)(a1 + 0x14);
            if ((a2 & 2) != 0) {
                if (*(u8 **)(s3 + 0x28) != 0) {
                    func_0021C080(*(u8 **)(s3 + 0x28), a1, a2);
                }
            }
            if ((a2 & 1) != 0) {
                if (*(u8 **)(s3 + 0x2C) != 0) {
                    func_0021C080(*(u8 **)(s3 + 0x2C), a1, a2);
                }
            }
        }
    }
    if ((a2 & 1) != 0) {
        s2 = *(u8 **)(a0 + 0x2C);
        if (s2 != 0) {
            s6 = *(u8 **)(s2 + 0x30);
            *(f32 *)(s6 + 0x50) = *(f32 *)a1;
            *(f32 *)(s6 + 0x54) = *(f32 *)(a1 + 4);
            *(f32 *)(s6 + 0x58) = *(f32 *)(a1 + 8);
            if ((a2 & 4) != 0) {
                *(f32 *)(s6 + 0x5C) = *(f32 *)(a1 + 0xC);
            }
            func_0021C250(s6 + 0x1C, a1 + 0x10);
            *(s32 *)(s6 + 8) = *(s32 *)(a1 + 0x14);
            if ((a2 & 2) != 0) {
                if (*(u8 **)(s2 + 0x28) != 0) {
                    func_0021C080(*(u8 **)(s2 + 0x28), a1, a2);
                }
            }
            if ((a2 & 1) != 0) {
                if (*(u8 **)(s2 + 0x2C) != 0) {
                    func_0021C080(*(u8 **)(s2 + 0x2C), a1, a2);
                }
            }
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021C080);
u8 *func_0021C250(u8 *d, u8 *s) {
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
    d[3] = s[3];
    return d;
}
s32 func_0021C280(s32 a) {
    u32 v = a ^ (a & D_00470684);

    return v < 1;
}
s32 Input_IsHeld(s32 a) {
    s32 m = D_00470684 & D_00470680;

    if (m & 0x80000000) {
        if (a == (a & m)) {
            return 1;
        }
    }
    return 0;
}
typedef struct BtlCnt {
    u8 pad[0x88D8];
    s32 n;
} BtlCnt;
#if 0
// differs: 0x80 bytes, as the original; the count test matches with a BtlCnt view (lui 1 + offset -0x7728, as the original); the original preloads v0 = -1 before the id test and returns through one shared epilogue (b to the final jr); ours has two jr ra. Tried: a single result variable with break (0x70 bytes).
s32 func_0021C2E0(s32 id) {
    u8 *p;
    s32 *n;
    s32 i;

    if (id == -1) {
        return -1;
    }
    if (0 < ((BtlCnt *)gBattle)->n) {
        i = 0;
        p = gBtlSys;
        n = (s32 *)(gBattle + 0x88D8);
        do {
            if (id == *(s16 *)(p + 0x3E)) {
                return i;
            }
            p += 0x190;
            i++;
        } while (i < *n);
    }
    return -1;
}
// (see the note above the function: the test is the BtlCnt view now)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021C2E0);
s32 func_0021C360(s32 id) {
    s32 i;
    u8 *sys;
    u8 *bw;
    s32 c;

    bw = gBattle + 0x10000;
    sys = gBtlSys;
    i = 0;
    if (0 < *(s32 *)(bw - 0x7728)) {
        do {
            c = *(s8 *)(sys + i + 0xCA0);
            if (c == id) {
                return i;
            }
            i++;
        } while (i < *(s32 *)(gBattle + 0x88D8));
    }
    return -1;
}
s32 func_0021C3D0(s32 i) {
    return *(s8 *)(i + (s32)gBtlSys + 0xCA0);
}
u8 *func_0021C3E0(s32 i) {
    return gBtlSys + 0xCB0 + i * 0x50;
}
u8 *func_0021C400(s32 i) {
    return gBtlSys + 0x760 + i * 0x190;
}
u8 *func_0021C430(s32 i) {
    return gBtlSys + 0x650 + i * 0x190;
}
s32 func_0021C460(s32 id) {
    u8 *sys = gBtlSys;
    u8 *cur = sys + id * 0x190;
    u8 *oth = sys + (id ^ 1) * 0x190;
    s32 c;
    s32 v;

    if (id == -1) {
        return -1;
    }
    c = *(s16 *)(cur + 0x3E);
    if (c == -1) {
        return -1;
    }
    if (c & 1) {
        v = *(s16 *)(oth + 0x3E);
        if (v == -1 || !(v & 1)) {
            return 1;
        }
    } else {
        v = *(s16 *)(oth + 0x3E);
        if (v == -1 || (v & 1)) {
            return 0;
        }
    }
    if (c < v) {
        return 0;
    }
    return 1;
}
void func_0021C540(f32 a, f32 b, f32 c) {
    u8 *sys = gBtlSys;

    *(f32 *)(sys + 0xE20) = a;
    *(f32 *)(sys + 0xE24) = b;
    *(f32 *)(sys + 0xE28) = c;
}
void func_0021C560(s32 mode, f32 a, f32 b, f32 c) {
    u8 *sys = gBtlSys;

    *(s32 *)(sys + 0xDFC) = mode;
    *(s32 *)(sys + 0xE00) = 0;
    *(f32 *)(sys + 0xE0C) = b - a;
    *(f32 *)(sys + 0xE04) = a;
    *(f32 *)(sys + 0xE08) = b;
    *(f32 *)(sys + 0xE10) = c;
    if (mode == 0 || mode == 3) {
        *(s32 *)(sys + 0xDF8) = 3;
    } else {
        *(s32 *)(sys + 0xDF8) = 2;
    }
}
void func_0021C5B0(s32 m) {
    D_00470680 &= ~m;
}
void func_0021C5D0(s32 f) {
    D_00470680 |= f;
}
void func_0021C5E0(s32 a, s32 b) {
    D_00470680 &= a;
    D_00470680 |= b;
}
u8 *func_0021C600(void) {
    return gBtlSys + 0x640;
}
u8 *func_0021C610(void) {
    return gBtlSys + 0xDF0;
}
u8 *BtlSys_GetSlot(s32 i) {
    u8 *sys = gBtlSys;

    if (i == -1) {
        return 0;
    }
    return sys + i * 0x190 + 0x110;
}
u8 *func_0021C660(s32 i) {
    return gBtlSys + i * 0x190;
}
u8 *func_0021C680(s32 i) {
    return gBtlSys + i * 0x190;
}
void func_0021C6A0(void) {
    u8 *sys = gBtlSys;

    func_0021CA20();
    memset(sys, 0, 0xF00);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021C6E0);
void func_0021CA20(void) {
    u8 *sys = gBtlSys;

    *(s32 *)(sys + 0xE30) = 0;
    *(s32 *)(sys + 0xDF8) = 0;
    if (func_00225380() == -1) {
        func_00224F90();
        *(s16 *)(sys + 0xE44) = 0;
    }
    func_0023A7A0();
    *(s32 *)(sys + 0xEE0) = 0;
    *(s32 *)(sys + 0xEE4) = 0;
    *(s32 *)(sys + 0xEE8) = 0;
    *(s32 *)(sys + 0xEEC) = 0;
    *(s32 *)(sys + 0xEF0) = 0;
    if (D_0047068C != 0) {
        func_0022D0E0(D_0047068C, 1);
        D_0047068C = 0;
    }
    func_002401A0();
    func_00259FE0();
    func_002CD810();
    func_002E9770();
    amTask_KillGroup(0x1000, 0x2000000, 0);
}
extern u8 D_0046A4E8[];
extern u8 D_0046A4F8[];
extern u8 D_0046A508[];
extern u8 D_0046A518[];
extern u8 D_0046A528[];
s32 amTask_Create(void (*)(void), void (*)(void), s32, s32, s32, void *);
s32 func_0022D860(s32, f32);
void func_0021B9A0(void);
void func_0021BA60(void);
void func_002E97E0(void);
void amModel_SetCurrent(s32, s32);
void func_0021CAD0(void) {
    u8 *s0 = gBtlSys;
    u8 *s2 = s0 + 0xDF0;
    s32 v;
    s32 e;

    if (*(s32 *)(s0 + 0xEE0) == 0) {
        if (*(s16 *)(s0 + 0xDF0) == 6) {
            *(s32 *)(s0 + 0xEE0) = amTask_Create(func_0021B9A0, func_0021B940, 0x5400, 0x1000, 0x2000002, D_0046A4E8);
        } else {
            *(s32 *)(s0 + 0xEE0) = amTask_Create(func_0021BA60, 0, 0x5400, 0x1000, 0x2000002, D_0046A4F8);
        }
    }
    if (*(s32 *)(s0 + 0xEE4) == 0) {
        *(s32 *)(s0 + 0xEE4) = amTask_Create(func_0021B870, 0, 0x3A00, 0x1000, 0x2000008, D_0046A508);
    }
    if (*(s32 *)(s0 + 0xEE8) == 0) {
        if (*(s16 *)(s0 + 0xDF0) == 6) {
            *(s32 *)(s0 + 0xEE8) = amTask_Create((void (*)(void))func_0021B7A0, 0, 0x3A80, 0x1000, 0x2000008, D_0046A518);
            e = *(s32 *)(s0 + 0xE64);
            v = *(s32 *)(s0 + 0xEE8) + 0x30;
            D_00470704 = e;
            D_0047070C = 0x4001000;
            D_00470708 = 0;
            amModel_SetCurrent(e, 0x4001000);
            D_00470238 = 0;
            func_00228430(0);
            func_002284D0(0);
            *(s32 *)v = func_0022D860(*(s32 *)(*(s32 *)(*(s32 *)(s0 + 0xE6C) + 0x14)), 0.0f);
            *(s32 *)(v + 4) = func_0022D860(*(s32 *)(*(s32 *)(*(s32 *)(s0 + 0xE6C) + 0x14) + 4), 0.0f);
            func_00228410();
        } else {
            *(s32 *)(s0 + 0xEE8) = amTask_Create(func_0021B810, 0, 0x3A80, 0x1000, 0x2000008, D_0046A518);
        }
    }
    if (*(s32 *)(s0 + 0xEEC) == 0) {
        *(s32 *)(s0 + 0xEEC) = amTask_Create(func_0021B760, 0, 0x3AF0, 0x1000, 0x2000008, D_0046A528);
    }
    if (*(s16 *)s2 == 4) {
        func_002E97E0();
    }
}
void func_0021CCF0(void) {
    u8 *sys = gBtlSys;
    s32 *tbl = (s32 *)(void *)D_0046A470;

    if (*(s32 *)tbl[2] != 0) {
        amHeap_Free(*(void **)tbl[2]);
        *(s32 *)tbl[2] = 0;
    }
    if (*(s32 *)(sys + 0xE80) != 0) {
        amHeap_Free(*(void **)(sys + 0xE80));
        *(s32 *)(sys + 0xE80) = 0;
    }
    if (*(s32 *)(sys + 0xE5C) != 0) {
        amHeap_Free(*(void **)(sys + 0xE5C));
        *(s32 *)(sys + 0xE5C) = 0;
    }
    *(s32 *)(sys + 0xE64) = 0;
    *(s32 *)(sys + 0xE6C) = 0;
    func_002400E0();
}
// differs: the table address is kept in s0 for its two loads, and the first load is folded into lui/lw in the original (the pointer is set up after it)
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021CD80);
s32 func_0021D170(u8 *o) {
    u8 *sys = gBtlSys;
    u8 *s1 = sys + 0xDF0;
    s32 r;
    s32 t;

    memset(sys, 0, 0xF00);
    memset(&D_00470698, 0, 4);
    memset(D_004706A0, 0, 8);
    *(s16 *)(s1 + 0) = *(s16 *)(o + 0x152);
    *(s16 *)(s1 + 2) = *(s16 *)(o + 0x15A);
    *(f32 *)(gBtlSys + 0xDF4) = (f32)*(s32 *)(o + 0x15C);
    func_00125740(gBtlSys + 0xCB0, o + 0x10, 0x140);
    if (*(s16 *)(sys + 0xDF0) == 3) {
        *(s16 *)(sys + 0xE52) = 0;
    }
    r = 0;
    D_0046A450[*(s16 *)(s1 + 0)]();
    t = func_002408C0();
    if (t != 0) {
        r = t;
    }
    return r;
}

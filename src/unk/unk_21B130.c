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
void func_00145CC0(s32, s32);
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
extern f32 D_00470694;
typedef struct FPair {
    f32 a;
    f32 b;
} FPair;
void func_0022DB20(f32, f32);
void func_0021BEA0(s32, s32);
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
extern void func_00228410(void);
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
            func_0021BEA0(D_0047068C, 0x18);
            func_0022C560(D_0047068C);
            func_0022DB20(0.0f, 0.0f);
        }
    }
}
// differs: the two float arguments are copied through the stack (lwc1 to 24 and 28 of a 0x30 frame) in the original, the same copy as func_0023FBB0 in unk_23A890; the local forms tried do not give that copy
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B130);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B1E0);
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
    func_00145CC0(*(s32 *)(sys + 0xE60), 0x04000000);
    D_00470238 = 0;
    func_0022C7D0((f32)n, 1);
    func_0022ACF0(D_0047068C);
}
// differs: the float-to-int step is cvt.w.s (rounding) in the original, where this (int) cast gives trunc.w.s; the float block around it is otherwise close
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B420);
#if 0
s32 func_0021B540(void) {
    s32 r = 0;
    s32 *p = &D_00470698;
    s32 *tbl = D_0046A470;
    s32 f;

    f = amCdFs_ReadFileId((tbl[1] << 16) | tbl[0], 0, 0);
    if (f != 0) {
        *p = f;
        r = f;
    }
    f = amCdFs_ReadFileId(0x10001, 0, 0);
    if (f != 0) {
        D_004706A0 = f;
        r = f;
    }
    return r;
}
// differs: same table-load shape as func_0021B6F0 (the table address folded into each load, the register roles of the two locals swapped)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B540);
#if 0
s32 func_0021B5D0(void) {
    s32 r = 0;
    s32 *p = &D_00470698;
    s32 *tbl = D_0046A470;
    s32 f;

    f = amCdFs_ReadFileId((tbl[1] << 16) | tbl[0], 0, 0);
    if (f != 0) {
        *p = f;
        r = f;
    }
    f = amCdFs_ReadFileId(0x10003, 0, 0);
    if (f != 0) {
        D_004706A0 = f;
        r = f;
    }
    return r;
}
// differs: same table-load shape as func_0021B6F0 (the table address folded into each load, the register roles of the two locals swapped)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B5D0);
#if 0
s32 func_0021B660(void) {
    s32 r = 0;
    s32 *p = &D_00470698;
    s32 *tbl = D_0046A470;
    s32 f;

    f = amCdFs_ReadFileId((tbl[1] << 16) | tbl[0], 0, 0);
    if (f != 0) {
        *p = f;
        r = f;
    }
    f = amCdFs_ReadFileId(0x10002, 0, 0);
    if (f != 0) {
        D_004706A0 = f;
        r = f;
    }
    return r;
}
// differs: same table-load shape as func_0021B6F0 (the table address folded into each load, the register roles of the two locals swapped)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B660);
#if 0
s32 func_0021B6F0(void) {
    s32 r = 0;
    s32 *p = &D_00470698;
    s32 *tbl = D_0046A470;
    s32 f;

    f = amCdFs_ReadFileId((tbl[1] << 16) | tbl[0], 0, 0);
    if (f != 0) {
        *p = f;
        r = f;
    }
    return r;
}
// differs: the table address is kept in v0 for its two loads (lui/addiu once), here it is folded into each load; the pointer to D_00470698 in s0 is the same
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B6F0);
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
        func_00145CC0(e, 0x04001000);
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
// differs: the entry pointer is set up in a delay slot in the original, and its first field is loaded into a0 before the test (the temporaries differ in a few instructions)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B9A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021BA60);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021BEA0);
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
s32 func_0021C2A0(s32 a) {
    s32 m = D_00470684 & D_00470680;

    if (m & 0x80000000) {
        if (a == (a & m)) {
            return 1;
        }
    }
    return 0;
}
#if 0
s32 func_0021C2E0(s32 id) {
    u8 *p;
    s32 *n;
    s32 i;

    if (id == -1) {
        return -1;
    }
    if (0 < *(s32 *)(gBattle + 0x88D8)) {
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
// differs: the base pointer is loaded and folded in another order (lui and the offset split, a1 kept for the base)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021C2E0);
#if 0
s32 func_0021C360(s32 id) {
    u8 *bw = gBattle;
    u8 *sys = gBtlSys;
    s32 i;

    if (0 < *(s32 *)(bw + 0x88D8)) {
        for (i = 0; i < *(s32 *)(bw + 0x88D8); i++) {
            if (*(s8 *)(sys + i + 0xCA0) == id) {
                return i;
            }
        }
    }
    return -1;
}
// differs: the count is read again in the loop test through a register of its own (lw from 0(a1)), and the frame is 0x10 bigger: the loop shape differs
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021C360);
#if 0
s32 func_0021C3D0(s32 i) {
    return *(s8 *)(gBtlSys + i + 0xCA0);
}
// differs: the sum D + i is added with the operands in the other order (addu v0, a0, v0), not reached by the variants tried
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021C3D0);
u8 *func_0021C3E0(s32 i) {
    return gBtlSys + 0xCB0 + i * 0x50;
}
u8 *func_0021C400(s32 i) {
    return gBtlSys + 0x760 + i * 0x190;
}
u8 *func_0021C430(s32 i) {
    return gBtlSys + 0x650 + i * 0x190;
}
#if 0
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
        if (v != -1) {
            if (!(v & 1)) {
                if (c < v) {
                    return 0;
                }
                return 1;
            }
        }
        return 0;
    }
    if (c < v) {
        return 0;
    }
    return 1;
}
// differs: the last test and its join (the compare of the two counters is shared by the two parities in the original; here the code is 4 instructions shorter)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021C460);
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
u8 *func_0021C620(s32 i) {
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021CAD0);
#if 0
void func_0021CCF0(void) {
    u8 *sys = gBtlSys;
    s32 *tbl = D_0046A470;

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
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021CCF0);
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

#include "common.h"

void func_0022D0E0(s32, s32);

extern u8 *D_00470570;
extern s32 D_00470680;
extern s32 D_00470684;
extern s32 D_00470688;
extern s32 D_00470698;
extern s32 D_004706A0;
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

extern u8 *D_0046FDFC;
extern s32 D_00470680;
extern s32 D_00470684;

INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B130);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B1E0);
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

    if (*(s8 *)(D_00470570 + 0x8975) != 1) {
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
    if (*(s8 *)(D_00470570 + 0x8975) != 1) {
        if (D_00470680 & 0x80000000) {
            func_0021B130();
            func_0023FBB0();
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021B870);
void func_0021B940(void) {
    u8 *v = *(u8 **)(D_0046FDFC + 0xEE8);
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
    if (0 < *(s32 *)(D_00470570 + 0x88D8)) {
        i = 0;
        p = D_0046FDFC;
        n = (s32 *)(D_00470570 + 0x88D8);
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
    u8 *bw = D_00470570;
    u8 *sys = D_0046FDFC;
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
    return *(s8 *)(D_0046FDFC + i + 0xCA0);
}
// differs: the sum D + i is added with the operands in the other order (addu v0, a0, v0), not reached by the variants tried
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021C3D0);
u8 *func_0021C3E0(s32 i) {
    return D_0046FDFC + 0xCB0 + i * 0x50;
}
u8 *func_0021C400(s32 i) {
    return D_0046FDFC + 0x760 + i * 0x190;
}
u8 *func_0021C430(s32 i) {
    return D_0046FDFC + 0x650 + i * 0x190;
}
#if 0
s32 func_0021C460(s32 id) {
    u8 *sys = D_0046FDFC;
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
    u8 *sys = D_0046FDFC;

    *(f32 *)(sys + 0xE20) = a;
    *(f32 *)(sys + 0xE24) = b;
    *(f32 *)(sys + 0xE28) = c;
}
void func_0021C560(s32 mode, f32 a, f32 b, f32 c) {
    u8 *sys = D_0046FDFC;

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
    return D_0046FDFC + 0x640;
}
u8 *func_0021C610(void) {
    return D_0046FDFC + 0xDF0;
}
u8 *func_0021C620(s32 i) {
    u8 *sys = D_0046FDFC;

    if (i == -1) {
        return 0;
    }
    return sys + i * 0x190 + 0x110;
}
u8 *func_0021C660(s32 i) {
    return D_0046FDFC + i * 0x190;
}
u8 *func_0021C680(s32 i) {
    return D_0046FDFC + i * 0x190;
}
void func_0021C6A0(void) {
    u8 *sys = D_0046FDFC;

    func_0021CA20();
    memset(sys, 0, 0xF00);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021C6E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021CA20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021CAD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021CCF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021CD80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_21B130", func_0021D170);

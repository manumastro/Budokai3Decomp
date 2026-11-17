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
extern void func_001F5F50(void *);
extern void func_00145CC0(s32, s32);
extern void func_001F3DF0(void *);
extern void func_001F3D80(void *);
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
extern u8 *D_00470570;
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
extern void func_002CDD50(void);
extern void func_002CDD00(void);
extern void func_001F6F10(s32, s32);
extern void func_001F5B50(u8 *, s32);
extern void func_001F6E60(void *);
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
extern s32 D_0051CCE0[];
extern void func_00200270(f32, f32);

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
    func_00208F70(*(void **)(p + 0x38));
    if (*(s32 *)(*(u8 **)(p + 0x38) + 0x38) < 0) {
        func_001F5F50(p);
    }
}
// differs: the original keeps the pointer in s1 and the field address p+0x30 in s0 across the calls; here the address is folded into p+0x38
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CD9E0);
#if 0
void func_002CDA30(u8 *p) {
    u8 *q = p + 0x30;
    D_00470238 = 0;
    func_00145CC0(*(s32 *)(p + 0x34), 0x2003000);
    func_001F3DF0(p);
    func_00208D70(*(void **)(q + 8));
    func_001F3D80(p);
}
// differs: the original saves two registers (p and p+0x30) and computes the field address after the first call; the frame is 0x30 here 0x20
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CDA30);
#if 0
void func_002CDA90(void) {
    u8 *s0;
    s32 s1 = 0;
    s32 s2 = D_0051CD0C[0];
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
// differs: the driver value and the allocation result take the other two saved registers (s0 against s2 here), and the frame is 0xD0 against 0xE0
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CDA90);
void func_002CDB70(u8 *p) {
    func_00208F70(*(void **)(p + 0x34));
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CDB80);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CDC20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CDD00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CDD50);
#if 0
void func_002CDDB0(void) {
    s32 s1 = 0;
    s32 s2 = D_0051CD0C[0];
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
// differs: the same allocation pattern as func_002CDA90: the driver value, the result and the node take other saved registers, and the frame is 0xD0 against 0xE0
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
        func_001F6F10(4, 2);
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
        func_001F6E60(v);
        break;
    case 1:
        func_001F7470(2);
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CE0A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CE2A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CE3D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CE500);
#if 0
void func_002CE630(f32 x, f32 y) {
    f32 tmp[4];
    u8 *p;
    D_0051CCE0[0] = 0;
    __asm__ volatile ("sqc2 $vf0, 0(%0)" : : "r"(tmp) : "memory");
    p = *(u8 **)(D_00470570 + 0x264);
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(p), "r"(tmp) : "memory");
    func_00200270(x - tmp[0], y - tmp[2]);
    D_0051CCE0[0] = 1;
}
// differs: the inline VU0 copy matches; only the register of the constant 1 in the last store differs (v1 against v0)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CE630);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CE690);
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
        func_00145CC0(s1, 0x2001000);
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
    func_001F3D80(s0);
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
        func_001F6E60(v);
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
        func_001F6F10(4, 3);
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
    f0 = func_00146E30(*(s32 *)(D_00470570 + 0x264), *(s32 *)(s0 + 4));
    f0 = D_00470154 / f0;
    f0 = (f0 > 1.0f) ? 1.0f : f0;
    *(f32 *)(s0 + 0x14) = f0;
    k = *(s32 *)s0;
    *(f32 *)(D_005C2070 + k * 40) = f0;
    return 1;
}
// differs: the counter test and the return value are laid out differently (the original tests the counter with beqz and returns 0 in the delay slot of a b): 0xE8 against 0x100 bytes
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CF180);
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
    f0 = func_00146E30(*(s32 *)(D_00470570 + 0x264), *(s32 *)(s0 + 4));
    f0 = D_00470154 / f0;
    f0 = (f0 > 1.0f) ? 1.0f : f0;
    *(f32 *)(s0 + 0x14) = f20 * f0;
    return 1;
}
s32 func_002CF3A0(void) {
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CF3B0);
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
    if (*(s32 *)(D_00470570 + 0x88D8) > 0) {
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
        } while (i < *(s32 *)(D_00470570 + 0x88D8));
    }
}
// differs: the counter updates match; the build is one nop short (0xC0 bytes against 0xC4): the original pads the join after the third counter
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CD5F0", func_002CF820);

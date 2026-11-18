#include "common.h"

#define VU_COPY(dst, src) __asm__ volatile ("lqc2 $vf1, 0(%1) ; sqc2 $vf1, 0(%0)" : : "r"(dst), "r"(src) : "memory")
extern u8 D_003F0800[];
extern u8 D_0051D9AC[];
extern void func_00141CF0(s32, u8 *, s32);
extern void func_0013B160(void *);
#define VU_LOAD_STORE(src, dst) __asm__ volatile ("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(src), "r"(dst) : "memory")

extern void func_00133780(s32, s32);
extern void func_001FB500(u8 *);
extern void func_001FB3B0(u8 *, s32);
extern s32 D_0051CD28[];
extern f32 func_001FB880(u8 *, u8 *, u8 *);
extern u8 *D_00520C40[];
extern s32 D_0047065C;
extern s32 D_00470658;
extern u8 *D_00470648;
extern s32 D_0047066C;
extern s32 D_00526440[];
extern s32 D_00470668;
extern s32 D_00470664;
extern u8 *D_00526040[];
extern s32 D_00470660;
extern s32 D_0051D9A4[];
extern u8 D_0044B7F0[];
extern u8 D_0044B860[];
extern u8 *D_00568440[];
extern u8 D_00568480[];
extern void func_00142080(u8 *, u8 *, u8 *);
extern u8 *D_0051FA40[];
extern s32 D_00470654;
extern void func_00208F70(u8 *);
extern void func_00209390(u8 *);
extern s32 D_0051D9A0[];
extern u8 *amPkt_Alloc(s32);
extern u8 D_0051D9B0[];
extern u8 D_0051D9C0[];
extern u8 D_0051D9D0[];
extern u8 D_0051D9E0[];
extern u8 D_0051D9F0[];
extern u8 D_0051DA00[];
extern void func_00209E50(u8 *);

void func_001FB760(u8 *a, s32 b) {
    if (a == NULL || b == 0) {
        return;
    }
    func_00133780(0, 1);
    func_001FB500(a);
    func_001FB3B0(a, b);
    func_00133780(0, 0);
}
u8 *func_001FB7E0(u8 *s1) {
    u8 *s0;
    if (s1 == NULL) {
        return NULL;
    }
    s0 = amPkt_Alloc(0x100);
    memset(s0, 0, 0x100);
    __asm__ volatile ("sqc2 $vf28, 0(%0) ; sqc2 $vf29, 16(%0) ; sqc2 $vf30, 32(%0)" : : "r"(s0) : "memory");
    __asm__ volatile ("sqc2 $vf31, 48(%0)" : : "r"(s0) : "memory");
    if (s0 != NULL) {
        *(s32 *)(s0 + 0xE0) = 0;
        *(s32 *)(s0 + 0xE4) = 0;
        *(s32 *)(s0 + 0xE8) = 0;
        *(f32 *)(s0 + 0xEC) = 0.25f;
    }
    *(s32 *)(s0 + 0xF0) = *(s32 *)(s1 + 0x4C);
    *(s32 *)(s0 + 0xF4) = *(s32 *)(s1 + 0x58);
    return s0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FB880);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FBAA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FBDE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FC220);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FC5C0);
s32 func_001FC820(u8 *a, u8 *b, u8 *c) {
    f32 r;
    if (D_0051CD28[0] == 0) {
        return 0;
    }
    r = func_001FB880(c, a, b);
    return r > *(f32 *)(c + 0x10) ? 0 : 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FC880);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FCCC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FCE20);
extern f32 func_00146EB0(f32 *);
extern void func_00146F30(f32 *);
extern void func_00146F10(void *, void *, f32);
s32 func_001FD0A0(u8 *a0, u8 *a1, u8 *a2, s32 a3, u8 *a4) {
    f32 tmp[4];
    if (D_0051CD28[0] == 0) {
        return 0;
    }
    __asm__ volatile ("lqc2 $vf1, 0(%1) ; lqc2 $vf2, 0(%2) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(tmp), "r"(a2), "r"(a4) : "memory");
    if (func_00146EB0(tmp) > *(f32 *)(a2 + 0x14) + *(f32 *)(a4 + 0x14)) {
        return 0;
    }
    func_00146F30(tmp);
    VU_COPY(a1, tmp);
    {
        f32 w = *(f32 *)(a4 + 0x10);
        func_00146F10(tmp, tmp, w);
    }
    __asm__ volatile ("lqc2 $vf1, 0(%1) ; lqc2 $vf2, 0(%2) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(a0), "r"(tmp), "r"(a4) : "memory");
    return 1;
}
extern f32 func_00146E60(f32 *, f32 *);
s32 func_001FD180(u8 *a, u8 *b) {
    f32 v2[4];
    f32 v1[4];
    f32 d;
    if (D_0051CD28[0] == 0) {
        return 0;
    }
    VU_COPY(v1, a);
    VU_COPY(v2, b);
    v1[1] = 0.0f;
    v2[1] = 0.0f;
    d = func_00146E60(v1, v2);
    if (d > *(f32 *)(a + 0x14) + *(f32 *)(b + 0x14)) {
        return 0;
    }
    return 1;
}
u8 *func_001FD230(u8 *a0, f32 f12, f32 f13) {
    u8 *n;
    while (a0 != NULL) {
        if (*(s32 *)(a0 + 0x24) == *(s32 *)(a0 + 0x28)) {
            if (!(f12 < *(f32 *)a0)) {
                n = *(u8 **)(a0 + 0x38);
                if (n != NULL) {
                    a0 = n;
                } else {
                    return a0;
                }
            } else {
                n = *(u8 **)(a0 + 0x3C);
                if (n != NULL) {
                    a0 = n;
                } else {
                    return a0;
                }
            }
        } else {
            if (!(f13 < *(f32 *)(a0 + 0x8))) {
                n = *(u8 **)(a0 + 0x38);
                if (n != NULL) {
                    a0 = n;
                } else {
                    return a0;
                }
            } else {
                n = *(u8 **)(a0 + 0x3C);
                if (n != NULL) {
                    a0 = n;
                } else {
                    return a0;
                }
            }
        }
    }
    return NULL;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FD300);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FD520);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FD800);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FDD40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FE2B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FED00);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FF4F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FFBA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00200270);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002009B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00201150);
void func_002012B0(u8 *a) {
    u8 *m = *(u8 **)(a + 0x8);
    u8 *c = *(u8 **)(a + 0xC);
    VU_LOAD_STORE(*(u8 **)(a + 0x10), c + 0x10);
    VU_LOAD_STORE(*(u8 **)(a + 0x14), c + 0x20);
    *(f32 *)(c + 0x50) = *(f32 *)(m + 0x44);
    *(f32 *)(c + 0x54) = *(f32 *)(m + 0x48);
}
void func_002012F0(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00201300);
void func_002016E0(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002016F0);
s32 func_00201B20(u8 *a0) {
    u8 *a3 = *(u8 **)(a0 + 0x3C);
    u8 *a2 = a0 + 0x44;
    while (a3 != a2) {
        __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyzw $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(a3 + 0x40), "r"(a3 + 0x50) : "memory");
        if (*(f32 *)(a3 + 0x4C) <= 0.0f) {
            *(u8 **)(*(u8 **)(a3 + 4)) = *(u8 **)a3;
            *(u8 **)(*(u8 **)a3 + 4) = *(u8 **)(a3 + 4);
            *(s32 *)(a0 + 0x4C) = *(s32 *)(a0 + 0x4C) - 1;
            D_00526440[D_0047066C] = (s32)a3;
            D_0047066C = D_0047066C + 1;
            if (D_0047066C >= 0x800) {
                D_0047066C = 0;
            }
        }
        a3 = *(u8 **)a3;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00201BD0);
void func_00201F40(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00201F50);
void func_002021A0(u8 *a) {
    u8 *q = *(u8 **)(a + 0xC);
    *(s32 *)(q + 0x8) = 0;
    *(s32 *)(q + 0xC) = 0;
}
void func_002021B0(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002021C0);
void func_00202880(u8 *a) {
    u8 *q = *(u8 **)(a + 0xC);
    *(s32 *)(q + 0x8) = 0;
    *(s32 *)(q + 0xC) = 0;
}
extern u32 func_0012EAE0(s32);
static inline f32 Jitter2(u32 x) {
    f32 t = (f32)(s32)x;
    return t + t;
}
static inline f32 Jitter(f32 f20) {
    s32 v = (s32)(u8)func_0012EAE0(8);
    u32 hv = (u32)v >> 1;
    f32 f2;
    f2 = (v >= 0) ? (f32)v : Jitter2(hv | (v & 1));
    return f20 * ((f2 / 255.0f) - 0.5f);
}
#if 0
void func_00202890(u8 *a0, u8 *p, u8 *q) {
    f32 tmp[4];
    f32 f20;
    u8 *qv = q;
    f20 = *(f32 *)(p + 0x30) * *(f32 *)D_0051D9AC;
    __asm__ volatile ("sqc2 $vf0, 0(%0)" : : "r"(tmp) : "memory");
    if (*(s32 *)(p + 8) & 4) {
        tmp[0] = Jitter(f20);
    }
    if (*(s32 *)(p + 8) & 8) {
        tmp[1] = Jitter(f20);
    }
    if (*(s32 *)(p + 8) & 0x10) {
        tmp[2] = Jitter(f20);
    }
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(qv + 0x10), "r"(tmp) : "memory");
}
// differs: 87 of 110 instructions differ: the random jitter helper (static inline, the value from func_0012EAE0, the conditional join) matches the shape, but the saved registers of the two pointer parameters are swapped (the original keeps the flags pointer in s0 and the vector pointer in s1); a local copy of the vector pointer did not change that. The VU0 zero store and vadd.xyz pair are in place.
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00202890);
extern u8 D_0051D9AC[];
void func_00202A40(u8 *a0, u8 *a1, u8 *a2) {
    u8 *q2 = a2;
    u8 *q1 = a1;
    f32 k = *(f32 *)D_0051D9AC;
    f32 t3[4];
    f32 t2[4];
    f32 t1[4];
    f32 g;
    VU_COPY(t1, q1 + 0x30);
    if (*(s32 *)(q1 + 0x8) & 0x1) {
        __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(t1), "r"(a0 + 0x10) : "memory");
    }
    __asm__ volatile ("lqc2 $vf1, 0(%1) ; lqc2 $vf2, 0(%2) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(t2), "r"(q2 + 0x10), "r"(t1) : "memory");
    func_00146F30(t2);
    g = *(f32 *)(q1 + 0x40) * k;
    g = (f32)(k * g);
    func_00146F10(t3, t2, 0.5f * g);
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(q2 + 0x10), "r"(t3) : "memory");
    func_00146F10(t3, t2, *(f32 *)(q1 + 0x40) * k);
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(q2 + 0x20), "r"(t3) : "memory");
}
void func_00202B50(u8 *a0, u8 *a1, u8 *a2) {
    f32 t60[4];
    f32 t50[4];
    f32 t40[4];
    f32 t30[4];
    u8 *q0 = a0;
    u8 *q2 = a2;
    VU_COPY(t60, a1 + 0x30);
    VU_COPY(t40, a1 + 0x40);
    if (*(s32 *)(a1 + 0x8) & 0x1) {
        __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(t60), "r"(q0 + 0x10) : "memory");
    }
    if (*(s32 *)(a1 + 0x8) & 0x2) {
        func_0013B160(D_003F0800);
        func_00141CF0(0, q0 + 0x20, 0);
        __asm__ volatile ("lqc2 $vf1, 0(%1) ; vmulax.xyzw ACC, $vf28, $vf1x ; vmadday.xyzw ACC, $vf29, $vf1y ; vmaddz.xyz $vf1, $vf30, $vf1z ; sqc2 $vf1, 0(%0) ; vmove.xyzw $vf28, $vf24 ; vmove.xyzw $vf29, $vf25 ; vmove.xyzw $vf30, $vf26 ; vmove.xyzw $vf31, $vf27" : : "r"(t40), "r"(t40) : "memory");
    }
    __asm__ volatile ("lqc2 $vf1, 0(%1) ; lqc2 $vf2, 0(%2) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(t50), "r"(q2 + 0x10), "r"(t60) : "memory");
    __asm__ volatile ("lqc2 $vf1, 0(%1) ; lqc2 $vf2, 0(%2) ; vopmula.xyz ACC, $vf1, $vf2 ; vopmsub.xyz $vf1, $vf2, $vf1 ; sqc2 $vf1, 0(%0)" : : "r"(t30), "r"(t40), "r"(t50) : "memory");
    func_00146F10(t50, t30, *(f32 *)D_0051D9AC);
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(q2 + 0x20), "r"(t50) : "memory");
    __asm__ volatile ("lqc2 $vf1, 0(%1) ; lqc2 $vf2, 0(%2) ; vopmula.xyz ACC, $vf1, $vf2 ; vopmsub.xyz $vf1, $vf2, $vf1 ; sqc2 $vf1, 0(%0)" : : "r"(t30), "r"(t40), "r"(t30) : "memory");
    func_00146F10(t50, t30, *(f32 *)D_0051D9AC);
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(q2 + 0x20), "r"(t50) : "memory");
}
extern u8 D_0051D9AC[];
extern f32 func_00146E90(f32 *);
extern f32 func_0011F6B0(f32, f32);
extern void func_00146ED0(f32 *, f32 *, f32);
void func_00202CD0(u8 *a0, u8 *a1, u8 *a2) {
    u8 *q2 = a2;
    u8 *q1 = a1;
    f32 k = *(f32 *)D_0051D9AC;
    f32 t2[4];
    f32 t1[4];
    f32 e;
    f32 g;
    VU_COPY(t1, q1 + 0x30);
    if (*(s32 *)(q1 + 0x8) & 0x1) {
        __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(t1), "r"(a0 + 0x10) : "memory");
    }
    __asm__ volatile ("lqc2 $vf1, 0(%1) ; lqc2 $vf2, 0(%2) ; vsub.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(t2), "r"(q2 + 0x10), "r"(t1) : "memory");
    e = func_0011F6B0(func_00146E90(t2), *(f32 *)(q1 + 0x44));
    g = *(f32 *)(q1 + 0x40) * (1.0f / e);
    func_00146ED0(t2, t2, k * g);
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(q2 + 0x10), "r"(t2) : "memory");
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00202DC0);
extern u8 D_003F0800[];
extern void func_00141CF0(s32, u8 *, s32);
extern void func_0013B160(void *);
void func_00202E80(u8 *a0, u8 *a1, u8 *a2) {
    f32 k = *(f32 *)D_0051D9AC;
    f32 t2[4];
    f32 t1[4];
    f32 g;
    u8 *q0 = a0;
    u8 *q2 = a2;
    u8 *q1 = a1;
    VU_COPY(t1, q1 + 0x30);
    if (*(s32 *)(q1 + 0x8) & 0x2) {
        func_0013B160(D_003F0800);
        func_00141CF0(0, q0 + 0x20, 0);
        __asm__ volatile ("lqc2 $vf1, 0(%1) ; vmulax.xyzw ACC, $vf28, $vf1x ; vmadday.xyzw ACC, $vf29, $vf1y ; vmaddz.xyz $vf1, $vf30, $vf1z ; sqc2 $vf1, 0(%0) ; vmove.xyzw $vf28, $vf24 ; vmove.xyzw $vf29, $vf25 ; vmove.xyzw $vf30, $vf26 ; vmove.xyzw $vf31, $vf27" : : "r"(t1), "r"(t1) : "memory");
    }
    g = *(f32 *)(q1 + 0x40) * k;
    g = (f32)(k * g);
    func_00146F10(t2, t1, 0.5f * g);
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(q2 + 0x10), "r"(t2) : "memory");
    func_00146F10(t2, t1, *(f32 *)(q1 + 0x40) * k);
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(q2 + 0x20), "r"(t2) : "memory");
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00202FA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00203250);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002034F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002038F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00203F10);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00204300);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002048B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00204ED0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002052F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00205550);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00205BC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00205FD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00206310);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002065F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002069B0);
void func_00206C80(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00206C90);
#if 0
void func_00207200(u8 *a) {
    u8 *s1 = *(u8 **)(a + 0x8);
    u8 *s0 = *(u8 **)(a + 0xC);
    *(f32 *)(s0 + 0x8) = -*(f32 *)(s1 + 0x54);
    *(s32 *)(s0 + 0xC) = 0;
    {
        u8 *p10 = *(u8 **)(a + 0x10);
        u8 *p18 = *(u8 **)(a + 0x18);
        __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%2)" : : "r"(p18), "r"(p10), "r"(s0 + 0x10) : "memory");
    }
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(s0 + 0x10), "r"(s1 + 0x30) : "memory");
    func_00146F10(s0 + 0x20, *(s32 *)(a + 0x1C), *(f32 *)(s1 + 0x58));
    __asm__ volatile ("lqc2 $vf1, 0(%1) ; lqc2 $vf2, 0(%0) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%1)" : : "r"(*(u8 **)(a + 0x14)), "r"(s0 + 0x20) : "memory");
    __asm__ volatile ("lqc2 $vf1, 0(%1) ; sqc2 $vf1, 0(%0)" : : "r"(s0 + 0x30), "r"(s1 + 0x40) : "memory");
}
// differs: the first VU block loads a->0x10 into v1 and a->0x18 into a0 in the original; the operand registers come out a1 / v1 here (tried operand order, clobbers, locals)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00207200);
void func_002072C0(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002072D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002077D0);
void func_00207890(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002078A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00207CC0);
void func_00207D80(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00207D90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00208260);
void func_00208320(u8 *a, u8 *node) {
    u8 *prev = *(u8 **)(node + 4);
    u8 *next;
    if (prev == NULL) {
        *(u8 **)(a + 0x30) = *(u8 **)node;
    } else {
        *(u8 **)prev = *(u8 **)node;
    }
    next = *(u8 **)node;
    if (next == NULL) {
        *(u8 **)(a + 0x34) = *(u8 **)(node + 4);
    } else {
        *(u8 **)(next + 4) = *(u8 **)(node + 4);
    }
    D_00520C40[D_0047065C] = node;
    D_0047065C += 1;
    if (D_0047065C >= 0x100) {
        D_0047065C = 0;
    }
    *(s32 *)(a + 0x38) -= 1;
}
void func_002083B0(u8 *a, s32 b) {
    u8 *node = D_00520C40[D_00470658];
    D_00470658 += 1;
    if (D_00470658 >= 0x100) {
        D_00470658 = 0;
    }
    *(s32 *)(node + 8) = b;
    if (*(u8 **)(a + 0x30) == NULL) {
        *(u8 **)(a + 0x30) = node;
        *(s32 *)(node + 4) = 0;
    }
    if (*(u8 **)(a + 0x34) != NULL) {
        *(u8 **)(node + 4) = *(u8 **)(a + 0x34);
        *(u8 **)*(u8 **)(a + 0x34) = node;
    }
    *(u8 **)(a + 0x34) = node;
    *(s32 *)node = 0;
    *(s32 *)(a + 0x38) += 1;
}
void func_00208430(u8 *a) {
    u8 *n;
    if (*(u8 **)(a + 0x20) != NULL) {
        D_00526440[D_0047066C] = (s32)*(u8 **)(a + 0x20);
        D_0047066C += 1;
        if (D_0047066C >= 0x800) {
            D_0047066C = 0;
        }
    }
    if ((*(u32 *)(*(u8 **)(a + 0x14) + 4) & 0xFFFF0000) == 0x20000) {
        n = *(u8 **)(a + 0x3C);
        if (n != a + 0x44) {
            do {
                D_00526440[D_0047066C] = (s32)n;
                D_0047066C += 1;
                if (D_0047066C >= 0x800) {
                    D_0047066C = 0;
                }
                n = *(u8 **)n;
            } while (n != a + 0x44);
        }
    }
    D_00526040[D_00470664] = a;
    D_00470664 += 1;
    if (D_00470664 >= 0x100) {
        D_00470664 = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00208530);
u8 *func_00208950(u8 *a0, u8 *a1) {
    u8 *s0 = D_00526040[D_00470660];
    u8 *c;
    D_00470660 += 1;
    if (D_00470660 >= 0x100) {
        D_00470660 = 0;
    }
    memset(s0, 0, 0x50);
    *(u8 **)(s0 + 0x10) = a0;
    *(u8 **)(s0 + 0x14) = a1;
    *(u8 **)(s0 + 0x28) = s0 + 0x30;
    *(u8 **)(s0 + 0x34) = s0 + 0x28;
    *(u8 **)(s0 + 0x3C) = s0 + 0x44;
    *(u8 **)(s0 + 0x48) = s0 + 0x3C;
    c = *(u8 **)(a1 + 0x24);
    if (c != NULL) {
        do {
            if ((*(u32 *)(c + 4) & 0xFFFF0000) == 0x20000) {
                *(u8 **)(s0 + 0x1C) = func_00208950(a0, c);
                break;
            }
            c = *(u8 **)(c + 0x28);
        } while (c != NULL);
    }
    func_002083B0(a0, (s32)s0);
    return s0;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00208A40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00208BD0);
void func_00208D60(u8 *a) {
    D_00470648 = a;
}
void func_00208D70(u8 *a) {
    u8 *s0;
    if (D_0051D9A4[0] == 0) {
        return;
    }
    if (*(s32 *)(a + 0x38) <= 0) {
        return;
    }
    s0 = *(u8 **)(a + 0x30);
    if (s0 == NULL) {
        return;
    }
    do {
        u8 *n = *(u8 **)(s0 + 8);
        s32 k = *(s32 *)(*(u8 **)(n + 0x14) + 4);
        switch (k & 0xFFFF0000) {
        case 0x10000:
            if (*(s32 *)(n + 0x20) != 0) {
                ((void (*)(u8 *))*(void **)(D_0044B7F0 + (k & 0xFFFF) * 16 + 8))(n);
            }
            break;
        case 0x20000:
            ((void (*)(u8 *))*(void **)(D_0044B860 + (k & 0xFFFF) * 16 + 8))(n);
            break;
        }
        s0 = *(u8 **)s0;
    } while (s0 != NULL);
}
void func_00208E50(u32 a0, s32 a1) {
    u8 *n;
    u32 hi;
    u32 lo;
    if (D_0051D9A0[0] == 0) {
        return;
    }
    hi = a0 & 0xFFFF0000;
    lo = a0 & 0xFFFF;
    if (hi == 0) {
        hi = 0xFFFF0000;
    }
    switch (a1) {
    case 0:
        n = D_00568440[0];
        if (n == D_00568480) {
            break;
        }
        do {
            u32 f = *(u32 *)(n + 8);
            if ((f & hi) != 0 && (f & lo) != 0) {
                func_00208F70(n);
            }
            n = *(u8 **)n;
        } while (n != D_00568480);
        break;
    case 1:
        n = D_00568440[0];
        if (n == D_00568480) {
            break;
        }
        do {
            u32 f = *(u32 *)(n + 8);
            if ((f & hi) != 0 && (lo & f) == lo) {
                func_00208F70(n);
            }
            n = *(u8 **)n;
        } while (n != D_00568480);
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00208F70);
void func_00209280(u32 a0, s32 a1) {
    u8 *n;
    u32 hi = a0 & 0xFFFF0000;
    u32 lo = a0 & 0xFFFF;
    if (hi == 0) {
        hi = 0xFFFF0000;
    }
    switch (a1) {
    case 0:
        n = D_00568440[0];
        if (n == D_00568480) {
            break;
        }
        do {
            u32 f = *(u32 *)(n + 8);
            if ((f & hi) != 0 && (f & lo) != 0) {
                func_00209390(n);
            }
            n = *(u8 **)n;
        } while (n != D_00568480);
        break;
    case 1:
        n = D_00568440[0];
        if (n == D_00568480) {
            break;
        }
        do {
            u32 f = *(u32 *)(n + 8);
            if ((f & hi) != 0 && (lo & f) == lo) {
                func_00209390(n);
            }
            n = *(u8 **)n;
        } while (n != D_00568480);
        break;
    }
}
void func_00209390(u8 *a) {
    u8 *t1 = *(u8 **)(a + 0x30);
    while (t1 != NULL) {
        u8 *t0 = *(u8 **)(t1 + 8);
        if ((*(u32 *)(*(u8 **)(t0 + 0x14) + 4) & 0xFFFF0000) == 0x10000) {
            if (!(*(u32 *)(t0 + 8) & 0x8000)) {
                u8 *p;
                u8 *s = t0 + 0x30;
                *(u32 *)(t0 + 8) |= 0x8000;
                p = *(u8 **)(t0 + 0x28);
                if (p != s) {
                    do {
                        *(u32 *)(p + 8) |= 0x4000;
                        p = *(u8 **)p;
                    } while (p != s);
                }
                p = *(u8 **)(t0 + 0x18);
                if (p != NULL) {
                    *(u8 **)*(u8 **)(t0 + 4) = *(u8 **)t0;
                    *(u8 **)(*(u8 **)t0 + 4) = *(u8 **)(t0 + 4);
                    *(s32 *)(p + 0x4C) -= 1;
                }
            }
        }
        t1 = *(u8 **)t1;
    }
}
void func_00209450(u32 a0, s32 a1) {
    u32 hi = a0 & 0xFFFF0000;
    u32 lo = a0 & 0xFFFF;
    u8 *n;
    if (hi == 0) {
        hi = 0xFFFF0000;
    }
    switch (a1) {
    case 0:
        n = D_00568440[0];
        if (n == D_00568480) {
            break;
        }
        do {
            u32 f = *(u32 *)(n + 8);
            if ((f & hi) != 0 && (f & lo) != 0) {
                *(s32 *)(n + 0x38) = -1;
            }
            n = *(u8 **)n;
        } while (n != D_00568480);
        break;
    case 1:
        n = D_00568440[0];
        if (n == D_00568480) {
            break;
        }
        do {
            u32 f = *(u32 *)(n + 8);
            if ((f & hi) != 0 && (lo & f) == lo) {
                *(s32 *)(n + 0x38) = -1;
            }
            n = *(u8 **)n;
        } while (n != D_00568480);
        break;
    }
}
void Obj_ResetF38(u8 *a) {
    *(s32 *)(a + 0x38) = -1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209540);
extern s32 D_00470650;
extern u8 *func_00208A40(u8 **);
extern u8 *func_00208BD0(u8 **);
#if 0
u8 *func_002096D0(u8 *a0, s32 a1, s32 a2) {
    u8 *s3 = a0;
    s32 s2 = a1;
    s32 s1 = a2;
    u8 *s0;
    u8 *loc[8];
    f32 vec[4];
    s0 = D_0051FA40[D_00470650];
    D_00470650 = D_00470650 + 1;
    if (D_00470650 >= 0x80) {
        D_00470650 = 0;
    }
    memset(s0, 0, 0x40);
    *(s32 *)(s0 + 0x8) = s2;
    *(s32 *)(s0 + 0xC) = s1;
    __asm__ volatile ("sqc2 $vf0, 0(%0)" : : "r"(s0 + 0x10) : "memory");
    __asm__ volatile ("sqc2 $vf0, 0(%0)" : : "r"(s0 + 0x20) : "memory");
    a0 = D_00568440[0];
    while (a0 != D_00568480 && !(s1 < *(s32 *)(a0 + 0xC))) {
        a0 = *(u8 **)a0;
    }
    *(u8 **)(*(u8 **)(a0 + 0x4)) = s0;
    *(u8 **)(s0 + 0x4) = *(u8 **)(a0 + 0x4);
    *(u8 **)(a0 + 0x4) = s0;
    *(u8 **)s0 = a0;
    __asm__ volatile ("sqc2 $vf0, 0(%0)" : : "r"(vec) : "memory");
    loc[0] = s0;
    loc[2] = s3;
    loc[4] = (u8 *)vec;
    loc[5] = (u8 *)vec;
    loc[6] = (u8 *)vec;
    loc[7] = (u8 *)vec;
    if ((*(s32 *)(s3 + 0x4) & 0xFFFF0000) != 0x20000) {
        if ((*(s32 *)(s3 + 0x4) & 0xFFFF0000) == 0x10000) {
            a0 = func_00208BD0(loc);
            *(s32 *)(a0 + 0x8) |= 0x2000;
        }
    } else {
        a0 = func_00208A40(loc);
        *(s32 *)(a0 + 0x8) |= 0x2000;
    }
    return s0;
}
// differs: the dispatch on the high half of the node (0x20000 / 0x10000) is laid out with the 0x10000 case inline in the original; the layouts tried (else-if, nested != forms) are one or two instructions off in the branch order
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002096D0);
#if 0
void func_00209850(u8 *a0, s32 a1) {
    u8 *s1;
    u8 *s0;
    u8 *s3;
    func_00142080(a0 + 0x20, a0 + 0x20, a1);
    s1 = *(u8 **)(a0 + 0x30);
    if (s1 != NULL) {
    do {
        s0 = *(u8 **)(s1 + 8);
        if (*(u32 *)(s0 + 8) & 0x2000) {
            if (!(*(u32 *)(*(u8 **)(s0 + 0x14) + 8) & 0x8000000)) {
                if (*(u8 **)(s0 + 0x20) != NULL) {
                    u8 *m = *(u8 **)(s0 + 0x20) + 0x30;
                    func_00142080(m, m, a1);
                }
                if (*(s32 *)(s0 + 0x4C) != 0) {
                    s3 = *(u8 **)(s0 + 0x3C);
                    s0 += 0x44;
                    if (s3 != s0) {
                        do {
                            func_00142080(s3 + 0x30, s3 + 0x30, a1);
                            s3 = *(u8 **)s3;
                        } while (s3 != s0);
                    }
                }
            }
        }
        s1 = *(u8 **)s1;
    } while (s1 != NULL);
    }
}
// differs: the list end pointer is computed into a temporary here (s0 + 0x44 in v1) where the original advances s0 in place; the loop tail matches otherwise
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209850);
void func_00209950(u8 *a0, u8 *a1, s32 a2) {
    u8 *s3;
    u8 *s2;
    u8 *s1;
    u8 *s0;
    u8 *t;
    VU_COPY(a0 + 0x20, a1);
    s3 = *(u8 **)(a0 + 0x30);
    while (s3 != NULL) {
        s2 = *(u8 **)(s3 + 0x8);
        if (*(s32 *)(s2 + 0x8) & 0x2000) {
            t = *(u8 **)(s2 + 0x14);
            if ((*(s32 *)(t + 0x8) & 0x8000000) == 0) {
                if (*(u8 **)(s2 + 0x20) != NULL) {
                    if (a2 != 0) {
                        func_00142080(*(u8 **)(s2 + 0x20) + 0x30, t + 0x40, a1);
                    } else {
                        VU_COPY(*(u8 **)(s2 + 0x20) + 0x30, a1);
                    }
                }
                if (*(s32 *)(s2 + 0x4C) != 0) {
                    s1 = *(u8 **)(s2 + 0x3C);
                    s0 = s2 + 0x44;
                    while (s1 != s0) {
                        if (a2 != 0) {
                            func_00142080(s1 + 0x30, *(u8 **)(s2 + 0x14) + 0x40, a1);
                        } else {
                            VU_COPY(s1 + 0x30, a1);
                        }
                        s1 = *(u8 **)s1;
                    }
                }
            }
        }
        s3 = *(u8 **)s3;
    }
}
void func_00209A90(u8 *a0, u8 *a1) {
    u8 *t0;
    u8 *a3;
    __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(a0 + 0x10), "r"(a1) : "memory");
    t0 = *(u8 **)(a0 + 0x30);
    while (t0 != NULL) {
        a0 = *(u8 **)(t0 + 0x8);
        if (*(s32 *)(a0 + 0x8) & 0x2000) {
            if ((*(s32 *)(*(u8 **)(a0 + 0x14) + 0x8) & 0x4000000) == 0) {
                if (*(u8 **)(a0 + 0x20) != NULL) {
                    __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(*(u8 **)(a0 + 0x20) + 0x10), "r"(a1) : "memory");
                }
                if (*(s32 *)(a0 + 0x4C) != 0) {
                    a3 = *(u8 **)(a0 + 0x3C);
                    a0 = a0 + 0x44;
                    while (a3 != a0) {
                        __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%0)" : : "r"(a3 + 0x10), "r"(a1) : "memory");
                        a3 = *(u8 **)a3;
                    }
                }
            }
        }
        t0 = *(u8 **)t0;
    }
}
void func_00209B50(u8 *a0, u8 *a1, s32 a2) {
    u8 *v1;
    u8 *t3;
    VU_COPY(a0 + 0x10, a1);
    a0 = *(u8 **)(a0 + 0x30);
    while (a0 != NULL) {
        v1 = *(u8 **)(a0 + 0x8);
        if (*(s32 *)(v1 + 0x8) & 0x2000) {
            if ((*(s32 *)(*(u8 **)(v1 + 0x14) + 0x8) & 0x4000000) == 0) {
                if (*(u8 **)(v1 + 0x20) != NULL) {
                    if (a2 != 0) {
                        __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%2)" : : "r"(*(u8 **)(v1 + 0x14) + 0x30), "r"(a1), "r"(*(u8 **)(v1 + 0x20) + 0x10) : "memory");
                    } else {
                        VU_COPY(*(u8 **)(v1 + 0x20) + 0x10, a1);
                    }
                }
                if (*(s32 *)(v1 + 0x4C) != 0) {
                    u8 *t2 = v1 + 0x44;
                    t3 = *(u8 **)(v1 + 0x3C);
                    while (t3 != t2) {
                        if (a2 != 0) {
                            __asm__ volatile ("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 0(%1) ; vadd.xyz $vf1, $vf1, $vf2 ; sqc2 $vf1, 0(%2)" : : "r"(*(u8 **)(v1 + 0x14) + 0x30), "r"(a1), "r"(t3 + 0x10) : "memory");
                        } else {
                            VU_COPY(t3 + 0x10, a1);
                        }
                        t3 = *(u8 **)t3;
                    }
                }
            }
        }
        a0 = *(u8 **)a0;
    }
}
void func_00209C50(void) {
    __asm__ volatile ("lqc2 $vf1, 0(%1) ; sqc2 $vf1, 0(%0)" : : "r"(D_0051D9B0), "r"(D_0051D9E0) : "memory");
    __asm__ volatile ("lqc2 $vf1, 0(%1) ; sqc2 $vf1, 0(%0)" : : "r"(D_0051D9C0), "r"(D_0051D9F0) : "memory");
    __asm__ volatile ("lqc2 $vf1, 0(%1) ; sqc2 $vf1, 0(%0)" : : "r"(D_0051D9D0), "r"(D_0051DA00) : "memory");
}
void func_00209CA0(u8 *a0, u8 *a1, u8 *a2) {
    VU_COPY(D_0051D9E0, D_0051D9B0);
    VU_COPY(D_0051D9F0, D_0051D9C0);
    VU_COPY(D_0051DA00, D_0051D9D0);
    VU_COPY(D_0051D9B0, a0);
    VU_COPY(D_0051D9C0, a1);
    VU_COPY(D_0051D9D0, a2);
}
void func_00209D20(s32 a0) {
    VU_COPY(D_0051D9E0, D_0051D9B0);
    VU_COPY(D_0051D9F0, D_0051D9C0);
    VU_COPY(D_0051DA00, D_0051D9D0);
    func_00209E50((u8 *)a0);
}
void func_00209D70(u8 *a0) {
    f32 buf[16];
    VU_COPY(D_0051D9E0, D_0051D9B0);
    VU_COPY(D_0051D9F0, D_0051D9C0);
    VU_COPY(D_0051DA00, D_0051D9D0);
    __asm__ volatile ("sqc2 $vf28, 0(%0) ; sqc2 $vf29, 16(%0) ; sqc2 $vf30, 32(%0) ; sqc2 $vf31, 48(%0)" : : "r"(buf) : "memory");
    VU_COPY(D_0051D9B0, a0);
    *(f32 *)(D_0051D9C0 + 0xC) = 1.0f;
    *(f32 *)(D_0051D9D0 + 0xC) = 1.0f;
    *(f32 *)(D_0051D9C0 + 0x0) = buf[1];
    *(f32 *)(D_0051D9C0 + 0x4) = buf[5];
    *(f32 *)(D_0051D9C0 + 0x8) = buf[9];
    *(f32 *)(D_0051D9D0 + 0x0) = buf[0];
    *(f32 *)(D_0051D9D0 + 0x4) = buf[4];
    *(f32 *)(D_0051D9D0 + 0x8) = buf[8];
}
extern void func_0013B160(void *);
extern void func_0013B190(s32);
void func_00209E50(u8 *a0)
{
  f32 new_var;
  f32 buf[16];
  if (a0 != ((void *) 0))
  {
    asm volatile("lqc2 $vf1, 0(%0) ; lqc2 $vf2, 16(%0) ; lqc2 $vf3, 32(%0) ; lqc2 $vf4, 48(%0) ; sqc2 $vf1, 0(%1) ; sqc2 $vf2, 16(%1) ; sqc2 $vf3, 32(%1) ; sqc2 $vf4, 48(%1)" : : "r"(a0), "r"(buf) : "memory");
  }
  else
  {
    asm volatile("sqc2 $vf28, 0(%0) ; sqc2 $vf29, 16(%0) ; sqc2 $vf30, 32(%0) ; sqc2 $vf31, 48(%0)" : : "r"(buf) : "memory");
  }
  new_var = buf[1];
  *((s32 *) (D_0051D9C0 + 0xC)) = 0x3F800000;
  *((s32 *) (D_0051D9D0 + 0xC)) = 0x3F800000;
  {
    f32 t1 = new_var;
    f32 t5 = buf[5];
    f32 t9 = buf[9];
    f32 t0 = buf[0];
    *((f32 *) (D_0051D9C0 + 0x0)) = t1;
    *((f32 *) (D_0051D9C0 + 0x4)) = t5;
    *((f32 *) (D_0051D9C0 + 0x8)) = t9;
    *((f32 *) (D_0051D9D0 + 0x0)) = t0;
  }
  *((f32 *) (D_0051D9D0 + 0x4)) = buf[4];
  *((f32 *) (D_0051D9D0 + 0x8)) = buf[8];
  func_0013B160(buf);
  func_0013B190(0);
  asm volatile("sqc2 $vf31, 0(%0) ; vmove.xyzw $vf28, $vf24 ; vmove.xyzw $vf29, $vf25 ; vmove.xyzw $vf30, $vf26 ; vmove.xyzw $vf31, $vf27" : : "r"(D_0051D9B0) : "memory");
}

void func_00209F40(s32 v) {
    D_00526440[D_0047066C] = v;
    D_0047066C += 1;
    if (D_0047066C >= 0x800) {
        D_0047066C = 0;
    }
}
s32 func_00209F80(void) {
    s32 v = D_00470668;
    s32 r = D_00526440[v];
    D_00470668 = v + 1;
    if (D_00470668 >= 0x800) {
        D_00470668 = 0;
    }
    return r;
}
#if 0
void func_00209FC0(u8 *a0, s32 a1) {
    u8 *s0;
    if (*(s32 *)(a0 + 0x24) != 0) {
        *(s32 *)(a0 + 0x24) += a1;
        s0 = *(u8 **)(a0 + 0x24);
        if (*(s32 *)(s0 + 0x24) != 0) {
            *(s32 *)(s0 + 0x24) += a1;
            func_00209FC0(*(u8 **)(s0 + 0x24), a1);
        }
        if (*(s32 *)(s0 + 0x28) != 0) {
            *(s32 *)(s0 + 0x28) += a1;
            func_00209FC0(*(u8 **)(s0 + 0x28), a1);
        }
        if (*(s32 *)(s0 + 0x2C) != 0) {
            *(s32 *)(s0 + 0x2C) += a1;
        }
    }
    if (*(s32 *)(a0 + 0x28) != 0) {
        *(s32 *)(a0 + 0x28) += a1;
        s0 = *(u8 **)(a0 + 0x28);
        if (*(s32 *)(s0 + 0x24) != 0) {
            *(s32 *)(s0 + 0x24) += a1;
            func_00209FC0(*(u8 **)(s0 + 0x24), a1);
        }
        if (*(s32 *)(s0 + 0x28) != 0) {
            *(s32 *)(s0 + 0x28) += a1;
            func_00209FC0(*(u8 **)(s0 + 0x28), a1);
        }
        if (*(s32 *)(s0 + 0x2C) != 0) {
            *(s32 *)(s0 + 0x2C) += a1;
        }
    }
    if (*(s32 *)(a0 + 0x2C) != 0) {
        *(s32 *)(a0 + 0x2C) += a1;
    }
}
// differs: the offset adds are the same except for the operand order of addu (the original is s1 + v1 at each of 9 sites, this build emits v1 + s1 whatever the source order)
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209FC0);
void func_0020A0F0(u8 *a) {
    func_00209FC0(a + *(s32 *)(a + 0xC), (s32)a);
}
s32 func_0020A100(u8 *a) {
    if (a[0] == 0x21) {
        return 0;
    }
    func_0020A0F0(a);
    a[0] = 0x21;
    return 1;
}
void func_0020A150(void) {
    u8 *s0 = D_00568440[0];
    u8 *s1;
    if (s0 == D_00568480) {
        return;
    }
    do {
        if (*(s32 *)(s0 + 0x38) <= 0) {
            s1 = *(u8 **)(s0 + 0x30);
            if (s1 != NULL) {
                do {
                    func_00208430(*(u8 **)(s1 + 8));
                    func_00208320(s0, s1);
                    s1 = *(u8 **)s1;
                } while (s1 != NULL);
            }
            *(u8 **)*(u8 **)(s0 + 4) = *(u8 **)s0;
            *(u8 **)(*(u8 **)s0 + 4) = *(u8 **)(s0 + 4);
            D_0051FA40[D_00470654] = s0;
            D_00470654 += 1;
            if (D_00470654 >= 0x80) {
                D_00470654 = 0;
            }
        }
        s0 = *(u8 **)s0;
    } while (s0 != D_00568480);
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_0020A230);

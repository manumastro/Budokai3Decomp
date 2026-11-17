#include "common.h"

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
extern void func_00209FC0(u8 *, u8 *);

#if 0
void func_001FB760(u8 *a, s32 b) {
    if (a != NULL) {
        if (b != 0) {
            func_00133780(0, 1);
            func_001FB500(a);
            func_001FB3B0(a, b);
        }
    }
    func_00133780(0, 0);
}
// differs: the two early exits (a0 == 0 and a1 == 0) go to a shared b in the original (8 instructions more, 0x80 bytes against 0x60); the block layout did not match
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FB760);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FB7E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FB880);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FBAA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FBDE0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FC220);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FC5C0);
extern s32 D_0051CD28[];
extern f32 func_001FB880(u8 *, u8 *, u8 *);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FD0A0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FD180);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_001FD230);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002012B0);
void func_002012F0(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00201300);
void func_002016E0(void) {
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002016F0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00201B20);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00202890);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00202A40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00202B50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00202CD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00202DC0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00202E80);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00208430);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00208530);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00208950);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00208A40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00208BD0);
void func_00208D60(u8 *a) {
    D_00470648 = a;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00208D70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00208E50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00208F70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209280);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209390);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209450);
void func_00209530(u8 *a) {
    *(s32 *)(a + 0x38) = -1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209540);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_002096D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209850);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209950);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209A90);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209B50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209C50);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209CA0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209D20);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209D70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209E50);
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
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_00209FC0);
void func_0020A0F0(u8 *a) {
    func_00209FC0(a + *(s32 *)(a + 0xC), a);
}
s32 func_0020A100(u8 *a) {
    if (a[0] == 0x21) {
        return 0;
    }
    func_0020A0F0(a);
    a[0] = 0x21;
    return 1;
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_0020A150);
INCLUDE_ASM("asm/nonmatchings/unk/unk_1FB760", func_0020A230);

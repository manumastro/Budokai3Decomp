#include "common.h"

extern s32 D_004708A4;
extern s32 func_00127940(s32, s32);
extern void func_0028F930(void);
extern void func_0028F830(void);
extern void func_00133B50(void *, s32);

void func_0028E5D0(s32 *p) {
    s32 *w = &p[0xC];
    s32 n;
    if (p[0xD] != 0) {
        ((void (*)(void *))p[0xD])(p);
    }
    n = w[0] - 1;
    w[0] = n;
    if (n <= 0) {
        s32 v = w[2];
        if (v == 0) {
            v = 0;
        }
        p[0x1C / 4] = v;
    }
}
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028E640);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028E790);
extern s32 amGs_SetReg32(s32, s32);
extern void func_00133780(s32, s32);
extern void A2d_FlushList(void);

void func_0028EA80(void) {
    s32 s0 = amGs_SetReg32(0, 0x3040A);
    func_00133780(2, 1);
    A2d_FlushList();
    func_00133780(2, 0);
    amGs_SetReg32(0, s0);
}
extern void func_00133780(s32, s32);
extern void A2d_FlushList(void);

void func_0028EAE0(void) {
    func_00133780(2, 1);
    A2d_FlushList();
    func_00133780(2, 0);
}
void func_0028EB20(void) {
    func_00133B50(NULL, 0);
}
void func_0028EB30(void) {
}

void func_0028E5D0(s32 *p);

void func_0028EB40(s32 *p, s32 a1, s32 a2, s32 a3) {
    s32 *w = &p[0x30 / 4];
    s32 v;
    w[0] = a1;
    w[1] = a3;
    if (a2 == 0) {
        a2 = p[0x1C / 4];
    }
    w[2] = a2;
    v = (s32)func_0028E5D0;
    if (v == 0) {
        v = 0;
    }
    p[0x1C / 4] = v;
}
void StrBg_SetValue(void *p, s32 v) {
    ((s32 *)p)[0x14] = v;
}
void StrBg_SetPos(void *p, f32 x, f32 y) {
    *(f32 *)((char *)p + 0x4C) = y;
    *(f32 *)(*(char **)(*(char **)((char *)p + 0x3C)) + 0x10) = x;
}
void func_0028EBB0(char *a0, s32 a1, s32 *a2, s32 a3) {
    s32 *e = (s32 *)(a2[0x1C / 4] + a3 * 4);
    s32 *ent = (s32 *)e[0];
    s32 w = *(s32 *)(*(s32 *)((char *)ent + 4) + 0x1C);
    *(u16 *)(a0 + 0x30) = (*(u16 *)(a0 + 0x30) & -2) | a1;
    *(s32 *)(a0 + 0x44) = w;
}
void StrBg_SetFlags(void *p, s32 a1, s32 a2) {
    *(u16 *)((char *)p + 0x30) = (*(u16 *)((char *)p + 0x30) & -2) | a1;
    *(s32 *)((char *)p + 0x44) = a2;
}
void func_0028EC10(char *a0, char *a1, s32 a2, s32 a3) {
    s32 *arr = *(s32 **)(a1 + 0x1C);
    s32 *P = (s32 *)arr[a2];
    s32 *Q = (s32 *)P[2];
    *(s32 *)(a0 + 0x40) = Q[5];
    *(u16 *)(a0 + 0x30) = (*(u16 *)(a0 + 0x30) & -3) | (a3 & 2);
}
void func_0028EC50(void *p, s32 a1, s32 a2, s32 a3, s32 t0, s32 t1) {
    *(u16 *)((char *)p + 0x30) = t0;
    *(s32 *)((char *)p + 0x34) = a2;
    *(s32 *)((char *)p + 0x38) = a3;
    *(s16 *)((char *)p + 0x32) = -1;
    *(s32 *)((char *)p + 0x3C) = a1;
    *(s32 *)((char *)p + 0x40) = 0;
    *(s32 *)((char *)p + 0x44) = t1;
    *(s32 *)((char *)p + 0x4C) = 0x3F800000;
    *(s32 *)((char *)p + 0x50) = 0;
}
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EC80);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028EE90);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028F090);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028F720);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028F830);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_0028F930);
void StrBg_Clear(void) {
    D_004708A4 = 0;
}
#if 0
// func_00290330: the original's break is a `bne` over a `b` (an if-break), and the loop exit sets p = 0 with no test; goto and break both give beq / a test at the exit
void func_00290330(s32 a0, s32 a1) {
    char *p;
    s32 i;
    if (D_004708A4 == 0) {
        return;
    }
    if (a0 == -1) {
        return;
    }
    p = (char *)D_004708A4 + 0x430;
    i = 0;
    do {
        if (*(s32 *)(p + 8) != a0) {
            i++;
            p += 0x50;
        } else {
            goto found;
        }
    } while (i < 0x48);
    p = 0;
found:
    if (p == 0) {
        return;
    }
    *(s32 *)(p + 0xC) = a1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290330);
#if 0
// func_00290390: same search loop as func_00290330, and the two early returns are laid out in another order; not matched
void func_00290390(s32 a0, s32 a1) {
    char *p;
    s32 i;
    if (D_004708A4 == 0) {
        return;
    }
    if (a0 == -1) {
        return;
    }
    if (a1 == -1) {
        return;
    }
    p = (char *)D_004708A4 + 0x430;
    i = 0;
    do {
        if (*(s32 *)(p + 8) == a0) {
            break;
        }
        i++;
        p += 0x50;
    } while (i < 0x48);
    if (i == 0x48) {
        p = 0;
    }
    if (p == 0) {
        return;
    }
    *(s32 *)(p + 0x8) = a1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290390);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290410);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_002904C0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290780);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_002908D0);
void func_00290A70(s32 *a0) {
    s32 i = 0;
    s32 *a2 = (s32 *)((char *)D_004708A4 + 0x430);
    do {
        a2[0x0C / 4] = a0[0];
        a2[0x5C / 4] = a0[1];
        a2[0xAC / 4] = a0[2];
        a2[0xFC / 4] = a0[3];
        a2[0x14C / 4] = a0[4];
        a2[0x19C / 4] = a0[5];
        a2[0x1EC / 4] = a0[6];
        a2[0x23C / 4] = a0[7];
        a0 += 8;
        a2 += 0x280 / 4;
        i += 8;
    } while (i < 0x48);
}
#if 0
// func_00290AE0: the found exit skips the index test in ours (the original runs it after the search); two loop forms tried
s32 func_00290AE0(s32 a0, s32 a1) {
    s32 s1 = 0;
    char *s0 = (char *)D_004708A4 + 0x430;
    do {
        if (*(s32 *)(s0 + 0x40) != 0 && func_00127940(*(s32 *)(s0 + 0x40), a0) == 0) {
            break;
        }
        s0 += 0x50;
        s1++;
    } while (s1 < 0x48);
    if (s1 == 0x48) {
        s0 = 0;
    }
    if (s0 == 0) {
        return -1;
    }
    *(s32 *)(s0 + 0xC) = a1;
    return (s32)((u32)(s0 - ((char *)D_004708A4 + 0x430)) / 80);
}
#endif
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290AE0);
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290BB0);
s32 func_00290C90(void) {
    s32 *g = (s32 *)D_004708A4;
    s8 k;
    s32 *e;
    if (g[0x1AB0 / 4] == 0) {
        k = *((s8 *)g + 0x1AB5);
        e = (s32 *)g[k];
        if (*(s16 *)((char *)e + 4) != 3) {
            return 1;
        }
        func_0028F930();
        ((s32 *)D_004708A4)[0x1AB0 / 4] = 2;
    }
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00290D00);
void StrBg_Stop(void) {
    func_0028F830();
}
INCLUDE_ASM("asm/nonmatchings/story/str_bg", func_00291390);

#include "common.h"

/* A work object of this file: its state function (f1C) and the part at 0x30 (f30). */
typedef struct Work2918A0 {
    char pad0[0x1C];
    void (*f1C)(void);
    char pad20[0x10];
    s32 f30;
    char pad34[0x8];
    f32 f3C;
    f32 f40;
} Work2918A0;

extern Work2918A0 *D_005AA5A0[];
extern void func_00291BF0(void);
extern void func_00293250(void);
extern void StrStatus_Start(s32, s32);
extern void func_00133780(s32, s32);
extern void func_00139620(s32, void *, s32, s32, s32, f32);
extern s32 D_005AA5E4[];
extern s32 D_005AA5CC[];
extern s32 D_005AA5D8[];
extern char D_00453DC0[];
typedef struct Q2918A0 {
    s32 v[4];
} Q2918A0;
extern s32 func_0022BF80(s32);
extern void func_0028EE90(void *, void *, void *, void *, void *, s32, s32, s32);
extern void func_00294A10(void);
extern s32 D_005AA604[];
extern s32 D_005AA664[];
extern s32 D_005AB340[];
extern s32 D_005AA5F8[];
extern void func_00293E80(void);
extern s32 D_005AA640[];
extern s32 func_002A8F90(void);
extern void Scene_FadeTo(s32, s32);
extern void func_00264140(s32, s32);
extern void func_002935F0(void);
extern void func_00295300(void);
extern f32 gFrameDelta;
extern s32 D_005AA5A4[];
typedef struct Sub2918A0 {
    char pad0[0xC];
    f32 fC;
    char padC[0x4];
    f32 f10;
} Sub2918A0;
extern s32 D_005AA550[];
extern void func_0022D0E0(s32, s32);

#if 0
// differs: the if-block layout and the -1 register (v0 here, v1 in the original); compiled size 0xD0 expected
extern s32 D_005AA620[];
extern s32 D_005AA63C[];
extern s32 D_005AA66C[];
extern s32 D_005AA638[];
extern s32 D_005AA644[];
extern void func_002BFC50(void);
extern void Ball_Start(void);
extern void func_00292A40(void);
void func_002918A0(void) {
    Work2918A0 *w;
    char *q;

    D_005AA620[0] = 0;
    D_005AA664[0] = 0;
    D_005AA66C[0] = 0;
    D_005AA640[0] = 0;
    D_005AA63C[0] = 0;
    *(s32 *)((char *)D_005AA604[0] + 0x11D4) = -1;
    *(s32 *)((char *)D_005AA604[0] + 0x11D8) = -1;
    D_005AA644[0] = 0;
    q = (char *)D_005AA638[0];
    if (q != 0) {
        *(f32 *)((char *)D_005AA604[0] + 0x11C0) = *(f32 *)(q + 0x10);
        *(f32 *)((char *)D_005AA604[0] + 0x11C8) = *(f32 *)(q + 0x18);
    }
    func_002BFC50();
    Ball_Start();
    w = (Work2918A0 *)D_005AA5A0[0];
    w->f1C = (func_00292A40 == 0) ? 0 : func_00292A40;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002918A0);
void func_00291970(void) {
    Work2918A0 *w;

    StrStatus_Start(0xB000, 0x80000);
    w = D_005AA5A0[0];
    w->f1C = (func_00293250 == 0) ? 0 : func_00293250;
}
#if 0
// differs: 10 of 70 with the volatile reload (size 0x120 matches); the 16.0f constant and the D_005AA5A4 pointer take the other registers
extern void amTask_Kill(s32);
extern void func_002BF310(void);
extern s32 D_005AA5C0[];
extern s32 D_005AA5C4[];
void func_002927E0(Work2918A0 *w);
extern s32 D_005AA5BC[];
extern s32 D_005AA5FC[];
extern s32 D_005AA5F4[];
void func_002919B0(void) {
    if (D_005AA5F8[0] != 0) {
        func_0022D0E0(D_005AA5F8[0], 1);
        D_005AA5F8[0] = 0;
    }
    if (D_005AA5C0[0] != 0) {
        amTask_Kill(D_005AA5C0[0]);
        D_005AA5C0[0] = 0;
    }
    if (D_005AA5F4[0] != 0) {
        func_0022D0E0(D_005AA5F4[0], 1);
        D_005AA5F4[0] = 0;
    }
    if (D_005AA5BC[0] != 0) {
        amTask_Kill(D_005AA5BC[0]);
        D_005AA5BC[0] = 0;
    }
    if (*(s8 *)((char *)D_005AA604[0] + 0x11E6) == 0) {
        if (D_005AA5FC[0] != 0) {
            func_0022D0E0(D_005AA5FC[0], 1);
            D_005AA5FC[0] = 0;
        }
        if (D_005AA5C4[0] != 0) {
            amTask_Kill(D_005AA5C4[0]);
            D_005AA5C4[0] = 0;
        }
    }
    func_002BF310();
    ((Work2918A0 *)D_005AA5A4[0])->f40 = 16.0f;
    ((Work2918A0 *)(*(volatile s32 *)D_005AA5A4))->f1C = (func_002927E0 == 0) ? 0 : (void (*)(void))func_002927E0;
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002919B0);
#if 0
// differs: 5 of 71; the 24-byte copy takes the base in v1 here, v0 in the original (5 declaration orders tried)
typedef struct Copy16_2918A0 {
    s32 a, b, c, d;
} __attribute__((aligned(16))) Copy16_2918A0;
extern s32 D_00453E80[];
extern char D_0046BAF8[];
extern void func_002928C0(void);
extern s32 amTask_Create(void *, void *, s32, s32, s32, void *);
void func_00291AD0(void) {
    s32 blk[6];
    f32 *p;
    Copy16_2918A0 *d;
    char *src;

    d = (Copy16_2918A0 *)blk;
    src = (char *)D_00453E80;
    *d = *(Copy16_2918A0 *)src;
    *(s64 *)((char *)d + 16) = *(s64 *)(src + 16);
    if (*(s8 *)((char *)D_005AA604[0] + 0x11E6) != 0) {
        *(s16 *)((char *)blk + 4) = -0x7FFF;
        *(s8 *)((char *)blk + 8) = -1;
    }
    func_0028EE90(D_005AA5A0, D_005AA5CC, D_005AA5D8, D_005AA5E4, blk, 0x9200, 0x20000, 0x300000);
    func_002BF310();
    D_005AA5A4[0] = amTask_Create(func_002928C0, 0, 0x9001, 2, 0x20000, D_0046BAF8);
    ((Work2918A0 *)D_005AA5A4[0])->f40 = 16.0f;
    p = (f32 *)((char *)D_005AA5A4[0] + 0x30);
    if (*(s8 *)((char *)D_005AA604[0] + 0x11E6) != 0) {
        p[0] = 0.0f;
        p[1] = 0.1f;
        p[2] = 0.0f;
        p[3] = 0.0f;
    } else {
        p[0] = 0.0f;
        p[1] = 0.15f;
        p[2] = 0.3f;
        p[3] = 0.0f;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00291AD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00291BF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00291E30);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002920E0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002922C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002925A0);
void func_00292780(Work2918A0 *o) {
    func_00133780(0, 1);
    func_00139620(0x900, (char *)o + 0x30, -1, 0x44, 0, 0.0f);
    func_00133780(0, 0);
}
#if 0
// differs: compiled 0xD8 bytes, original 0xE0; the original computes w+0x30 into a saved register at the top and keeps w in another one for the last call (a local s gives 0xD4)
void func_002927E0(Work2918A0 *w) {
    f32 f;

    f = w->f40 - gFrameDelta;
    w->f40 = f;
    if (f < 0.0f) {
        ((Sub2918A0 *)((char *)w + 0x30))->f10 = 0.0f;
        amTask_Kill(w);
        D_005AA5A4[0] = 0;
    }
    if (((Sub2918A0 *)((char *)w + 0x30))->f10 <= 0.0f) {
        ((Sub2918A0 *)((char *)w + 0x30))->fC = 0.0f;
    } else {
        f = ((Sub2918A0 *)((char *)w + 0x30))->fC - (0.75f * gFrameDelta) / ((Sub2918A0 *)((char *)w + 0x30))->f10;
        ((Sub2918A0 *)((char *)w + 0x30))->fC = f;
        if (f < 0.0f) {
            ((Sub2918A0 *)((char *)w + 0x30))->fC = 0.0f;
        }
    }
    func_00133780(0, 1);
    func_00139620(0x900, (char *)w + 0x30, -1, 0x44, 0, 0.0f);
    func_00133780(0, 0);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002927E0);
#if 0
// differs: 24 of 55; the original keeps w in s0 and computes w+0x30 after the f40 store (s is a second saved register here); the earlier draft wrongly zeroed f40 on the f < 0 path
void func_002928C0(Work2918A0 *w) {
    Sub2918A0 *s;
    f32 f;

    f = w->f40 - gFrameDelta;
    w->f40 = f;
    s = (Sub2918A0 *)((char *)w + 0x30);
    if (f < 0.0f) {
        s->f10 = 0.0f;
        w->f1C = (func_00292780 == 0) ? 0 : (void (*)(void))func_00292780;
    }
    if (s->f10 <= 0.0f) {
        s->fC = 0.75f;
    } else {
        f = s->fC + (0.75f * gFrameDelta) / s->f10;
        s->fC = f;
        if (f > 0.75f) {
            s->fC = 0.75f;
        }
    }
    func_00133780(0, 1);
    func_00139620(0x900, (char *)w + 0x30, -1, 0x44, 0, 0.0f);
    func_00133780(0, 0);
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002928C0);
void func_002929A0(Work2918A0 *w) {
    func_00291BF0();
    if (func_002A8F90() == 0) {
        switch (D_005AA640[0]) {
        case 6:
            Scene_FadeTo(0xA, 0);
            w->f1C = (func_002935F0 == 0) ? 0 : func_002935F0;
            break;
        default:
            func_00264140(-1, 0);
            w->f1C = (func_00295300 == 0) ? 0 : func_00295300;
            break;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00292A40);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00292FF0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00293250);
#if 0
// differs: compiled 0xE0 bytes, original 0x100; the if on func_002B4C80 == 9 is laid out as bne with the body inline (original: beq to an out-of-line body, then b to the end)
extern s32 func_002B4C80(s32);
extern void func_002B4CC0(s32, s32 *);
extern void SklEdit_Close(void);
void func_002934F0(Work2918A0 *s) {
    s32 tmp[8];
    s32 i;

    func_00291BF0();
    if (func_002B4C80(0) == 9) {
        func_002B4CC0(0, tmp);
        SklEdit_Close();
        for (i = 0; i < tmp[0]; i++) {
            ((s16 *)((char *)D_005AA604[0] + 0x11F0))[i] = (s16)tmp[i + 1];
        }
        if (i < 7) {
            do {
                ((s16 *)((char *)D_005AA604[0] + 0x11F0))[i] = -1;
                i++;
            } while (i < 7);
        }
        s->f1C = (func_00294A10 == 0) ? 0 : func_00294A10;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_002934F0);
void func_002935F0(void) {
    func_00291BF0();
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00293600);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00293950);
#if 0
// differs: compiled 0x100 bytes, original 0x110; the two case bodies are laid out inline here, the original has them out of line with b to the end (switch variants with case 0 and default tried)
extern s32 D_005AA630[];
extern void StrMap_Start(s32, s32, s32);
extern void func_0029AAC0(s32, s32, s32);
void func_00293D70(Work2918A0 *w) {
    char *x;

    x = (char *)D_005AA604[0];
    *(s32 *)(x + 0x11D0) = *(u16 *)(x + 0x11D0);
    D_005AA664[0] = *(u16 *)D_005AA664;
    D_005AA664[0] = (u16)(s16)(((s32)*(s16 *)D_005AA664 * 15) >> 4);
    func_00291BF0();
    if (D_005AA5A4[0] == 0) {
        if (D_005AA630[0] == 2) {
            StrMap_Start(0x9100, 0x20000, 1);
            func_0029AAC0(0x9110, 0x20000, -1);
        } else if (D_005AA630[0] == 1) {
            StrMap_Start(0x9100, 0x20000, 0);
            func_0029AAC0(0x9110, 0x20000, -1);
        }
        w->f1C = (func_00295300 == 0) ? 0 : func_00295300;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00293D70);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00293E80);
void func_002948C0(Work2918A0 *w) {
    char *x;
    s32 r;

    x = (char *)D_005AA604[0];
    *(s32 *)(x + 0x11D0) = *(u16 *)(x + 0x11D0);
    D_005AA664[0] = *(u16 *)D_005AA664;
    D_005AA664[0] = (u16)(s16)(((s32)*(s16 *)D_005AA664 * 15) >> 4);
    func_00291BF0();
    r = func_0022BF80(D_005AA5F8[0]);
    if (r == 0xFF) {
        D_005AB340[0] = 0;
        w->f1C = (func_00293E80 == 0) ? 0 : func_00293E80;
    }
}
void func_00294960(Work2918A0 *w) {
    s32 i;
    char *p;

    func_00291BF0();
    if (func_0022BF80(D_005AA5E4[0]) == 0xFF) {
        p = (char *)D_005AA550;
        for (i = 0; i < 5; i++) {
            if (*(s32 *)(p + 0x94) != 0) {
                func_0022D0E0(*(s32 *)(p + 0x94), 1);
                *(s32 *)(p + 0x94) = 0;
            }
            if (*(s32 *)(p + 0x5C) != 0) {
                amTask_Kill(*(s32 *)(p + 0x5C));
                *(s32 *)(p + 0x5C) = 0;
            }
            p += 4;
        }
        w->f1C = (func_00295300 == 0) ? 0 : func_00295300;
    }
}
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00294A10);
#if 0
// differs: the 16-byte copy is lq at the first argument setup and sq in the delay slot of the call; the inline lq/sq pair lands in one place
void func_00295260(Work2918A0 *w) {
    Q2918A0 c;

    func_00291BF0();
    if (func_0022BF80(D_005AA5E4[0]) == 0xFF) {
        asm volatile("lq $v0, 0(%1)\n\tsq $v0, 0(%0)" : : "r"(&c), "r"(D_00453DC0) : "$2", "memory");
        func_0028EE90(D_005AA5A0, D_005AA5CC, D_005AA5D8, D_005AA5E4, &c, 0x9200, 0x20000, 0x300000);
        w->f1C = (func_00294A10 == 0) ? 0 : func_00294A10;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00295260);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2918A0", func_00295300);

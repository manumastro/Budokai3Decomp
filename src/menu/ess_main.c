#include "common.h"

extern u8 *D_004707E0;
extern void EssMain_TickA(void);
extern void func_0026CD50(void);
extern void EssMain_TickC(void);
extern u32 func_0012EAE0(s32);
extern void func_0027A260(void);
extern s32 D_004707F0;
extern char D_00452EB0[];
extern void func_00272A20(s32, s32, s32);
extern f32 D_004703BC;
extern s32 func_0022BC30(s32, f32);
extern void func_001F0810(s32, s32);
extern void func_0026B770(void);
extern void func_0026B880(void);
extern void func_0026F080(void);
extern void func_00269B90(void);
extern void func_00269CC0(void);
extern s32 D_00452EC4[];
extern f32 D_004E0610[];
extern char D_0046B460[];
extern void func_00264140(s32, s32);
extern void func_0026D030(void);
extern void *amTask_Create();
extern f32 D_004E0618[];
extern void amTask_Kill(void *);
extern void amAdx_SetVolume(s32, f32);
extern void amAdx_Pause(s32, s32);
extern void amAdx_PlayAfs(s32, s32, s32);
extern void func_00145CC0(s32, s32);
extern void func_00133780(s32, s32);
extern void func_00133B50(s32, s32);
extern void func_00228430(s32);
extern void func_002284D0(s32);
extern void func_00228410(void);
extern void func_0022C1D0(void *, s32, f32);
extern s32 D_00470704;
extern s32 D_00470708;
extern s32 D_0047070C;
extern s32 D_00470238;

void func_00269A00(void) {
    u8 *s0;
    s32 v;
    f32 f;

    v = *(s32 *)(D_004707E0 + 0x28);
    D_00470704 = v;
    D_0047070C = 0x11401000;
    D_00470708 = 0;
    func_00145CC0(v, 0x11401000);
    D_00470238 = 0;
    func_00133780(0, 1);
    s0 = *(u8 **)(D_004707E0 + 0x24);
    func_00228430(0);
    func_002284D0(0);
    f = (f32)*(s32 *)(D_004707E0 + 0x68) * D_004703BC;
    func_0022C1D0(((void **)*(u8 **)(s0 + 0x14))[*(s32 *)(D_004707E0 + 0x60)], 1, f);
    func_00228410();
    func_00133780(0, 0);
    func_00133B50(0, 0);
}
void func_00269AC0(u8 *a0) {
    u8 *s0;
    s32 s1;
    s32 t;
    u8 *d;

    s0 = a0;
    if (*(s32 *)(D_004707E0 + 0x1C0) != 0) {
        amTask_Kill(s0);
        return;
    }
    if (*(s32 *)(D_004707E0 + 0x188) < *(s32 *)*(u8 **)(*(u8 **)(D_004707E0 + 0x2C) + 0x18)) {
        return;
    }
    t = *(s32 *)(s0 + 0x30) - 1;
    *(s32 *)(s0 + 0x30) = t;
    if (t >= 0) {
        return;
    }
    *(s32 *)(D_004707E0 + 0x1C0) = 1;
    d = D_004707E0;
    *(s32 *)(d + 0x190) = 1;
    *(s32 *)(d + 0x188) = 0;
    s1 = D_00452EC4[0];
    amAdx_SetVolume(1, D_004E0618[0]);
    amAdx_Pause(1, 0);
    amAdx_PlayAfs(1, s1 | 0x20000, 0);
    amTask_Kill(s0);
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_00269B90);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_00269CC0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026A4F0);
extern void func_00269B90(void);
extern void func_00269CC0(void);

/* A state step of the Ess mode: runs the two per-frame parts. */
void EssMain_TickA(void) {
    func_00269B90();
    func_00269CC0();
}
/* The same two parts, another state step. */
void EssMain_TickB(void) {
    func_00269B90();
    func_00269CC0();
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026A680);
void func_0026ADC0(u8 *a0) {
    u8 *s1;
    u8 *s0;
    f32 f;

    s1 = a0;
    s0 = s1 + 0x30;
    *(s32 *)(D_004707E0 + 0x40) = 0;
    *(s32 *)(D_004707E0 + 0x44) = 0;
    *(s32 *)(D_004707E0 + 0x48) = 0;
    f = 0.5f - 0.5f * ((60.0f - (f32)*(s32 *)(a0 + 0x30) * D_004703BC) / 60.0f);
    *(f32 *)(D_004707E0 + 0x4C) = f;
    func_00269B90();
    func_00269CC0();
    *(s32 *)s0 += 1;
    f = (f32)*(s32 *)s0 * D_004703BC;
    if (f < 60.0f) {
        return;
    }
    *(f32 *)(D_004707E0 + 0x4C) = 0.5f;
    func_00272A20(0, 0, 0);
    *(void **)(s1 + 0x1C) = ((void *)EssMain_TickA == 0) ? 0 : (void *)EssMain_TickA;
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026AEB0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B010);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B100);
void func_0026B250(u8 *a0) {
    u8 *s1;
    s32 s0;
    u8 *s2;
    f32 f;

    s2 = a0;
    func_00269B90();
    func_00269CC0();
    s0 = -1;
    f = (f32)*(s32 *)(D_004707E0 + 0xF8);
    s1 = *(u8 **)(D_004707E0 + 0x24);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s1 + 0x1C) + *(s32 *)(D_004707E0 + 0xF0) * 4), f * D_004703BC);
    f = (f32)*(s32 *)(D_004707E0 + 0x218);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s1 + 0x1C) + *(s32 *)(D_004707E0 + 0x210) * 4), f * D_004703BC);
    if (s0 == 0xFF) {
        func_0026F080();
        *(s32 *)(s2 + 0x1C) = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B310);
void func_0026B460(u8 *a0) {
    u8 *s1;
    s32 s0;
    u8 *s2;
    f32 f;
    u8 *d;

    s2 = a0;
    func_00269B90();
    func_00269CC0();
    s0 = -1;
    f = (f32)*(s32 *)(D_004707E0 + 0xF8);
    s1 = *(u8 **)(D_004707E0 + 0x24);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s1 + 0x1C) + *(s32 *)(D_004707E0 + 0xF0) * 4), f * D_004703BC);
    f = (f32)*(s32 *)(D_004707E0 + 0x218);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s1 + 0x1C) + *(s32 *)(D_004707E0 + 0x210) * 4), f * D_004703BC);
    if (s0 == 0xFF) {
        d = D_004707E0;
        *(s32 *)(d + 0xC0) = 0xB;
        *(s32 *)(d + 0xC8) = 0;
        d = D_004707E0;
        *(s32 *)(d + 0x1E0) = 0x12;
        *(s32 *)(d + 0x1E8) = 0;
        d = D_004707E0;
        *(s32 *)(d + 0xF0) = 0x2F;
        *(s32 *)(d + 0x100) = 0;
        *(s32 *)(d + 0xF8) = 0;
        *(void **)(s2 + 0x1C) = ((void *)func_0026CD50 == 0) ? 0 : (void *)func_0026CD50;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B560);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B770);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026B880);
extern void func_0026B880(void);

void func_0026BD10(void) {
    func_0026B880();
}
extern void func_0026B770(void);
extern void func_0026B880(void);

/* Runs the two steps at 0x26B770 and 0x26B880 of the Ess mode. */
void EssMain_TickC(void) {
    func_0026B770();
    func_0026B880();
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026BD50);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026C7C0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026C910);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026C9F0);
void func_0026CB30(u8 *a0) {
    u8 *s2;
    u8 *s1;
    u8 *s0;
    u32 ret;
    s32 r;
    f32 f;

    s2 = a0;
    s1 = s2 + 0x30;
    func_0026B770();
    func_0026B880();
    f = (f32)*(s32 *)(D_004707E0 + 0x128);
    s0 = D_004707E0 + 0x120;
    r = func_0022BC30(*(s32 *)(*(u8 **)(*(u8 **)(D_004707E0 + 0x24) + 0x1C) + *(s32 *)(D_004707E0 + 0x120) * 4), f * D_004703BC);
    if (r == 0xFF) {
        D_004707F0 = (s32)D_00452EB0;
        ret = func_0012EAE0(0x20);
        *(u8 *)(D_004707E0 + 0x5D) = (ret % 3 == 0);
        *(s32 *)s0 = (*(u8 *)(D_004707E0 + 0x5D) & 1) ? 0x10 : 0x14;
        *(s32 *)(s0 + 8) = 0;
        *(s32 *)(s0 + 0x10) = 1;
        *(s32 *)s1 = 0;
        func_0027A260();
        *(void **)(s2 + 0x1C) = ((void *)EssMain_TickC == 0) ? 0 : (void *)EssMain_TickC;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026CC30);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026CD50);
void func_0026CF80(u8 *a0) {
    u8 *s1;
    s32 s0;
    u8 *s2;
    f32 f;

    s1 = a0;
    func_0026B770();
    func_0026B880();
    s0 = -1;
    f = (f32)*(s32 *)(D_004707E0 + 0xC8);
    s2 = *(u8 **)(D_004707E0 + 0x24);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + 0x68), f * D_004703BC);
    f = (f32)*(s32 *)(D_004707E0 + 0x98);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(s2 + 0x1C) + 0x1C), f * D_004703BC);
    if (s0 == 0xFF) {
        func_001F0810(-1, 0);
        *(s32 *)(s1 + 0x1C) = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D030);
void func_0026D150(u8 *a0) {
    u8 *s0;
    u8 *p;
    s32 a1;
    f32 f;

    a1 = *(s32 *)(a0 + 0x30);
    s0 = a0;
    *(s32 *)(a0 + 0x30) = a1 + 1;
    f = (f32)a1 * D_004703BC;
    p = s0 + 0x30;
    if (f < 30.0f) {
        return;
    }
    *(s32 *)p = 0;
    amAdx_SetVolume(0, D_004E0610[0]);
    amAdx_Pause(0, 0);
    amAdx_PlayAfs(0, 0x210A6, 0);
    func_00264140(-1, 0);
    *(void **)(s0 + 0x1C) = ((void *)func_0026D030 == 0) ? 0 : (void *)func_0026D030;
    *(void **)((u8 *)D_004707E0 + 0x1C) = amTask_Create(func_00269A00, 0, 0x3000, 0x200, 1, D_0046B460);
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D230);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D320);
extern u8 D_0058F680[];
extern u8 D_004E0660[];

#if 0
// differs: the logic matches; the registers differ: the original keeps the struct pointer in a3, the loop index in a0 (the parameter's register) and the counts in a1/a2
s32 func_0026D480(s32 p) {
    s32 i;
    s32 n1;
    s32 n2;
    u8 *a3;
    u8 *v3;
    a3 = D_004E0660;
    n2 = 0;
    n1 = 0;
    v3 = D_0058F680 + p * 0xD680 + 0xD41D;
    for (i = 0; i < 2; i++) {
        if (a3[0xD] > 0) {
            n1++;
            if (v3[0] != 0) {
                n2++;
            }
        }
        a3 += 0x28;
        v3++;
    }
    return (100 * n2) / n1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D480);
/* The byte at 0x5D of the block that D_004707E0 points to: bit 0 as a flag. */
u8 EssMain_GetFlag(void) {
    return D_004707E0[0x5D] & 1;
}
/* Sets the byte at 0x5C of that block. */
void EssMain_SetByte(u8 v) {
    D_004707E0[0x5C] = v;
}
void func_0026D530(s32 a0, s32 a1) {
    u8 *g;
    switch (a0) {
    case 1:
        a1 += 0x10;
        break;
    case 2:
        a1 += 0x30;
        break;
    }
    g = D_004707E0;
    *(s32 *)(g + 0x190) = a1;
    *(s32 *)(g + 0x188) = 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D570);
extern s32 D_0058F5D0[];
extern s32 D_0058F5D4[];
extern void amCdFs_ReleaseCache(s32);

#if 0
// differs: the original keeps the loop count in a1 and tests 0 < n before setting up the walking pointer; mine orders the pointer and index set-up differently (tried for, do-while and walking pointer forms)
void func_0026D610(s32 a0) {
    s32 i;
    s32 *p;
    s32 n;
    n = D_0058F5D0[0];
    if (0 < n) {
        i = 0;
        p = D_0058F5D0;
        do {
            if (p[1] == a0) {
                amCdFs_ReleaseCache(a0);
                return;
            }
            i++;
            p++;
        } while (i < n);
    }
    D_0058F5D4[n] = a0;
    D_0058F5D0[0] = n + 1;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D610);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D6A0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main", func_0026D8A0);

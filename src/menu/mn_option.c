#include "common.h"

extern u8 D_004E05DC[];
extern s16 D_004E05E0[];
extern u8 D_0051168A[];
extern u8 D_004E6560[];

extern s8 D_004703F4;
extern u8 *gOptionWork;
extern void func_002DDF00();

void func_002DE250(void) {
    u8 *a1;
    f32 f2;
    a1 = gOptionWork;
    if (D_004703F4 != 3) {
        f2 = 1.0f;
    } else {
        f2 = 1.2f;
    }
    *(f32 *)(a1 + 0x39C) = *(f32 *)(a1 + 0x39C) + f2;
    if (!(*(f32 *)(a1 + 0x39C) < 75.0f)) {
        *(s32 *)(a1 + 0x39C) = 0;
        *(void **)(a1 + 0x344) = (void *)func_002DDF00;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DE2C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DE460);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DE5A0);
#if 0
// differs: the table address is kept in v1 by the original, mine folds the array address into each load (lui at, offset)
void func_002DE910(void) {
    u8 *v1;
    u8 *a2;
    u8 *t1;
    u8 *t0;
    u8 *a3;
    s32 t2;

    v1 = D_004E05DC;
    a2 = (u8 *)gOptionWork;
    *(s16 *)(a2 + 0x41A) = *(s16 *)(v1 + 0);
    *(s16 *)(a2 + 0x41C) = *(s16 *)(v1 + 4);
    *(s16 *)(a2 + 0x41E) = *(s16 *)(v1 + 2);
    t1 = v1;
    t0 = a2;
    a3 = a2;
    t2 = 0;
    do {
        t2++;
        *(s32 *)(t0 + 0x420) = *(s8 *)(t1 + 6);
        *(s32 *)(t0 + 0x468) = *(s8 *)(t1 + 7);
        t0 += 4;
        *(s32 *)(a3 + 0x428) = *(s8 *)(t1 + 8);
        *(s32 *)(a3 + 0x42C) = *(s8 *)(t1 + 9);
        *(s32 *)(a3 + 0x430) = *(s8 *)(t1 + 0xA);
        *(s32 *)(a3 + 0x434) = *(s8 *)(t1 + 0xB);
        *(s32 *)(a3 + 0x438) = *(s8 *)(t1 + 0xC);
        *(s32 *)(a3 + 0x43C) = *(s8 *)(t1 + 0xD);
        *(s32 *)(a3 + 0x440) = *(s8 *)(t1 + 0xE);
        *(s32 *)(a3 + 0x444) = *(s8 *)(t1 + 0xF);
        t1 += 10;
        a3 += 0x20;
    } while (t2 < 2);
    *(s16 *)(a2 + 0x470) = *(s16 *)(v1 + 0x2C);
    *(s16 *)(a2 + 0x472) = *(s16 *)(v1 + 0x1E);
    *(s16 *)(a2 + 0x474) = *(s16 *)(v1 + 0x20);
    *(s16 *)(a2 + 0x476) = *(s32 *)(v1 + 0x24);
    *(s16 *)(a2 + 0x478) = *(s32 *)(v1 + 0x28);
    *(s32 *)(a2 + 0x47C) = *(s16 *)(v1 + 0x1C);
    *(s32 *)(a2 + 0x480) = *(s32 *)(v1 + 0x30);
    *(f32 *)(a2 + 0x484) = *(f32 *)(v1 + 0x34);
    *(f32 *)(a2 + 0x488) = *(f32 *)(v1 + 0x38);
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DE910);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DEA00);
/* Empty callback: nothing to do. */
void Option_Nop1(void) {
}

/* Empty callback: nothing to do. */
void func_002DEFE0(void) {
}

#if 0
// differs: 16 bytes short (0x100 vs 0x110): the original saves a second register (s1 for the heap block of case 4) and lays the function-pointer store of case 3/5 out with bnez/move; the switch order (3,5 before 4) matches the test order
extern void func_002DFBC0();
extern s32 Save_GetState();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_00125740(void *, void *, s32);
extern void func_001EF510(void *, s32);
extern void func_001F0830(s32, s32);
extern void func_001F0810(s32, s32);
extern void func_002DEA00();
extern void func_002D9DE0();
extern char D_0046F3C8[];
extern s8 D_004B4B63[];
extern s8 D_0058F680[];

void func_002DEFF0(u8 *a0) {
    u8 *s0;
    u8 *s1;
    u8 *w;
    s32 st;
    void *fp;
    s0 = a0;
    func_002DFBC0();
    st = Save_GetState();
    switch (st) {
    case 3:
    case 5:
        fp = (void *)func_002DEA00;
        *(void **)(s0 + 0x1C) = (fp == 0) ? 0 : fp;
        w = (u8 *)gOptionWork;
        *(void **)(w + 0x34C) = (void *)func_002D9DE0;
        *(s32 *)(w + 0x388) = 0;
        *(s32 *)(w + 0x38C) = 0;
        func_001F0830(5, 0);
        func_001F0810(0xA, 0);
        break;
    case 4:
        s1 = (u8 *)amHeap_Alloc(0xD680, 0, D_0046F3C8, 0x733);
        func_00125740(s1, D_0058F680 + D_004B4B63[0] * 0xD680, 0xD680);
        func_001EF510(s1, 0xD680);
        amHeap_Free(s1);
        break;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DEFF0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF100);
extern s8 D_004B4B40[];
extern s8 D_00456B20[];
extern void func_00125740(void *, void *, s32);

extern s8 D_004B4B40[];
extern s8 D_00456B20[];
extern void func_00125740(void *, void *, s32);

void func_002DF3D0(void) {
    s8 *s2;
    s32 n;
    s8 *s0;
    s8 *a2;
    s8 *a1;
    s32 k;
    s2 = (s8 *)gOptionWork;
    n = 0;
    s0 = D_004B4B40;
    do {
        a2 = s0 + 0x2BA86;
        a1 = s0 + 0x2BAA2;
        a2[0] = a1[0];
        a2[1] = a1[1];
        if (a2[0] == 0 || a2[0] == 1) {
            func_00125740(a2 + 2, D_00456B20 + (a2[0] << 3), 8);
        } else {
            for (k = 2; k < 10; k++) {
                a2[k] = a1[k];
            }
        }
        n++;
        s0 += 0xA;
    } while (n < 2);
    *(s32 *)(s2 + 0x330) = 0;
    *(s32 *)(s2 + 0x334) = 0;
    *(s32 *)(s2 + 0x338) = 0;
    *(f32 *)(s2 + 0x32C) = 60.0f;
}
#if 0
// differs: the four-way test on the table value is laid out differently (the original keeps the value in a0 and compares with li v1 constants, 8 bytes more code)
void func_002DF4E0(void) {
    u8 *a2;
    s32 a0;
    s32 t;
    u8 *a1;

    a2 = (u8 *)gOptionWork;
    a1 = D_004E05DC;
    t = D_004E05E0[0];
    if (t == 0x3C) {
        *(s16 *)(a2 + 0x3E8) = 0;
    } else if (t == 0x5A) {
        *(s16 *)(a2 + 0x3E8) = 1;
    } else if (t == 0x78) {
        *(s16 *)(a2 + 0x3E8) = 2;
    } else if (t == 0xB4) {
        *(s16 *)(a2 + 0x3E8) = 3;
    } else {
        *(s16 *)(a2 + 0x3E8) = 4;
    }
    *(s32 *)(a2 + 0x3D0) = (s32)a1;
    *(s32 *)(a2 + 0x3D4) = (s32)(a2 + 0x3E8);
    *(s32 *)(a2 + 0x3D8) = (s32)a1 + 2;
    a0 = 5;
    if (D_0051168A[0] > 0) {
        a0 = 6;
        if (D_004E6560[0x2B12B] > 0) {
            a0 = 7;
            if (D_004E6560[0x2B12C] > 0) {
                a0 = 8;
            }
        }
    }
    *(s32 *)(a2 + 0x3DC) = a0;
    *(s32 *)(a2 + 0x3E0) = 5;
    *(s32 *)(a2 + 0x3E4) = 5;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF4E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF5D0);
extern void A2d_SetMode(s32);
extern void A2d_FlushList(void);

extern u8 *gOptionWork;
extern s16 D_004E05F8[];

void func_002DF6E0(void) {
    u8 *s0;
    void (*f)(void);
    s0 = (u8 *)gOptionWork;
    A2d_SetMode(D_004E05F8[0]);
    f = *(void (**)(void))(s0 + 0x344);
    if (f != 0) {
        f();
    }
    f = *(void (**)(void))(s0 + 0x370);
    if (f != 0) {
        f();
    }
    A2d_FlushList();
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF740);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DF930);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DFBC0);
/* Reads the sound status (channel 0), then runs func_002DFBC0. */
void Option_ReadSound(void) {
    amAdx_GetStat(0);
    func_002DFBC0();
}
extern s8 D_004703F4;

void func_002DFE20(u8 *a0) {
    u8 *s0;
    f32 f2;
    s0 = gOptionWork;
    func_002DFBC0();
    if (D_004703F4 != 3) {
        f2 = 1.0f;
    } else {
        f2 = 1.2f;
    }
    *(f32 *)(s0 + 0x388) = *(f32 *)(s0 + 0x388) + f2;
    if (!(*(f32 *)(s0 + 0x388) < 60.0f)) {
        *(s32 *)(s0 + 0x388) = 0;
        *(void **)(a0 + 0x1C) = ((void *)Option_ReadSound == 0) ? 0 : (void *)Option_ReadSound;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002DFEC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0050);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0170);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0260);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E06A0);
#if 0
// differs: 21 of 57: the frame and the float table match; the lui temporaries of 40.0, 540.0, 256.0 and 1.0 land in the other registers ( first here,  in the original, 1.0 kept in ), the same as func_002E0B70; the tail (fp store, amTask_Kill, the 100/1 bytes) matches
extern void func_002D2AD0(void *, void *, f32);
extern void func_002E06A0();

void func_002E0800(u8 *a0) {
    u8 *s0;
    u8 *s1;
    f32 b[4];
    f32 a[4];
    f32 f;
    void *fp;
    s1 = a0;
    s0 = gOptionWork;
    b[1] = 40.0f;
    b[0] = 0.0f;
    a[0] = 540.0f;
    a[1] = 256.0f;
    b[2] = 1.0f;
    b[3] = 1.0f;
    a[2] = 1.0f;
    a[3] = 1.0f;
    func_002D2AD0(b, a, *(f32 *)(s0 + 0xC));
    f = *(f32 *)(s0 + 0xC) - 0.05f;
    *(f32 *)(s0 + 0xC) = f;
    if (f < 0.0f) {
        *(f32 *)(s0 + 0xC) = 0.0f;
        if (*(s8 *)(s0 + 0x14) == 0) {
            *(s8 *)(s0 + 0x14) = 1;
            *(s8 *)(s0 + 0x15) = 100;
            fp = (void *)func_002E06A0;
            *(void **)(s1 + 0x1C) = (fp == 0) ? 0 : fp;
        } else {
            amTask_Kill(*(void **)(s0 + 0x18));
            *(void **)(s0 + 0x18) = 0;
            *(s32 *)(s0 + 0x8) = 4;
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0800);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E08F0);
#if 0
// differs: 13 of 45: the constants 40.0f/540.0f/256.0f/1.0f are loaded into the other temporaries ( first here,  first in the original), the store order and the frame already match
extern void func_002D2AD0(void *, void *, f32);
extern void func_002E08F0();

void func_002E0B70(u8 *a0) {
    u8 *s0;
    u8 *s1;
    f32 b[4];
    f32 a[4];
    f32 t;
    void *fp;
    s1 = a0;
    s0 = gOptionWork;
    b[1] = 40.0f;
    b[0] = 0.0f;
    a[0] = 540.0f;
    a[1] = 256.0f;
    b[2] = 1.0f;
    b[3] = 1.0f;
    a[2] = 1.0f;
    a[3] = 1.0f;
    func_002D2AD0(b, a, *(f32 *)(s0 + 0xC));
    t = 0.05f + *(f32 *)(s0 + 0xC);
    *(f32 *)(s0 + 0xC) = t;
    if (t > 1.0f) {
        *(f32 *)(s0 + 0xC) = 1.0f;
        fp = (void *)func_002E08F0;
        *(void **)(s1 + 0x1C) = (fp == 0) ? 0 : fp;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0B70);
extern void *D_00470938;

typedef struct OptionState {
    char pad0[8];
    s32 f8;
} OptionState;

/* Clears the option screen's state word D_00470938. */
void Option_ClearState(void) {
    D_00470938 = 0;
}
/* Frees the option state block D_00470938 (if any) and clears the pointer. */
void Option_Free(void) {
    if (D_00470938 != 0) {
        amHeap_Free(D_00470938);
        D_00470938 = 0;
    }
}
/* The field at 0x8 of the option state, or 0 when there is no state. */
s32 func_002E0C70(void) {
    return D_00470938 == 0 ? 0 : ((OptionState *)D_00470938)->f8;
}
extern void amCdFs_Close(void *, s32);
extern void *amTask_Create();
extern char D_0046F3E0[];
extern void func_002E0B70();

void ChangeProgress_Start(void) {
    u8 *s0;
    s0 = (u8 *)D_00470938;
    *(s32 *)(s0 + 0x4) = *(s32 *)(*(u8 **)s0 + 0x54);
    *(s32 *)(*(u8 **)s0 + 0x54) = 0;
    amCdFs_Close(*(void **)s0, 0);
    *(s32 *)s0 = 0;
    *(u8 *)(s0 + 0x14) = 1;
    *(s32 *)(s0 + 0x8) = 3;
    *(void **)(s0 + 0x18) = amTask_Create(func_002E0B70, 0, 0x5000, 0x4000, 2, D_0046F3E0);
}
// GIVEN UP: func_002E0D10 (true when the block has 3 at offset 4): the compiler folds the test into xori / sltiu,
// the original keeps a branch (tried: ternary, if/return, if/else with a variable).

#if 0
// differs: the original hoists li 3 before the two loads and compares with beq, mine folds the compare to xori/sltiu (tried if/else and r=0/r=1)
s32 func_002E0D10(void) {
    s32 r;
    if (*(s16 *)(*(u8 **)D_00470938 + 4) != 3) {
        r = 0;
    } else {
        r = 1;
    }
    return r;
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0D10);
extern char D_0046F3C8[];
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void memset(void *, s32, s32);

void func_002E0D40(void) {
    u8 *s0;
    void *p;
    if (D_00470938 != 0) {
        amHeap_Free(D_00470938);
        D_00470938 = 0;
    }
    D_00470938 = amHeap_Alloc(0x1C, 0, D_0046F3C8, 0x74A);
    memset(D_00470938, 0, 0x1C);
    s0 = D_00470938;
    *(s32 *)s0 = amCdFs_ReadFileId(0x10803, 0, 0);
    *(s32 *)((u8 *)D_00470938 + 0x8) = 1;
}

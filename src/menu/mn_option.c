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
#if 0
// differs: 59 of 82 before the last fixes; the original keeps v1 = &D_004E05DC (lui/addiu) for the three float stores, mine folds the address into lui at; the else branch and the bnez/b layout around the func_002DEA00 / func_002DEFF0 stores differ
extern void Save_Request();
extern void Scene_Request(s32, s32);
extern void Scene_FadeTo(s32, s32);
extern void amAdx_Stop(s32);
extern void Obj_CopyVec4F50(s32, void *);
extern void Obj_SetF3C(s32, s32);
extern void func_002DEFF0();
extern void func_002DEA00();
extern void func_002DEFE0();
extern void func_002D9DE0();
extern void func_002D91C0();
extern s32 func_002DE2C0();

void func_002DE460(void) {
    u8 *s0;
    u8 *s1;
    u8 *v1;
    void *v0;
    f32 val;
    f32 vec[4];

    s0 = gOptionWork;
    val = (f32)*(s32 *)(s0 + 0x404) / 255.0f;
    *(f32 *)(D_004E05DC + 0x34) = val;
    val = (f32)*(s32 *)(s0 + 0x408) / 255.0f;
    *(f32 *)(D_004E05DC + 0x38) = val;
    *(f32 *)(D_004E05DC + 0x3C) = val;
    if (func_002DE2C0()) {
        Save_Request(6, -1, 0);
        v0 = (void *)func_002DEFF0;
        v1 = *(u8 **)(s0 + 0x320);
        if (v0 == 0) {
            v0 = 0;
        }
        *(void **)(v1 + 0x1C) = v0;
    } else {
        v0 = (void *)func_002DEA00;
        v1 = *(u8 **)(s0 + 0x320);
        if (v0 == 0) {
            v0 = 0;
        }
        *(void **)(v1 + 0x1C) = v0;
        *(void **)((u8 *)gOptionWork + 0x34C) = (void *)func_002D9DE0;
        *(s32 *)((u8 *)gOptionWork + 0x388) = 0;
        *(s32 *)((u8 *)gOptionWork + 0x38C) = 0;
        Scene_Request(5, 0);
        Scene_FadeTo(10, 0);
    }
    amAdx_Stop(1);
    *(void **)(s0 + 0x344) = (void *)func_002DEFE0;
    *(u32 *)&vec[0] = 0x43CF8000;
    *(u32 *)&vec[1] = 0x43BE0000;
    *(u32 *)&vec[2] = 0;
    *(u32 *)&vec[3] = 0x3F800000;
    s1 = gOptionWork;
    Obj_CopyVec4F50(*(s32 *)(s1 + 0x33C), vec);
    Obj_SetF3C(*(s32 *)(s1 + 0x33C), -1);
    *(void **)(s0 + 0x35C) = (void *)func_002D91C0;
}
#endif
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

extern void func_002DFBC0();
extern s32 Save_GetState();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void func_001EF510(void *, s32);
extern void Scene_Request(s32, s32);
extern void Scene_FadeTo(s32, s32);
extern void func_002DEA00();
extern void func_002D9DE0();
extern char D_0046F3C8[];
extern s8 D_004B4B63[];
extern s8 D_0058F680[];
extern void amHeap_Free(void *);
extern void *memcpy(void *, const void *, u32);

void func_002DEFF0(u8 *a0) {
    u8 *s1;
    u8 *w;

    func_002DFBC0();
    switch (Save_GetState()) {
    case 4:
        s1 = (u8 *)amHeap_Alloc(0xD680, 0, D_0046F3C8, 0x733);
        memcpy(s1, D_0058F680 + D_004B4B63[0] * 0xD680, 0xD680);
        func_001EF510(s1, 0xD680);
        amHeap_Free(s1);
        break;
    case 5:
    case 3:
        break;
    default:
        return;
    }
    *(void **)(a0 + 0x1C) = ((void *)func_002DEA00 == 0) ? 0 : (void *)func_002DEA00;
    w = gOptionWork;
    *(void **)(w + 0x34C) = (void *)func_002D9DE0;
    *(s32 *)(w + 0x388) = 0;
    *(s32 *)(w + 0x38C) = 0;
    Scene_Request(5, 0);
    Scene_FadeTo(10, 0);
}
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
void func_002DF4E0(void) {
    u8 *a2;
    u8 *b;
    s32 a0;
    u8 *a1;
    s16 t;

    a2 = gOptionWork;
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
    *(u8 **)(a2 + 0x3D0) = a1;
    *(u8 **)(a2 + 0x3D4) = a2 + 0x3E8;
    *(u8 **)(a2 + 0x3D8) = a1 + 2;
    b = D_004E6560;
    a0 = 5;
    if ((s32)D_0051168A[0] > 0) {
        a0 = 6;
        if ((s32)b[0x2B12B] > 0) {
            a0 = 7;
            if ((s32)b[0x2B12C] > 0) {
                a0 = 8;
            }
        }
    }
    *(s32 *)(a2 + 0x3DC) = a0;
    *(s32 *)(a2 + 0x3E0) = 5;
    *(s32 *)(a2 + 0x3E4) = 5;
}
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern char D_0046F3C8[];
extern s8 D_0058F680[];
extern s8 D_004B4B63[];
extern void func_001EF510(void *, s32);
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
extern void Save_ClearBusy();
extern void func_002DF100();
extern void func_002DE910();
extern void func_002DD2B0();
extern void amDisp_SetOffset(s32, s32);

void func_002DF5D0(void) {
    u8 *s1;
    u8 *s0;
    u8 *d;

    s0 = gOptionWork;
    switch (Save_GetState()) {
    case 4:
        s1 = (u8 *)amHeap_Alloc(0xD680, 0, D_0046F3C8, 0x733);
        memcpy(s1, D_0058F680 + D_004B4B63[0] * 0xD680, 0xD680);
        func_001EF510(s1, 0xD680);
        amHeap_Free(s1);
        break;
    case 5:
    case 3:
        break;
    default:
        return;
    }
    Save_ClearBusy();
    if (*(void **)(s0 + 0x324) != 0) {
        amTask_Kill(*(void **)(s0 + 0x324));
        *(s32 *)(s0 + 0x324) = 0;
    }
    func_002DF100();
    func_002DE910();
    d = (u8 *)D_004E05DC;
    amDisp_SetOffset(*(s16 *)(d + 0x1E), *(s16 *)(d + 0x20));
    *(void **)(s0 + 0x344) = (void *)func_002DD2B0;
}
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
#if 0
// differs: switch with 2 cases: the original tests case 2 then 1 with beq and keeps the copies of the local struct in another order; 65 of 73 differ after the copy
typedef struct {
    u32 w[4];
} __attribute__((aligned(16))) Opt16;

typedef struct {
    Opt16 a;
    Opt16 b;
    u64 c;
    f32 d;
} OptLoc;

extern u8 D_00456B40[];
extern f32 gFrameDelta;
extern u8 D_0051D9A8[];
extern u8 D_0051D9AC[];
extern void amSofdec_Exit(void);
extern void func_00148270(void *);
extern void func_0022DB40(f32);
extern void amSofdec_Init(void);
extern void func_00101190(void *);
extern void func_00147560(void);

void func_002E0050(s32 s0) {
    OptLoc L;
    f32 f1;

    L.a = *(Opt16 *)D_00456B40;
    L.b = *(Opt16 *)(D_00456B40 + 0x10);
    L.c = *(u64 *)(D_00456B40 + 0x20);
    L.d = *(f32 *)(D_00456B40 + 0x28);
    switch (s0) {
    case 2:
        *(u8 *)((u8 *)&L + 0x22) = 0;
        *(u8 *)((u8 *)&L + 0x0) = 0x50;
        *(u16 *)((u8 *)&L + 0x26) = 0x280;
        break;
    case 1:
        *(u8 *)((u8 *)&L + 0x0) = 3;
        *(u16 *)((u8 *)&L + 0x28) = 0x200;
        break;
    }
    amSofdec_Exit();
    func_00148270(&L);
    f1 = gFrameDelta;
    *(f32 *)D_0051D9A8 = f1;
    *(f32 *)D_0051D9AC = f1 / 60.0f;
    if (s0 == 1) {
        func_0022DB40(1.2f);
    } else {
        func_0022DB40(1.0f);
    }
    amSofdec_Init();
    func_00101190(func_00147560);
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0050);
extern void *gOptionState;
extern void func_002D2AD0(f32, f32 *, f32 *);
extern void amTask_Kill(void *);
extern void func_002E0050(s32);
extern void func_002E0B70(void);

void func_002E0170(u8 *a0) {
    f32 b[4];
    f32 a[4];
    u8 *s1;
    u8 *s0;
    f32 f;

    s1 = a0;
    s0 = (u8 *)gOptionState;
    b[2] = 1.0f;
    b[3] = 1.0f;
    a[2] = 1.0f;
    a[3] = 1.0f;
    b[1] = 40.0f;
    b[0] = 0.0f;
    a[0] = 540.0f;
    a[1] = 128.0f;
    func_002D2AD0(*(f32 *)(s0 + 0xC), b, a);
    f = *(f32 *)(s0 + 0xC) - 0.05f;
    *(f32 *)(s0 + 0xC) = f;
    if (f < 0.0f) {
        *(f32 *)(s0 + 0xC) = 0.0f;
        if (*(s8 *)(s0 + 0x14) == 0) {
            amTask_Kill(*(void **)(s0 + 0x18));
            *(void **)(s0 + 0x18) = 0;
            *(s32 *)(s0 + 0x8) = 4;
        } else {
            func_002E0050(0);
            *(s8 *)(s0 + 0x14) = 1;
            *(s32 *)(s0 + 0x10) = 0;
            *(void **)(s1 + 0x1C) = ((void *)func_002E0B70 == 0) ? 0 : (void *)func_002E0B70;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E0260);
INCLUDE_ASM("asm/nonmatchings/menu/mn_option", func_002E06A0);
extern void func_002E06A0();

void func_002E0800(u8 *a0) {
    u8 *s0;
    u8 *s1;
    f32 b[4];
    f32 a[4];
    f32 f;
    s1 = a0;
    s0 = (u8 *)gOptionState;
    b[2] = 1.0f;
    b[1] = 40.0f;
    b[0] = 0.0f;
    a[0] = 540.0f;
    a[1] = 256.0f;
    b[3] = 1.0f;
    a[2] = 1.0f;
    a[3] = 1.0f;
    func_002D2AD0(*(f32 *)(s0 + 0xC), b, a);
    f = *(f32 *)(s0 + 0xC) - 0.05f;
    *(f32 *)(s0 + 0xC) = f;
    if (f < 0.0f) {
        *(f32 *)(s0 + 0xC) = 0.0f;
        if (*(s8 *)(s0 + 0x14) == 0) {
            *(s8 *)(s0 + 0x14) = 1;
            *(s8 *)(s0 + 0x15) = 100;
            *(void **)(s1 + 0x1C) = ((void *)func_002E06A0 == 0) ? 0 : (void *)func_002E06A0;
        } else {
            amTask_Kill(*(void **)(s0 + 0x18));
            *(void **)(s0 + 0x18) = 0;
            *(s32 *)(s0 + 0x8) = 4;
        }
    }
}
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
extern void *gOptionState;

typedef struct OptionState {
    char pad0[8];
    s32 f8;
} OptionState;

/* Clears the option screen's state word gOptionState. */
void Option_ClearState(void) {
    gOptionState = 0;
}
/* Frees the option state block gOptionState (if any) and clears the pointer. */
void Option_Free(void) {
    if (gOptionState != 0) {
        amHeap_Free(gOptionState);
        gOptionState = 0;
    }
}
/* The field at 0x8 of the option state, or 0 when there is no state. */
s32 func_002E0C70(void) {
    return gOptionState == 0 ? 0 : ((OptionState *)gOptionState)->f8;
}
extern void amCdFs_Close(void *, s32);
extern void *amTask_Create();
extern char D_0046F3E0[];
extern void func_002E0B70();

void ChangeProgress_Start(void) {
    u8 *s0;
    s0 = (u8 *)gOptionState;
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

// differs: the original hoists li 3 before the two loads and compares with beq, mine folds the compare to xori/sltiu (tried if/else and r=0/r=1; a local k = 3 is folded too)
s32 func_002E0D10(void)
{
  s32 r;
  short new_var;
  new_var = *((s16 *) ((*((u8 **) gOptionState)) + 4));
  if (new_var != 3)
  {
    r = 0;
  }
  else
  {
    r = 1;
    if ((new_var && new_var) && new_var)
    {
    }
  }
  return r;
}

extern char D_0046F3C8[];
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void memset(void *, s32, s32);

void Option_Load(void) {
    u8 *s0;
    void *p;
    if (gOptionState != 0) {
        amHeap_Free(gOptionState);
        gOptionState = 0;
    }
    gOptionState = amHeap_Alloc(0x1C, 0, D_0046F3C8, 0x74A);
    memset(gOptionState, 0, 0x1C);
    s0 = gOptionState;
    *(s32 *)s0 = amCdFs_ReadFileId(0x10803, 0, 0);
    *(s32 *)((u8 *)gOptionState + 0x8) = 1;
}

#include "common.h"

/* Declarations shared by the memory card screens of this file. */
extern f32 D_004E0614[];
extern void SoundRpc_SetVolume(s32, s32, f32);
extern void SoundRpc_Send3(s32, s32, s32, s32);
extern s32 gMcState;
extern s32 gMcResult;
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_00470894;
extern s32 D_00470898;
s32 amMc_GetInfo(s32, s32, s32);
extern void func_002880B0(s32);
extern void func_00288500();
extern void func_00288870(s32);
void func_0028DDA0(void);
void func_0028DDB0(u8 *arg0);
s32 func_0028DDF0();

/* A scheduler task: the function it runs from the next frame on is at 0x1C. */
typedef struct McTask {
    u8 pad0[0x1C];
    void *func; /* 0x1C */
} McTask;
extern McTask *D_0047088C;
#define MC_SETFUNC(t, f) (((McTask *)(t))->func = ((f) == NULL) ? NULL : (void *)(f))

/* The menu sound: volume first, then the effect if the volume is above zero. */
#define MC_SE(n)                                  \
    SoundRpc_SetVolume(0, 0, D_004E0614[0]);      \
    if (!(D_004E0614[0] <= 0.0f)) {               \
        SoundRpc_Send3(0, 0, (n), 0);             \
    }

INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_002880B0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00288500);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00288870);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_002889C0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00288AF0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00288BF0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00288E70);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00289210);
extern void func_00289210(void);
void func_00289380(u8 *arg0) {
    s32 (*var_v1)();

    if (amMc_GetInfo(D_0047084C, 0, 0) == 0) {
        func_00288870(0x20);
        var_v1 = (func_0028DDF0 == NULL) ? NULL : func_0028DDF0;
        *(s32 (**)())((u8 *)arg0 + 0x1C) = var_v1;
        D_00470894 = (int)(&func_00289210);
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_002893F0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_002898F0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00289BE0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00289DF0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00289E80);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00289F30);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028A0A0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028A300);
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern u16 D_00492FD2[];
extern u16 D_00493032[];
extern u16 D_0049308A[];
extern u16 D_004930EA[];
extern void func_00289E80(void);
extern void func_0028A300(void);
void func_0028A480(u8 *arg0) {
    s32 btn;

    func_002880B0(D_00470854);
    btn = D_00492FCE[0] | D_00493086[0];
    if (btn & 0x1000) {
        MC_SE(5);
        D_00470858 = 2;
        func_00288870(-1);
        { McTask *t = D_0047088C; MC_SETFUNC(t, func_0028DDB0); }
        D_00470894 = (s32)func_0028DDA0;
    } else if (btn & 0x4000) {
        if (D_00470854 != 0) {
            MC_SE(5);
            D_00470858 = 2;
            func_00288870(-1);
            { McTask *t = D_0047088C; MC_SETFUNC(t, func_0028DDB0); }
            D_00470894 = (s32)func_0028DDA0;
        } else {
            MC_SE(3);
            if (amMc_GetInfo(D_0047084C, 0, 1) != 0) {
                func_00288870(4);
                MC_SETFUNC(arg0, func_0028DDF0);
                D_00470894 = (s32)func_00289E80;
            } else {
                func_00288870(0x20);
                MC_SETFUNC(arg0, func_0028A300);
            }
            return;
        }
    } else {
        switch (((D_00492FD2[0] | D_00493032[0]) | (D_0049308A[0] | D_004930EA[0])) & 0x50) {
        case 0x10:
        case 0x40:
            MC_SE(2);
            D_00470854 ^= 1;
            break;
        default:
            return;
        }
    }
}
extern s32 D_00470850;
extern s32 D_00470870;
extern u8 D_004B4B40[];
extern s32 D_004B4BE0[];
extern s8 D_004B4B64[];
extern void func_001EF510(s32, s32);
extern void func_001EF930(u8 *, s32);
extern void func_001EF730(s32);
void func_0028A9E0(u8 *arg0);
void func_0028A730(u8 *arg0) {
    s32 btn;

    func_002880B0(D_00470854);
    btn = D_00492FCE[0] | D_00493086[0];
    if (btn & 0x1000) {
        MC_SE(5);
        D_00470858 = 2;
        func_00288870(-1);
        { McTask *t = D_0047088C; MC_SETFUNC(t, func_0028DDB0); }
        D_00470894 = (s32)func_0028DDA0;
    } else {
        if (btn & 0x4000) {
            if (D_00470854 != 0) {
                MC_SE(5);
                D_00470858 = 2;
                func_00288870(-1);
                { McTask *t = D_0047088C; MC_SETFUNC(t, func_0028DDB0); }
                D_00470894 = (s32)func_0028DDA0;
            } else {
                MC_SE(3);
                func_001EF510(D_00470870, 0xD680);
                func_001EF930(D_004B4B40, D_00470870);
                func_001EF730(D_00470870);
                D_004B4BE0[0] = 0;
                D_004B4B64[0] = -1;
                func_00288870(3);
                MC_SETFUNC(arg0, func_0028DDF0);
                D_00470894 = (s32)func_0028A9E0;
                D_00470850 = 0x78;
            }
        }
        switch (((D_00492FD2[0] | D_00493032[0]) | (D_0049308A[0] | D_004930EA[0])) & 0x50) {
        case 0x10:
        case 0x40:
            MC_SE(2);
            D_00470854 ^= 1;
            break;
        default:
            return;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028A9E0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028AAA0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028AD20);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028AE60);
extern s32 D_00470864;
extern s32 D_00470868;
void func_0028A730(u8 *arg0);
extern void func_0028C580(u8 *);
extern void func_0028D4D0(void);
void func_0028AFB0(u8 *arg0) {
    s32 btn;

    func_002880B0(D_00470854);
    btn = D_00492FCE[0] | D_00493086[0];
    if (btn & 0x1000) {
        MC_SE(5);
        func_00288870(2);
        MC_SETFUNC(arg0, func_0028DDF0);
        D_00470894 = (s32)func_0028A730;
        D_00470854 = 1;
    } else if (btn & 0x4000) {
        if (D_00470854 != 0) {
            MC_SE(5);
            func_00288870(2);
            MC_SETFUNC(arg0, func_0028DDF0);
            D_00470894 = (s32)func_0028A730;
            D_00470854 = 1;
        } else {
            MC_SE(3);
            if (amMc_GetInfo(D_0047084C, 0, 1) != 0) {
                func_00288870(4);
                MC_SETFUNC(arg0, func_0028DDF0);
                D_00470858 = 3;
                D_00470894 = (s32)func_0028C580;
                D_00470854 = 1;
            } else {
                D_00470864 = 0;
                D_00470868 = 0;
                func_00288870(0x20);
                MC_SETFUNC(arg0, func_0028D4D0);
            }
        }
        return;
    } else {
        switch (((D_00492FD2[0] | D_00493032[0]) | (D_0049308A[0] | D_004930EA[0])) & 0x50) {
        case 0x10:
        case 0x40:
            MC_SE(2);
            D_00470854 ^= 1;
            break;
        default:
            return;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028B270);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028B380);
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern u16 D_00492FD2[];
extern u16 D_00493032[];
extern u16 D_0049308A[];
extern u16 D_004930EA[];
extern void func_00289E80(void);
extern void func_0028D4D0(void);
extern void func_0028C580(u8 *);
void func_0028B720(u8 *arg0) {
    s32 btn;

    func_002880B0(D_00470854);
    btn = D_00492FCE[0] | D_00493086[0];
    if (btn & 0x1000) {
        MC_SE(5);
        D_00470858 = 2;
        func_00288870(-1);
        { McTask *t = D_0047088C; MC_SETFUNC(t, func_0028DDB0); }
        D_00470894 = (s32)func_0028DDA0;
    } else if (btn & 0x4000) {
        if (D_00470854 != 0) {
            MC_SE(5);
            D_00470858 = 2;
            func_00288870(-1);
            { McTask *t = D_0047088C; MC_SETFUNC(t, func_0028DDB0); }
            D_00470894 = (s32)func_0028DDA0;
        } else {
            MC_SE(3);
            if (amMc_GetInfo(D_0047084C, 0, 1) != 0) {
                func_00288870(4);
                func_0028C580(arg0);
            } else {
                func_00288870(0x20);
                MC_SETFUNC(arg0, func_0028D4D0);
            }
        }
        return;
    } else {
        switch (((D_00492FD2[0] | D_00493032[0]) | (D_0049308A[0] | D_004930EA[0])) & 0x50) {
        case 0x10:
        case 0x40:
            MC_SE(2);
            D_00470854 ^= 1;
            break;
        default:
            return;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028B9B0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028BDB0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028BEB0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028C0F0);
extern s32 D_0047087C;
extern char D_0046B920[];
s32 amMc_Save(s32, s32, void *, s32, s32);
extern void func_0028BDB0(void);
extern void func_0028C0F0(void);
void func_0028C250(u8 *arg0) {
    switch (gMcState) {
    case 2:
        break;
    case 3:
        MC_SETFUNC(arg0, func_0028BDB0);
        D_00470898 = 0;
        return;
    default:
        return;
    }
    if (amMc_Save(D_0047084C, 0, D_0046B920, D_0047087C, 0xBC4A) != 0) {
        MC_SETFUNC(arg0, func_0028BDB0);
        D_00470898 = 0;
    } else {
        MC_SETFUNC(arg0, func_0028C0F0);
    }
}
extern s32 D_00470878;
extern char D_0046B940[];
void func_0028C310(u8 *arg0) {
    switch (gMcState) {
    case 2:
        break;
    case 3:
        if (gMcResult < -10) {
            MC_SETFUNC(arg0, func_0028BDB0);
            D_00470898 = 0;
            return;
        }
        break;
    default:
        return;
    }
    if (amMc_Save(D_0047084C, 0, D_0046B940, D_00470878, 0x3C4) != 0) {
        MC_SETFUNC(arg0, func_0028BDB0);
        D_00470898 = 0;
    } else {
        MC_SETFUNC(arg0, func_0028C250);
    }
}
extern char D_0046BA30[];
s32 amMc_Unformat(s32, s32, void *);
void func_0028C3E0(u8 *arg0) {
    switch (gMcState) {
    case 2:
        break;
    case 3:
        if (gMcResult != -4) {
            func_00288870(0x13);
            MC_SETFUNC(arg0, func_0028DDF0);
            D_00470858 = 3;
            D_00470894 = (s32)func_0028C580;
            return;
        }
        break;
    default:
        return;
    }
    if (amMc_Unformat(D_0047084C, 0, D_0046BA30) != 0) {
        MC_SETFUNC(arg0, func_0028BDB0);
        D_00470898 = 0;
    } else {
        MC_SETFUNC(arg0, func_0028C310);
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028C4C0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028C580);

void func_0028C730(void) {
}

INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028C740);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028CCE0);
void func_0028CCE0(u8 *arg0);
void func_0028CE10(u8 *arg0) {
    switch (gMcState) {
    case 2:
        break;
    case 3:
        gMcResult = -5;
        break;
    default:
        return;
    }
    if (gMcResult == 0) {
        func_00288870(0xD);
        MC_SETFUNC(arg0, func_0028DDF0);
        D_00470850 = 0x3C;
        D_00470894 = (s32)func_0028CCE0;
    } else {
        func_00288870(0xE);
        MC_SETFUNC(arg0, func_0028DDF0);
        D_00470858 = 3;
        D_00470894 = (s32)func_0028C580;
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028CEF0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028D1E0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028D4D0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028D810);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028DDA0);
extern f32 D_00470884;
extern s32 D_00470894;
void func_0028DDB0(u8 *arg0) {
    s32 var_v1;

    if (D_00470884 == 0.0f) {
        var_v1 = D_00470894;
        if (var_v1 == 0) {
            var_v1 = 0;
        }
        *(s32 *)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028DDF0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028DE30);
extern s32 func_0028D810();
void func_0028DEA0(u8 *arg0) {
    s32 (*var_v0)();

    D_00470884 = D_00470884 + 0.05f;
    if (!(D_00470884 < 1.0f)) {
        var_v0 = func_0028D810;
        D_00470884 = 1.0f;
        if (func_0028D810 == NULL) {
            var_v0 = NULL;
        }
        *(s32 (**)())((u8 *)arg0 + 0x1C) = var_v0;
        func_0028D810();
        return;
    }
    func_00288500();
}

void func_0028DF10(void) {
}

extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
extern s32 D_00470048;
extern s32 D_00470838;
extern s32 D_0047083C;
extern s32 D_00470848;

extern void *D_00470890;
extern void *D_0047089C;
extern void *D_004708A0;
extern void amHeap_Free(void *);
extern void amTask_Kill(void *);
void func_0028DF20(void) {
    if (D_0047088C != NULL) {
        amTask_Kill(D_0047088C);
    }
    if (D_00470890 != NULL) {
        amTask_Kill(D_00470890);
    }
    if (D_0047089C != NULL) {
        amHeap_Free(D_0047089C);
    }
    if (D_004708A0 != NULL) {
        amHeap_Free(D_004708A0);
    }
    D_00470848 = 0;
    D_0047088C = NULL;
    D_00470048 = -1;
    D_00470890 = NULL;
    D_00470884 = 0;
    D_0047089C = NULL;
    D_004708A0 = NULL;
    D_00470838 = 0;
    D_0047083C = 0;
}

INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028DFC0);

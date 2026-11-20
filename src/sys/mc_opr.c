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
s32 amMc_Save(s32, s32, void *, s32, s32);
void func_0028BDB0(u8 *arg0);
extern void func_002880B0(s32);
extern void func_00288500();
extern void func_00288870(s32);
void func_0028DDA0(void);
void func_0028DDB0(u8 *arg0);
void func_0028DDF0(u8 *arg0);

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
extern s32 D_00470888;
extern f32 D_005AA540[];
extern void *D_00470890;
extern f32 D_00470884;
extern void func_0028DE30(u8 *);
extern s32 func_0028D810();
extern void func_0028DEA0(u8 *);
void func_00288870(s32 arg0) {
    D_00470888 = arg0;
    if (arg0 != -1) {
        switch (arg0) {
        case 9:
        case 0xE:
        case 0x13:
        case 0x1C:
        case 0x14:
        case 0x16:
        case 0x17:
        case 0x18:
            D_005AA540[0] = 0.75f;
            D_005AA540[1] = 0.25f;
            D_005AA540[2] = 0.25f;
            D_005AA540[3] = 0.5f;
            break;
        default:
            D_005AA540[0] = 0.0f;
            D_005AA540[1] = 0.75f;
            D_005AA540[2] = 0.25f;
            D_005AA540[3] = 0.5f;
            break;
        }
    }
    if (arg0 < 0) {
        { McTask *t = D_00470890; MC_SETFUNC(t, func_0028DE30); }
    } else if (D_00470884 == 1.0f) {
        { McTask *t = D_00470890; MC_SETFUNC(t, func_0028D810); }
    } else {
        { McTask *t = D_00470890; MC_SETFUNC(t, func_0028DEA0); }
    }
}
typedef struct McSlotInfo {
    u8 pad0[8];
    s32 free; /* 0x8 */
    u8 pad1[0x34];
} McSlotInfo;

extern s32 D_0047084C;
extern s32 D_00470858;
extern s32 D_00470894;
extern McSlotInfo gMcInfo[];
extern char D_0046B960[];
extern s32 amMc_Delete(s32, s32, char *);
extern void func_00288870(s32);
extern void func_0028DDF0(u8 *);
extern void func_0028C580(u8 *);
extern void func_0028C3E0(u8 *);
void func_002889C0(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 i;
    s32 avail;
    u32 sz;

    avail = 0x6B;
    for (i = 0; i < arg2; i++) {
        sz = (*(u32 *)(arg1 + 0x10) + 0x3FF) >> 10;
        avail -= sz;
        if (*(u16 *)(arg1 + 0x14) & 0x20) {
            avail--;
        }
        arg1 += 0x40;
    }
    if (gMcInfo[D_0047084C].free >= avail) {
        if (amMc_Delete(D_0047084C, 0, D_0046B960) != 0) {
            func_00288870(0x13);
            MC_SETFUNC(arg0, func_0028DDF0);
            D_00470858 = 3;
            D_00470894 = (s32)func_0028C580;
        } else {
            func_00288870(0x11);
            MC_SETFUNC(arg0, func_0028DDF0);
            D_00470894 = (s32)func_0028C3E0;
        }
    } else {
        func_00288870(0xF);
        MC_SETFUNC(arg0, func_0028DDF0);
        D_00470894 = (s32)func_0028C580;
    }
}
extern s32 func_00127940(void *, void *);
extern u8 D_004535E0[];
s32 func_00288AF0(u8 *arg0, s32 arg1, char *arg2) {
    s32 k;
    s32 count;
    u8 *found;
    u8 *e;

    found = NULL;
    if (arg1 != 5) {
        return 0;
    }
    count = 0;
    while (arg1 > 0) {
        e = (arg2 != 0) ? (u8 *)arg2 : D_004535E0;
        for (k = 0; k < 3; k++) {
            if (*(s32 *)(arg0 + 0x10) == *(s32 *)e) {
                if (func_00127940(arg0 + 0x20, e + 4) == 0) {
                    count++;
                    if (k == 2) {
                        found = arg0;
                    }
                    break;
                }
            }
            e += 0x24;
        }
        arg1--;
        arg0 += 0x40;
    }
    if (count != 3) {
        found = NULL;
    }
    return (s32)found;
}
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00288BF0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00288E70);
extern char D_0046B9A0[];
extern u8 D_005AA3C0[];
extern s32 D_00470838;
s32 amMc_CheckFile(s32, s32, void *, void *, s32);
void func_00289380(u8 *arg0);
void func_00288E70(u8 *arg0);
void func_00288BF0(u8 *arg0);

void func_00289210(u8 *arg0) {
    switch (gMcState) {
    case 2:
        break;
    case 3:
        gMcResult = -5;
        break;
    default:
        return;
    }

    switch (gMcResult) {
    case 0:
        if (((s32 *)&D_00470838)[D_0047084C] != 0) {
            break;
        }
    case -1:
    case -2:
        if (amMc_CheckFile(D_0047084C, 0, D_0046B9A0, D_005AA3C0, 6) != 0) {
            break;
        }
        ((s32 *)&D_00470838)[D_0047084C] = 2;
        MC_SETFUNC(arg0, func_00288E70);
        return;
    case -5:
    default:
        ((s32 *)&D_00470838)[D_0047084C] = 1;
        func_00288870(5);
        MC_SETFUNC(arg0, func_0028DDF0);
        D_00470894 = (s32)func_00288BF0;
        D_00470854 = 1;
        return;
    }
    MC_SETFUNC(arg0, func_00289380);
}
void func_00289380(u8 *arg0) {
    void (*var_v1)(u8 *);

    if (amMc_GetInfo(D_0047084C, 0, 0) == 0) {
        func_00288870(0x20);
        var_v1 = (func_0028DDF0 == NULL) ? NULL : func_0028DDF0;
        *(void (**)(u8 *))((u8 *)arg0 + 0x1C) = var_v1;
        D_00470894 = (int)(&func_00289210);
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_002893F0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_002898F0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_00289BE0);
extern s32 D_00470838;
extern void func_00289BE0(void);
void func_00289DF0(u8 *arg0) {
    if (((s32 *)&D_00470838)[D_0047084C] & 0x8000) {
        D_0047084C ^= 1;
        return;
    }
    if (amMc_GetInfo(D_0047084C, 0, 0) != 0) {
        D_0047084C ^= 1;
        return;
    }
    MC_SETFUNC(arg0, func_00289BE0);
}
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern s32 D_00470850;
void func_00289E80(void) {
    if ((D_00492FCE[0] | D_00493086[0]) & 0x4000) {
        MC_SE(3);
        D_00470858 = 2;
        func_00288870(-1);
        { McTask *t = D_0047088C; MC_SETFUNC(t, func_0028DDB0); }
        D_00470894 = (s32)func_0028DDA0;
    }
}
extern s32 D_00470558;
extern void *D_0047054C;
extern void *D_004708A0;
extern u8 D_004B4B48[];
extern u8 D_004B4B50[];
extern u8 D_004B4B40[];
extern s8 D_004B4B64[];
extern s8 D_004B4B65[];
extern s32 func_001EF510(s32, s32);
extern void func_001EF930(u8 *, s32);
extern void amHeap_Free(void *);
void func_0028A9E0(u8 *arg0);
void func_00289F30(u8 *arg0) {
    switch (gMcState) {
    case 2:
        if (D_00470558 == 0xD680) {
            break;
        }
    case 3:
        func_00288870(9);
        MC_SETFUNC(arg0, func_0028DDF0);
        D_00470894 = (s32)func_00289E80;
        if (D_0047054C != 0) {
            amHeap_Free(D_0047054C);
            D_0047054C = 0;
        }
        return;
    default:
        return;
    }
    D_004708A0 = D_0047054C;
    D_0047054C = 0;
    if (func_001EF510((s32)D_004708A0, 0xD680) != 0) {
        func_00288870(9);
        MC_SETFUNC(arg0, func_0028DDF0);
        D_00470894 = (s32)func_00289E80;
        amHeap_Free(D_004708A0);
        D_004708A0 = 0;
        return;
    }
    *(s64 *)D_004B4B48 = 1;
    *(s32 *)D_004B4B50 = 1;
    func_001EF930(D_004B4B40, (s32)D_004708A0);
    amHeap_Free(D_004708A0);
    D_004B4B65[0] = 0;
    D_004708A0 = 0;
    D_004B4B64[0] = (s8)D_0047084C;
    func_00288870(0xA);
    MC_SETFUNC(arg0, func_0028DDF0);
    D_00470894 = (s32)func_0028A9E0;
    D_00470850 = 0x78;
}
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
extern s32 func_001EF510(s32, s32);
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
void func_0028A9E0(u8 *arg0) {
    if (--D_00470850 == 0 || ((D_00492FCE[0] | D_00493086[0]) & 0x4000)) {
        MC_SE(3);
        D_00470858 = 1;
        func_00288870(-1);
        { McTask *t = D_0047088C; MC_SETFUNC(t, func_0028DDB0); }
        D_00470894 = (s32)func_0028DDA0;
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028AAA0);
extern s32 D_00470860;
extern u8 D_005AA3C0[];
extern char D_00453650[];
extern char D_0046B8F0[];
extern s32 func_00288AF0(u8 *, s32, char *);
extern void func_0026D9C0(s32, s32);
void func_0028BEB0(u8 *arg0);
void func_0028AD20(u8 *arg0) {
    switch (gMcState) {
    default:
        return;
    case 2:
    case 3:
        break;
    }
    if (func_00288AF0(D_005AA3C0, gMcResult, D_00453650) != 0) {
        D_00470860 |= 2;
        func_001EF510(D_00470870, 0xD680);
        ((u8 *)D_00470870)[0xD61A] = 1;
        func_0026D9C0(D_00470870, 0x1FD);
        if (D_00470860 & 4) {
            ((u8 *)D_00470870)[0xD607] = 1;
            func_0026D9C0(D_00470870, 0x1EA);
        }
        func_001EF730(D_00470870);
    }
    if (amMc_Save(D_0047084C, 0, D_0046B8F0, D_00470870, 0xD680) != 0) {
        MC_SETFUNC(arg0, func_0028BDB0);
        D_00470898 = 0;
    } else {
        MC_SETFUNC(arg0, func_0028BEB0);
    }
}
extern char D_004536C0[];
extern char D_0046B9E0[];
s32 amMc_GetDir(s32, s32, char *, u8 *, s32);
void func_0028AE60(u8 *arg0) {
    switch (gMcState) {
    default:
        return;
    case 2:
    case 3:
        break;
    }
    if (func_00288AF0(D_005AA3C0, gMcResult, D_004536C0) != 0) {
        D_00470860 |= 4;
        func_001EF510(D_00470870, 0xD680);
        ((u8 *)D_00470870)[0xD52E] = 1;
        func_0026D9C0(D_00470870, 0x111);
        func_001EF730(D_00470870);
    }
    if (amMc_GetDir(D_0047084C, 0, D_0046B9E0, D_005AA3C0, 6) != 0) {
        if (amMc_Save(D_0047084C, 0, D_0046B8F0, D_00470870, 0xD680) != 0) {
            MC_SETFUNC(arg0, func_0028BDB0);
            D_00470898 = 0;
        } else {
            MC_SETFUNC(arg0, func_0028BEB0);
        }
    } else {
        MC_SETFUNC(arg0, func_0028AD20);
    }
}
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
extern s32 gMcState;
extern s32 gMcResult;
extern s32 D_0047084C;
extern s32 D_00470854;
extern s32 D_00470858;
extern s32 D_00470860;
extern s32 D_00470894;
extern void func_00288870(s32);
extern void func_0028DDF0(u8 *);
extern void func_0028AFB0(u8 *);
extern void func_0028C580(u8 *);
void func_0028B270(u8 *arg0) {
    switch (gMcState) {
    case 2:
        break;
    case 3:
        gMcResult = -5;
        break;
    default:
        return;
    }
    D_00470860 = 0;
    switch (gMcResult) {
    case 0:
    case -1:
    case -2:
        func_00288870(D_0047084C + 0xB);
        MC_SETFUNC(arg0, func_0028DDF0);
        D_00470894 = (s32)func_0028AFB0;
        D_00470854 = 1;
        break;
    case -5:
    default:
        func_00288870(4);
        MC_SETFUNC(arg0, func_0028DDF0);
        D_00470858 = 3;
        D_00470894 = (s32)func_0028C580;
        D_00470854 = 1;
    }
}
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
extern char *D_00453740[];
s32 amMc_Unformat(s32, s32, void *);
void func_0028BDB0(u8 *arg0) {
    do {
        if (!(D_00470898 & 1)) {
            if (amMc_Unformat(D_0047084C, 0, D_00453740[D_00470898 >> 1]) != 0) {
                D_00470898 += 2;
            } else {
                D_00470898 += 1;
                return;
            }
        } else {
            switch (gMcState) {
            case 2:
            case 3:
                D_00470898 += 1;
                break;
            default:
                return;
            }
        }
    } while (D_00470898 < 2);
    func_00288870(0x13);
    MC_SETFUNC(arg0, func_0028DDF0);
    D_00470858 = 3;
    D_00470894 = (s32)func_0028C580;
}
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028BEB0);
extern s32 D_00470048;
extern s32 D_00470898;
extern char D_0046BA10[];
extern u8 D_005AA3C0[];
extern char D_0046B8F0[];
extern s32 D_00470860;
void func_0028AE60(u8 *arg0);
void func_0028AD20(u8 *arg0);
void func_0028C0F0(u8 *arg0) {
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
    if (D_00470048 == 0) {
        D_00470860 = 0;
        func_00288870(0x11);
        if (amMc_GetDir(D_0047084C, 0, D_0046BA10, D_005AA3C0, 6) == 0) {
            MC_SETFUNC(arg0, func_0028AE60);
        } else if (amMc_GetDir(D_0047084C, 0, D_0046BA10, D_005AA3C0, 6) == 0) {
            MC_SETFUNC(arg0, func_0028AD20);
        } else {
            return;
        }
    } else {
        if (amMc_Save(D_0047084C, 0, D_0046B8F0, D_00470870, 0xD680) != 0) {
            MC_SETFUNC(arg0, func_0028BDB0);
            D_00470898 = 0;
        } else {
            MC_SETFUNC(arg0, func_0028BEB0);
        }
    }
}
extern s32 D_0047087C;
extern char D_0046B920[];
extern void func_0028C0F0(u8 *arg0);
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
void func_0028C4C0(u8 *arg0) {
    if (--D_00470850 == 0 || ((D_00492FCE[0] | D_00493086[0]) & 0x4000)) {
        MC_SE(3);
        func_00288870(-1);
        MC_SETFUNC(arg0, func_0028DDB0);
        D_00470894 = (s32)func_0028DDA0;
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028C580);

void func_0028C730(void) {
}

INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028C740);
extern s32 D_00470850;
extern s32 D_00470864;
extern s32 D_00470868;
extern u16 D_00492FCE[];
extern u16 D_00493086[];
extern void func_00288870(s32);
extern void func_0028DDF0(u8 *);
extern void func_0028D4D0(void);
extern void func_0028C580(u8 *);
void func_0028CCE0(u8 *arg0) {
    if (--D_00470850 == 0 || ((D_00492FCE[0] | D_00493086[0]) & 0x4000)) {
        if ((D_00492FCE[0] | D_00493086[0]) & 0x4000) {
            MC_SE(3);
        }
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
}
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
extern s32 D_00470048;
extern s32 D_0047085C;
void func_0028CEF0(u8 *arg0) {
    s32 btn;

    func_002880B0(D_00470854);
    btn = D_00492FCE[0] | D_00493086[0];
    if (!(btn & 0x1000)) {
        if (btn & 0x4000) {
            if (D_00470854 == 0) {
                MC_SE(3);
                if (amMc_GetInfo(D_0047084C, 0, 1) != 0) {
                    func_00288870(4);
                    MC_SETFUNC(arg0, func_0028DDF0);
                    D_00470858 = 3;
                    D_00470894 = (s32)func_0028C580;
                    D_00470854 = 1;
                } else {
                    D_00470864 = 1;
                    D_00470868 = 0;
                    func_00288870(0x20);
                    MC_SETFUNC(arg0, func_0028D4D0);
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
            }
            return;
        }
    }
    MC_SE(5);
    switch (D_00470048) {
    case 0:
        func_00288870(2);
        MC_SETFUNC(arg0, func_0028DDF0);
        D_00470894 = (s32)func_0028A730;
        D_00470854 = 1;
        break;
    case 2:
        D_00470858 = 2;
        func_00288870(-1);
        MC_SETFUNC(arg0, func_0028DDB0);
        D_00470894 = (s32)func_0028DDA0;
        break;
    case 4:
    case 5:
        func_00288870(D_0047085C);
        MC_SETFUNC(arg0, func_0028DDF0);
        D_00470854 = 0;
        D_00470864 = 0;
        D_00470894 = (s32)func_0028B720;
        D_00470868 = 0;
        break;
    }
}
void func_0028D1E0(u8 *arg0) {
    s32 btn;

    func_002880B0(D_00470854);
    btn = D_00492FCE[0] | D_00493086[0];
    if (!(btn & 0x1000)) {
        if (btn & 0x4000) {
            if (D_00470854 == 0) {
                MC_SE(3);
                if (amMc_GetInfo(D_0047084C, 0, 1) != 0) {
                    func_00288870(4);
                    MC_SETFUNC(arg0, func_0028DDF0);
                    D_00470858 = 3;
                    D_00470894 = (s32)func_0028C580;
                    D_00470854 = 1;
                } else {
                    D_00470868 = 1;
                    D_00470864 = 0;
                    func_00288870(0x20);
                    MC_SETFUNC(arg0, func_0028D4D0);
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
            return;
        }
    }
    MC_SE(5);
    switch (D_00470048) {
    case 0:
        func_00288870(2);
        MC_SETFUNC(arg0, func_0028DDF0);
        D_00470894 = (s32)func_0028A730;
        D_00470854 = 1;
        break;
    case 2:
        D_00470858 = 2;
        func_00288870(-1);
        MC_SETFUNC(arg0, func_0028DDB0);
        D_00470894 = (s32)func_0028DDA0;
        break;
    case 4:
    case 5:
        func_00288870(D_0047085C);
        MC_SETFUNC(arg0, func_0028DDF0);
        D_00470854 = 0;
        D_00470864 = 0;
        D_00470894 = (s32)func_0028B720;
        D_00470868 = 0;
        break;
    }
}
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028D4D0);
INCLUDE_ASM("asm/nonmatchings/sys/mc_opr", func_0028D810);
extern s32 D_00470830;
void func_0028DF20(void);
void func_0028DDA0(void) {
    D_00470830 = D_00470858;
    func_0028DF20();
}
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

extern f32 D_00470884;
void func_0028DDF0(u8 *arg0) {
    if (D_00470884 == 1.0f) {
        ((McTask *)arg0)->func = (D_00470894 == 0) ? NULL : (void *)D_00470894;
    }
}
void func_0028DF10(void);
void func_0028DE30(u8 *arg0) {
    D_00470884 = D_00470884 - 0.05f;
    if (D_00470884 <= 0.0f) {
        D_00470884 = 0.0f;
        MC_SETFUNC(arg0, func_0028DF10);
    } else {
        func_00288500();
    }
}
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

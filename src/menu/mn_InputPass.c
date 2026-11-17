#include "common.h"
#include "menu/menu.h"
extern s16 func_002F4A80();
extern void func_002F4A90();
extern void func_002F1770();
extern s32 IpSysWnd_Start();
extern void func_002F1300();
extern void func_002F0BC0();
extern void func_0022CF70();
extern u8 *D_00470910;
extern s8 D_004B4B63[];
extern u16 D_00492FCE[];
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void func_002F2D50();
extern void func_002F0BC0();
extern void func_0022CF70();
extern void func_00133B50(s32, s32);
extern void amModel_SetCurrent(s32, s32);
extern void A2d_FlushList(void);
extern f32 gFrameDelta;
extern void Help_Exit();
extern void amCdFs_Close(void *, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern void Help_Load();
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern char D_0046F748[];
extern char D_0046F738[];
extern void func_002F2350();
extern void *gInputName;
extern void *A2d_AllocObj(s32, f32);
extern void memset(void *, s32, s32);
extern void amHeap_Free(void *);
extern void *A2d_AllocObj(s32, f32);
extern void memset(void *, s32, s32);
extern void amHeap_Free(void *);

INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F06D0);
void func_002F0870(u32 *task) {
    u8 *s3;
    s32 s2;
    u8 *s1;
    u32 *s0;
    void *v;
    s2 = 0;
    s3 = (u8 *)gInputName;
    s0 = task;
    do {
        v = A2d_AllocObj(0, 0.0f);
        s0[1] = (u32)v;
        s1 = (u8 *)v;
        memset(s1, 0, 0x60);
        *(s32 *)(s1 + 0x4) = 3;
        s2++;
        *(s32 *)(s1 + 0x10) = *(s32 *)(s3 + 0x10);
        *(s32 *)(s1 + 0x14) = 0x5000;
        *(s16 *)(s1 + 0x18) = 5;
        *(s16 *)(s1 + 0x1A) = 0;
        *(s32 *)(s1 + 0x8) = 1;
        *(s32 *)(s1 + 0xC) = 3;
        *(s32 *)(s1 + 0x20) = 0;
        *(s32 *)(s1 + 0x24) = 0;
        *(s32 *)(s1 + 0x28) = 0;
        *(f32 *)(s1 + 0x2C) = 1.0f;
        *(s32 *)(s1 + 0x34) = 0;
        *(s32 *)(s1 + 0x3C) = 0;
        *(s32 *)(s1 + 0x30) = 0;
        *(s32 *)(s1 + 0x38) = 0;
        *(s32 *)(s1 + 0x44) = 0;
        *(s32 *)(s1 + 0x40) = 0;
        *(s32 *)(s1 + 0x48) = 0;
        *(s32 *)(s1 + 0x4C) = 0;
        *(f32 *)(s1 + 0x50) = 1.0f;
        *(f32 *)(s1 + 0x54) = 1.0f;
        *(f32 *)(s1 + 0x58) = 1.0f;
        *(f32 *)(s1 + 0x5C) = 1.0f;
        s0++;
    } while (s2 < 0x24);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0960);
void func_002F0B00(u8 *task) {
    u8 *s1;
    u8 *s0;
    void *v;

    s1 = (u8 *)gInputName;
    s0 = task;
    v = A2d_AllocObj(0, 0.0f);
    *(void **)(s0 + 0x94) = v;
    s0 = (u8 *)v;
    memset(s0, 0, 0x60);
    *(s32 *)(s0 + 0x4) = 3;
    *(s32 *)(s0 + 0x10) = *(s32 *)(s1 + 0x10);
    *(s32 *)(s0 + 0x14) = 0x5000;
    *(s16 *)(s0 + 0x18) = 1;
    *(s16 *)(s0 + 0x1A) = 0;
    *(s32 *)(s0 + 0x8) = 1;
    *(s32 *)(s0 + 0xC) = 3;
    *(s32 *)(s0 + 0x20) = 0;
    *(s32 *)(s0 + 0x24) = 0;
    *(s32 *)(s0 + 0x28) = 0;
    *(f32 *)(s0 + 0x2C) = 1.0f;
    *(s32 *)(s0 + 0x34) = 0;
    *(s32 *)(s0 + 0x3C) = 0;
    *(s32 *)(s0 + 0x30) = 0;
    *(s32 *)(s0 + 0x38) = 0;
    *(s32 *)(s0 + 0x44) = 0;
    *(s32 *)(s0 + 0x40) = 0;
    *(s32 *)(s0 + 0x48) = 0;
    *(s32 *)(s0 + 0x4C) = 0;
    *(f32 *)(s0 + 0x50) = 1.0f;
    *(f32 *)(s0 + 0x54) = 1.0f;
    *(f32 *)(s0 + 0x58) = 1.0f;
    *(f32 *)(s0 + 0x5C) = 1.0f;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0BC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F0D70);
void func_002F0FD0(u8 *task) {
    u8 *s0;
    u8 *s1;
    s32 s2;
    s32 a0;
    f32 f1;

    s0 = *(u8 **)(task + 0x30);
    f1 = *(f32 *)(s0 + 0x118);
    if (f1 > 0.0f) {
        *(f32 *)(s0 + 0x118) = f1 - gFrameDelta;
        s1 = (u8 *)gInputName;
        A2d_FlushList();
        func_00133B50(0, 0);
        a0 = *(s32 *)(s1 + 0x10);
        D_00470704 = a0;
        D_0047070C = 0x5000;
        D_00470708 = 0;
        amModel_SetCurrent(a0, 0x5000);
        D_00470238 = 0;
        func_002F0BC0(s0);
        if (*(u8 *)(s0 + 0x170) < 5) {
            s2 = 0;
            s1 = s0;
            do {
                if (*(u16 *)(s0 + 0x128) != 0xFFFF) {
                    func_0022CF70(*(void **)(s1 + 0x4));
                }
                s2++;
                s0 += 2;
                s1 += 4;
            } while (s2 < 0x24);
        }
        A2d_FlushList();
        func_00133B50(0, 0);
    } else {
        *(f32 *)(s0 + 0x118) = 0.0f;
        if (*(u8 *)(s0 + 0x172) != 0) {
            *(u8 *)(s0 + 0x170) = 6;
        } else {
            *(u8 *)(s0 + 0x170) = 7;
        }
        *(s32 *)(task + 0x1C) = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F10F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F1300);
#if 0
// differs: 8 bytes short (0x148 vs 0x150): the original branch layout of the final if differs
void func_002F1500(u8 *task) {
    u8 *s0;
    u8 *s1;
    u8 *s3;
    u8 *s4;
    s32 s2;
    s32 a0;
    s32 a1;
    void *v;

    s3 = *(u8 **)(task + 0x30);
    s0 = (u8 *)gInputName;
    s4 = task;
    A2d_FlushList();
    func_00133B50(0, 0);
    a0 = *(s32 *)(s0 + 0x10);
    D_00470704 = a0;
    D_0047070C = 0x5000;
    D_00470708 = 0;
    amModel_SetCurrent(a0, 0x5000);
    func_002F0BC0(s3);
    D_00470238 = 0;
    if (*(u8 *)(s3 + 0x170) < 5) {
        s2 = 0;
        s1 = s3;
        s0 = s3;
        do {
            if (*(u16 *)(s1 + 0x128) != 0xFFFF) {
                func_0022CF70(*(void **)(s0 + 0x4));
            }
            s2++;
            s1 += 2;
            s0 += 4;
        } while (s2 < 0x24);
    }
    A2d_FlushList();
    func_00133B50(0, 0);
    a0 = *(s32 *)((u8 *)D_00470910 + 0x27C);
    if (a0 == 2) {
        a1 = D_004B4B63[0];
        if (*(u16 *)((u8 *)D_00492FCE + a1 * 184) & 0x4000) {
            *(s32 *)(s3 + 0x110) = IpSysWnd_Start(4);
            v = ((void *)func_002F1300 == 0) ? 0 : (void *)func_002F1300;
            *(void **)(s4 + 0x1C) = v;
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F1500);
#if 0
// differs: register roles differ (obj/counter/walk swapped; no declaration order matches), 14 of 70 instr
void func_002F1650(u8 *task) {
    u8 *s0;
    u8 *s1;
    u8 *s3;
    u8 *s4;
    s32 s2;
    s32 a0;
    void *v;

    s3 = *(u8 **)(task + 0x30);
    s0 = (u8 *)gInputName;
    s4 = task;
    A2d_FlushList();
    func_00133B50(0, 0);
    a0 = *(s32 *)(s0 + 0x10);
    D_00470704 = a0;
    D_0047070C = 0x5000;
    D_00470708 = 0;
    amModel_SetCurrent(a0, 0x5000);
    func_002F0BC0(s3);
    D_00470238 = 0;
    if (*(u8 *)(s3 + 0x170) < 5) {
        s2 = 0;
        s1 = s3;
        s0 = s3;
        do {
            if (*(u16 *)(s1 + 0x128) != 0xFFFF) {
                func_0022CF70(*(void **)(s0 + 0x4));
            }
            s2++;
            s1 += 2;
            s0 += 4;
        } while (s2 < 0x24);
    }
    A2d_FlushList();
    func_00133B50(0, 0);
    a0 = (s16)func_002F4A80(*(s32 *)(s3 + 0x110));
    if (a0 == 4) {
        func_002F4A90(*(s32 *)(s3 + 0x110));
        *(s32 *)(s3 + 0x110) = 0;
        v = ((void *)func_002F1770 == 0) ? 0 : (void *)func_002F1770;
        *(void **)(s4 + 0x1C) = v;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F1650);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F1770);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F21B0);
extern void func_0022E0B0(s32);
extern void func_002F21B0(void);
extern void *amFile_Load(s32);
extern void *func_0022D860(f32, void *);

void func_002F2350(Task *a0) {
    u8 *s2;
    u8 *s1;
    u8 *s0;
    s32 v;

    s2 = (u8 *)a0;
    s0 = (u8 *)gInputName;
    s1 = *(u8 **)((u8 *)a0 + 0x30);
    if (*(s32 *)(s0 + 0x14) == 0) {
        if (*(s16 *)(*(u8 **)(s0 + 0x8) + 0x4) != 3) {
            return;
        }
        {
            *(s32 *)(s0 + 0xC) = *(s32 *)(*(u8 **)s0 + 0x54);
            *(s32 *)(*(u8 **)s0 + 0x54) = 0;
            amCdFs_Close(*(void **)s0, 0);
            *(s32 *)s0 = 0;
            *(s32 *)(s0 + 0x10) = *(s32 *)(*(u8 **)(s0 + 0x4) + 0x54);
            *(s32 *)(*(u8 **)(s0 + 0x4) + 0x54) = 0;
            amCdFs_Close(*(void **)(s0 + 0x4), 0);
            *(s32 *)(s0 + 0x4) = 0;
            *(s32 *)(s0 + 0x14) = *(s32 *)(*(u8 **)(s0 + 0x8) + 0x54);
            *(s32 *)(*(u8 **)(s0 + 0x8) + 0x54) = 0;
            amCdFs_Close(*(void **)(s0 + 0x8), 0);
            *(s32 *)(s0 + 0x8) = 0;
            func_0022E0B0(*(s32 *)(s0 + 0xC));
            amFile_Load(*(s32 *)(s0 + 0x10));
            amFile_Load(*(s32 *)(s0 + 0x14));
        }
    }
    s0 = (u8 *)gInputName;
    v = *(s32 *)(s0 + 0x10);
    D_00470704 = v;
    D_0047070C = 0x5000;
    D_00470708 = 0;
    amModel_SetCurrent(v, 0x5000);
    D_00470238 = 0;
    *(void **)s1 = func_0022D860(0.0f, *(void **)(*(u8 **)(*(u8 **)(s0 + 0xC) + 0x14)));
    *(u8 *)(s1 + 0x170) = 1;
    *(f32 *)(s1 + 0x118) = 30.0f;
    *(s16 *)(s1 + 0x124) = 0x21;
    func_002F0B00(s1);
    func_002F0870((u32 *)s1);
    *(void **)(s2 + 0x1C) = ((void *)func_002F21B0 == 0) ? 0 : (void *)func_002F21B0;
}
extern void func_00125740(void *, void *, s32);

/* Copies 0x28 bytes of the task's work area (from 0xB4) to dst, when there is a task. */
void InputPass_CopyName(Task *t, void *dst) {
    if (t != 0) {
        func_00125740(dst, (char *)t->data.work + 0xB4, 0x28);
    }
}
/* The byte at 0x170 of the task's work area, 0 without a task. */
u8 InputPass_GetKind(Task *t) {
    u8 k;

    if (t == 0) {
        k = 0;
    } else {
        k = ((u8 *)t->data.work)[0x170];
    }
    return k;
}
extern void *gInputName;

/* Clears the input name pointer. */
void InputPass_ClearName(void) {
    gInputName = 0;
}
void func_002F2500(void) {
    u8 *s0;

    s0 = (u8 *)gInputName;
    if (s0 != 0) {
        *(s16 *)(s0 + 0x1C) = *(s16 *)(s0 + 0x1C) - 1;
        if (*(s16 *)(s0 + 0x1C) == 0) {
            if (*(void **)(s0 + 0x18) != 0) {
                amHeap_Free(*(void **)(*(u8 **)(s0 + 0x18) + 0x30));
                amTask_Kill(*(void **)(s0 + 0x18));
            }
            if (*(void **)s0 != 0) {
                amCdFs_Close(*(void **)s0, 0);
            }
            if (*(void **)(s0 + 0x4) != 0) {
                amCdFs_Close(*(void **)(s0 + 0x4), 0);
            }
            if (*(void **)(s0 + 0x8) != 0) {
                amCdFs_Close(*(void **)(s0 + 0x8), 0);
            }
            if (*(void **)(s0 + 0xC) != 0) {
                amHeap_Free(*(void **)(s0 + 0xC));
            }
            if (*(void **)(s0 + 0x10) != 0) {
                amHeap_Free(*(void **)(s0 + 0x10));
            }
            if (*(void **)(s0 + 0x14) != 0) {
                amHeap_Free(*(void **)(s0 + 0x14));
            }
            amHeap_Free(s0);
            gInputName = 0;
            Help_Exit();
        }
    }
}
void func_002F2600(u8 *task) {
    u8 *s3;
    u8 *s2;
    s32 s1;
    u32 *s0;

    s3 = (u8 *)gInputName;
    if (task != 0) {
        s2 = *(u8 **)(task + 0x30);
        if (*(void **)(s2 + 0x94) != 0) {
            func_0022D4B0(*(void **)(s2 + 0x94), 1);
        }
        if (*(void **)s2 != 0) {
            func_0022D0E0(*(void **)s2, 1);
            *(void **)s2 = 0;
        }
        if (*(void **)(s2 + 0x98) != 0) {
            func_0022D0E0(*(void **)(s2 + 0x98), 1);
            *(void **)(s2 + 0x98) = 0;
        }
        if (*(void **)(s2 + 0x9C) != 0) {
            func_0022D0E0(*(void **)(s2 + 0x9C), 1);
            *(void **)(s2 + 0x9C) = 0;
        }
        s1 = 0;
        s0 = (u32 *)s2;
        do {
            func_0022D4B0((void *)s0[1], 1);
            s1++;
            s0++;
        } while (s1 < 0x24);
        amHeap_Free(s2);
        amTask_Kill((void *)task);
        *(s32 *)(s3 + 0x18) = 0;
    }
}
void *func_002F26E0(void) {
    u8 *s0;
    u8 *s1;
    s32 a0;
    u16 k;
    void *v;
    void *w;

    s0 = (u8 *)gInputName;
    v = amTask_Create(func_002F2350, 0, 0x4000, 8, 2, D_0046F738);
    *(void **)(s0 + 0x18) = v;
    s0 = (u8 *)v;
    w = amHeap_Alloc(0x174, 0, D_0046F748, 0xB1);
    s1 = (u8 *)w;
    *(void **)(s0 + 0x30) = w;
    memset(s1, 0, 0x174);
    *(f32 *)(s1 + 0x11C) = 240.0f;
    *(f32 *)(s1 + 0x120) = 80.0f;
    a0 = 0;
    k = 0xFFFF;
    do {
        *(u16 *)(s1 + 0x128) = k;
        *(u16 *)(s1 + 0x12A) = k;
        a0 += 6;
        *(u16 *)(s1 + 0x12C) = k;
        *(u16 *)(s1 + 0x12E) = k;
        *(u16 *)(s1 + 0x130) = k;
        *(u16 *)(s1 + 0x132) = k;
        s1 += 0xC;
    } while (a0 < 0x24);
    return s0;
}
void func_002F27B0(void) {
    u8 *s0;
    void *v;

    if (gInputName != 0) {
        *(s16 *)((u8 *)gInputName + 0x1C) = *(s16 *)((u8 *)gInputName + 0x1C) + 1;
    } else {
        v = amHeap_Alloc(0x20, 0, D_0046F748, 0x83);
        gInputName = v;
        s0 = (u8 *)v;
        *(s32 *)s0 = amCdFs_ReadFileId(0x10824, 0, 0);
        *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x10825, 0, 0);
        *(s32 *)(s0 + 0x8) = amCdFs_ReadFileId(0x107FD, 0, 0);
        *(s32 *)(s0 + 0xC) = 0;
        *(s32 *)(s0 + 0x10) = 0;
        *(s32 *)(s0 + 0x14) = 0;
        *(s32 *)(s0 + 0x18) = 0;
        *(s16 *)(s0 + 0x1C) = 1;
        Help_Load();
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2870);
void func_002F2A10(u32 *task) {
    u8 *s3;
    s32 s2;
    u8 *s1;
    u32 *s0;
    void *v;
    s2 = 0;
    s3 = (u8 *)gInputName;
    s0 = task;
    do {
        v = A2d_AllocObj(0, 0.0f);
        s0[1] = (u32)v;
        s1 = (u8 *)v;
        memset(s1, 0, 0x60);
        *(s32 *)(s1 + 0x4) = 3;
        s2++;
        *(s32 *)(s1 + 0x10) = *(s32 *)(s3 + 0x10);
        *(s32 *)(s1 + 0x14) = 0x5000;
        *(s16 *)(s1 + 0x18) = 5;
        *(s16 *)(s1 + 0x1A) = 0;
        *(s32 *)(s1 + 0x20) = 0;
        *(s32 *)(s1 + 0x24) = 0;
        *(s32 *)(s1 + 0x28) = 0;
        *(f32 *)(s1 + 0x2C) = 1.0f;
        *(s32 *)(s1 + 0x34) = 0;
        *(s32 *)(s1 + 0x3C) = 0;
        *(s32 *)(s1 + 0x30) = 0;
        *(s32 *)(s1 + 0x38) = 0;
        *(s32 *)(s1 + 0x44) = 0;
        *(s32 *)(s1 + 0x40) = 0;
        *(s32 *)(s1 + 0x48) = 0;
        *(s32 *)(s1 + 0x4C) = 0;
        *(f32 *)(s1 + 0x50) = 1.0f;
        *(f32 *)(s1 + 0x54) = 1.0f;
        *(f32 *)(s1 + 0x58) = 1.0f;
        *(f32 *)(s1 + 0x5C) = 1.0f;
        s0++;
    } while (s2 < 8);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2AF0);
void func_002F2C90(u8 *task) {
    u8 *s1;
    u8 *s0;
    void *v;

    s1 = (u8 *)gInputName;
    s0 = task;
    v = A2d_AllocObj(0, 0.0f);
    *(void **)(s0 + 0x24) = v;
    s0 = (u8 *)v;
    memset(s0, 0, 0x60);
    *(s32 *)(s0 + 0x4) = 3;
    *(s32 *)(s0 + 0x10) = *(s32 *)(s1 + 0x10);
    *(s32 *)(s0 + 0x14) = 0x5000;
    *(s16 *)(s0 + 0x18) = 1;
    *(s16 *)(s0 + 0x1A) = 0;
    *(s32 *)(s0 + 0x20) = 0;
    *(s32 *)(s0 + 0x24) = 0;
    *(s32 *)(s0 + 0x28) = 0;
    *(f32 *)(s0 + 0x2C) = 1.0f;
    *(s32 *)(s0 + 0x34) = 0;
    *(s32 *)(s0 + 0x3C) = 0;
    *(s32 *)(s0 + 0x30) = 0;
    *(s32 *)(s0 + 0x38) = 0;
    *(s32 *)(s0 + 0x44) = 0;
    *(s32 *)(s0 + 0x40) = 0;
    *(s32 *)(s0 + 0x48) = 0;
    *(s32 *)(s0 + 0x4C) = 0;
    *(f32 *)(s0 + 0x50) = 1.0f;
    *(f32 *)(s0 + 0x54) = 1.0f;
    *(f32 *)(s0 + 0x58) = 1.0f;
    *(f32 *)(s0 + 0x5C) = 1.0f;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F2D50);
void func_002F2F00(u8 *task) {
    u8 *s0;
    u8 *s1;
    s32 s2;
    s32 a0;
    f32 f1;

    s0 = *(u8 **)(task + 0x30);
    f1 = *(f32 *)(s0 + 0x40);
    if (f1 > 0.0f) {
        *(f32 *)(s0 + 0x40) = f1 - gFrameDelta;
        s1 = (u8 *)gInputName;
        A2d_FlushList();
        func_00133B50(0, 0);
        a0 = *(s32 *)(s1 + 0x10);
        D_00470704 = a0;
        D_0047070C = 0x5000;
        D_00470708 = 0;
        amModel_SetCurrent(a0, 0x5000);
        D_00470238 = 0;
        func_002F2D50(s0);
        if (*(u8 *)(s0 + 0x60) < 5) {
            s2 = 0;
            s1 = s0;
            do {
                if (*(s16 *)(s0 + 0x50) != 0xFFFF) {
                    func_0022CF70(*(void **)(s1 + 0x4));
                }
                s2++;
                s0 += 2;
                s1 += 4;
            } while (s2 < 8);
        }
        A2d_FlushList();
        func_00133B50(0, 0);
    } else {
        *(f32 *)(s0 + 0x40) = 0.0f;
        if (*(u8 *)(s0 + 0x61) != 0) {
            *(u8 *)(s0 + 0x60) = 6;
        } else {
            *(u8 *)(s0 + 0x60) = 7;
        }
        *(s32 *)(task + 0x1C) = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3020);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3210);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3C60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_InputPass", func_002F3E00);
/* Copies 0x10 bytes of the task's work area (from 0x50) to dst, when there is a task. */
void InputPass_CopyBuf(Task *t, void *dst) {
    if (t != 0) {
        func_00125740(dst, (char *)t->data.work + 0x50, 0x10);
    }
}
/* The byte at 0x60 of the task's work area, 0 without a task. */
u8 InputPass_GetPhase(Task *t) {
    u8 k;

    if (t == 0) {
        k = 0;
    } else {
        k = ((u8 *)t->data.work)[0x60];
    }
    return k;
}
void func_002F3FA0(u8 *task) {
    u8 *s3;
    u8 *s2;
    s32 s1;
    u32 *s0;

    s3 = (u8 *)gInputName;
    if (task != 0) {
        s2 = *(u8 **)(task + 0x30);
        if (*(void **)(s2 + 0x24) != 0) {
            func_0022D4B0(*(void **)(s2 + 0x24), 1);
        }
        if (*(void **)s2 != 0) {
            func_0022D0E0(*(void **)s2, 1);
            *(void **)s2 = 0;
        }
        if (*(void **)(s2 + 0x28) != 0) {
            func_0022D0E0(*(void **)(s2 + 0x28), 1);
            *(void **)(s2 + 0x28) = 0;
        }
        if (*(void **)(s2 + 0x2C) != 0) {
            func_0022D0E0(*(void **)(s2 + 0x2C), 1);
            *(void **)(s2 + 0x2C) = 0;
        }
        s1 = 0;
        s0 = (u32 *)s2;
        do {
            func_0022D4B0((void *)s0[1], 1);
            s1++;
            s0++;
        } while (s1 < 8);
        amHeap_Free(s2);
        amTask_Kill((void *)task);
        *(s32 *)(s3 + 0x18) = 0;
        Help_Exit();
    }
}

#include "common.h"
#include "menu/menu.h"
extern s32 D_00470704;
extern s32 D_0047070C;
extern s32 D_00470708;
extern s32 D_00470238;
extern void amModel_SetCurrent(s32, s32);
extern void *func_0022D860(void *, f32);
extern void *func_0022D670(void *, f32);
extern void func_002EE5C0();
extern void func_002F2500();
extern void Help_Exit();
extern void func_002EE1C0();
extern void func_002ECFD0();
extern s32 Save_GetState();
extern void Save_Exit();
extern void func_002EF7C0();
extern void SoundRpc_SetVolume(s32, s32, f32);
extern void SoundRpc_Send3();
extern void func_002EE360();
extern void func_002EF390();
extern f32 D_004E0614[];
extern u8 D_004B4B40[];
extern s16 D_005C9F04[];

INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EDC50);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EDE90);
void func_002EE100(u8 *s2) {
    s32 s1;
    u32 *s0;

    s1 = 0;
    s0 = (u32 *)s2;
    do {
        if (s0[6] != 0) {
            func_0022D4B0((void *)s0[6], 1);
            s0[6] = 0;
        }
        s1++;
        s0++;
    } while (s1 < 8);
    if (*(u32 *)(s2 + 4) != 0) {
        func_0022D0E0(*(void **)(s2 + 4), 1);
        *(u32 *)(s2 + 4) = 0;
    }
    s1 = 0;
    s0 = (u32 *)s2;
    do {
        if (s0[2] != 0) {
            func_0022D0E0((void *)s0[2], 1);
            s0[2] = 0;
        }
        s1++;
        s0++;
    } while (s1 < 3);
    if (*(u32 *)(s2 + 0x14) != 0) {
        func_0022D0E0(*(void **)(s2 + 0x14), 1);
        *(u32 *)(s2 + 0x14) = 0;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EE1C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EE360);
void func_002EE4D0(u8 *s0) {
    s32 a0;

    a0 = *(s32 *)(s0 + 0x240);
    D_00470704 = a0;
    D_0047070C = 0x4000;
    D_00470708 = 0;
    amModel_SetCurrent(a0, 0x4000);
    D_00470238 = 0;
    *(void **)(s0 + 0x5C) = func_0022D860(*(void **)(*(u8 **)(*(u8 **)(s0 + 0x23C) + 0x14) + 0x4), 0.0f);
    *(void **)(s0 + 0x60) = func_0022D860(*(void **)(*(u8 **)(*(u8 **)(s0 + 0x23C) + 0x14) + 0x10), 0.0f);
    *(void **)(s0 + 0x64) = func_0022D670(*(void **)(*(u8 **)(*(u8 **)(s0 + 0x23C) + 0x1C) + 0x24), 0.0f);
    *(void **)(s0 + 0x68) = func_0022D670(*(void **)(*(u8 **)(*(u8 **)(s0 + 0x23C) + 0x1C) + 0x28), 0.0f);
    *(void **)(s0 + 0x6C) = func_0022D670(*(void **)(*(u8 **)(*(u8 **)(s0 + 0x23C) + 0x1C) + 0x34), 0.0f);
    *(void **)(s0 + 0x70) = func_0022D670(*(void **)(*(u8 **)(*(u8 **)(s0 + 0x23C) + 0x1C) + 0x38), 0.0f);
    *(void **)(s0 + 0x74) = func_0022D860(*(void **)(*(u8 **)(*(u8 **)(s0 + 0x23C) + 0x14) + 0x0), 0.0f);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EE5C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EE7A0);
void func_002EE9F0(u8 *a0) {
    s32 idx;
    s32 m;
    u8 *a1;
    u8 *v1;

    idx = *(s16 *)(a0 + 0x14);
    a1 = a0 + 0x20;
    v1 = (u8 *)D_004B4B40 + (idx * 40) + 0x2B5D6;
    if (*(s8 *)v1 == 0) {
        *(s32 *)(a1 + 0x0) = 0;
        m = -1;
        *(s32 *)(a1 + 0x4) = 0;
        *(s32 *)(a1 + 0x8) = 0;
        *(s16 *)(a1 + 0xC) = m;
        *(s8 *)(a1 + 0xE) = 0;
        *(s8 *)(a1 + 0xF) = 0;
        *(s8 *)(a1 + 0x10) = 0;
        *(s8 *)(a1 + 0x11) = 0;
        *(s8 *)(a1 + 0x12) = 0;
        *(s8 *)(a1 + 0x13) = 0;
        *(s8 *)(a1 + 0x14) = 0;
        *(s8 *)(a1 + 0x15) = 0;
        *(s16 *)(a1 + 0x16) = 0;
        *(s16 *)(a1 + 0x18) = 0;
        *(s16 *)(a1 + 0x1A) = 0;
        *(s16 *)(a1 + 0x1C) = 0;
        *(s16 *)(a1 + 0x1E) = 0;
        *(s16 *)(a1 + 0x20) = 0;
        *(s16 *)(a1 + 0x22) = 0;
        *(s16 *)(a1 + 0x24) = m;
        *(s16 *)(a1 + 0x26) = m;
        *(s16 *)(a1 + 0x28) = m;
        *(s16 *)(a1 + 0x2A) = m;
        *(s16 *)(a1 + 0x2C) = m;
        *(s16 *)(a1 + 0x2E) = m;
        *(s16 *)(a1 + 0x30) = m;
        *(s16 *)(a1 + 0x32) = m;
    } else {
        *(s32 *)(a1 + 0x0) = 0;
        *(s32 *)(a1 + 0x4) = 0;
        m = -1;
        *(s32 *)(a1 + 0x8) = 0;
        *(s16 *)(a1 + 0xC) = *(s8 *)(v1 + 0x1);
        *(s8 *)(a1 + 0xE) = *(s8 *)(v1 + 0x2);
        *(s8 *)(a1 + 0xF) = *(s8 *)(v1 + 0x3);
        *(s8 *)(a1 + 0x10) = *(s8 *)(v1 + 0x4);
        *(s8 *)(a1 + 0x11) = *(s8 *)(v1 + 0x5);
        *(s8 *)(a1 + 0x12) = *(s8 *)(v1 + 0x6);
        *(s8 *)(a1 + 0x13) = *(s8 *)(v1 + 0x7);
        *(s8 *)(a1 + 0x14) = *(s8 *)(v1 + 0x8);
        *(s8 *)(a1 + 0x15) = *(s8 *)(v1 + 0x9);
        *(s16 *)(a1 + 0x16) = *(s16 *)(v1 + 0xA);
        *(s16 *)(a1 + 0x18) = *(s16 *)(v1 + 0xC);
        *(s16 *)(a1 + 0x1A) = *(s16 *)(v1 + 0xE);
        *(s16 *)(a1 + 0x1C) = *(s16 *)(v1 + 0x10);
        *(s16 *)(a1 + 0x1E) = *(s16 *)(v1 + 0x12);
        *(s16 *)(a1 + 0x20) = *(s16 *)(v1 + 0x14);
        *(s16 *)(a1 + 0x22) = *(s16 *)(v1 + 0x16);
        *(s16 *)(a1 + 0x24) = *(s16 *)(v1 + 0x18);
        *(s16 *)(a1 + 0x26) = *(s16 *)(v1 + 0x1A);
        *(s16 *)(a1 + 0x28) = *(s16 *)(v1 + 0x1C);
        *(s16 *)(a1 + 0x2A) = *(s16 *)(v1 + 0x1E);
        *(s16 *)(a1 + 0x2C) = *(s16 *)(v1 + 0x20);
        *(s16 *)(a1 + 0x2E) = *(s16 *)(v1 + 0x22);
        *(s16 *)(a1 + 0x30) = *(s16 *)(v1 + 0x24);
        *(s16 *)(a1 + 0x32) = *(s16 *)(v1 + 0x26);
        D_005C9F04[0] = m;
    }
}
void func_002EEB80(u8 *a0) {
    s32 idx;
    u8 *p;

    idx = *(s16 *)(a0 + 0x10);
    p = *(u8 **)(a0 + 0x244) + (idx << 5);
    *(s32 *)(a0 + 0x20) = 0;
    *(s32 *)(a0 + 0x24) = 0;
    *(s32 *)(a0 + 0x28) = *(s32 *)(p + 0xE0);
    *(u16 *)(a0 + 0x2C) = *(u16 *)(p + 0xC8);
    *(u8 *)(a0 + 0x2E) = *(u8 *)(p + 0xCA);
    *(u8 *)(a0 + 0x2F) = *(u8 *)(p + 0xCB);
    *(u8 *)(a0 + 0x30) = *(u8 *)(p + 0xCC);
    *(u8 *)(a0 + 0x31) = *(u8 *)(p + 0xCD);
    *(u8 *)(a0 + 0x32) = *(u8 *)(p + 0xCE);
    *(u8 *)(a0 + 0x33) = *(u8 *)(p + 0xCF);
    *(u8 *)(a0 + 0x34) = *(u8 *)(p + 0xD0);
    *(u8 *)(a0 + 0x35) = *(u8 *)(p + 0xD1);
    *(u16 *)(a0 + 0x36) = *(u16 *)(p + 0xD2);
    *(u16 *)(a0 + 0x38) = *(u16 *)(p + 0xD4);
    *(u16 *)(a0 + 0x3A) = *(u16 *)(p + 0xD6);
    *(u16 *)(a0 + 0x3C) = *(u16 *)(p + 0xD8);
    *(u16 *)(a0 + 0x3E) = *(u16 *)(p + 0xDA);
    *(u16 *)(a0 + 0x40) = *(u16 *)(p + 0xDC);
    *(u16 *)(a0 + 0x42) = *(u16 *)(p + 0xDE);
    *(s16 *)(a0 + 0x44) = -1;
    *(s16 *)(a0 + 0x46) = -1;
    *(s16 *)(a0 + 0x48) = -1;
    *(s16 *)(a0 + 0x4A) = -1;
    *(s16 *)(a0 + 0x4C) = -1;
    *(s16 *)(a0 + 0x4E) = -1;
    *(s16 *)(a0 + 0x50) = -1;
    *(s16 *)(a0 + 0x52) = -1;
    D_005C9F04[0] = *(s16 *)(a0 + 0x10);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EEC60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EEF00);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF1A0);
extern f32 gFrameDelta;
extern void func_002EE1C0(void *);
extern void func_002ECFD0(void *, s32);

void func_002EF390(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x30);
    func_002EE1C0(s0);
    func_002ECFD0(s0, 1);
    *(f32 *)(s0 + 0x1C) = *(f32 *)(s0 + 0x1C) - gFrameDelta;
    if (*(f32 *)(s0 + 0x1C) <= 0.0f) {
        *(s16 *)s0 = 6;
        *(s32 *)(a0 + 0x1C) = 0;
    }
}
extern void func_002EE1C0(void *);
extern void func_002ECFD0(void *, s32);

/* Runs the list's two steps on its work area. */
void ArenaList_Refresh(Task *t) {
    void *w = t->data.work;
    func_002EE1C0(w);
    func_002ECFD0(w, 1);
}
extern void func_002EE1C0(void *);
extern void func_002ECFD0(void *, s32);
extern s16 func_002F4A80(void *);
extern void func_002F4A90(void *);
extern void func_002EF7C0(void *);

void func_002EF440(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x30);
    func_002EE1C0(s0);
    func_002ECFD0(s0, 1);
    if (func_002F4A80(*(void **)(s0 + 0x58)) == 4) {
        func_002F4A90(*(void **)(s0 + 0x58));
        *(void **)(s0 + 0x58) = 0;
        *(void **)(a0 + 0x1C) = ((void *)func_002EF7C0 == 0) ? 0 : (void *)func_002EF7C0;
    }
}
extern void func_002EE1C0(void *);
extern void func_002ECFD0(void *, s32);
extern s32 Save_GetState(void);
extern void Save_Exit(void);
extern void func_002EF7C0(void *);

#if 0
// differs: the compare on Save_GetState() is kept in v1 by the original (slti v1), mine uses at (tried >= , else-form and a local)
void func_002EF4C0(u8 *a0) {
    u8 *s0;
    s32 st;
    s0 = *(u8 **)(a0 + 0x30);
    func_002EE1C0(s0);
    func_002ECFD0(s0, 1);
    st = Save_GetState();
    if (st < 3) {
    } else {
        Save_Exit();
        *(void **)(a0 + 0x1C) = ((void *)func_002EF7C0 == 0) ? 0 : (void *)func_002EF7C0;
    }
}
#endif
void func_002EF4C0(u8 *task) {
    u8 *obj;

    obj = *(u8 **)(task + 0x30);
    func_002EE1C0(obj);
    func_002ECFD0(obj, 1);
    if (Save_GetState() > 2) {
        Save_Exit();
        *(void **)(task + 0x1C) = ((void *)func_002EF7C0 == 0) ? 0 : (void *)func_002EF7C0;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF540);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF680);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF7C0);
extern f32 gFrameDelta;
extern void func_002EE1C0(void *);
extern void func_002EF7C0(void *);

void func_002F00E0(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x30);
    func_002EE1C0(s0);
    *(f32 *)(s0 + 0x1C) = *(f32 *)(s0 + 0x1C) - gFrameDelta;
    if (*(f32 *)(s0 + 0x1C) <= 0.0f) {
        *(s16 *)s0 = 3;
        *(s16 *)(s0 + 0x4) = 2;
        *(void **)(a0 + 0x1C) = ((void *)func_002EF7C0 == 0) ? 0 : (void *)func_002EF7C0;
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002F0160);
s16 ArenaList_GetCursor(Task *t) {
    return ((s16 *)t->data.work)[1];
}

/* The list's work area (task data.work): the s16 at offset 0 (the first entry) and at offset 2 (the cursor). */
s16 ArenaList_GetFirst(Task *t) {
    return ((s16 *)t->data.work)[0];
}

/* The entry table, 0x20 bytes into the work area. */
char *ArenaList_GetEntries(Task *t) {
    return (char *)t->data.work + 0x20;
}
extern void *D_00470968;
extern void InputPass_ClearName(void);

/* Clears the list's global D_00470968, then clears the input name (a tail call). */
void ArenaList_ClearGlobal(void) {
    D_00470968 = 0;
    InputPass_ClearName();
}

void func_002F03E0(void) {
    u8 *s1;
    u8 *s0;

    s0 = (u8 *)D_00470968;
    s1 = *(u8 **)(*(u8 **)(s0 + 0xC) + 0x30);
    func_002EE5C0(s1);
    if (*(void **)(s1 + 0x23C) != 0) {
        amHeap_Free(*(void **)(s1 + 0x23C));
    }
    if (*(void **)(s1 + 0x240) != 0) {
        amHeap_Free(*(void **)(s1 + 0x240));
    }
    if (*(void **)(s1 + 0x244) != 0) {
        amHeap_Free(*(void **)(s1 + 0x244));
    }
    amHeap_Free(s1);
    amTask_Kill(*(void **)(s0 + 0xC));
    if (*(void **)s0 != 0) {
        amCdFs_Close(*(void **)s0, 0);
    }
    if (*(void **)(s0 + 0x4) != 0) {
        amCdFs_Close(*(void **)(s0 + 0x4), 0);
    }
    if (*(void **)(s0 + 0x8) != 0) {
        amCdFs_Close(*(void **)(s0 + 0x8), 0);
    }
    amHeap_Free(s0);
    D_00470968 = 0;
    Help_Exit();
    func_002F2500();
}
void func_002F04D0(u8 *task) {
    u8 *obj;

    obj = *(u8 **)(task + 0x30);
    SoundRpc_SetVolume(0, 0, D_004E0614[0]);
    if (D_004E0614[0] > 0.0f) {
        SoundRpc_Send3(0, 0, 0x16, 0);
    }
    func_002EE360(obj);
    *(u32 *)(obj + 0x1C) = 0x42700000;
    *(s16 *)(obj + 0x0) = 5;
    *(s16 *)(obj + 0x4) = 5;
    *(void **)(task + 0x1C) = ((void *)func_002EF390 == 0) ? 0 : (void *)func_002EF390;
}
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern void Help_Load();
extern void func_002F27B0();
extern void func_002F0160();
extern char D_0046F718[];
extern char D_0046F728[];

void *func_002F0570(s16 a0) {
    u8 *s0;
    u8 *s1;
    void *t;
    s0 = (u8 *)D_00470968;
    t = amTask_Create((void *)func_002F0160, 0, 0x2800, 8, 2, D_0046F718);
    *(void **)(s0 + 0xC) = t;
    s0 = (u8 *)t;
    t = amHeap_Alloc(0x248, 0, D_0046F728, 0xB0);
    s1 = (u8 *)t;
    *(void **)(s0 + 0x30) = t;
    memset(s1, 0, 0x248);
    *(s16 *)s1 = 1;
    *(s16 *)(s1 + 2) = -1;
    *(s16 *)(s1 + 0xA) = a0 + 0x1E;
    *(s16 *)(s1 + 0xC) = 0;
    *(s16 *)(s1 + 0xE) = 0;
    Help_Load();
    func_002F27B0();
    return s0;
}
extern char D_0046F728[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);

void ArenaList_Load(void) {
    u8 *s0;
    s0 = D_00470968 = amHeap_Alloc(0x10, 0, D_0046F728, 0x89);
    *(s32 *)s0 = amCdFs_ReadFileId(0x10815, 0, 0);
    *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x10816, 0, 0);
    *(s32 *)(s0 + 0x8) = amCdFs_ReadFileId(0xF4F, 0, 0);
    *(s32 *)(s0 + 0xC) = 0;
}

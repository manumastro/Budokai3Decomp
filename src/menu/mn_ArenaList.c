#include "common.h"
#include "menu/menu.h"

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
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EE4D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EE5C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EE7A0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EE9F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EEB80);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EEC60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EEF00);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF1A0);
extern f32 D_004703BC;
extern void func_002EE1C0(void *);
extern void func_002ECFD0(void *, s32);

void func_002EF390(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x30);
    func_002EE1C0(s0);
    func_002ECFD0(s0, 1);
    *(f32 *)(s0 + 0x1C) = *(f32 *)(s0 + 0x1C) - D_004703BC;
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
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF4C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF540);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF680);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF7C0);
extern f32 D_004703BC;
extern void func_002EE1C0(void *);
extern void func_002EF7C0(void *);

void func_002F00E0(u8 *a0) {
    u8 *s0;
    s0 = *(u8 **)(a0 + 0x30);
    func_002EE1C0(s0);
    *(f32 *)(s0 + 0x1C) = *(f32 *)(s0 + 0x1C) - D_004703BC;
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

INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002F03E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002F04D0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002F0570);
extern char D_0046F728[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);

void func_002F0640(void) {
    u8 *s0;
    s0 = D_00470968 = amHeap_Alloc(0x10, 0, D_0046F728, 0x89);
    *(s32 *)s0 = amCdFs_ReadFileId(0x10815, 0, 0);
    *(s32 *)(s0 + 0x4) = amCdFs_ReadFileId(0x10816, 0, 0);
    *(s32 *)(s0 + 0x8) = amCdFs_ReadFileId(0xF4F, 0, 0);
    *(s32 *)(s0 + 0xC) = 0;
}

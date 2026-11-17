#include "common.h"
#include "menu/menu.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EDC50);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EDE90);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EE100);
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
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF390);
extern void func_002EE1C0(void *);
extern void func_002ECFD0(void *, s32);

/* Runs the list's two steps on its work area. */
void ArenaList_Refresh(Task *t) {
    void *w = t->data.work;
    func_002EE1C0(w);
    func_002ECFD0(w, 1);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF440);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF4C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF540);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF680);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002EF7C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002F00E0);
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
INCLUDE_ASM("asm/nonmatchings/menu/mn_ArenaList", func_002F0640);

#include "common.h"
#include "menu/menu.h"

INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E6BE0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E6DC0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E6FA0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E70E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E72C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7400);
extern void func_001F0830(s32, s32);
extern void func_001F07E0(s32, s32);

/* Stops the logo mark's two effects and clears the task's function. */
void Logomark_Close(Task *t) {
    func_001F0830(2, 0);
    func_001F07E0(10, 0);
    t->func = 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7630);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E76C0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7770);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7850);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E78E0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7960);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7A00);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7A90);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7B40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7C20);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7CB0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7D60);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7E40);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7ED0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E7F80);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E8060);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E80F0);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E8190);
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E8270);
extern void func_002E8270(Task *);

/* Sets the task's function to func_002E8270 (the logo mark's main step). */
void Logomark_Begin(Task *t) {
    TASK_SET_FUNC(t, func_002E8270);
}
INCLUDE_ASM("asm/nonmatchings/menu/mn_Logomark", func_002E8340);
extern void *D_0047094C;

/* Clears the logo mark's flag D_0047094C. */
void Logomark_ClearFlag(void) {
    D_0047094C = 0;
}
typedef struct LogomarkGlobal {
    void *file;   /* 0x0 */
    Task *task;   /* 0x4 */
} LogomarkGlobal;

extern void amCdFs_Close(void *, s32);
extern void amTask_Kill(Task *);

/* Frees the logo mark: its task and the file, then the block D_0047094C. */
void Logomark_Free(void) {
    Task *task;
    LogomarkGlobal *g;

    g = (LogomarkGlobal *)D_0047094C;
    task = g->task;
    if (task != 0) {
        amHeap_Free(task->data.work);
        amTask_Kill(task);
    }
    if (g->file != 0) {
        amCdFs_Close(g->file, 0);
    }
    amHeap_Free(g);
    D_0047094C = 0;
}
extern void func_002E8340(Task *);
extern char D_0046F570[];
extern void func_001484A0(s32);
extern void func_001F07D0(void);
extern void memset(void *, s32, s32);

/* Creates the logo mark's task (func_002E8340) and clears its 0x14-byte work area. */
void Logomark_Start(void) {
    LogomarkGlobal *g = (LogomarkGlobal *)D_0047094C;
    Task *t = amTask_Create(func_002E8340, 0, 0x1001, 8, 2, D_0046F570);
    g->task = t;
    memset(&t->data, 0, 0x14);
    func_001484A0(0);
    func_001F07D0();
}
extern char D_0046F580[];
extern s32 amCdFs_ReadFileId(s32, s32, s32);

/* Allocates the logo mark's 8-byte block (D_0047094C), reads file 0x10ABF into it. */
void Logomark_Load(void) {
    void *w;
    w = D_0047094C = amHeap_Alloc(8, 0, D_0046F580, 0xEE);
    ((s32 *)w)[1] = 0;
    ((s32 *)w)[0] = amCdFs_ReadFileId(0x10ABF, 0, 0);
}

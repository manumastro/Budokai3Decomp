#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026D9C0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026DAF0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026DC80);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026DE30);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E000);
extern u8 *D_004707E0;
extern void Trade_Start(void);
extern void EssInfo_Init(void);
extern void Shop_InitZenie(void);
extern void func_00272650(void);
extern void func_0026F070(void);

void func_0026E2F0(void) {
    D_004707E0 = 0;
    Trade_Start();
    EssInfo_Init();
    func_0026F070();
    Shop_InitZenie();
    func_00272650();
}
extern void *amTask_Create();
extern void func_0026D230();
extern char D_0046B470[];
extern void func_001F07D0();
extern void func_00144B70();
extern void func_00144650();
extern void amAdx_Stop();

void func_0026E330(void) {
    *(void **)(D_004707E0 + 0x18) = amTask_Create(func_0026D230, 0, 0x3100, 0x200, 1, D_0046B470);
    memset(*(u8 **)(D_004707E0 + 0x18) + 0x30, 0, 0x1C);
    func_001F07D0();
    func_00144B70(-1);
    func_00144650(0);
    amAdx_Stop(-1);
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E3B0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E4A0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E640);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E780);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E950);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026EC70);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026ED60);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026EF00);
extern void *gEssEdit;

void func_0026F070(void) {
    gEssEdit = 0;
}
extern void *amTask_Create();
extern void func_0026EF00();
extern char D_0046B480[];
extern void func_003105B0();

void func_0026F080(void) {
    *(void **)((u8 *)gEssEdit + 0x10) = amTask_Create(func_0026EF00, 0, 0x3000, 0x200, 2, D_0046B480);
    memset(*(u8 **)((u8 *)gEssEdit + 0x10) + 0x30, 0, 0x1C);
    func_003105B0();
}
extern void func_0027E120(void *);
extern void func_0027E070(void);
extern void SklEdit_Close(void);
extern void amCdFs_Close(void *, s32);

void func_0026F0E0(void) {
    s32 i;
    s32 off;
    func_0027E120(*(void **)((u8 *)gEssEdit + 0x14));
    func_0027E070();
    SklEdit_Close();
    amTask_Kill(*(void **)((u8 *)gEssEdit + 0x10));
    for (i = 0, off = 0; i < 2; i++, off += 4) {
        void *p = *(void **)((u8 *)gEssEdit + off);
        if (p != 0) {
            amCdFs_Close(p, 0);
        }
    }
    amHeap_Free(gEssEdit);
    gEssEdit = 0;
}

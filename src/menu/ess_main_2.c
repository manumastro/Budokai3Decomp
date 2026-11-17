#include "common.h"

INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026D9C0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026DAF0);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026DC80);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026DE30);
INCLUDE_ASM("asm/nonmatchings/menu/ess_main_2", func_0026E000);
extern u8 *gEssMain;
extern void Trade_Start(void);
extern void EssInfo_Init(void);
extern void Shop_InitZenie(void);
extern void EssList_Clear(void);
extern void EssEdit_Clear(void);

void Ess_Init(void) {
    gEssMain = 0;
    Trade_Start();
    EssInfo_Init();
    EssEdit_Clear();
    Shop_InitZenie();
    EssList_Clear();
}
extern void *amTask_Create();
extern void Ess_TaskMain();
extern char D_0046B470[];
extern void Scene_SetReady();
extern void SoundRpc_SendWord2();
extern void SoundRpc_SendWord();
extern void amAdx_Stop();

void Ess_Start(void) {
    *(void **)(gEssMain + 0x18) = amTask_Create(Ess_TaskMain, 0, 0x3100, 0x200, 1, D_0046B470);
    memset(*(u8 **)(gEssMain + 0x18) + 0x30, 0, 0x1C);
    Scene_SetReady();
    SoundRpc_SendWord2(-1);
    SoundRpc_SendWord(0);
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

void EssEdit_Clear(void) {
    gEssEdit = 0;
}
extern void *amTask_Create();
extern void func_0026EF00();
extern char D_0046B480[];
extern void func_003105B0();

void EssEdit_Start(void) {
    *(void **)((u8 *)gEssEdit + 0x10) = amTask_Create(func_0026EF00, 0, 0x3000, 0x200, 2, D_0046B480);
    memset(*(u8 **)((u8 *)gEssEdit + 0x10) + 0x30, 0, 0x1C);
    func_003105B0();
}
extern void func_0027E120(void *);
extern void func_0027E070(void);
extern void SklEdit_Close(void);
extern void amCdFs_Close(void *, s32);

void EssEdit_Exit(void) {
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

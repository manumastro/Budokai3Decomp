#include "common.h"

INCLUDE_ASM("asm/nonmatchings/unk/unk_2CC840", func_002CC840);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CC840", func_002CCB70);
/* 232 bytes, 2 Input_IsHeld tests then a call and a loop; 1 shared exit (`b` trampoline to the epilogue) that
   return/goto/if forms do not reproduce: the same out-of-line block family as 20E620. */
#if 0
typedef struct CutObj {
    char pad0[0x30];
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3C;
    u32 f40;
    u32 f44;
} CutObj;

extern void *gBattle;
extern s32 Input_IsHeld(s32);
extern void func_0021C660(u32);
extern void func_0022C560(u32);

void func_002CCFD0(CutObj *o) {
    u32 *b;
    s32 i;

    if (((s8 *)gBattle)[0x8975] != 1) {
        if (Input_IsHeld(0x80000000)) {
            if (Input_IsHeld(1)) {
                func_0021C660(*(u32 *)((char *)o->f30 + 0xC));
                b = &o->f30;
                for (i = 0; i < 3; i++) {
                    if (b[i + 1] != 0) {
                        func_0022C560(b[i + 1]);
                    }
                }
                if (o->f40 != 0) {
                    func_0022C560(o->f40);
                }
                if (o->f44 != 0) {
                    func_0022C560(o->f44);
                }
            }
        }
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CC840", func_002CCFD0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CC840", func_002CD0C0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CC840", func_002CD1B0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CC840", func_002CD2D0);
INCLUDE_ASM("asm/nonmatchings/unk/unk_2CC840", func_002CD480);

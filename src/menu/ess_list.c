#include "common.h"

extern f32 D_004703BC;
extern s32 func_0022BC30(s32, f32);
extern void func_0027A1C0(s32, s32);
extern void func_00272B70(void);
extern void func_0026D6A0(void);
extern s32 D_004707FC;

INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00271AF0);
void func_00272380(u8 *a0) {
    u8 *s1;
    s32 s0;
    u8 *v;
    f32 f;

    s1 = a0;
    s0 = -1;
    v = (u8 *)D_004707FC;
    f = (f32)*(s32 *)(v + 0x7C);
    s0 &= func_0022BC30(*(s32 *)(*(u8 **)(*(u8 **)(v + 0x20) + 0x1C) + *(s32 *)(v + 0x74) * 4), f * D_004703BC);
    if (s0 == 0xFF) {
        v = (u8 *)D_004707FC;
        switch (*(s32 *)(v + 0x40)) {
        case 0:
            func_0026D6A0();
            *(s32 *)(s1 + 0x1C) = 0;
            break;
        case 1:
            func_0027A1C0(*(s32 *)(v + 0x4C), *(s32 *)(v + 0x48));
            func_00272B70();
            break;
        }
    }
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272440);
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272510);
extern s32 D_00470804;
extern s32 D_00470800;

void func_00272650(void) {
    D_00470804 = 0;
    D_00470800 = 0;
}
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272660);
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272A20);
extern s32 D_00470800;
extern s32 D_004707FC;
extern void amTask_KillGroup(s32, s32, s32);
extern void amCdFs_Close(void *, s32);
extern void amHeap_Free(void *);

#if 0
// differs: the register order matches now; the gp-relative accesses to D_004707FC differ (no relocation seen for that global), the rest of the function matches
void func_00272B70(void) {
    s32 i;
    s32 k;
    s32 *p;
    s32 off;
    void *c;
    amTask_KillGroup(0x200, 8, 0);
    p = &D_00470800;
    for (i = 0; i < 2; i++) {
        D_004707FC = *p;
        if (D_004707FC != 0) {
            for (k = 0, off = 0; k < 3; k++, off += 4) {
                c = *(void **)((u8 *)D_004707FC + off);
                if (c != 0) {
                    amCdFs_Close(c, 0);
                }
            }
            amHeap_Free((void *)D_004707FC);
            *p = 0;
        }
        p++;
    }
}
#endif
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272B70);
INCLUDE_ASM("asm/nonmatchings/menu/ess_list", func_00272C30);

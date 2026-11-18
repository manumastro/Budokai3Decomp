#include "common.h"

s32 func_00101CD8_x00101CD8(s32 arg0) __asm__("func_00101CD8");
s32 func_00101CD8_x00101CD8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = *(s32 *)0x1000E060;
    *(s32 *)0x1000E060 = arg0;
    return temp_v0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101CF0);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101D58);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101DD0);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101E48);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101E90);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101F10);
s32 func_00101868_x00101F90() __asm__("func_00101868");
s32 func_00101F90_x00101F90(u32 *arg0, s32 arg1) __asm__("func_00101F90");
s32 func_00101F90_x00101F90(u32 *arg0, s32 arg1) {
    if (arg1 == 1) {
        return ((u32) *arg0 >> 8) & 1;
    }
    func_00101868_x00101F90();
    return 0;
}
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00101FC8);
INCLUDE_ASM("asm/nonmatchings/sdk/libdma_00101CD8", func_00102000);
s32 func_00102098_x00102098(u32 *arg0, u32 arg1) __asm__("func_00102098");
s32 func_00102098_x00102098(u32 *arg0, u32 arg1) {
    u32 temp_v0;

    temp_v0 = *arg0;
    *arg0 = arg1;
    return (temp_v0 >> 8) & 1;
}
INCLUDE_PAD(4);

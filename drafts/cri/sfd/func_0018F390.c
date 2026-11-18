/* Draft (not built): func_0018F390 at 0x0018F390, size 0x70, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 5 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018F390.s */

void func_0018F390(u8 *arg0) {
    s32 *var_a1;
    s32 var_a2;

    *(s32 *)((u8 *)arg0 + 0x2C) = -1;
    *(s32 *)((u8 *)arg0 + 0x1C) = 0x7FFFFFFF;
    var_a2 = 0x43;
    *(s32 *)((u8 *)arg0 + 0) = 0;
    var_a1 = arg0 + 0x140;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0x7FFFFFFF;
    *(s32 *)((u8 *)arg0 + 0x10) = 0x7FFFFFFF;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0x7FFFFFFF;
    *(s32 *)((u8 *)arg0 + 0x20) = -1;
    *(s32 *)((u8 *)arg0 + 0x24) = -1;
    *(s32 *)((u8 *)arg0 + 0x28) = -1;
    *(s32 *)((u8 *)arg0 + 0x30) = 0;
    do {
        var_a2 -= 1;
        *var_a1 = 0;
        var_a1 -= 4;
    } while (var_a2 >= 0);
    *(s32 *)((u8 *)arg0 + 0x148) = 0;
    *(s32 *)((u8 *)arg0 + 0x144) = 0;
}

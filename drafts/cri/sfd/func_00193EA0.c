/* Draft (not built): func_00193EA0 at 0x00193EA0, size 0x54, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_00193EA0.s */

void func_00193EA0(u8 *arg0) {
    s32 var_a1;
    s32 var_a2;

    *(s32 *)((u8 *)arg0 + 0) = 0;
    var_a1 = 0x10;
    *(s32 *)((u8 *)arg0 + 4) = 0;
    *(s32 *)((u8 *)arg0 + 8) = 0;
    *(s32 *)((u8 *)arg0 + 0xC) = 0;
    var_a2 = 0xF;
    *(s32 *)((u8 *)arg0 + 0x10) = 0;
    *(s32 *)((u8 *)arg0 + 0x14) = 0;
    *(s32 *)((u8 *)arg0 + 0x18) = 0;
    do {
        var_a2 -= 1;
        *(arg0 + 0xC + var_a1) = 0;
        *(arg0 + 0x10 + var_a1) = 0;
        var_a1 += 8;
    } while (var_a2 >= 0);
}

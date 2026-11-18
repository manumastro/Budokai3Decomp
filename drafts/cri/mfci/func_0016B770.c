/* Draft (not built): func_0016B770 at 0x0016B770, size 0xB0, segment cri/mfci (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/mfci/func_0016B770.s */

s32 func_0016B060();
extern s32 D_00464640;
extern s32 D_00464668;

void func_0016B770(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_a3;
    s32 var_v0_2;
    s32 var_v1;
    u32 temp_v1;
    u32 var_v0;

    var_a3 = arg3;
    if (arg0 == NULL) {
        func_0016B060(&D_00464640);
        return;
    }
    temp_v1 = arg1 + 0x7F;
    if ((temp_v1 >= 0xFFU) || (arg2 < -0x7F) || (var_a3 = arg1 - 0x7F, ((arg2 < 0x80) == 0))) {
        func_0016B060(&D_00464668, var_a3);
        return;
    }
    var_v0 = temp_v1;
    if ((s32) temp_v1 < 0) {
        var_v0 = (u32) -(s32) var_v0;
    }
    *(u32 *)((u8 *)arg0 + 0x1C) = var_v0;
    if (var_a3 < 0) {
        var_a3 = 0x7F - arg1;
    }
    var_v0_2 = arg2 + 0x7F;
    var_v1 = arg2 - 0x7F;
    if (var_v0_2 < 0) {
        var_v0_2 = -var_v0_2;
    }
    *(s32 *)((u8 *)arg0 + 0x20) = var_a3;
    *(s32 *)((u8 *)arg0 + 0x24) = var_v0_2;
    if (var_v1 < 0) {
        var_v1 = 0x7F - arg2;
    }
    *(s32 *)((u8 *)arg0 + 0x28) = var_v1;
}

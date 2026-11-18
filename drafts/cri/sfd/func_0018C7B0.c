/* Draft (not built): func_0018C7B0 at 0x0018C7B0, size 0x164, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd/func_0018C7B0.s */

void *func_0017B5B8(s32, s32, s32, u8);         /* extern */
extern s32 D_00467278;
extern s32 D_004674A0;

u8 *func_0018C7B0(s32 arg0, s32 arg1, u8 *arg2, u8 arg3) {
    s32 temp_a0;
    s32 temp_a2_2;
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    u8 temp_a0_2;
    u8 temp_a2;
    u8 var_a3;
    u8 *var_v0;

    var_a3 = arg3;
    var_s0 = arg1;
    var_s1 = arg0;
    if (var_s0 > 0) {
        var_a0 = var_s1;
loop_2:
        var_v0 = func_0017B5B8(var_a0, var_s0, 0x40, var_a3);
        if (var_v0 != NULL) {
            temp_a2 = *(u8 *)((u8 *)var_v0 + 7);
            temp_a0 = (var_v0 - var_s1) + 1;
            var_s0 -= temp_a0;
            var_s1 += temp_a0;
            temp_a2_2 = temp_a2 & 0xF;
            var_a3 = *(u8 *)((u8 *)var_v0 + 0xA);
            temp_a0_2 = *(u8 *)((u8 *)var_v0 + 5);
            if (((temp_a2 >> 4) != 0) && ((u32) ((temp_a2_2 + 0xFF) & 0xFF) < 8U) && ((var_a3 >> 5) & 1 & 0xFF)) {
                *(s32 *)((u8 *)arg2 + 0x14) = (s32) ((*(u8 *)((u8 *)var_v0 + 4) * 0x10) | (temp_a0_2 >> 4));
                *(s32 *)((u8 *)arg2 + 0x18) = (s32) (((temp_a0_2 & 0xF) << 8) | *(u8 *)((u8 *)var_v0 + 6));
                if (*(s32 *)((u8 *)arg2 + 0x1C) == 0) {
                    *(s32 *)((u8 *)arg2 + 0x1C) = (s32) (((*(u8 *)((u8 *)var_v0 + 8) << 0xA) | (*(u8 *)((u8 *)var_v0 + 9) * 4) | (var_a3 >> 6)) * 0x32);
                }
                *(s32 **)((u8 *)arg2 + 8) = &D_004674A0;
                *(s32 *)((u8 *)arg2 + 0x20) = (s32) *((temp_a2_2 * 4) + &D_00467278);
                *(s32 *)((u8 *)arg2 + 0x24) = (s32) ((((var_a3 & 0x1F) << 5) | ((u8) *(u8 *)((u8 *)var_v0 + 0xB) >> 3)) << 0xB);
                goto block_11;
            }
            var_a0 = var_s1;
            if (var_s0 <= 0) {
                goto block_11;
            }
            goto loop_2;
        }
    } else {
block_11:
        var_v0 = (u8 *)1;
    }
    return var_v0;
}

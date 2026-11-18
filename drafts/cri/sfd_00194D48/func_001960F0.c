/* Draft (not built): func_001960F0 at 0x001960F0, size 0x198, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001960F0.c:52: warning: assignment makes pointer from integer without a cast
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001960F0.s */

s32 func_0017B5B8(void *, s32, s32, s32);       /* extern */

void func_001960F0(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_a2;
    s32 var_a3;
    s32 var_s1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s0;
    u8 *temp_v0;
    u8 *var_s2;

    var_s1 = arg2;
    var_s2 = arg1;
    var_a2 = 0;
    temp_s0 = *(s32 *)((u8 *)arg0 + 0x1C70) + 0xFC8;
    *(s32 *)((u8 *)temp_s0 + 0xC) = (s32) (*(s32 *)((u8 *)temp_s0 + 0xC) + *(s32 *)((u8 *)temp_s0 + 4));
    *(s32 *)((u8 *)temp_s0 + 4) = (s32) *(s32 *)((u8 *)temp_s0 + 8);
    *(s32 *)((u8 *)temp_s0 + 8) = 0;
    var_a3 = var_s1 < 4;
loop_9:
    if (var_a2 < ((var_a3 != 0) int var_s1 : 3)) {
        temp_a1 = var_a2 + 1;
        if ((*(sp + var_a2) == 0) && (*(sp + temp_a1) == 0) && (temp_v0 = var_a2 + sp, (*(u8 *)((u8 *)temp_v0 + 2) == 1)) && (*(u8 *)((u8 *)temp_v0 + 3) == 0)) {
            *(s32 *)((u8 *)temp_s0 + 8) = (s32) (*(s32 *)((u8 *)temp_s0 + 8) + 1);
        } else {
            var_a2 = temp_a1;
            goto loop_9;
        }
    }
    temp_a0 = var_s2 + var_s1;
    if (var_s1 < 3) {
        temp_a0_2 = var_s1 + sp;
        *(u8 *)((u8 *)temp_s0 + 0x10) = (u8) *(sp + var_s1);
        *(u8 *)((u8 *)temp_s0 + 0x11) = (u8) *(u8 *)((u8 *)temp_a0_2 + 1);
        *(u8 *)((u8 *)temp_s0 + 0x12) = (u8) *(u8 *)((u8 *)temp_a0_2 + 2);
    } else {
        *(u8 *)((u8 *)temp_s0 + 0x10) = (u8) *(u8 *)((u8 *)temp_a0 + -3);
        *(u8 *)((u8 *)temp_s0 + 0x11) = (u8) *(u8 *)((u8 *)temp_a0 + -2);
        *(u8 *)((u8 *)temp_s0 + 0x12) = (u8) *(u8 *)((u8 *)temp_a0 + -1);
    }
loop_16:
    if (var_a3 == 0) {
        temp_v0_2 = func_0017B5B8(var_s2, var_s1, 4, var_a3);
        if (temp_v0_2 != 0) {
            temp_a0_3 = temp_v0_2 + 4;
            temp_v1 = temp_a0_3 - var_s2;
            var_s2 = temp_a0_3;
            var_s1 -= temp_v1;
            *(s32 *)((u8 *)temp_s0 + 8) = (s32) (*(s32 *)((u8 *)temp_s0 + 8) + 1);
            var_a3 = var_s1 < 4;
            goto loop_16;
        }
    }
}

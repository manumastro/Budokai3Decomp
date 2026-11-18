/* Draft (not built): func_00103018 at 0x00103018, size 0x21C, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00103018.c:61: warning: assignment makes pointer from integer without a cast
 * Original: asm/sdk/libmpeg.s */

s32 func_00104A38(s32, s32, s32);               /* extern */
s32 func_00104B28(s32, s32);                    /* extern */
s32 func_00109738(void *, s32 *);           /* extern */
extern s32 D_0045CE80;

void func_00103018(u8 *arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 *temp_v0_2;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 var_fp;
    s32 var_s5;

    sp0 = arg1;
    temp_a1 = arg1 * 0x140;
    temp_v0 = arg0 + 0x6CC;
    if (*(s32 *)((u8 *)(arg0 + temp_a1) + 0x6D8) != 0) {
        sp4 = temp_v0;
        var_s5 = 0;
        if (*(temp_v0 + temp_a1) > 0) {
            sp8 = arg0 + 0x6D0;
            var_fp = arg0 + 0x6C8;
            do {
                temp_s0 = var_s5 * 4;
                temp_s1 = sp0 * 0x140;
                temp_s3 = var_s5 * 0x1C;
                var_s5 += 1;
                temp_s0_2 = temp_s0 + temp_s1;
                temp_s2 = arg0 + (temp_s1 + 0x5A0);
                *(arg0 + 0x5C8 + temp_s0_2)(temp_s2 + (temp_s3 + 0x48));
                *(arg0 + 0x5D8 + temp_s0_2)(temp_s2 + (temp_s3 + 0xB8));
            } while (var_s5 < *(sp4 + temp_s1));
        } else {
            var_fp = arg0 + 0x6C8;
            sp8 = arg0 + 0x6D0;
        }
    } else {
        var_fp = arg0 + 0x6C8;
        sp8 = arg0 + 0x6D0;
    }
    temp_a0 = sp0 * 0x140;
    if ((*(sp8 + temp_a0) != 0) && (*(s32 *)((u8 *)(arg0 + temp_a0) + 0x6DC) != 0)) {
        func_00109738(arg0, &D_0045CE80);
    }
    temp_a1_2 = sp0 * 0x140;
    if (*(sp8 + temp_a1_2) != 0) {
        func_00104B28(*(var_fp + temp_a1_2), *(s32 *)((u8 *)(arg0 + temp_a1_2) + 0x5A4));
        return;
    }
    temp_v0_2 = var_fp + temp_a1_2;
    if (*(s32 *)((u8 *)(arg0 + temp_a1_2) + 0x6DC) != 0) {
        func_00104B28(*temp_v0_2, *(s32 *)((u8 *)arg0 + 0x830));
        return;
    }
    func_00104A38(*temp_v0_2, *(s32 *)((u8 *)arg0 + 0x830), *(s32 *)((u8 *)(arg0 + temp_a1_2) + 0x5A4));
}

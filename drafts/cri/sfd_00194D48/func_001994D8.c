/* Draft (not built): func_001994D8 at 0x001994D8, size 0xF0, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001994D8.s */

s32 func_0018B840();                                /* extern */
s32 func_001995C8(void *);                          /* extern */
s32 func_00199610(void *);                      /* extern */

void func_001994D8(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s3;
    u8 *temp_s0;
    u8 *temp_s4;

    temp_s4 = arg0 + 0xD54;
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x31E8);
    if (func_0018B840() == 0) {
        var_s3 = 0;
        if (*(s32 *)((u8 *)temp_s0 + 0xD9C) <= 0) {
            var_s1 = 0;
            if (*(s32 *)((u8 *)(arg0 + 0x31EC) + 4) != -3) {
                var_s1 = *(s32 *)((u8 *)temp_s0 + 0xDC4);
            }
            if (var_s1 >= 0) {
                temp_v0 = func_001995C8(arg0);
                if (temp_v0 != -1) {
                    var_s3 = 1;
                    *(s32 *)((u8 *)temp_s0 + 0xD9C) = (s32) (var_s1 + temp_v0);
                }
            }
        }
        if (*(s32 *)((u8 *)temp_s0 + 0xDA0) <= 0) {
            temp_v0_2 = *(s32 *)((u8 *)temp_s4 + 0x24);
            if (temp_v0_2 > 0) {
                *(s32 *)((u8 *)temp_s0 + 0xDA0) = temp_v0_2;
                var_s3 = 1;
                *(s32 *)((u8 *)temp_s0 + 0xDA4) = (s32) *(s32 *)((u8 *)temp_s4 + 0x28);
            }
        }
        if (var_s3 != 0) {
            func_00199610(arg0);
        }
    }
}

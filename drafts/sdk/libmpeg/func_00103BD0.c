/* Draft (not built): func_00103BD0 at 0x00103BD0, size 0x19C, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 52 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0; declarations unprototyped
 * Original: asm/sdk/libmpeg.s */

s32 func_001037A8();
s32 func_00104728();

void func_00103BD0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg_sp0, s32 arg_sp8, s32 arg_sp10) {
    s32 sp0;
    s32 temp_s5;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_v0;
    u8 *temp_s0_2;
    u8 *temp_s0_3;
    u8 *temp_v1;

    temp_s5 = M2C_ERROR(/* Read from unset register $t3 */);
    temp_s0 = M2C_ERROR(/* Read from unset register $t0 */);
    sp0 = arg3;
    if (M2C_ERROR(/* Read from unset register $t1 */) == 1) {
        if ((M2C_ERROR(/* Read from unset register $t2 */) == 0) && (arg_sp8 == 0)) {
            temp_v0 = func_00104728(1);
            temp_v1 = (temp_s0 * 4) + sp0;
            *(s32 *)((u8 *)temp_v1 + 8) = temp_v0;
            *(s32 *)((u8 *)temp_v1 + 0) = temp_v0;
        }
        temp_s0_2 = arg1 + (temp_s0 * 8);
        func_001037A8(arg0, temp_s0_2, arg2, temp_s5);
        *(s32 *)((u8 *)temp_s0_2 + 0x10) = (s32) *(s32 *)((u8 *)temp_s0_2 + 0);
        *(s32 *)((u8 *)temp_s0_2 + 0x14) = (s32) *(s32 *)((u8 *)temp_s0_2 + 4);
        return;
    }
    temp_s1 = temp_s0 * 8;
    temp_s0_3 = (temp_s0 * 4) + sp0;
    *(s32 *)((u8 *)temp_s0_3 + 0) = func_00104728(arg0, 1);
    func_001037A8(arg0, arg1 + temp_s1, arg2, temp_s5);
    *(s32 *)((u8 *)temp_s0_3 + 8) = func_00104728(arg0, 1);
    func_001037A8(arg0, arg1 + (temp_s1 + 0x10), arg2, temp_s5);
}

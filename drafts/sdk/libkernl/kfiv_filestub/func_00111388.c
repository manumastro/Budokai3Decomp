/* Draft (not built): func_00111388 at 0x00111388, size 0x24C, segment sdk/libkernl/kfiv_filestub (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_00111388.c:95: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libkernl/kfiv_filestub/func_00111388.s */

s32 CreateSema(s32 *, s32, s32, s32); /* extern */
s32 DeleteSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 _sceFsWaitS(s32);                       /* extern */
s32 func_0010EA50(s32 *, s32, s32, s32 *, s32, s32); /* extern */
s32 func_0010EFF0();                            /* extern */
s32 func_0010F0E8();                            /* extern */
s32 sceSifWriteBackDCache(s32 *, s32);  /* extern */
extern s32 D_003EC6BC;
extern s32 D_0045D850;
extern s32 D_00473440;
extern s32 D_00474080;
extern s32 D_00474B40;

s32 func_00111388(u8 *arg0, s32 arg1, s32 arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *sp24;
    s32 sp30;
    s32 temp_s0;
    s32 temp_s2;
    s32 var_s1;
    u8 temp_v0;
    u8 temp_v1;

    _sceFsWaitS(0xD);
    if (D_003EC6BC == 0) {
        func_0010F0E8();
    }
    temp_v0 = *arg0;
    var_s1 = 0;
    *(u8 *)((u8 *)(&D_00473440) + 0x50) = temp_v0;
    if (temp_v0 != 0) {
loop_4:
        var_s1 += 1;
        if (var_s1 < 0x400) {
            temp_v1 = *(arg0 + var_s1);
            *(u8 *)((u8 *)(&D_00473440 + var_s1) + 0x50) = temp_v1;
            if (temp_v1 == 0) {

            } else {
                goto loop_4;
            }
        }
    }
    if (var_s1 == 0x400) {
        *(s8 *)((u8 *)(&D_00473440) + 0x44F) = 0;
    }
    M2C_ERROR(/* unknown instruction: ldl $a0, 0x7($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, ($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0xf($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0x8($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x17($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x10($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a3, 0x1f($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, 0x18($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0x17($s3) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0x10($s3) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x1f($s3) */);
    M2C_ERROR(/* unknown instruction: sdr $a1, 0x18($s3) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x27($s3) */);
    M2C_ERROR(/* unknown instruction: sdr $a2, 0x20($s3) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0x2f($s3) */);
    M2C_ERROR(/* unknown instruction: sdr $a3, 0x28($s3) */);
    M2C_ERROR(/* unknown instruction: ldl $a0, 0x27($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a0, 0x20($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a1, 0x2f($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a1, 0x28($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a2, 0x37($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a2, 0x30($s0) */);
    M2C_ERROR(/* unknown instruction: ldl $a3, 0x3f($s0) */);
    M2C_ERROR(/* unknown instruction: ldr $a3, 0x38($s0) */);
    M2C_ERROR(/* unknown instruction: sdl $a0, 0x37($s3) */);
    M2C_ERROR(/* unknown instruction: sdr $a0, 0x30($s3) */);
    M2C_ERROR(/* unknown instruction: sdl $a1, 0x3f($s3) */);
    M2C_ERROR(/* unknown instruction: sdl $a2, 0x47($s3) */);
    M2C_ERROR(/* unknown instruction: sdl $a3, 0x4f($s3) */);
    *(s32 *)((u8 *)(&D_00473440) + 0xC) = arg2;
    sp14 = 1;
    sp24 = &D_0045D850;
    sp18 = 0;
    temp_s2 = CreateSema(&sp10, M2C_ERROR(/* unknown instruction: sdr $a1, 0x38($s3) */), M2C_ERROR(/* unknown instruction: sdr $a2, 0x40($s3) */), M2C_ERROR(/* unknown instruction: sdr $a3, 0x48($s3) */));
    *(s32 **)((u8 *)(&D_00473440) + 4) = &sp30;
    *(s32 *)((u8 *)(&D_00473440) + 8) = 4;
    *(s32 *)((u8 *)(&D_00473440) + 0) = temp_s2;
    sceSifWriteBackDCache(&D_00473440, 0x450);
    if (func_0010EA50(&D_00474B40, 0xD, 0, &D_00473440, 0, 0) < 0) {
        DeleteSema(temp_s2);
        func_0010EFF0();
        return -0xB;
    }
    temp_s0 = *((s32) &D_00474080 | 0x20000000);
    func_0010EFF0();
    if (temp_s0 == 0) {
        DeleteSema(temp_s2);
        return -0xB;
    }
    WaitSema(temp_s2);
    DeleteSema(temp_s2);
    return sp30;
}

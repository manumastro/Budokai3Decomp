/* Draft (not built): func_001186F8 at 0x001186F8, size 0x2FC, segment sdk/libcdvd (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: e error: d_001186F8.c:117: invalid type argument of `unary *'
 * Original: asm/nonmatchings/sdk/libcdvd/func_001186F8.s */

s32 PollSema(s32);                                  /* extern */
s32 SignalSema(s32);                            /* extern */
s32 func_00118420();                            /* extern */
s32 func_00118C08(s32);                         /* extern */
s32 scePrintf(s32 *, s32 *, s32);   /* extern */
s32 sceSifBindRpc(s32 *, s32, s32);     /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
s32 sceSifInitRpc(s32);                     /* extern */
s32 sceSifWriteBackDCache(s32 *, s32);  /* extern */
extern s32 D_003EDD90;
extern s32 D_003EDD9C;
extern s32 D_003EDDA8;
extern s32 D_003EDDCC;
extern s32 D_0045DC00;
extern s32 D_0045DC20;
extern s32 D_0045DC38;
extern s32 D_0045DC48;
extern s32 D_0045DC58;
extern s32 D_00478D80;
extern s32 D_00478DA4;
extern s32 D_00478EC0;
extern s32 D_00478F00;
extern s32 D_FFFFF;

s32 func_001186F8(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 sp10;
    s32 *var_v0_2;
    s32 *var_v0_3;
    s32 temp_s0;
    s32 var_a1;
    s32 var_v0;
    u8 temp_v1;
    u8 temp_v1_2;

    sp10 = arg2;
    func_00118420();
    var_v0 = 0;
    if (D_003EDDA8 == PollSema(D_003EDDA8)) {
        D_003EDD9C = 1;
        if (func_00118C08(1) == 0) {
            sceSifInitRpc(0);
            if (D_003EDDCC < 0) {
loop_6:
                if (sceSifBindRpc(&D_00478F00, 0x80000597, 0) < 0) {
                    var_v0_2 = &D_FFFFF;
                    if (D_003EDD90 > 0) {
                        scePrintf(&D_0045DC00);
                        var_v0_2 = (s32 *)0x100000;
                    }
                    do {

                    } while (var_v0_2 != (s32 *)-1);
                    goto loop_6;
                }
                var_v0_3 = &D_FFFFF;
                if (*(s32 *)((u8 *)(&D_00478F00) + 0x24) == 0) {
                    do {

                    } while (var_v0_3 != (s32 *)-1);
                    goto loop_6;
                }
                D_003EDDCC = 0;
            }
            temp_v1 = *arg1;
            var_a1 = 0;
            *(u8 *)((u8 *)(&D_00478D80) + 0x24) = temp_v1;
            if ((temp_v1 << 0x18) != 0) {
loop_19:
                var_a1 += 1;
                if (var_a1 < 0x100) {
                    temp_v1_2 = *(arg1 + var_a1);
                    *(var_a1 + (&D_00478D80 + 0x24)) = temp_v1_2;
                    if ((temp_v1_2 << 0x18) != 0) {
                        goto loop_19;
                    }
                }
            }
            if (var_a1 == 0x100) {
                *(s8 *)((u8 *)(&D_00478D80) + 0x123) = 0;
            }
            if (D_003EDD90 > 0) {
                scePrintf(&D_0045DC20, &D_00478DA4);
            }
            *(s32 *)((u8 *)(&D_00478D80) + 0x128) = sp10;
            *(s32 **)((u8 *)(&D_00478D80) + 0x124) = &D_00478D80;
            sceSifWriteBackDCache(&D_00478D80, 0x12C);
            if (sceSifCallRpc(&D_00478F00, 0, 0, &D_00478D80, 0) < 0) {
                goto block_26;
            }
            M2C_ERROR(/* unknown instruction: ldl $v1, 0x7($v0) */);
            M2C_ERROR(/* unknown instruction: ldr $v1, ($v0) */);
            M2C_ERROR(/* unknown instruction: ldl $a0, 0xf($v0) */);
            M2C_ERROR(/* unknown instruction: ldr $a0, 0x8($v0) */);
            M2C_ERROR(/* unknown instruction: ldl $a1, 0x17($v0) */);
            M2C_ERROR(/* unknown instruction: ldr $a1, 0x10($v0) */);
            M2C_ERROR(/* unknown instruction: ldl $a2, 0x1f($v0) */);
            M2C_ERROR(/* unknown instruction: ldr $a2, 0x18($v0) */);
            M2C_ERROR(/* unknown instruction: sdl $v1, 0x7($s3) */);
            M2C_ERROR(/* unknown instruction: sdr $v1, ($s3) */);
            M2C_ERROR(/* unknown instruction: sdl $a0, 0xf($s3) */);
            M2C_ERROR(/* unknown instruction: sdr $a0, 0x8($s3) */);
            M2C_ERROR(/* unknown instruction: sdl $a1, 0x17($s3) */);
            M2C_ERROR(/* unknown instruction: sdr $a1, 0x10($s3) */);
            M2C_ERROR(/* unknown instruction: sdl $a2, 0x1f($s3) */);
            *(s32 *)((u8 *)arg0 + 0x20) = M2C_UNALIGNED32(*(s32 *)((u8 *)((s32) &D_00478D80 | 0x20000000) + 0x20));
            if (D_003EDD90 > 0) {
                scePrintf(&D_0045DC38, arg0 + 8, M2C_ERROR(/* unknown instruction: sdr $a2, 0x18($s3) */));
                if (D_003EDD90 > 0) {
                    scePrintf(&D_0045DC48, *(s32 **)((u8 *)arg0 + 4));
                    if (D_003EDD90 > 0) {
                        scePrintf(&D_0045DC58, *(s32 **)((u8 *)arg0 + 0));
                    }
                }
            }
            temp_s0 = *((s32) &D_00478EC0 | 0x20000000);
            SignalSema(D_003EDDA8);
            var_v0 = temp_s0;
            /* Duplicate return node #32. Try simplifying control flow for better match */
            return var_v0;
        }
block_26:
        SignalSema(D_003EDDA8);
        return 0;
    }
    return var_v0;
}

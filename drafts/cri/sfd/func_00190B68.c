/* Draft (not built): func_00190B68 at 0x00190B68, size 0x284, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_00190B68.c:80: for each function it appears in.)
 * Original: asm/nonmatchings/cri/sfd/func_00190B68.s */

s32 func_0018B058(s32, s32, s32 *);                 /* extern */
s32 func_0018B840(s32);                             /* extern */
s32 func_0018B8A8(s32, s32);                        /* extern */
s32 func_00190820(s32);                             /* extern */
s32 func_00190DF0(s32, void *);                 /* extern */
s32 func_00190E40(s32);                         /* extern */
s32 func_00190EF8(s32, s32);                        /* extern */
s32 func_00191120(s32, s32);                    /* extern */
s32 func_00191200(s32, s32, s32);                   /* extern */
s32 func_00191248(s32);                             /* extern */
s32 func_00191300(s32, void *, s32, s32);           /* extern */
s32 func_001926F8(s32, void *);                     /* extern */
s32 func_00192708(s32, void *);                     /* extern */
s32 func_00192C78(s32, s32);                        /* extern */
s32 func_00192DE0(s32, s32);                        /* extern */
s32 func_00193870(s32, s32, s32);               /* extern */
s32 func_00194768(s32);                         /* extern */
s32 func_00194788(s32, s32);                /* extern */
s32 func_001962A0();                                /* extern */

s32 func_00190B68(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp10;
    s32 *temp_s5;
    s32 temp_s1;
    s32 temp_s2;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_v0;

    temp_s5 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s4 = arg0 + 0x94C;
    temp_v0 = arg0 + 0x1C68;
    *temp_s5 = 0;
    temp_s2 = *(s32 *)((u8 *)temp_v0 + 0x10);
    temp_s3 = *(u8 **)((u8 *)temp_v0 + 8);
    *(s32 *)((u8 *)temp_s4 + 0x24) = 0;
    if (func_001962A0() != 0) {
        temp_s1 = ((*(s32 *)((u8 *)temp_s3 + 0x78) ^ 0xCC) != 0) int (arg2 & 0xCC) : arg2;
        var_s2 = func_0018B058(arg0, temp_s2, &sp10);
        var_v0 = 0;
        if (var_s2 == 0) {
            if (temp_s1 & 0xC8) {
                func_00194788(arg0, 1);
            }
            if (temp_s1 == 0x80) {
                func_00190E40(arg0);
                if (func_0018B840(arg0) != 0) {
                    if (func_00190EF8(arg0, sp10) == 0) {
                        goto block_41;
                    }
                    goto block_42;
                }
                if (func_0018B8A8(arg0, sp10) != 0) {
                    func_00191120(arg0, sp10);
                    goto block_41;
                }
                goto block_18;
            }
block_18:
            var_v0_2 = temp_s1 & 0x4C;
            if (arg3 == 0) {
                if (func_00191200(arg0, arg1, temp_s1) == 0) {
                    var_v0_2 = temp_s1 & 0x4C;
                    if (arg1 < 5) {
                        *(s32 *)((u8 *)temp_s4 + 0x24) = 1;
                        goto block_42;
                    }
                    goto block_26;
                }
                func_00194768(arg0);
                goto block_42;
            }
block_26:
            if (var_v0_2 != 0) {
                func_00190DF0(arg0, sp);
                var_v0 = func_00191300(arg0, sp, sp10, (temp_s1 & *(s32 *)((u8 *)temp_s3 + 0x78)) != 0);
                var_s2 = var_v0;
                if (var_s2 == 0) {
                    if (temp_s1 & *(s32 *)((u8 *)temp_s3 + 0x78)) {
                        *(s32 *)((u8 *)temp_s3 + 0x78) = 0xCC;
                    }
                    goto block_41;
                }
            } else if (!(temp_s1 & 2)) {
                if (temp_s1 != 0x80) {
                    var_v0 = var_s2;
                    if (func_00193870(arg0, sp10, 0xCC) > 0) {
                        goto block_41;
                    }
                } else {
                    goto block_42;
                }
            } else {
                var_v0 = func_001926F8(arg0, sp);
                if (var_v0 != 0) {
                    func_00190DF0(arg0, sp);
                    if (func_00192708(arg0, sp) != 0) {
                        var_s2 = func_00192C78(arg0, sp10);
                        if (var_s2 == 0) {
block_41:
                            *temp_s5 = 1;
                        }
                    } else {
                        var_s2 = func_00192DE0(arg0, sp10);
                    }
block_42:
                    var_v0 = var_s2;
                }
            }
        }
    } else if (func_00191248(arg0) != 1) {
        *(s32 *)((u8 *)temp_s4 + 0x24) = 1;
        var_v0 = func_00190820(arg0);
    } else {
        func_00194768(arg0);
        var_v0 = 0;
    }
    return var_v0;
}

/* Draft (not built): func_00192708 at 0x00192708, size 0xF4, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0; declarations unprototyped
 * Original: asm/nonmatchings/cri/sfd/func_00192708.s */

s32 func_00192800();
s32 func_00192860();
s32 func_00192968();
s32 func_001929B8();
s32 func_00192A08();
s32 func_00192AE8();
s32 func_001999E0();

s32 func_00192708(u8 *arg0, s32 arg1) {
    s32 temp_s1_2;
    s32 var_s3;
    s32 var_v0;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x1C70);
    var_v0 = func_001999E0((u8 *)0x2F);
    temp_s2 = temp_s1 + 0x8C;
    if (var_v0 == 1) {
        goto block_14;
    }
    if (func_001999E0(arg0, 0x27) == 1) {
        goto block_3;
    }
    goto block_5;
block_3:
    return 0;
block_5:
    if (*(s8 *)((u8 *)temp_s2 + 0x58) == 0) {
        goto block_7;
    }
    return *(s32 *)((u8 *)temp_s1 + 0x164);
block_7:
    temp_s1_2 = *(s32 *)((u8 *)temp_s2 + 0x18);
    var_s3 = 1;
    if (func_00192968(arg0) != 0) {
        goto block_12;
    }
    if (func_001929B8(arg0, temp_s1_2) != 0) {
        goto block_13;
    }
    if (func_00192A08(arg0, temp_s1_2, arg1) != 0) {
        goto block_13;
    }
    if (func_00192800(arg0, temp_s1_2) != 0) {
        goto block_12;
    }
    var_s3 = func_00192AE8(arg0, temp_s1_2) != 0;
block_12:
block_13:
    func_00192860(arg0, temp_s2, var_s3);
    var_v0 = var_s3;
block_14:
    return var_v0;
}

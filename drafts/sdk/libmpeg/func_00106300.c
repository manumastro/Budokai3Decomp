/* Draft (not built): func_00106300 at 0x00106300, size 0x144, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/sdk/libmpeg.s */

s32 func_00104728();
s32 func_00106898();
s32 func_00106AA0();

void func_00106300(u8 *arg0) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;

    /* Flowgraph is not reducible, falling back to gotos-only mode. */
    temp_s1 = func_00104728((u8 *)0xA);
    *(s32 *)((u8 *)arg0 + 0x160) = func_00104728(arg0, 3);
    func_00104728(arg0, 0x10);
    if ((u32) (*(s32 *)((u8 *)arg0 + 0x160) - 2) >= 2U) {
        goto block_2;
    }
    *(s32 *)((u8 *)arg0 + 0x164) = func_00104728(arg0, 1);
    *(s32 *)((u8 *)arg0 + 0x168) = func_00104728(arg0, 3);
block_2:
    if (*(s32 *)((u8 *)arg0 + 0x160) != 3) {
        goto block_7;
    }
    *(s32 *)((u8 *)arg0 + 0x16C) = func_00104728(arg0, 1);
    *(s32 *)((u8 *)arg0 + 0x170) = func_00104728(arg0, 3);
    goto block_6;
block_5:
    func_00106AA0(arg0, 8);
block_6:
block_7:
    if (func_00104728(arg0, 1) != 0) {
        goto block_5;
    }
    func_00106898(arg0);
    var_a1 = 0;
    var_a0 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x160) == 3) {
        goto block_13;
    }
    if (temp_s1 == 0) {
        goto block_13;
    }
    if (temp_s1 >= 0) {
        goto block_12;
    }
    var_a1 = *(s32 *)((u8 *)arg0 + 0x864) == 0;
block_12:
    *(s32 *)((u8 *)arg0 + 0x864) = 0;
    var_a0 = temp_s1;
block_13:
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x85C) + temp_s1;
    *(s32 *)((u8 *)arg0 + 0x1BC) = temp_v1;
    if (var_a1 == 0) {
        goto block_16;
    }
    if (var_a0 < temp_s1) {
        goto block_16;
    }
    *(s32 *)((u8 *)arg0 + 0x1BC) = (s32) (temp_v1 + 0x400);
block_16:
    temp_v0 = *(s32 *)((u8 *)arg0 + 0x860);
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x1BC);
    *(s32 *)((u8 *)arg0 + 0x860) = (s32) ((temp_v0 < temp_a0) ? temp_a0 : temp_v0);
    return;
}

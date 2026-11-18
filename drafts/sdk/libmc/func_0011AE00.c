/* Draft (not built): func_0011AE00 at 0x0011AE00, size 0x11C, segment sdk/libmc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmc/func_0011AE00.s */

s32 PollSema(s32);                                  /* extern */
s32 SignalSema(s32);                            /* extern */
s32 func_00128040(s32 *, s8 *, s32);    /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, void *, s32); /* extern */
extern s32 D_003EF948;
extern s32 D_003EF94C;
extern s32 D_00478FC0;
extern s32 D_00479084;

s32 func_0011AE00(s32 arg0, s32 arg1, s8 *arg2) {
    s32 var_v0;
    u8 *temp_v1;

    if (*(s32 *)((u8 *)(&D_00478FC0) + 0x24) != 0) {
        goto block_2;
    }
    return -0x64;
block_2:
    var_v0 = -0xC8;
    if (PollSema(D_003EF94C) < 0) {
        goto block_9;
    }
    if (arg2 == NULL) {
        goto block_5;
    }
    if (*arg2 != 0) {
        goto block_6;
    }
block_5:
    SignalSema(D_003EF94C);
    return -0xD2;
block_6:
    func_00128040(&D_00479084, arg2, 0x3FF);
    temp_v1 = &D_00479084 - 0x14;
    *(s32 *)((u8 *)(&D_00479084) + -0x14) = arg0;
    *(s32 *)((u8 *)temp_v1 + 4) = arg1;
    *(s8 *)((u8 *)temp_v1 + 0x413) = 0;
    *(s32 *)((u8 *)temp_v1 + 8) = 0;
    if (sceSifCallRpc(&D_00478FC0, 0xF, 1, temp_v1, 0) == 0) {
        goto block_8;
    }
    SignalSema(D_003EF94C);
    return -0x5B;
block_8:
    D_003EF948 = 0xF;
    var_v0 = 0;
block_9:
    return var_v0;
}

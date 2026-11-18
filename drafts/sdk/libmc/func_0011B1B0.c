/* Draft (not built): func_0011B1B0 at 0x0011B1B0, size 0x158, segment sdk/libmc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmc/func_0011B1B0.s */

s32 FlushCache(s32);                        /* extern */
s32 PollSema(s32);                                  /* extern */
s32 SignalSema(s32);                            /* extern */
s32 func_00128040(s32 *, s8 *, s32);    /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_003EF948;
extern s32 D_003EF94C;
extern s32 D_00478FC0;
extern s32 D_00479020;
extern s32 D_00479070;

s32 func_0011B1B0(s32 arg0, s32 arg1, s8 *arg2, s8 *arg3) {
    s32 var_v0;

    if (*(s32 *)((u8 *)(&D_00478FC0) + 0x24) != 0) {
        goto block_2;
    }
    return -0x64;
block_2:
    var_v0 = -0xC8;
    if (PollSema(D_003EF94C) < 0) {
        goto block_10;
    }
    if (arg2 == NULL) {
        goto block_6;
    }
    if (*arg2 == 0) {
        goto block_6;
    }
    if (arg3 != NULL) {
        goto block_7;
    }
block_6:
    SignalSema(D_003EF94C);
    return -0xD2;
block_7:
    *(s32 *)((u8 *)(&D_00479070) + 0) = arg0;
    *(s32 *)((u8 *)(&D_00479070) + 4) = arg1;
    *(s32 *)((u8 *)(&D_00479070) + 8) = 0x10;
    func_00128040(&D_00479070 + 0x14, arg2, 0x3FF);
    *(s8 *)((u8 *)(&D_00479070) + 0x413) = 0;
    func_00128040(&D_00479020, arg3, 0x20);
    *(u8 **)((u8 *)(&D_00479070) + 0x10) = (u8 *) (&D_00479020 - 0x20);
    FlushCache(0);
    if (sceSifCallRpc(&D_00478FC0, 0xE, 1, &D_00479070, 0) == 0) {
        goto block_9;
    }
    SignalSema(D_003EF94C);
    return -0x5B;
block_9:
    D_003EF948 = 0x13;
    var_v0 = 0;
block_10:
    return var_v0;
}

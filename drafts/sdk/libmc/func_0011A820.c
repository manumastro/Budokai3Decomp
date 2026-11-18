/* Draft (not built): func_0011A820 at 0x0011A820, size 0x17C, segment sdk/libmc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmc/func_0011A820.s */

s32 PollSema(s32);                                  /* extern */
s32 SignalSema(s32);                            /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32 *); /* extern */
s32 sceSifWriteBackDCache(s32 *, s32, s32 *); /* extern */
extern s32 D_003EF948;
extern s32 D_003EF94C;
extern s32 D_00478FC0;
extern s32 D_00478FE8;
extern s32 D_00478FEC;
extern s32 D_00478FF0;
extern s32 D_00479040;
extern s32 D_004794C0;

s32 func_0011A820(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s5;

    temp_s5 = M2C_ERROR(/* Read from unset register $t0 */);
    if (*(s32 *)((u8 *)(&D_00478FC0) + 0x24) == 0) {
        return -0x64;
    }
    if (PollSema(D_003EF94C) < 0) {
        return -0xC8;
    }
    *(s32 *)((u8 *)(&D_00479040) + 4) = arg0;
    *(s32 *)((u8 *)(&D_00479040) + 8) = arg1;
    *(s32 **)((u8 *)(&D_00479040) + 0x1C) = &D_004794C0;
    if (arg2 != 0) {
        *(s32 *)((u8 *)(&D_00479040) + 0x14) = 1;
    } else {
        *(s32 *)((u8 *)(&D_00479040) + 0x14) = 0;
    }
    if (arg3 != 0) {
        *(s32 *)((u8 *)(&D_00479040) + 0x10) = 1;
    } else {
        *(s32 *)((u8 *)(&D_00479040) + 0x10) = 0;
    }
    if (temp_s5 != 0) {
        *(s32 *)((u8 *)(&D_00479040) + 0xC) = 1;
    } else {
        *(s32 *)((u8 *)(&D_00479040) + 0xC) = 0;
    }
    D_00478FE8 = arg2;
    D_00478FEC = arg3;
    D_00478FF0 = temp_s5;
    sceSifWriteBackDCache(&D_004794C0, 0xC0, &D_00478FF0);
    if (sceSifCallRpc(&D_00478FC0, 1, 1, &D_00479040, &D_004794C0) != 0) {
        SignalSema(D_003EF94C);
        return -0x5B;
    }
    D_003EF948 = 1;
    return 0;
}

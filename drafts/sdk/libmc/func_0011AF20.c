/* Draft (not built): func_0011AF20 at 0x0011AF20, size 0xBC, segment sdk/libmc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmc/func_0011AF20.s */

s32 PollSema(s32);                                  /* extern */
s32 SignalSema(s32);                            /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_003EF948;
extern s32 D_003EF94C;
extern s32 D_00478FC0;
extern s32 D_00479040;

s32 func_0011AF20(s32 arg0) {
    if (*(s32 *)((u8 *)(&D_00478FC0) + 0x24) == 0) {
        return -0x64;
    }
    if (PollSema(D_003EF94C) < 0) {
        return -0xC8;
    }
    D_00479040 = arg0;
    if (sceSifCallRpc(&D_00478FC0, 0xA, 1, &D_00479040, 0) != 0) {
        SignalSema(D_003EF94C);
        return -0x5B;
    }
    D_003EF948 = 0xA;
    return 0;
}

/* Draft (not built): func_0011A000 at 0x0011A000, size 0xC0, segment sdk/libmc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmc/func_0011A000.s */

s32 PollSema(s32);                                  /* extern */
s32 SignalSema(s32);                            /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_003EF94C;
extern s32 D_00478FC0;
extern s32 D_00479040;
extern s32 D_0047A580;

s32 func_0011A000(s32 arg0) {
    if (*(s32 *)((u8 *)(&D_00478FC0) + 0x24) == 0) {
        return -0x64;
    }
    if (PollSema(D_003EF94C) < 0) {
        return -0xC8;
    }
    *(s32 *)((u8 *)(&D_00479040) + 4) = arg0;
    if (sceSifCallRpc(&D_00478FC0, 0x15, 0, &D_00479040, 0) != 0) {
        SignalSema(D_003EF94C);
        return -0x5B;
    }
    SignalSema(D_003EF94C);
    return D_0047A580;
}

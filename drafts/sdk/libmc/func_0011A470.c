/* Draft (not built): func_0011A470 at 0x0011A470, size 0x114, segment sdk/libmc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 24 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmc/func_0011A470.s */

s32 PollSema(s32);                                  /* extern */
s32 SignalSema(s32);                            /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32 *); /* extern */
s32 sceSifWriteBackDCache(s32 *, s32);      /* extern */
extern s32 D_003EF948;
extern s32 D_003EF94C;
extern s32 D_00478FC0;
extern s32 D_00479040;
extern s32 D_004794C0;

s32 func_0011A470(s32 arg0, s32 *arg1, s32 arg2) {
    if (*(s32 *)((u8 *)(&D_00478FC0) + 0x24) == 0) {
        return -0x64;
    }
    if (PollSema(D_003EF94C) < 0) {
        return -0xC8;
    }
    *(s32 *)((u8 *)(&D_00479040) + 0) = arg0;
    *(s32 **)((u8 *)(&D_00479040) + 0x18) = arg1;
    *(s32 *)((u8 *)(&D_00479040) + 0xC) = arg2;
    *(s32 **)((u8 *)(&D_00479040) + 0x1C) = &D_004794C0;
    sceSifWriteBackDCache(arg1, arg2);
    sceSifWriteBackDCache(&D_004794C0, 0xC0);
    if (sceSifCallRpc(&D_00478FC0, 5, 1, &D_00479040, &D_004794C0) != 0) {
        SignalSema(D_003EF94C);
        return -0x5B;
    }
    D_003EF948 = 5;
    return 0;
}

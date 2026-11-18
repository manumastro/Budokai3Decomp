/* Draft (not built): func_0011A588 at 0x0011A588, size 0x178, segment sdk/libmc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_0011A588.c:39: warning: assignment from incompatible pointer type
 * Original: asm/nonmatchings/sdk/libmc/func_0011A588.s */

s32 FlushCache(s32);                        /* extern */
s32 PollSema(s32);                                  /* extern */
s32 SignalSema(s32);                            /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_003EF948;
extern s32 D_003EF94C;
extern s32 D_00478FC0;
extern s32 D_00479040;

s32 func_0011A588(s32 arg0, u8 *arg1, s32 arg2) {
    s32 temp_v0;
    u32 var_a2;
    u8 *var_v0;
    u8 *temp_v1;

    if (*(s32 *)((u8 *)(&D_00478FC0) + 0x24) == 0) {
        return -0x64;
    }
    if (PollSema(D_003EF94C) < 0) {
        return -0xC8;
    }
    *(s32 *)((u8 *)(&D_00479040) + 0) = arg0;
    if (arg2 < 0x11) {
        *(s32 *)((u8 *)(&D_00479040) + 0x14) = arg2;
        *(s32 *)((u8 *)(&D_00479040) + 0x18) = 0;
        *(s32 *)((u8 *)(&D_00479040) + 0xC) = 0;
    } else {
        temp_v0 = ((arg1 - 1) & 0xFFFFFFF0) - (arg1 - 0x10);
        *(s32 *)((u8 *)(&D_00479040) + 0x18) = (s32) (arg1 + temp_v0);
        *(s32 *)((u8 *)(&D_00479040) + 0xC) = (s32) (arg2 - temp_v0);
        *(s32 *)((u8 *)(&D_00479040) + 0x14) = temp_v0;
    }
    var_a2 = 0;
    if (*(s32 *)((u8 *)(&D_00479040) + 0x14) != 0) {
        var_v0 = arg1;
        do {
            temp_v1 = &D_00479040 + var_a2;
            var_a2 += 1;
            *(u8 *)((u8 *)temp_v1 + 0x20) = (u8) *var_v0;
            var_v0 = arg1 + var_a2;
        } while (var_a2 < (u32) *(s32 *)((u8 *)(&D_00479040) + 0x14));
    }
    FlushCache(0);
    if (sceSifCallRpc(&D_00478FC0, 6, 1, &D_00479040, 0) != 0) {
        SignalSema(D_003EF94C);
        return -0x5B;
    }
    D_003EF948 = 6;
    return 0;
}

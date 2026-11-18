/* Draft (not built): func_00117C10 at 0x00117C10, size 0xB0, segment sdk/libsdr (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libsdr/func_00117C10.s */

s32 FlushCache(s32);                        /* extern */
s32 scePrintf(s32 *);                       /* extern */
s32 sceSifBindRpc(s32 *, s32, s32);     /* extern */
s32 sceSifInitRpc(s32);                     /* extern */
extern s32 D_003EDD40;
extern s32 D_003EDD44;
extern s32 D_0045DB50;
extern s32 D_00478CC0;

s32 func_00117C10(void) {
    s32 var_v0;

    sceSifInitRpc(0);
loop_1:
    var_v0 = 0x2710;
    if (sceSifBindRpc(&D_00478CC0, 0x80000701, 0) < 0) {
        scePrintf(&D_0045DB50);
        return -1;
    }
    do {
        var_v0 -= 1;
    } while (var_v0 != -1);
    if (*(s32 *)((u8 *)(&D_00478CC0) + 0x24) != 0) {
        D_003EDD40 = 0;
        D_003EDD44 = 0;
        FlushCache(0);
        return 0;
    }
    goto loop_1;
}

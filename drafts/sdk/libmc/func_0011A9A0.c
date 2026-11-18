/* Draft (not built): func_0011A9A0 at 0x0011A9A0, size 0x70, segment sdk/libmc (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmc/func_0011A9A0.s */

s32 scePrintf(s32 *);                       /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_0045DE98;
extern s32 D_00478FC0;
extern s32 D_00479040;
extern s32 D_0047A580;

s32 func_0011A9A0(void) {
    if (sceSifCallRpc(&D_00478FC0, 0x35, 0, &D_00479040, 0) != 0) {
        scePrintf(&D_0045DE98);
        return -0x5B;
    }
    return D_0047A580;
}

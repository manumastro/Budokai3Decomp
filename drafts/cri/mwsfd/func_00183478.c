/* Draft (not built): func_00183478 at 0x00183478, size 0x64, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00183478.s */

s32 func_00101D58(void *, s32, s32);            /* extern */
void *sceDmaGetChan(s32);                       /* extern */

s32 func_00183478(s32 arg0, s32 arg1, s32 arg2) {
    u8 *temp_v0;

    temp_v0 = sceDmaGetChan(9);
    *(s32 *)((u8 *)temp_v0 + 0x80) = arg2;
    func_00101D58(temp_v0, arg0, (s32) ((arg1 < 0) ? (arg1 + 0xF) : arg1) >> 4);
    return 0;
}

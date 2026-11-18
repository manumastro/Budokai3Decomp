/* Draft (not built): scePadSetButtonInfo at 0x001176A8, size 0xB0, segment sdk/libpad/kfiv_libpad (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libpad/kfiv_libpad/scePadSetButtonInfo.s */

s32 func_00116EF0(s32, s32, s32);           /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_00478940;
extern s32 D_00478B80;

s32 func_001176A8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;

    *(s32 *)((u8 *)(&D_00478B80) + 0xC) = arg2;
    *(s32 *)((u8 *)(&D_00478B80) + 0) = 0xA;
    *(s32 *)((u8 *)(&D_00478B80) + 4) = arg0;
    *(s32 *)((u8 *)(&D_00478B80) + 8) = arg1;
    if (sceSifCallRpc(&D_00478940, 1, 0, &D_00478B80, 0) >= 0) {
        temp_v0 = *(s32 *)((u8 *)(&D_00478B80) + 0x10);
        if (*(s32 *)((u8 *)(&D_00478B80) + 0x10) == 1) {
            func_00116EF0(arg0, arg1, 2);
        }
        return temp_v0;
    }
    return 0;
}

/* Draft (not built): scePadInit2 at 0x001166D8, size 0xF4, segment sdk/libpad/kfiv_libpad (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libpad/kfiv_libpad/scePadInit2.s */

s32 DI();                                           /* extern */
s32 EI();                                       /* extern */
s32 func_0010D3A8(s32, s32 *, s32); /* extern */
s32 sceSifCallRpc(s32 *, s32, s32, s32 *, s32); /* extern */
extern s32 D_003EDD08;
extern s32 D_003EDD0C;
extern s32 D_00478940;
extern s32 D_00478990;
extern s32 D_00478B80;
extern s32 func_00116690;

s32 func_001166D8(void) {
    s32 temp_s0;
    s32 var_v1;
    u8 *var_v0;

    var_v0 = &D_00478990 + 0x84;
    var_v1 = 3;
loop_1:
    *(s32 *)((u8 *)var_v0 + -0x74) = 0;
    var_v1 -= 1;
    *(s32 *)((u8 *)var_v0 + -0x6C) = 0;
    *(s32 *)((u8 *)var_v0 + -0x70) = 0;
    *(s32 *)((u8 *)var_v0 + -4) = 0;
    *(s32 *)((u8 *)var_v0 + 4) = 0;
    *(s32 *)((u8 *)var_v0 + 0) = 0;
    var_v0 += 0x1C;
    if (var_v1 >= 0) {
        goto loop_1;
    }
    *(s32 *)((u8 *)(&D_00478B80) + 0x10) = 0;
    *(s32 *)((u8 *)(&D_00478B80) + 0) = 0x10;
    *(s32 *)((u8 *)(&D_00478B80) + 0x14) = (s32) D_003EDD0C;
    if (sceSifCallRpc(&D_00478940, 1, 0, &D_00478B80, 0) >= 0) {
        goto block_4;
    }
    return 0;
block_4:
    D_003EDD08 = 0;
    temp_s0 = DI();
    func_0010D3A8(0x80000019, &func_00116690, 0);
    if (temp_s0 != 1) {
        goto block_6;
    }
    EI();
block_6:
    return *(s32 *)((u8 *)(&D_00478B80) + 0xC);
}

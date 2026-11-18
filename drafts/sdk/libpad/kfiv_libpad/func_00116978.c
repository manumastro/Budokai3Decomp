/* Draft (not built): func_00116978 at 0x00116978, size 0x1E4, segment sdk/libpad/kfiv_libpad (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 36 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/nonmatchings/sdk/libpad/kfiv_libpad/func_00116978.s */

s32 memset();
s32 scePrintf();
s32 sceSifCallRpc();
extern s32 D_003EDD04;
extern s32 D_0045DA90;
extern s32 D_0045DAC0;
extern s32 D_00478940;
extern s32 D_00478990;
extern s32 D_00478A80;
extern s32 D_00478B80;

s32 func_00116978(s32 arg0, s32 arg1, s32 arg2) {
    s32 *temp_a2;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    u8 *temp_v0;

    if (arg2 & 0x3F) {
        if (D_003EDD04 != 0) {
            scePrintf(&D_0045DA90, arg2);
            return 0;
        }
        goto block_9;
    }
    var_s0 = arg2;
    if (*(s32 *)((u8 *)(&D_00478990 + ((arg1 * 0x1C) + (arg0 * 0x70))) + 0x10) == 1) {
        if (D_003EDD04 != 0) {
            scePrintf(&D_0045DAC0, arg0, arg1);
            return 0;
        }
        goto block_9;
    }
    var_s1 = 1;
    do {
        *(s32 *)((u8 *)var_s0 + 0x58) = 0;
        *(s8 *)((u8 *)var_s0 + 0x70) = 5;
        *(s8 *)((u8 *)var_s0 + 0x71) = 2;
        *(s8 *)((u8 *)var_s0 + 0x67) = 0;
        var_s1 -= 1;
        memset((u8 *) var_s0, 0xFF, 0x20);
        *(s32 *)((u8 *)var_s0 + 0x60) = 0;
        var_s0 += 0x80;
    } while (var_s1 >= 0);
    *(s32 *)((u8 *)(&D_00478B80) + 0) = 1;
    *(s32 *)((u8 *)(&D_00478B80) + 4) = arg0;
    *(s32 *)((u8 *)(&D_00478B80) + 8) = arg1;
    *(s32 *)((u8 *)(&D_00478B80) + 0x10) = arg2;
    if (sceSifCallRpc(&D_00478940, 1, 0, &D_00478B80, 0) < 0) {
block_9:
        return 0;
    }
    temp_v1 = (arg1 * 0x1C) + (arg0 * 0x70);
    temp_a2 = (arg0 << 7) + ((arg1 << 5) + &D_00478A80);
    temp_v0 = &D_00478990 + temp_v1;
    *(s32 *)((u8 *)temp_v0 + 0x10) = 1;
    *temp_a2 = 0;
    *(s32 *)((u8 *)temp_v0 + 0xC) = 0;
    *(s32 *)((u8 *)temp_v0 + 8) = (s32) *(s32 *)((u8 *)(&D_00478B80) + 0x14);
    *(temp_v1 + &D_00478990) = arg2;
    *(s32 **)((u8 *)temp_v0 + 4) = temp_a2;
    return *(s32 *)((u8 *)(&D_00478B80) + 0xC);
}

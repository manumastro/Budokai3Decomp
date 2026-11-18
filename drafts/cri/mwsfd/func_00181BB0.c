/* Draft (not built): func_00181BB0 at 0x00181BB0, size 0x80, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00181BB0.s */

s32 func_00184EA8(void *, s32, void *, s32); /* extern */

void func_00181BB0(u8 *arg0) {
    s32 temp_v0;
    s32 var_a3;
    s32 var_t0;
    u8 *var_a1;

    *(s32 *)((u8 *)arg0 + 0xB8) = 0;
    *(s32 *)((u8 *)arg0 + 0xBC) = 0;
    *(s32 *)((u8 *)arg0 + 0xC0) = 0;
    var_a1 = arg0 + 0xD4;
    var_t0 = 0;
    var_a3 = 7;
    do {
        temp_v0 = var_t0 + 0xC0;
        var_t0 += 0x14;
        var_a3 -= 1;
        *(s32 *)((u8 *)var_a1 + -0x10) = 0;
        *(arg0 + 8 + temp_v0) = 0;
        *(arg0 + 0xC + temp_v0) = 0;
        *(arg0 + 0x10 + temp_v0) = 0;
        *(s32 *)((u8 *)var_a1 + 0) = 0x11;
        var_a1 += 0x14;
    } while (var_a3 >= 0);
    func_00184EA8(arg0, 0, arg0, var_a3);
}

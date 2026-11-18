/* Draft (not built): func_00104978 at 0x00104978, size 0xBC, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 56 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libmpeg.s */

s32 func_00109738(s32 *);                   /* extern */
extern s32 D_0045CED8;

s32 func_00104978(u8 *arg0, u8 *arg1, s32 *arg2, u8 *arg3) {
    s32 *temp_s0;
    s32 temp_v0;
    s32 var_t1;

    var_t1 = 1;
    temp_s0 = M2C_ERROR(/* Read from unset register $t0 */);
    *(s32 *)((u8 *)((*(s32 *)((u8 *)arg0 + 0x820) * 0x140) + arg0) + 0x6DC) = 1;
    *(s32 *)((u8 *)arg0 + 0x1C0) = 1;
    if (*(s32 *)((u8 *)arg0 + 0x160) == 2) {
        *(s32 *)((u8 *)arg1 + 0) = 0;
        *(s32 *)((u8 *)arg1 + 0x14) = 0;
        *(s32 *)((u8 *)arg1 + 0x10) = 0;
        *(s32 *)((u8 *)arg1 + 4) = 0;
    }
    if (*(s32 *)((u8 *)arg0 + 0x184) != 3) {
        *arg2 = 1;
        temp_v0 = *(s32 *)((u8 *)arg0 + 0x184) == 2;
        *(s32 *)((u8 *)arg3 + 0) = temp_v0;
        *(s32 *)((u8 *)arg3 + 4) = temp_v0;
    } else {
        *arg2 = 2;
    }
    if (*(s32 *)((u8 *)arg0 + 0x160) == 1) {
        func_00109738(&D_0045CED8);
        var_t1 = 0;
    }
    *temp_s0 &= ~1;
    return var_t1;
}

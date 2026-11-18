/* Draft (not built): func_00113BF0 at 0x00113BF0, size 0xC4, segment sdk/libkernl_00113B88 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0
 * Original: asm/nonmatchings/sdk/libkernl_00113B88/func_00113BF0.s */

s32 FlushCache(s32);                        /* extern */
s32 func_00113B88(s32, s32 *, s32); /* extern */
s32 func_00113BD0(s32);                             /* extern */
s32 func_00113BE0(s32, s32);                    /* extern */
extern s32 D_003EC6E8;
extern s32 D_003ECA60;
extern s32 D_003ECA68;

void func_00113BF0(void) {
    s32 *var_s1;
    s32 temp_a0;
    s32 var_a0;
    u32 var_s2;

    var_s2 = 3;
    var_s1 = &D_003ECA68 + 0x18;
    func_00113BE0(*(s32 *)((u8 *)(&D_003ECA68) + 0), *(s32 *)((u8 *)(&D_003ECA68) + 4));
    func_00113B88(0x80075000, &D_003EC6E8, 0x330);
    FlushCache(0);
    FlushCache(2);
    func_00113BE0(*(s32 *)((u8 *)(&D_003ECA68) + 8), *(s32 *)((u8 *)(&D_003ECA68) + 0xC));
    func_00113BE0(*(s32 *)((u8 *)(&D_003ECA68) + 0x10), *(s32 *)((u8 *)(&D_003ECA68) + 0x14));
    var_a0 = *(s32 *)((u8 *)(&D_003ECA68) + 0x18);
loop_1:
    var_s2 += 1;
    temp_a0 = *var_s1;
    var_s1 += 8;
    func_00113BE0(temp_a0, func_00113BD0(var_a0));
    if (var_s2 < 8U) {
        var_a0 = *var_s1;
        goto loop_1;
    }
    D_003ECA60 = func_00113BD0(3);
}

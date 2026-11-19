/* Draft (not built): func_001F9CD0 at 0x001F9CD0, size 0x11C, segment battle/btb_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 27 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btb_main/func_001F9CD0.s */

// src/battle/btb_main.c func_001F9CD0 diff diff=27/71
void func_001F9CD0(s32 arg0, s32 arg1, u8 *arg2, s32 arg3) {
    u8 sp[0x400];
    s32 saved_reg_s4;
    s32 sp70;
    s32 (*temp_v1)(s32, u8 *, s32, s32);
    s32 temp_v0;
    s32 var_s0;
    s32 var_s4;

    var_s4 = saved_reg_s4;
    var_s0 = M2C_ERROR(/* Read from unset register $t0 */);
    if (var_s0 == 0) {
        var_s0 |= func_001FFBA0(*(f32 *)((u8 *)arg2 + 0), *(f32 *)((u8 *)arg2 + 8));
    }
    if (arg1 < 0xE) {
        *(s128 *)((u8 *)(&sp70) + 0) = (s128) *(s128 *)((u8 *)(&D_0044B750) + 0);
        *(s128 *)((u8 *)(&sp70) + 0x10) = (s128) *(s128 *)((u8 *)(&D_0044B750) + 0x10);
        *(s128 *)((u8 *)(&sp70) + 0x20) = (s128) *(s128 *)((u8 *)(&D_0044B750) + 0x20);
        *(s64 *)((u8 *)(&sp70) + 0x30) = (s64) *(s64 *)((u8 *)(&D_0044B750) + 0x30);
        temp_v1 = *(s32 (**)(s32, u8 *, s32, s32))((u8 *)((arg1 * 4) + sp) + 0x70);
        if (temp_v1 != NULL) {
            temp_v1(arg0, arg2, arg3, var_s0);
        }
    } else {
        temp_v0 = (int)(func_001A50F0((void *)(*D_0051CD0C), (s32)(arg1)));
        if (temp_v0 != 0) {
            var_s4 = (int)((void *)func_00209540((void *)(temp_v0), 0x02000001, 0));
        }
        if (var_s4 != 0) {
            func_00209B50((void *)(var_s4), (void *)(arg2), 0);
        }
    }
}

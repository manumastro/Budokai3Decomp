/* Draft (not built): func_001C61A0 at 0x001C61A0, size 0x1A4, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); rsion from 'float' to 'float *' @ 5480: 0 = (f32 *)((1.0f - *(f32 *)((u8 *)temp_s6 + 0x8930)) * func_001B04D0(temp_s4));
 * Original: asm/nonmatchings/battle/btl_main/func_001C61A0.s */

// src/battle/btl_main.c func_001C61A0 cerr diff=-1/0
void func_001C61A0(void) {
    f32 temp_f0;
    s32 var_s3;
    s32 var_s7;
    u8 *temp_s2;
    u8 *temp_s4;
    u8 *temp_s6;
    u8 *var_s1;
    u8 *var_s5;

    temp_s6 = (u8 *)(gBattle);
    var_s5 = temp_s6 + 0x830;
    if ((*(s8 *)((u8 *)temp_s6 + 0x8975) != 1) && (*(f32 *)((u8 *)temp_s6 + 0x8930) < 1.0f)) {
        if (*(s32 *)((u8 *)temp_s6 + 0x88D8) < 3) {
            func_0029D6C0(BtbBg_GetStageModelF10());
            func_001FB750(temp_s6, temp_s6 + 0x60);
            var_s7 = 0;
            if (*(s32 *)((u8 *)temp_s6 + 0x88D8) > 0) {
                do {
                    func_0013B0B0(var_s5);
                    var_s3 = 0;
                    var_s1 = var_s5;
loop_5:
                    temp_s4 = var_s1 + 0x650;
                    if ((*(s8 *)((u8 *)var_s1 + 0xCBC) == 0) && (*(s8 *)((u8 *)temp_s4 + 0x66D) == 0) && (*(s8 *)((u8 *)temp_s4 + 0x66E) == 0)) {
                        temp_s2 = func_001FB7E0(*(u8 **)((u8 *)temp_s4 + 0x530));
                        temp_f0 = (f32 *)((1.0f - *(f32 *)((u8 *)temp_s6 + 0x8930)) * func_001B04D0(temp_s4));
                        *(f32 *)((u8 *)temp_s2 + 0xEC) = temp_f0;
                        if (!(temp_f0 <= 0.0f)) {
                            func_001FB760(temp_s2, func_001F9DF0);
                        }
                    }
                    var_s3 += 1;
                    var_s1 += 0x680;
                    if (var_s3 < 2) {
                        goto loop_5;
                    }
                    func_0013B110(1);
                    var_s7 += 1;
                    var_s5 += 0x2020;
                } while (var_s7 < *(s32 *)((u8 *)temp_s6 + 0x88D8));
            }
        }
        func_0012F2C0();
    }
}

/* Draft (not built): func_001D18C0 at 0x001D18C0, size 0x2B8, segment battle/char_acsr (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept);  4) - arg0) + 0x70000000); @ 320: *(s32 *)((u8 *)var_a0 + 0) = (s32) ((*(s32 *)((u8 *)var_a0 + 0) - arg0) + 0x70000000);
 * Original: asm/nonmatchings/battle/char_acsr/func_001D18C0.s */

// src/battle/char_acsr.c func_001D18C0 cerr diff=-1/0
s32 amDma_SendFromSpr(void *, s32, s32, s32);
s32 amDma_SendToSpr(s32, void *, s32, s32);
s32 func_0010AB58(void *);
s32 func_0010AC98(void *, void *);
f32 func_00146EB0(s32 *);
s32 func_00146F10(s32 *, s32 *, f32);
extern void *D_0047058C;
void func_001D18C0(u8 *arg0) {
    u8 *spAC;
    s32 spB0;
    s32 spC0;
    s16 var_s1;
    s16 var_s6;
    s16 var_v1_2;
    s16 var_v1_3;
    s32 temp_s5;
    u8 *temp_s1;
    u8 *temp_s7;
    u8 *var_a0;
    u8 *var_a0_2;
    u8 *var_a0_3;
    u8 *var_s0;
    u8 *var_v1;
    u8 *var_v1_4;

    if (arg0 != NULL) {
        temp_s5 = *(s32 *)((u8 *)arg0 + 0x58);
        spAC = arg0;
        temp_s7 = (arg0 + temp_s5) - 1;
        func_0010AB58(temp_s7);
        amDma_SendToSpr(0, arg0, temp_s5 >> 4, 1);
        var_v1 = *(u8 **)0x7000005C;
        *(u8 **)0x70000050 = (u8 *)((*(u8 **)0x70000050 - arg0) + 0x70000000);
        *(u8 **)0x70000054 = (u8 *)((*(u8 **)0x70000054 - arg0) + 0x70000000);
        *(u8 **)0x7000007C = (u8 *)((*(u8 **)0x7000007C - arg0) + 0x70000000);
        var_a0 = *(u8 **)0x70000050;
        do {
            var_v1 -= 1;
            *(s32 *)((u8 *)var_a0 + 0) = (s32) ((*(s32 *)((u8 *)var_a0 + 0) - arg0) + 0x70000000);
            *(s32 *)((u8 *)var_a0 + 4) = (s32) ((*(s32 *)((u8 *)var_a0 + 4) - arg0) + 0x70000000);
            var_a0 += 0x10;
        } while (var_v1 != NULL);
        D_0047058C = (u8 *)0x70000000;
        var_s6 = (s16)(*(u8 **)0x70000068);
        do {
            temp_s1 = D_0047058C;
            func_00146F10(&spC0, temp_s1 + 0x10, 60.0f * *(f32 *)((u8 *)temp_s1 + 0x44));
            if (func_00146EB0(&spC0) != 0.0f) {
                var_s0 = *(u8 **)((u8 *)temp_s1 + 0x54);
                var_s1 = *(s16 *)((u8 *)temp_s1 + 0x6A);
                do {
                    if (!(*(s32 *)((u8 *)var_s0 + 0x70) & 1)) {
                        func_00146F10(&spB0, &spC0, *(f32 *)((u8 *)var_s0 + 0x68));
                        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
                        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
                        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
                    }
                    var_s1 -= 1;
                    var_s0 += 0x80;
                } while (var_s1 != 0);
            }
            var_a0_2 = *(u8 **)((u8 *)D_0047058C + 0x54);
            var_v1_2 = *(s16 *)((u8 *)D_0047058C + 0x6A);
loop_11:
            if (!(*(s32 *)((u8 *)var_a0_2 + 0x70) & 1)) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
                M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($a1) */);
                M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            }
            var_v1_2 -= 1;
            var_a0_2 += 0x80;
            if (var_v1_2 != 0) {
                goto loop_11;
            }
            func_001D14A0(var_a0_2, D_0047058C);
            func_001D13A0();
            func_001D12A0();
            var_s6 -= 1;
        } while (var_s6 != 0);
        func_001D1090();
        var_v1_3 = (s16)(*(u8 **)0x7000006A);
        do {
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($a0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
            var_v1_3 -= 1;
        } while (var_v1_3 != 0);
        var_a0_3 = *(u8 **)0x70000050;
        var_v1_4 = *(u8 **)0x7000005C;
        *(u8 **)0x70000050 = arg0 + (var_a0_3 - 0x70000000);
        *(u8 **)0x70000054 = arg0 + (*(u8 **)0x70000054 - 0x70000000);
        *(u8 **)0x7000007C = arg0 + (*(u8 **)0x7000007C - 0x70000000);
        do {
            var_v1_4 -= 1;
            *(u8 **)((u8 *)var_a0_3 + 0) = (u8 *) (arg0 + (*(u8 **)((u8 *)var_a0_3 + 0) - 0x70000000));
            *(u8 **)((u8 *)var_a0_3 + 4) = (u8 *) (arg0 + (*(u8 **)((u8 *)var_a0_3 + 4) - 0x70000000));
            var_a0_3 += 0x10;
        } while (var_v1_4 != NULL);
        func_0010AC98(spAC, temp_s7);
        amDma_SendFromSpr(arg0, 0x70000000, temp_s5 >> 4, 1);
    }
}

/* Draft (not built): func_002D9CD0 at 0x002D9CD0, size 0x104, segment unk/unk_2D9510 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal explicit conversion from 'unsigned char *' to 'float' @ 254: func_0022C060((f32)(temp_s1), 0x3F800000);
 * Original: asm/nonmatchings/unk/unk_2D9510/func_002D9CD0.s */

// src/unk/unk_2D9510.c func_002D9CD0 cerr diff=-1/0
s32 func_002D7450();
void func_002D9CD0(void) {
    f32 temp_f1;
    f32 var_f2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s1;

    if (D_004703F4 != 3) {
        var_f2 = 1.0f;
    } else {
        var_f2 = 1.2f;
    }
    temp_f1 = *(f32 *)((u8 *)gOptionWork + 0x390) + var_f2;
    *(f32 *)((u8 *)gOptionWork + 0x390) = temp_f1;
    if (!(temp_f1 < 60.0f)) {
        temp_s1 = *(u8 **)((u8 *)gOptionWork + 0x34);
        temp_s0 = (u8 *)(gOptionWork);
        func_00228430(0);
        func_00228430(0);
        temp_a0 = *(u8 **)((u8 *)temp_s0 + 0xC);
        D_00470704 = (s32)(temp_a0);
        D_00470708 = 0;
        D_0047070C = 0;
        amModel_SetCurrent((s32)(temp_a0), 0);
        D_00470238 = 0;
        func_0022C060((f32)(temp_s1), 0x3F800000);
        func_00228410();
        func_0022CD00((s32)((void *)(temp_s1)));
        func_00228410();
        func_002D7450();
    }
}

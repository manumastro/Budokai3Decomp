/* Draft (not built): func_001B2CD0 at 0x001B2CD0, size 0x218, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 86 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/btl_main/func_001B2CD0.s */

// src/battle/btl_main.c func_001B2CD0 diff diff=86/134
s32 func_001D9AB0(void *, s32);
s32 func_001E3010(void *);
s32 func_001E3100(void *);
s32 func_001E9190(void *);
s32 func_001E91D0();
void func_001B2CD0(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 var_s2;
    s32 var_v0;
    u8 *temp_s0;

    temp_f2 = *(f32 *)((u8 *)arg0 + 0x1848);
    temp_s0 = arg0 + 0x1360;
    if (!(temp_f2 < 0.0f)) {
        if (*(s16 *)((u8 *)temp_s0 + 0x44) >= 0) {
            var_v0 = 0;
            if (!(((f32) *(s32 *)((u8 *)temp_s0 + 0x54) * *(f32 *)((u8 *)gBattle + 0x88F0)) < temp_f2)) {
                var_v0 = 1;
            }
            if (var_v0 == 0) {
                func_001E3100(arg0);
            }
        } else if (func_001E91D0() == 0) {
            func_001E3100(arg0);
        }
    }
    temp_f2_2 = *(f32 *)((u8 *)arg0 + 0x1848);
    if (!(temp_f2_2 < 0.0f)) {
        temp_f1 = *(f32 *)((u8 *)arg0 + 0xCB8) - temp_f2_2;
        *(f32 *)((u8 *)arg0 + 0x1850) = temp_f1;
        if (!(temp_f1 < 50.0f)) {
            func_001E3010(arg0);
        } else {
            var_s2 = 0;
            if (*(s16 *)((u8 *)temp_s0 + 0x44) >= 0) {
                if (*(s32 *)((u8 *)temp_s0 + 0x50) == 1) {
                    var_s2 = 1;
                }
            } else if (func_001E9190(arg0) != 0) {
                var_s2 = 1;
            }
            if (var_s2 != 0) {
                func_001E3100(arg0);
                *(s8 *)((u8 *)arg0 + 0x2002) = 1;
                *(s32 *)((u8 *)arg0 + 0x1864) = 1;
                func_001E5040(arg0);
                *(s8 *)((u8 *)arg0 + 0x2004) = 1;
                *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
                *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
                *(s8 *)((u8 *)arg0 + 0x2006) = 0;
                D_00468460[0](arg0);
                func_002CBFF0(1, arg0);
                *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3F400000;
                *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3CF5C28F;
                *(s8 *)((u8 *)arg0 + 0x2002) = 0;
                func_001ABD30((void *)(arg0 + 0x1360));
                func_001D9AB0(arg0, -3);
            }
            *(s32 *)((u8 *)arg0 + 0x184C) = 0x3DCCCCCD;
        }
    }
    Fighter_ResetMotion(arg0, 0);
    if (*(s32 *)((u8 *)arg0 + 0xC64) != 0) {
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_0046851C(arg0);
        func_002CBFF0(1, arg0);
        func_001ABD30((void *)(temp_s0));
    }
}

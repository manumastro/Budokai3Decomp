/* Draft (not built): func_001BE6C0 at 0x001BE6C0, size 0x204, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 4147: *(&D_00468460 + (var_s0 * 4))(arg0);
 * Original: asm/nonmatchings/battle/btl_main/func_001BE6C0.s */

// src/battle/btl_main.c func_001BE6C0 cerr diff=-1/0
void func_001BE6C0(u8 *arg0) {
    f32 var_f1;
    s16 temp_a0;
    s32 var_s0;

    var_s0 = -1;
    Fighter_ResetMotion(0, 0);
    if ((*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) && (((*(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)arg0 + 0x1844)) <= 0.0f)) {
        *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
        *(s32 *)((u8 *)arg0 + 0xB70) = 0x10;
        func_001E3460(arg0);
        *(s32 *)((u8 *)arg0 + 0x1864) = 8;
        func_001E5040(arg0);
        *(s32 *)((u8 *)arg0 + 0xCA4) = 0;
        *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3D75C28F;
    }
    temp_a0 = *(s16 *)((u8 *)arg0 + 0xCB4);
    if ((temp_a0 == 0) && (*(s32 *)((u8 *)arg0 + 0xC64) != 0)) {
        *(s32 *)((u8 *)arg0 + 0xB70) = 0x10;
        if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
            *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 0x100);
        }
        func_001E3460(arg0);
        *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
    } else if (temp_a0 != 0) {
        func_001DFE60(arg0, 0, -15.0f * *(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)arg0 + 0xC9C));
        if (!(*(f32 *)((u8 *)arg0 + 0x1A40) <= 0.0f)) {
            var_f1 = *(f32 *)((u8 *)arg0 + 0x17D4);
        } else {
            var_f1 = *(f32 *)((u8 *)arg0 + 0x17D0);
        }
        var_s0 = 0xE;
        if (!(var_f1 < *(f32 *)((u8 *)arg0 + 0x17D4))) {

        } else if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
            var_s0 = func_001C2B10(arg0);
        } else {
            var_s0 = func_001E94C0(arg0);
        }
    }
    if ((var_s0 >= 0) && (var_s0 != *(s16 *)((u8 *)arg0 + 0xCAC))) {
        *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        *(s32 *)((u8 *)arg0 + 0x1774) = 0;
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        if (var_s0 != 0xF) {
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        }
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        *(&D_00468460 + (var_s0 * 4))(arg0);
        func_002CBFF0(1, arg0);
        func_001ABD30((void *)(arg0 + 0x1360));
    }
}

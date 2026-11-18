/* Draft (not built): func_001BD020 at 0x001BD020, size 0x2D8, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); call of non-function @ 3879: *(&D_00468460 + (var_v0_2 * 4))(arg0);
 * Original: asm/nonmatchings/battle/btl_main/func_001BD020.s */

// src/battle/btl_main.c func_001BD020 cerr diff=-1/0
void func_001BD020(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f5;
    s32 var_v0;
    s32 var_v0_2;
    u8 *temp_v1;
    u8 *temp_v1_2;

    Fighter_ResetMotion(0, 0);
    if ((*(s16 *)((u8 *)arg0 + 0xCB4) == 0) && (*(s32 *)((u8 *)arg0 + 0xC64) != 0)) {
        *(s32 *)((u8 *)arg0 + 0xB70) = 0xA;
        if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
            *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 0x100);
        }
        *(s32 *)((u8 *)arg0 + 0xCA4) = 0x3DCCCCCD;
        *(s32 *)((u8 *)arg0 + 0xCA8) = 0x3E99999A;
        func_001E3460(arg0);
        *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
    }
    if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
        if (((*(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)arg0 + 0x1844)) <= 0.0f) {
            *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
            *(s32 *)((u8 *)arg0 + 0xB70) = 0xA;
            func_001E3460(arg0);
            *(s32 *)((u8 *)arg0 + 0x1864) = 8;
            func_001E5040(arg0);
            *(s32 *)((u8 *)arg0 + 0xCA4) = 0;
            var_v0 = 0x3CA3D70A;
            goto block_17;
        }
    } else {
        temp_v1 = *(u8 **)((u8 *)arg0 + 0x1354);
        if ((*(s8 *)((u8 *)temp_v1 + 0x1FF9) != 0) && !(((*(f32 *)((u8 *)temp_v1 + 0x44) - *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_v1 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)temp_v1 + 0x1844)) <= 0.0f) && (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43340000) == 0)) {
            temp_v1_2 = *(u8 **)((u8 *)arg0 + 0x1354);
            temp_f3 = *(f32 *)((u8 *)arg0 + 0x64) - *(f32 *)((u8 *)temp_v1_2 + 0x64);
            temp_f5 = *(f32 *)((u8 *)arg0 + 0x60) - *(f32 *)((u8 *)temp_v1_2 + 0x60);
            temp_f1 = *(f32 *)((u8 *)arg0 + 0x68) - *(f32 *)((u8 *)temp_v1_2 + 0x68);
            temp_f3_2 = temp_f3 * temp_f3;
            if (!(temp_f3_2 <= 4.0f) && ((((temp_f5 * temp_f5) + (temp_f1 * temp_f1)) / temp_f3_2) < 6.0f)) {
                *(s8 *)((u8 *)arg0 + 0x1FF9) = 1;
                *(s32 *)((u8 *)arg0 + 0xB70) = 0xA;
                if (*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) {
                    *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 0x100);
                }
                func_001E3460(arg0);
                *(s32 *)((u8 *)arg0 + 0x1864) = 4;
                func_001E5040(arg0);
                *(s32 *)((u8 *)arg0 + 0xCA4) = 0;
                var_v0 = 0x3C23D70A;
block_17:
                *(s32 *)((u8 *)arg0 + 0xCA8) = var_v0;
            }
        }
    }
    if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
        var_v0_2 = func_001C2B10(arg0);
    } else {
        var_v0_2 = func_001E94C0(arg0);
    }
    if ((var_v0_2 >= 0) && (var_v0_2 != *(s16 *)((u8 *)arg0 + 0xCAC))) {
        *(s32 *)((u8 *)arg0 + 0x1770) = 0;
        *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        if ((var_v0_2 == 7) || (var_v0_2 == 8)) {
            *(s8 *)((u8 *)arg0 + 0x2004) = 1;
            *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
            if (var_v0_2 != 0xF) {
                *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
            }
            *(s8 *)((u8 *)arg0 + 0x2006) = 0;
            *(&D_00468460 + (var_v0_2 * 4))(arg0);
            func_002CBFF0(1, arg0);
            return;
        }
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_00468488(arg0);
        func_002CBFF0(1, arg0);
    }
}

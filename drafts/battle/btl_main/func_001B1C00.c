/* Draft (not built): func_001B1C00 at 0x001B1C00, size 0x274, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 82 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x280, original 0x274
 * Original: asm/nonmatchings/battle/btl_main/func_001B1C00.s */

// src/battle/btl_main.c func_001B1C00 size diff=82/160
extern s32 func_001CAA30(s32 a);
s32 func_001D9AB0(void *, s32);
void func_001B1C00(u8 *arg0) {
    s16 temp_a0;
    s32 temp_a0_2;
    s32 temp_s1;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v0;
    s32 var_v1;
    u8 *temp_v1;
    u8 *temp_v1_2;

    Fighter_ResetMotion(arg0, 0);
    temp_a0 = *(s16 *)((u8 *)arg0 + 0xCB4);
    if (temp_a0 != 2) {
        var_a1 = 1;
        switch (temp_a0) {                          /* irregular */
        case 0:
            if (*(s32 *)((u8 *)arg0 + 0xC64) != 0) {
                *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 8);
                func_001E3460(arg0);
                *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
                return;
            }
            break;
        case 1:
            if (*(s32 *)((u8 *)arg0 + 0xC68) >= 3) {
                temp_s1 = *(s32 *)((u8 *)arg0 + 0xBA8);
                temp_a0_2 = *(s32 *)((u8 *)((temp_s1 * 4) + arg0) + 0x1DB8);
                if (temp_a0_2 == 0) {

                } else {
                    var_a1 = (func_001CAA30(temp_a0_2) == 0) ? 0 : 2;
                }
                if (var_a1 == 0) {
                    var_a1_2 = 0;
                } else {
                    temp_v1 = arg0 + (temp_s1 * 0x1C);
                    if ((*(s32 *)((u8 *)temp_v1 + 0x1DF8) == 0) && (temp_v1_2 = *(u8 **)((u8 *)(temp_v1 + 0x1DF8) + 0x14), (temp_v1_2 != NULL))) {
                        if (*(s16 *)((u8 *)temp_v1_2 + 4) == 3) {
                            var_v1 = 2;
                        } else {
                            var_v1 = 0;
                        }
                    } else {
                        var_v1 = 1;
                    }
                    if (var_v1 == 0) {
                        var_a1_2 = 0;
                    } else {
                        var_a1_2 = (var_v1 >= var_a1) ? var_v1 : var_a1;
                    }
                }
                if (var_a1_2 != 0) {
                    *(s32 *)((u8 *)arg0 + 0xB70) = (s32) (*(s32 *)((u8 *)arg0 + 0xB70) + 8);
                    func_001E3460(arg0);
                    *(s16 *)((u8 *)arg0 + 0xCB4) = 2;
                    return;
                }
            }
            break;
        }
    } else if (*(s32 *)((u8 *)arg0 + 0xC64) != 0) {
        *(s32 *)((u8 *)arg0 + 0x1864) = 1;
        if ((*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) && (((*(f32 *)((u8 *)arg0 + 0x44) - *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xBB4)) + 0xC)) - *(f32 *)((u8 *)arg0 + 0x1844)) <= 0.0f)) {
            *(s8 *)((u8 *)arg0 + 0x1FF9) = 0;
            *(s32 *)((u8 *)arg0 + 0x1864) = (s32) (*(s32 *)((u8 *)arg0 + 0x1864) | 8);
        }
        func_001E5040(arg0);
        if (*(s16 *)((u8 *)arg0 + 0x13A4) >= 0) {
            var_v0 = func_001C2B10(arg0);
        } else {
            var_v0 = func_001E94C0(arg0);
        }
        if (var_v0 == 0) {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 1;
        } else {
            *(s16 *)((u8 *)arg0 + 0xCB4) = 0;
        }
        *(s8 *)((u8 *)arg0 + 0x2004) = 1;
        *(s8 *)((u8 *)arg0 + 0x1FFB) = 1;
        if (var_v0 != 0xF) {
            *(s16 *)((u8 *)arg0 + 0xCB6) = 0;
        }
        *(s8 *)((u8 *)arg0 + 0x2006) = 0;
        D_00468460[var_v0](arg0);
        func_002CBFF0(1, arg0);
        func_001ABD30((struct Fighter *)(arg0 + 0x1360));
        func_001D9AB0(arg0, -2);
    }
}

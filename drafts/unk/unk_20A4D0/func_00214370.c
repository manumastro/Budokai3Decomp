/* Draft (not built): func_00214370 at 0x00214370, size 0x268, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); char *' mwccps2.exe Compiler: @ 3406: func_0020B020(temp_s0, *(s16 *)((u8 *)arg0 + 0x96), *(s16 *)((u8 *)arg0 + 0xA2)));
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00214370.s */

// src/unk/unk_20A4D0.c func_00214370 cerr diff=-1/0
extern void func_00211BD0(void);
void func_00214370(u8 *arg0) {
    s32 var_a1;
    s16 temp_a2;
    s16 temp_s4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0_2;
    s64 temp_a0;
    u8 *temp_s1;
    u8 *temp_v0;

    temp_v0 = func_00215320(*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350), *(s16 *)((u8 *)arg0 + 0x50));
    if (temp_v0 != NULL) {
        temp_s1 = temp_v0 + 0x20;
        *(s32 **)((u8 *)temp_v0 + 8) = &func_00211BD0;
        *(s32 **)((u8 *)temp_v0 + 0xC) = &func_00212650;
        *(f32 *)((u8 *)temp_v0 + 0x18) = (f32) *(f32 *)((u8 *)arg0 + 0x84);
        memset(temp_s1, 0, 0x50);
        temp_s4 = *(s16 *)((u8 *)arg0 + 0x50);
        temp_s0 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350);
        temp_v0_2 = (u8 *)(func_0020B020(temp_s0, *(s16 *)((u8 *)arg0 + 0x96), *(s16 *)((u8 *)arg0 + 0xA2)));
        if (temp_v0_2 != 0) {
            temp_a0 = (s64) ((s64) temp_s4 << 0x30) >> 0x30;
            switch (temp_a0) {                      /* irregular */
            case 0x1:
                if (temp_s0 != 0) {
                    var_a1 = 0x04000020;
                } else {
                    var_a1 = 0x04000010;
                }
                break;
            case 0x2:
                if (temp_s0 != 0) {
                    var_a1 = 0x04000008;
                } else {
                    var_a1 = 0x04000004;
                }
                break;
            case 0x4:
                if (temp_s0 != 0) {
                    var_a1 = 0x400020;
                } else {
                    var_a1 = 0x400010;
                }
                break;
            case 0x8:
                var_a1 = 0x400008;
                break;
            case 0x10:
                var_a1 = 0x04000002;
                break;
            case 0x400:
                var_a1 = 0x04000040;
                break;
            case 0x800:
                if (temp_s0 != 0) {
                    var_a1 = 0x04000100;
                } else {
                    var_a1 = 0x04000080;
                }
                break;
            default:
                var_a1 = 0;
                break;
            }
            *(s32 *)((u8 *)temp_v0 + 0x10) = func_00209540(temp_v0_2, var_a1, 0);
        }
        temp_s0_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x6C)) + 0x1350);
        *(s32 *)((u8 *)temp_s1 + 0x20) = func_0020B020(temp_s0_2, *(s16 *)((u8 *)arg0 + 0x94), *(s16 *)((u8 *)arg0 + 0xA0));
        *(s32 *)((u8 *)temp_s1 + 0x28) = func_0020AD30(temp_s0_2, *(s16 *)((u8 *)arg0 + 0x94), *(s16 *)((u8 *)arg0 + 0xA0));
        temp_a2 = *(s16 *)((u8 *)arg0 + 0xA4);
        if (temp_a2 > 0) {
            *(s32 *)((u8 *)temp_s1 + 0x24) = func_0020AE80(temp_s0_2, *(s16 *)((u8 *)arg0 + 0x98), temp_a2);
        } else {
            *(s32 *)((u8 *)temp_s1 + 0x24) = 0;
        }
        if (*(s32 *)((u8 *)temp_v0 + 0x10) != 0) {
            *(s32 *)((u8 *)temp_s1 + 0x3C) = (s32) *(s32 *)((u8 *)arg0 + 0x78);
            *(s16 *)((u8 *)temp_s1 + 0x48) = (s16) *(s16 *)((u8 *)arg0 + 0x5A);
            *(s16 *)((u8 *)temp_s1 + 0x4A) = (s16) *(s16 *)((u8 *)arg0 + 0x5C);
            *(s32 *)((u8 *)temp_s1 + 0x34) = (s32) *(s32 *)((u8 *)arg0 + 0x70);
            *(s16 *)((u8 *)temp_s1 + 0x44) = (s16) *(s32 *)((u8 *)arg0 + 0x68);
            *(s16 *)((u8 *)temp_s1 + 0x4C) = (s16) *(s16 *)((u8 *)arg0 + 0xAE);
        }
    }
}

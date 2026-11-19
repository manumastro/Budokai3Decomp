/* Draft (not built): func_0023D970 at 0x0023D970, size 0x1CC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 62 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F8, original 0x1CC
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023D970.s */

// src/unk/unk_23A890.c func_0023D970 size diff=62/126
void *BtlSys_GetSlot(s32, s32, s32);
s32 func_0022B900(s32, s32, f32);
s32 func_0022C060(s32, s32);
extern f32 D_00470710;
void func_0023D970(s32 arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 var_s0;
    u8 *var_s3;
    u8 *temp_v0;
    u8 *var_s1;
    u8 *var_s2;

    var_s0 = arg0;
    var_s3 = gBtlSys;
    temp_v0 = D_0058BF70 + (var_s0 * 0x64);
    var_s2 = temp_v0 + 0x210;
    var_s1 = BtlSys_GetSlot(func_0021C3D0(arg0), var_s0 * 0x14, var_s0 * 5);
    if (Input_IsHeld(1) != 0) {
        temp_a0 = *(s32 *)((u8 *)var_s3 + 0xE84);
        D_00470704 = temp_a0;
        D_0047070C = 0x04010000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x04010000);
        D_00470238 = 0;
        temp_a0_2 = *(s32 *)((u8 *)var_s1 + 0) & 0x1C000;
        switch (temp_a0_2) {                        /* irregular */
        case 0x8000:
            func_0022B900(*(s32 *)((u8 *)((var_s0 * 4) + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0xE88)) + 0x1C)) + 0x268), *(s32 *)((u8 *)var_s2 + 4), *(f32 *)((u8 *)var_s1 + 0x24));
        default:
        case 0x4000:
block_14:
            *(f32 *)((u8 *)var_s1 + 0x24) = (f32) (*(f32 *)((u8 *)var_s1 + 0x24) + D_00470710);
            break;
        case 0x10000:
            if (Input_IsHeld(1) != 0) {
                var_s0 *= 4;
                func_0022B900(*(s32 *)((u8 *)(var_s0 + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0xE88)) + 0x1C)) + 0x290), *(s32 *)((u8 *)var_s2 + 8), *(f32 *)((u8 *)var_s1 + 0x24));
                func_0022B900(*(s32 *)((u8 *)(var_s0 + *(s32 *)((u8 *)(*(u8 **)((u8 *)var_s3 + 0xE88)) + 0x1C)) + 0x300), *(s32 *)((u8 *)temp_v0 + 0x210), *(f32 *)((u8 *)var_s1 + 0x24));
                func_0022C060(*(s32 *)((u8 *)var_s2 + 0x60), 0x3F800000);
                temp_a0_3 = *(s32 *)((u8 *)var_s2 + 0x54);
                if (temp_a0_3 != 0) {
                    func_00208F70(temp_a0_3);
                    temp_a0_4 = *(s32 *)((u8 *)var_s2 + 0x54);
                    if (*(s32 *)((u8 *)temp_a0_4 + 0x38) < 0) {
                        Obj_ResetF38(temp_a0_4);
                        *(s32 *)((u8 *)var_s2 + 0x54) = 0;
                    }
                }
                temp_a0_5 = *(s32 *)((u8 *)var_s2 + 0x58);
                if (temp_a0_5 != 0) {
                    func_00208F70(temp_a0_5);
                    temp_a0_6 = *(s32 *)((u8 *)var_s2 + 0x58);
                    if (*(s32 *)((u8 *)temp_a0_6 + 0x38) < 0) {
                        Obj_ResetF38(temp_a0_6);
                        *(s32 *)((u8 *)var_s2 + 0x58) = 0;
                    }
                }
                goto block_14;
            }
            break;
        }
    }
}

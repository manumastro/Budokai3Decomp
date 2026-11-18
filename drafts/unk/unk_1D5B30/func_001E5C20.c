/* Draft (not built): func_001E5C20 at 0x001E5C20, size 0x6A0, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ct Fighter *, int, int, float)' @ 4022: >> 1) & 0xFF, temp_a3, 3.0f + (7.0f * (f32) (((arg1 - var_v0) / 3) + temp_a3)));
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E5C20.s */

// src/unk/unk_1D5B30.c func_001E5C20 cerr diff=-1/0
s32 Btl_UpdateLimitXY(s32, s32, s32);
extern void func_001A8770(int, void *);
extern void func_001ABCC0(void *);
void func_001E5C20(u8 *arg0, s32 arg1) {
    f32 sp20;
    f32 sp30;
    f32 sp34;
    s32 sp40;
    f32 sp44;
    f32 sp50;
    f32 sp54;
    f32 temp_f1;
    f32 temp_f1_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 var_v0;
    u32 temp_a3;
    u8 *var_s0;

    var_s0 = *(u8 **)((u8 *)arg0 + 0x568);
    switch (arg1) {                                 /* irregular */
    case 0x0:
        func_001DA5C0(var_s0, 1, 3, 1);
        return;
    case 0x1:
        func_001DA5C0(var_s0, 1, 3, 1);
        return;
    case 0x2:
        func_001DA5C0(var_s0, 1, 3, 1);
        return;
    case 0x3:
        func_001DA5C0(var_s0, 1, 3, 1);
        return;
    case 0x4:
        func_001DA5C0(var_s0, 1, 3, 1);
        return;
    case 0x19:
    case 0x18:
    case 0x17:
    case 0x16:
    case 0x15:
    case 0x14:
    case 0xF:
    case 0xE:
    case 0xD:
    case 0xC:
    case 0xB:
    case 0xA:
        if ((arg1 >= 0xA) && (var_v0 = 0xA, ((arg1 < 0x10) != 0))) {

        } else {
            var_s0 = *(u8 **)((u8 *)var_s0 + 0x1354);
            var_v0 = 0x14;
        }
        temp_a2 = arg1 - var_v0;
        temp_a3 = (u32) temp_a2 >> 0x1F;
        temp_a1 = (((temp_a2 % 3) << 6) + 0x7F) & 0xFF;
        PlyVib_Start(var_s0, temp_a1, (temp_a1 >> 1) & 0xFF, temp_a3, 3.0f + (7.0f * (f32) (((arg1 - var_v0) / 3) + temp_a3)));
        return;
    case 0x32:
        *(s8 *)((u8 *)var_s0 + 0x200D) = 0xA;
        func_001E3180((struct Fighter *)(var_s0));
        return;
    case 0x33:
        *(s8 *)((u8 *)var_s0 + 0x200D) = 0xB;
        func_001E3180((struct Fighter *)(var_s0));
        return;
    case 0x34:
        *(s8 *)((u8 *)var_s0 + 0x200D) = 6;
        func_001E3180((struct Fighter *)(var_s0));
        return;
    case 0x35:
        *(s8 *)((u8 *)var_s0 + 0x200D) = 7;
        func_001E3180((struct Fighter *)(var_s0));
        return;
    case 0x36:
        *(s8 *)((u8 *)var_s0 + 0x200D) = 3;
        func_001E3180((struct Fighter *)(var_s0));
        return;
    case 0x50:
        *(s8 *)((u8 *)var_s0 + 0xCBD) = 1;
        return;
    case 0x51:
        *(s8 *)((u8 *)var_s0 + 0xCBD) = 0;
        return;
    case 0x28:
        func_001E20F0((struct Fighter *)(var_s0));
        return;
    case 0x2A:
        func_001DFE60((struct Fighter *)(*(u8 **)((u8 *)var_s0 + 0x1354)), 4, 0x447A0000);
        func_001D9900((struct Fighter *)(var_s0), 6, 1);
        *(s8 *)((u8 *)var_s0 + 0x2006) = 0;
        return;
    case 0x2C:
        Fighter_CreateHyperCtrl((void *)(var_s0), 0);
        return;
    case 0x64:
        if (*(s16 *)((u8 *)gBattle + 0x8944) == 0) {
            func_001E13F0((struct Fighter *)(var_s0), 0x200800);
            func_001ABCC0(var_s0 + 0x1360);
            return;
        }
        return;
    case 0x66:
        func_001E1300((struct Fighter *)(var_s0));
        return;
    case 0x65:
        Btl_UpdateLimitXY(0, 0x3F4CCCCD, 0x3BA3D70A);
        return;
    case 0x3C:
        *(s8 *)((u8 *)var_s0 + 0x2005) = 1;
        return;
    case 0x3D:
        *(s8 *)((u8 *)var_s0 + 0x2005) = 0;
        return;
    case 0x40:
    case 0x3F:
    case 0x3E:
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        sp44 = 0.5f * (f32) (arg1 - 0x3D);
        sp50 = 0.6f;
        sp54 = 0.5f + (0.15f * (f32) (arg1 - 0x3E));
        func_001A8770(2, &sp40);
        return;
    case 0x43:
    case 0x42:
    case 0x41:
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        sp20 = 0.5f * (f32) (arg1 - 0x40);
        sp30 = 0.6f;
        sp34 = 0.5f + (0.15f * (f32) (arg1 - 0x41));
        func_001A8770(2, &sp20);
        return;
    case 0x46:
        func_001D9290((struct Fighter *)(var_s0));
        return;
    case 0x47:
        temp_f1 = *(f32 *)((u8 *)var_s0 + 0x1860);
        if (!(temp_f1 < 0.0f)) {
            *(f32 *)((u8 *)var_s0 + 0xC58) = temp_f1;
            *(s32 *)((u8 *)var_s0 + 0xCA4) = 0x3DCCCCCD;
            return;
        }
        break;
    case 0x48:
        if (*(s8 *)((u8 *)gBattle + 0x8AB9) != 0) {
            temp_f1_2 = *(f32 *)((u8 *)var_s0 + 0x1860);
            if (!(temp_f1_2 < 0.0f)) {
                *(f32 *)((u8 *)var_s0 + 0xC58) = temp_f1_2;
                *(s32 *)((u8 *)var_s0 + 0xCA4) = 0x3DCCCCCD;
                return;
            }
        }
        break;
    case 0x69:
    case 0x68:
        if (*(s8 *)((u8 *)gBattle + 0x8AB9) != 0) {
            func_001E3930((struct Fighter *)(var_s0));
            if (func_001E3920(*(u8 **)((u8 *)var_s0 + 0x1354)) != 0) {
                func_001E3900((struct Fighter *)(var_s0));
                return;
            }
        }
        break;
    case 0x6E:
        func_001DDD50(var_s0);
        *(s8 *)((u8 *)var_s0 + 0x2006) = 0;
        return;
    case 0x78:
        func_001E2CC0(var_s0);
        return;
    case 0x79:
        func_001E28F0(var_s0);
        break;
    }
}

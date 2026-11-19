/* Draft (not built): func_0023D680 at 0x0023D680, size 0x2E4, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 54 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x2F0, original 0x2E4
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023D680.s */

// src/unk/unk_23A890.c func_0023D680 size diff=54/188
s32 amGs_SetReg32(s32, s32);
s32 func_0021BEA0(s32, s32);
s32 func_00228430(s32);
s32 func_0022B900(s32, s32 *, s32);
extern void func_00228410(void);
void func_0023D680(void) {
    s32 sp90;
    s32 sp94;
    s32 *var_s7;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_s4;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *var_s3;
    u8 *var_s6;
    u8 *var_s5;

    if (Input_IsHeld(1) != 0) {
        var_s6 = gBtlSys;
        var_s2 = amGs_SetReg32(2, 0x3360B);
        amDraw_SetPacketMode(1);
        var_s1 = 0;
        if (*(s32 *)((u8 *)gBattle + 0x88D8) > 0) {
            var_s0 = D_0058BF70;
            var_s0 = D_0058BF70;
            do {
                temp_a0 = *(s32 *)((u8 *)var_s6 + 0xE84);
                D_00470704 = temp_a0;
                D_0047070C = 0x04010000;
                D_00470708 = 0;
                amModel_SetCurrent(temp_a0, 0x04010000);
                D_00470238 = 0;
                func_0022C6B0(*(s32 *)((u8 *)var_s0 + 0x210));
                func_0022C6B0(*(s32 *)((u8 *)var_s0 + 0x218));
                var_s1 += 1;
                var_s0 += 0x64;
            } while (var_s1 < *(s32 *)((u8 *)gBattle + 0x88D8));
        }
        amDraw_SetPacketMode(0);
        amGs_SetReg32(2, var_s2);
        var_s4 = 0;
        if (*(s32 *)((u8 *)gBattle + 0x88D8) > 0) {
            var_s1 = (s32) D_0058BF70;
            var_s0 = NULL;
            var_s1 = (s32) D_0058BF70;
            var_s7 = &sp94;
            do {
                var_s2 = func_0021C3D0(var_s4);
                var_s3 = func_0021C430(var_s2);
                temp_v0 = func_0021C400(var_s2);
                temp_v1 = *temp_v0;
                var_s2 = (s32) temp_v0;
                if (temp_v1 & 0x1C000) {
                    func_0023B080(var_s4);
                } else {
                    if (temp_v1 & 0x80) {
                        func_0022C6B0(*(s32 *)((u8 *)var_s1 + 0x214));
                    }
                    func_0023B7D0(var_s4);
                    temp_a0_2 = *(s32 *)((u8 *)var_s6 + 0xE84);
                    D_00470704 = temp_a0_2;
                    D_0047070C = 0x04010000;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0_2, 0x04010000);
                    D_00470238 = 0;
                    func_00228430(0);
                    func_0022B900(*(s32 *)((u8 *)(&var_s0[*(s32 *)((u8 *)(*(u8 **)((u8 *)var_s6 + 0xE88)) + 0x1C)]) + 8), &sp90, 0);
                    func_00228410();
                    *var_s7 |= 0x18;
                    func_0022C6B0((s32) &sp90);
                    if (func_0021C280(0x100000) != 0) {
                        var_s5 = (unsigned char *)(var_s1 + 0x210);
                        if (Input_IsHeld(0x80000000) != 0) {
                            temp_a0_3 = *(s32 *)((u8 *)var_s5 + 0xC);
                            if (temp_a0_3 != 0) {
                                func_0021BEA0(temp_a0_3, 0x1A);
                                func_0022C560(*(s32 *)((u8 *)var_s5 + 0xC));
                            }
                        }
                    }
                    temp_v1_2 = *(s32 *)((u8 *)var_s2 + 0);
                    if ((temp_v1_2 & 0x800) && !(temp_v1_2 & 0x80) && (*(s32 *)((u8 *)var_s3 + 8) >= 0x2BD)) {
                        func_0022C6B0(*(s32 *)((u8 *)var_s1 + 0x214));
                    }
                    func_0023D360(var_s4, *(s32 *)((u8 *)var_s2 + 4), *(s32 *)((u8 *)var_s2 + 8), *(s32 *)((u8 *)var_s3 + 4));
                    func_0023C690(var_s4, *(s32 *)((u8 *)var_s3 + 0x10), *(s32 *)((u8 *)var_s3 + 0x14));
                    func_0022C6B0(*(s32 *)((u8 *)var_s1 + 0x25C));
                }
                temp_a0_4 = *(s32 *)((u8 *)var_s1 + 0x260);
                if (temp_a0_4 != 0) {
                    func_0022C560(temp_a0_4);
                }
                var_s4 += 1;
                var_s1 += 0x64;
                var_s0 += 4;
            } while (var_s4 < *(s32 *)((u8 *)gBattle + 0x88D8));
        }
    }
}

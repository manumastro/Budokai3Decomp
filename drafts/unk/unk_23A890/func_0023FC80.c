/* Draft (not built): func_0023FC80 at 0x0023FC80, size 0x460, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 153 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x490, original 0x460
 * Original: asm/nonmatchings/unk/unk_23A890/func_0023FC80.s */

// src/unk/unk_23A890.c func_0023FC80 size diff=153/292
void *BtlSys_GetSlot(s32);
s32 func_00227A30(u8 *);
s32 func_00228430(s32);
s32 func_0022D0E0(s32, s32);
s32 func_0022D860(s32, s32);
extern f32 D_00470710;
extern void func_00228410(void);
void func_0023FC80(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 var_s4;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s5;
    u8 *temp_s6;
    u8 *var_s0;
    u8 *temp_s1;

    temp_s5 = gBtlSys;
    if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
        var_s4 = 0;
        if (*(s32 *)((u8 *)gBattle + 0x88D8) > 0) {
            var_s0 = D_0058BF70;
            do {
                temp_v0 = func_0021C3D0(var_s4);
                temp_s3 = func_0021C660(temp_v0);
                temp_s2 = func_0021C430(temp_v0);
                temp_s1 = BtlSys_GetSlot(temp_v0);
                temp_s6 = func_0021C400(temp_v0);
                if (*(s32 *)((u8 *)temp_s1 + 0) & 0x20000) {
                    temp_a0 = *(s32 *)((u8 *)temp_s5 + 0xE84);
                    D_00470704 = temp_a0;
                    D_0047070C = 0x04010000;
                    D_00470708 = 0;
                    amModel_SetCurrent(temp_a0, 0x04010000);
                    D_00470238 = 0;
                    if (*(s32 *)((u8 *)var_s0 + 0x26C) == 0) {
                        *(s32 *)((u8 *)var_s0 + 0x26C) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s5 + 0xE88)) + 0x14)) + 0x60), 0x44160000);
                    } else {
                        func_00228430(0);
                        func_00227A30(temp_s3 + 0x100);
                        func_0022C7D0(*(s32 *)((u8 *)var_s0 + 0x26C), *(f32 *)((u8 *)temp_s3 + 0xF4), 1);
                        func_0022ACF0(*(s32 *)((u8 *)var_s0 + 0x26C));
                        func_00228410();
                    }
                } else {
                    temp_a0_2 = *(s32 *)((u8 *)var_s0 + 0x26C);
                    if (temp_a0_2 != 0) {
                        func_0022D0E0(temp_a0_2, 1);
                        *(s32 *)((u8 *)var_s0 + 0x26C) = 0;
                    }
                }
                *(s32 *)((u8 *)temp_s1 + 0x18) = func_0023F610(var_s4);
                if (*(s32 *)((u8 *)temp_s1 + 0x18) != *(s32 *)((u8 *)temp_s6 + 0x18)) {
                    *(s16 *)((u8 *)temp_s1 + 0x4E) = -2;
                    *(s32 *)((u8 *)temp_s1 + 0x1C) = 0;
                }
                temp_v0_2 = *(s32 *)((u8 *)temp_s1 + 0);
                if (temp_v0_2 & 0x100000) {
                    *(f32 *)((u8 *)temp_s1 + 0x34) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x34) + D_00470710);
                    temp_v1 = *(s32 *)((u8 *)temp_s3 + 0x10);
                    if (*(s32 *)((u8 *)temp_s1 + 0x20) < temp_v1) {
                        *(s32 *)((u8 *)temp_s1 + 0x20) = temp_v1;
                    }
                    if (*(s32 *)((u8 *)temp_s3 + 0x10) < 0x1B58) {
                        *(s32 *)((u8 *)temp_s1 + 0) = (s32) (*(s32 *)((u8 *)temp_s1 + 0) & ~0x400);
                    }
                } else if (temp_v0_2 & 0x200) {
                    *(f32 *)((u8 *)temp_s1 + 0x34) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x34) + D_00470710);
                    if ((((*(s32 *)((u8 *)temp_s3 + 0x10) / 1000) + ((u32) *(s32 *)((u8 *)temp_s3 + 0x10) >> 0x1F)) < ((*(u32 *)((u8 *)temp_s2 + 0x10) / 1000) + ((u32) *(u32 *)((u8 *)temp_s2 + 0x10) >> 0x1F))) || !(*(f32 *)((u8 *)temp_s1 + 0x34) <= 10.0f)) {
                        *(s32 *)((u8 *)temp_s1 + 0) = (s32) (*(s32 *)((u8 *)temp_s1 + 0) ^ 0x200);
                    }
                    if (((*(u32 *)((u8 *)temp_s2 + 0x10) / 1000) + ((u32) *(u32 *)((u8 *)temp_s2 + 0x10) >> 0x1F)) < ((*(s32 *)((u8 *)temp_s3 + 0x10) / 1000) + ((u32) *(s32 *)((u8 *)temp_s3 + 0x10) >> 0x1F))) {
                        goto block_33;
                    }
                } else if (temp_v0_2 & 0x400) {
                    *(f32 *)((u8 *)temp_s1 + 0x34) = (f32) (*(f32 *)((u8 *)temp_s1 + 0x34) + D_00470710);
                    if (*(s32 *)((u8 *)temp_s3 + 0x10) < 0x1B58) {
                        *(s32 *)((u8 *)temp_s1 + 0) = (s32) (*(s32 *)((u8 *)temp_s1 + 0) ^ 0x400);
                    }
                } else {
                    temp_a1 = *(s32 *)((u8 *)temp_s3 + 0x10);
                    if (temp_a1 == 0x1B58) {
                        *(s32 *)((u8 *)temp_s1 + 0) = (s32) (temp_v0_2 & ~0x200);
                        *(s32 *)((u8 *)temp_s1 + 0) = (s32) (*(s32 *)((u8 *)temp_s1 + 0) | 0x400);
                        goto block_33;
                    }
                    if (((*(u32 *)((u8 *)temp_s2 + 0x10) / 1000) + ((u32) *(u32 *)((u8 *)temp_s2 + 0x10) >> 0x1F)) < ((*(s32 *)((u8 *)temp_s3 + 0x10) / 1000) + ((u32) temp_a1 >> 0x1F))) {
                        *(s32 *)((u8 *)temp_s1 + 0) = (s32) (temp_v0_2 | 0x200);
block_33:
                        *(f32 *)((u8 *)temp_s1 + 0x34) = 0.0f;
                    }
                }
                *(s16 *)((u8 *)temp_s1 + 0x58) = (s16) *(s16 *)((u8 *)temp_s3 + 0x3A);
                *(s16 *)((u8 *)temp_s1 + 0x5A) = (s16) *(s16 *)((u8 *)temp_s3 + 0x3C);
                temp_a0_3 = *(s32 *)((u8 *)temp_s5 + 0xE84);
                D_00470704 = temp_a0_3;
                D_0047070C = 0x04010000;
                D_00470708 = 0;
                amModel_SetCurrent(temp_a0_3, 0x04010000);
                D_00470238 = 0;
                func_0023ED30(var_s4);
                func_0023E950(var_s4);
                func_0023E7A0();
                func_0023E570(var_s4);
                func_0023E260(var_s4);
                if (func_0021C280(0x200000) != 0) {
                    func_0023DC10(var_s4);
                }
                if (func_0021C280(0x100000) != 0) {
                    func_0023DB40(var_s4);
                }
                temp_a0_4 = *(s32 *)((u8 *)temp_s1 + 0);
                if (temp_a0_4 & 2) {
                    *(s32 *)((u8 *)temp_s1 + 0) = (s32) (temp_a0_4 ^ 2);
                }
                var_s4 += 1;
                var_s0 += 0x64;
            } while (var_s4 < *(s32 *)((u8 *)gBattle + 0x88D8));
        }
    }
}

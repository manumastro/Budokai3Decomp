/* Draft (not built): func_00270870 at 0x00270870, size 0x430, segment unk/unk_26FF30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 133 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x428, original 0x430
 * Original: asm/nonmatchings/unk/unk_26FF30/func_00270870.s */

// src/unk/unk_26FF30.c func_00270870 size diff=133/266
void *A2d_AllocObj(s32, s32);
s32 func_00227880(s32 *);
s32 func_00227A30(s128 *);
s32 func_00228430(s32, void *);
s32 func_002284D0(s32);
s32 func_0022D4B0(void *, s32);
extern s128 D_00452F70;
extern s32 D_00452F80;
extern s8 D_0046B4C0;
extern f32 D_00470018;
extern void func_00228410(void);
extern void func_0022C6B0(void *);
void func_00270870(void) {
    s32 spA0;
    s32 spB0;
    u8 *spCC;
    s32 spD0;
    s128 spF0;
    f32 spF4;
    s16 var_v1;
    s32 temp_a0;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s7;
    s8 *var_s0;
    s8 temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s1_3;
    u8 *temp_s4;
    u8 *temp_s5;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *var_s3;

    temp_s4 = *(u8 **)((u8 *)D_004707FC + 0x20);
    spF0 = D_00452F70;
    spF4 = -D_00470018;
    func_00228430(0, D_004707FC);
    func_00227A30(&spF0);
    spCC = NULL;
    spB0 = 0;
    var_s3 = NULL;
    spA0 = 0;
    spF4 = D_00470018;
    do {
        if ((spB0 == 0) && (*(s32 *)((u8 *)D_004707FC + 0x4C) == 0)) {
            func_00227A30(&spF0);
        } else {
            temp_v0_2 = (unsigned char *)(D_004707FC + spA0);
            if (*(s32 *)((u8 *)temp_v0_2 + 0x75C) >= 0) {
                var_s2 = 0;
                var_s7 = 0;
                var_s0 = &D_0046B4C0;
                do {
                    temp_a0 = *(s32 *)((u8 *)(D_004707FC + var_s7) + 0x69C);
                    if (temp_a0 < 0) {
                        var_v1 = -1;
                    } else if (temp_a0 < *(s32 *)((u8 *)D_004707FC + 0x58)) {
                        var_v1 = *(s16 *)((u8 *)(D_004707FC + (temp_a0 * 2)) + 0x134);
                    } else {
                        var_v1 = -1;
                    }
                    if (*(s32 *)((u8 *)temp_v0_2 + 0x75C) == var_v1) {
                        func_00228430(0, 0);
                        temp_s1 = *var_s0;
                        if (temp_s1 < 0) {
                            func_00228410();
                        } else {
                            if (var_s2 != *(s32 *)((u8 *)D_004707FC + 0x50)) {
                                *(s128 *)((u8 *)(&spD0) + 0) = (s128) *(s128 *)((u8 *)(&D_00452F80) + 0);
                                *(s128 *)((u8 *)(&spD0) + 0x10) = (s128) *(s128 *)((u8 *)(&D_00452F80) + 0x10);
                                func_00227880(&spD0);
                                temp_s1_2 = A2d_AllocObj(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (temp_s1 * 4)), 0);
                                temp_s5 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0xE0), 0);
                                temp_v0_3 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x44), 0);
                                *(s16 *)((u8 *)temp_v0_3 + 0x18) = (s16) *(s16 *)((u8 *)temp_s1_2 + 0x18);
                                *(f32 *)((u8 *)temp_v0_3 + 0x40) = (f32) *(f32 *)((u8 *)temp_s1_2 + 0x40);
                                *(f32 *)((u8 *)temp_v0_3 + 0x44) = (f32) *(f32 *)((u8 *)temp_s1_2 + 0x44);
                                *(f32 *)((u8 *)temp_v0_3 + 0x48) = (f32) *(f32 *)((u8 *)temp_s1_2 + 0x48);
                                *(f32 *)((u8 *)temp_v0_3 + 0x4C) = (f32) *(f32 *)((u8 *)temp_s1_2 + 0x4C);
                                func_0022D4B0(temp_s1_2, 1);
                                func_0022C6B0(temp_s5);
                                func_0022C6B0(temp_v0_3);
                                func_0022D4B0(temp_s5, 1);
                                func_0022D4B0(temp_v0_3, 1);
                            } else {
                                temp_s1_3 = A2d_AllocObj(*(*(u8 **)((u8 *)temp_s4 + 0x1C) + (temp_s1 * 4)), 0);
                                if (*(s32 *)((u8 *)(*(u8 **)((u8 *)D_004707FC + 0x18)) + 0x34) != 0) {
                                    func_00228430(0, 0);
                                    func_002284D0(0);
                                    var_s3 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x40), 0);
                                    temp_v0_4 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0xDC), 0);
                                    spCC = temp_v0_4;
                                    *(s16 *)((u8 *)var_s3 + 0x18) = (s16) *(s16 *)((u8 *)temp_s1_3 + 0x18);
                                    *(f32 *)((u8 *)var_s3 + 0x40) = (f32) *(f32 *)((u8 *)temp_s1_3 + 0x40);
                                    *(f32 *)((u8 *)var_s3 + 0x44) = (f32) *(f32 *)((u8 *)temp_s1_3 + 0x44);
                                    *(f32 *)((u8 *)var_s3 + 0x48) = (f32) *(f32 *)((u8 *)temp_s1_3 + 0x48);
                                    *(f32 *)((u8 *)var_s3 + 0x4C) = (f32) *(f32 *)((u8 *)temp_s1_3 + 0x4C);
                                    *(f32 *)((u8 *)temp_v0_4 + 0x24) = (f32) (*(f32 *)((u8 *)temp_v0_4 + 0x24) + (D_00470018 * (f32) *(s32 *)((u8 *)D_004707FC + 0x48)));
                                    *(f32 *)((u8 *)var_s3 + 0x24) = (f32) (*(f32 *)((u8 *)var_s3 + 0x24) + (D_00470018 * (f32) *(s32 *)((u8 *)D_004707FC + 0x48)));
                                    func_00228410();
                                } else {
                                    var_s3 = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0x40), 0);
                                    spCC = A2d_AllocObj(*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0x1C)) + 0xDC), 0);
                                    *(s16 *)((u8 *)var_s3 + 0x18) = (s16) *(s16 *)((u8 *)temp_s1_3 + 0x18);
                                    *(f32 *)((u8 *)var_s3 + 0x40) = (f32) *(f32 *)((u8 *)temp_s1_3 + 0x40);
                                    *(f32 *)((u8 *)var_s3 + 0x44) = (f32) *(f32 *)((u8 *)temp_s1_3 + 0x44);
                                    *(f32 *)((u8 *)var_s3 + 0x48) = (f32) *(f32 *)((u8 *)temp_s1_3 + 0x48);
                                    *(f32 *)((u8 *)var_s3 + 0x4C) = (f32) *(f32 *)((u8 *)temp_s1_3 + 0x4C);
                                }
                                func_0022D4B0(temp_s1_3, 1);
                            }
                            func_00228410();
                        }
                    }
                    var_s2 += 1;
                    var_s7 += 4;
                    var_s0 += 1;
                } while (var_s2 < 0x30);
                func_00227A30(&spF0);
            }
        }
        spA0 += 8;
        temp_v0 = spB0 + 1;
        spB0 = temp_v0;
    } while (temp_v0 < 0xB);
    if ((spCC != NULL) && (var_s3 != NULL)) {
        func_0022C6B0(spCC);
        func_0022C6B0(var_s3);
        func_0022D4B0(spCC, 1);
        func_0022D4B0(var_s3, 1);
    }
    func_00228410();
}

/* Draft (not built): func_0021C080 at 0x0021C080, size 0x1D0, segment unk/unk_21B130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 86 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F8, original 0x1D0
 * Original: asm/nonmatchings/unk/unk_21B130/func_0021C080.s */

// src/unk/unk_21B130.c func_0021C080 size diff=86/126
void func_0021C080(u8 *arg0, u8 *arg1, s32 arg2) {
    s32 temp_s3_2;
    s32 temp_s4;
    s32 temp_s5;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_a0_4;
    u8 *temp_a0_5;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s6;
    u8 *temp_s6_2;

    temp_s5 = arg2 & 4;
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x30);
    *(f32 *)((u8 *)temp_a0 + 0x50) = (f32) *(f32 *)((u8 *)arg1 + 0);
    *(f32 *)((u8 *)temp_a0 + 0x54) = (f32) *(f32 *)((u8 *)arg1 + 4);
    *(f32 *)((u8 *)temp_a0 + 0x58) = (f32) *(f32 *)((u8 *)arg1 + 8);
    if (temp_s5 != 0) {
        *(f32 *)((u8 *)temp_a0 + 0x5C) = (f32) *(f32 *)((u8 *)arg1 + 0xC);
    }
    temp_s4 = arg2 & 2;
    *(u8 *)((u8 *)temp_a0 + 0x1C) = (u8) *(u8 *)((u8 *)arg1 + 0x10);
    *(u8 *)((u8 *)temp_a0 + 0x1D) = (u8) *(u8 *)((u8 *)arg1 + 0x11);
    *(u8 *)((u8 *)temp_a0 + 0x1E) = (u8) *(u8 *)((u8 *)arg1 + 0x12);
    *(u8 *)((u8 *)temp_a0 + 0x1F) = (u8) *(u8 *)((u8 *)arg1 + 0x13);
    *(s32 *)((u8 *)temp_a0 + 8) = (s32) *(s32 *)((u8 *)arg1 + 0x14);
    if (temp_s4 != 0) {
        temp_s3 = *(u8 **)((u8 *)arg0 + 0x28);
        if (temp_s3 != NULL) {
            temp_s6 = *(u8 **)((u8 *)temp_s3 + 0x30);
            *(f32 *)((u8 *)temp_s6 + 0x50) = (f32) *(f32 *)((u8 *)arg1 + 0);
            *(f32 *)((u8 *)temp_s6 + 0x54) = (f32) *(f32 *)((u8 *)arg1 + 4);
            *(f32 *)((u8 *)temp_s6 + 0x58) = (f32) *(f32 *)((u8 *)arg1 + 8);
            if (temp_s5 != 0) {
                *(f32 *)((u8 *)temp_s6 + 0x5C) = (f32) *(f32 *)((u8 *)arg1 + 0xC);
            }
            func_0021C250(temp_s6 + 0x1C, arg1 + 0x10);
            *(s32 *)((u8 *)temp_s6 + 8) = (s32) *(s32 *)((u8 *)arg1 + 0x14);
            if (temp_s4 != 0) {
                temp_a0_2 = *(u8 **)((u8 *)temp_s3 + 0x28);
                if (temp_a0_2 != NULL) {
                    func_0021C080(temp_a0_2, arg1, arg2);
                }
            }
            if (arg2 & 1) {
                temp_a0_3 = *(u8 **)((u8 *)temp_s3 + 0x2C);
                if (temp_a0_3 != NULL) {
                    func_0021C080(temp_a0_3, arg1, arg2);
                }
            }
        }
    }
    temp_s3_2 = arg2 & 1;
    if (temp_s3_2 != 0) {
        temp_s2 = *(u8 **)((u8 *)arg0 + 0x2C);
        if (temp_s2 != NULL) {
            temp_s6_2 = *(u8 **)((u8 *)temp_s2 + 0x30);
            *(f32 *)((u8 *)temp_s6_2 + 0x50) = (f32) *(f32 *)((u8 *)arg1 + 0);
            *(f32 *)((u8 *)temp_s6_2 + 0x54) = (f32) *(f32 *)((u8 *)arg1 + 4);
            *(f32 *)((u8 *)temp_s6_2 + 0x58) = (f32) *(f32 *)((u8 *)arg1 + 8);
            if (temp_s5 != 0) {
                *(f32 *)((u8 *)temp_s6_2 + 0x5C) = (f32) *(f32 *)((u8 *)arg1 + 0xC);
            }
            func_0021C250(temp_s6_2 + 0x1C, arg1 + 0x10);
            *(s32 *)((u8 *)temp_s6_2 + 8) = (s32) *(s32 *)((u8 *)arg1 + 0x14);
            if (temp_s4 != 0) {
                temp_a0_4 = *(u8 **)((u8 *)temp_s2 + 0x28);
                if (temp_a0_4 != NULL) {
                    func_0021C080(temp_a0_4, arg1, arg2);
                }
            }
            if (temp_s3_2 != 0) {
                temp_a0_5 = *(u8 **)((u8 *)temp_s2 + 0x2C);
                if (temp_a0_5 != NULL) {
                    func_0021C080(temp_a0_5, arg1, arg2);
                }
            }
        }
    }
}

/* Draft (not built): func_002C2560 at 0x002C2560, size 0x244, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 67 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1F8, original 0x244
 * Original: asm/nonmatchings/story/str_status/func_002C2560.s */

// src/story/str_status.c func_002C2560 size diff=67/126
s32 DataErase_IsReady();
s32 func_0027D820(s32);
s32 func_0027E000();
void func_002C2560(u8 *arg0) {
    s32 *sp50;
    u8 *sp54;
    u8 *sp58;
    u8 *sp5C;
    u8 *sp60;
    u8 *sp64;
    u8 *sp68;
    u8 *sp6C;
    u8 *sp70;
    u8 *sp74;
    u8 *sp78;
    u8 *sp7C;
    s32 *var_v1_2;
    f32 temp_f1;
    s32 **var_s3;
    s32 **var_v1;
    s32 temp_a0_3;
    s32 var_s0;
    s32 var_v0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_s1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_a0 = *(u8 **)((u8 *)temp_s1 + 4);
    D_00470704 = (int)(temp_a0);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x2000);
    D_00470238 = 0;
    temp_a0_2 = *(u8 **)((u8 *)temp_s1 + 4);
    D_00470704 = (int)(temp_a0_2);
    D_0047070C = 0x2000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0_2), 0x2000);
    D_00470238 = 0;
    temp_s0 = *(u8 **)((u8 *)temp_s1 + 8);
    if (temp_s0 != NULL) {
        func_0022C060((s32)(temp_s0), 0x3F800000);
        func_0022CD00((s32)(temp_s0));
    }
    func_002C0860((s32 *)(temp_s1));
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_f1 = *(f32 *)((u8 *)temp_s1 + 0xC4);
    if (!(temp_f1 <= 0.0f)) {
        *(f32 *)((u8 *)temp_s1 + 0xC4) = (f32) (temp_f1 - gFrameDelta);
        return;
    }
    if (*(u8 *)((u8 *)temp_s1 + 0xB1) == 0) {
        if ((func_0027E000() != 0) && (DataErase_IsReady() == 1)) {
            *(u8 *)((u8 *)temp_s1 + 0xB1) = 1U;
            goto block_9;
        }
    } else {
block_9:
        var_v1 = &sp50;
        var_v0 = 0x30;
        if (var_v1 != NULL) {
            do {
                *var_v1 = 0;
                var_v0 -= 1;
                var_v1 += 1;
            } while (var_v0 != 0);
        }
        sp50 = (int *)(temp_s1 + 0xC);
        var_s0 = 0;
        sp54 = temp_s1 + 0x10;
        sp58 = temp_s1 + 0x14;
        sp5C = temp_s1 + 0x18;
        sp60 = temp_s1 + 0x1C;
        sp64 = temp_s1 + 0x20;
        sp68 = temp_s1 + 0x24;
        sp6C = temp_s1 + 0x28;
        sp70 = temp_s1 + 0x2C;
        sp74 = temp_s1 + 0x34;
        sp78 = temp_s1 + 0x38;
        sp7C = temp_s1 + 0x30;
        var_s3 = &sp50;
        do {
            temp_a0_3 = **var_s3;
            if (temp_a0_3 != 0) {
                func_0022D0E0(temp_a0_3, 1);
            }
            var_s0 += 1;
            **var_s3 = 0;
            var_s3 += 4;
        } while (var_s0 < 0xC);
        func_0027D820(0);
        *(u8 *)((u8 *)temp_s1 + 0xB2) = 0U;
        *(s32 *)((u8 *)temp_s1 + 0xA0) = func_0027E2D0(3, 6, 1, (s8) *(u8 *)((u8 *)temp_s1 + 0xB2), 0, 0, 0, 0);
        *(f32 *)((u8 *)temp_s1 + 0xC4) = 60.0f;
        *(s8 *)((u8 *)temp_s1 + 0xAF) = 0xA;
        func_002C0FC0((int *)(temp_s1));
        var_v1_2 = (int *)(&func_002C2470);
        if (&func_002C2470 == NULL) {
            var_v1_2 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
    }
}

/* Draft (not built): func_00258F80 at 0x00258F80, size 0x258, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 62 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x270, original 0x258
 * Original: asm/nonmatchings/battle/skill_cmd/func_00258F80.s */

// src/battle/skill_cmd.c func_00258F80 size diff=62/156
void func_00258F80(u8 *arg0) {
    s32 *var_v0;
    f32 var_f0;
    f32 var_f1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s6;
    s32 var_v1;
    u8 *temp_s2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *var_s4;
    u8 *var_s5;

    temp_s1 = arg0 + 0x30;
    temp_s2 = gBtlSys;
    temp_s0 = (unsigned char *)(*(s32 *)((u8 *)arg0 + 0x30) + 0x30);
    func_0021C460(*(s32 *)((u8 *)arg0 + 0x64));
    if (gBattle != NULL) {
        var_v1 = gBattle->unk88EC;
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        *(f32 *)((u8 *)temp_s1 + 8) = (f32) (*(f32 *)((u8 *)temp_s1 + 8) + D_00470710);
        temp_a0 = *(s32 *)((u8 *)temp_s2 + 0xE60);
        D_00470704 = temp_a0;
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x04000000);
        D_00470238 = 0;
        func_00228430(0);
        var_s6 = 0;
        var_s5 = temp_s0;
        var_s4 = temp_s1;
        do {
            func_0022C060(*(s32 *)((u8 *)var_s5 + 0x10), 1.0f);
            var_f1 = 128.5f;
            var_f0 = 159.5f;
            temp_v1 = *(s32 *)((u8 *)var_s4 + 0x14) & 0xF;
            switch (temp_v1) {                      /* irregular */
            case 1:
                var_f1 = 0.5f;
                var_f0 = 31.5f;
                break;
            case 2:
                var_f1 = 32.5f;
                var_f0 = 63.5f;
                break;
            case 8:
                var_f1 = 64.5f;
                var_f0 = 95.5f;
                break;
            case 4:
                var_f1 = 96.5f;
                var_f0 = 127.5f;
                break;
            }
            temp_v0 = *(s32 *)((u8 *)var_s5 + 0x10);
            if (temp_v0 != 0) {
                *(f32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v0 + 0x2C)) + 0x30)) + 0x40) = var_f1;
                *(f32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(s32 *)((u8 *)var_s5 + 0x10)) + 0x2C)) + 0x30)) + 0x48) = var_f0;
            }
            var_s6 += 1;
            var_s5 += 4;
            var_s4 += 4;
        } while (var_s6 < 5);
        temp_a0_2 = *(s32 *)((u8 *)temp_s0 + 4);
        if (temp_a0_2 != 0) {
            func_0022C060(temp_a0_2, 1.0f);
        }
        func_00228410();
        if (!(*(f32 *)((u8 *)temp_s1 + 8) < 60.0f)) {
            *(s32 *)((u8 *)temp_s1 + 4) = 3;
            var_v0 = (int *)(&func_00258E80);
            *(f32 *)((u8 *)temp_s1 + 8) = 0.0f;
            if (&func_00258E80 == NULL) {
                var_v0 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
            temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 4);
            if (temp_a0_3 != 0) {
                func_0022D0E0(temp_a0_3, 1);
            }
            *(s32 *)((u8 *)temp_s0 + 4) = 0;
            *(s32 *)((u8 *)temp_s0 + 4) = func_0022D860(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0xE68)) + 0x14)) + 0x14), 0.0f);
        }
    }
}

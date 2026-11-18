/* Draft (not built): func_002596A0 at 0x002596A0, size 0x278, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); to 'int' mwccps2.exe Compiler: @ 3136: (u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE68)) + 0x14)) + 0xC)))))), 0);
 * Original: asm/nonmatchings/battle/skill_cmd/func_002596A0.s */

// src/battle/skill_cmd.c func_002596A0 cerr diff=-1/0
extern void func_002591E0(void);
void func_002596A0(u8 *arg0) {
    s32 *var_v0;
    f32 var_f0;
    f32 var_f1;
    s32 temp_a0_3;
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s4;
    u8 *temp_v1;
    u8 *var_s2;
    u8 *var_s3;

    temp_s4 = gBtlSys;
    var_s3 = arg0 + 0x30;
    var_s2 = (u8 *)(*(s32 *)((u8 *)arg0 + 0x30) + 0x30);
    func_0021C460(*(s32 *)((u8 *)arg0 + 0x64));
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        *(f32 *)((u8 *)var_s3 + 8) = (f32) (*(f32 *)((u8 *)var_s3 + 8) + D_00470710);
        temp_a0 = *(u8 **)((u8 *)temp_s4 + 0xE60);
        D_00470704 = (s32)(temp_a0);
        D_0047070C = 0x04000000;
        D_00470708 = 0;
        amModel_SetCurrent((s32)(temp_a0), 0x04000000);
        D_00470238 = 0;
        if ((*(f32 *)((u8 *)var_s3 + 0xC) - *(f32 *)((u8 *)var_s3 + 8)) <= 30.0f) {
            func_0022C060((s32)(*(u8 **)((u8 *)var_s2 + 4)), 0x3F800000);
            func_00258D40((s32 *)(var_s3), 0x44);
        }
        if (!(*(f32 *)((u8 *)var_s3 + 8) < *(f32 *)((u8 *)var_s3 + 0xC))) {
            *(s32 *)((u8 *)var_s3 + 4) = 1;
            var_v0 = (s32 *)(&func_002591E0);
            *(f32 *)((u8 *)var_s3 + 8) = 0.0f;
            if (&func_002591E0 == NULL) {
                var_v0 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v0;
            temp_a0_2 = *(u8 **)((u8 *)var_s2 + 4);
            if (temp_a0_2 != NULL) {
                func_0022D0E0((s32)(temp_a0_2), 1);
            }
            *(u8 **)((u8 *)var_s2 + 4) = NULL;
            *(u8 **)((u8 *)var_s2 + 4) = func_0022D860((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE68)) + 0x14)) + 0xC))))))), 0);
            *(u8 **)((u8 *)var_s2 + 0x28) = func_0022D860((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE68)) + 0x14)) + 0x44))))))), 0);
            var_s1 = 0;
            var_s0 = 0;
            do {
                *(u8 **)((u8 *)var_s2 + 0x10) = func_0022D860((s32)((u8 *)((s32)((u8 *)((s32)((u8 *)(*(s32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0xE68)) + 0x14) + var_s0) + 0x28))))))), 0);
                var_f1 = 128.5f;
                var_f0 = 159.5f;
                temp_a0_3 = *(s32 *)((u8 *)var_s3 + 0x14) & 0xF;
                switch (temp_a0_3) {                /* irregular */
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
                temp_v1 = *(u8 **)((u8 *)var_s2 + 0x10);
                if (temp_v1 != NULL) {
                    *(f32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)temp_v1 + 0x2C)) + 0x30)) + 0x40) = var_f1;
                    *(f32 *)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)(*(u8 **)((u8 *)var_s2 + 0x10)) + 0x2C)) + 0x30)) + 0x48) = var_f0;
                }
                var_s1 += 1;
                var_s0 += 4;
                var_s2 += 4;
                var_s3 += 4;
            } while (var_s1 < 5);
        }
    }
}

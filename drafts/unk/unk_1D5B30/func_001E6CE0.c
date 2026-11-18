/* Draft (not built): func_001E6CE0 at 0x001E6CE0, size 0x1A8, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); on from 'void *' to 'int' mwccps2.exe Compiler: @ 4109: func_001C8480((void *)(temp_s0), *(s32 *)((u8 *)temp_s1 + 0xC));
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E6CE0.s */

// src/unk/unk_1D5B30.c func_001E6CE0 cerr diff=-1/0
void func_001E6CE0(u8 *arg0) {
    f32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    f32 var_f20;
    s32 temp_v1;
    u8 *temp_a1;
    u8 *temp_s0;
    u8 *temp_s1;

    temp_a1 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s0 = *(u8 **)((u8 *)temp_a1 + 0x568);
    temp_s1 = arg0 + 0x30;
    if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
        *(f32 *)((u8 *)temp_s1 + 4) = (f32) (*(f32 *)((u8 *)temp_s1 + 4) + (*(f32 *)((u8 *)gBattle + 0x88F0) * *(f32 *)((u8 *)temp_a1 + 0x64C)));
    }
    temp_v1 = *(s32 *)((u8 *)temp_s1 + 8);
    if (temp_v1 == 0) {
        var_f20 = *(f32 *)((u8 *)temp_s1 + 4) / 5.0f;
    } else {
        var_f20 = (15.0f - *(f32 *)((u8 *)temp_s1 + 4)) / 15.0f;
    }
    if (!(var_f20 <= 1.0f)) {
        var_f20 = 1.0f;
    } else if (var_f20 < 0.0f) {
        var_f20 = 0.0f;
    }
    if (!(*(f32 *)((u8 *)temp_s1 + 4) <= 15.0f)) {
        switch (temp_v1) {                          /* irregular */
        case 0:
            func_001C8480((void *)(temp_s0), *(s32 *)((u8 *)temp_s1 + 0xC));
            func_001E2190(temp_s0, *(s32 *)((u8 *)temp_s1 + 0xC));
            func_001E9B00(1, 0x14, 0, 0, 0, 0x3F800000);
            *(f32 *)((u8 *)temp_s1 + 4) = 0.0f;
            *(s32 *)((u8 *)temp_s1 + 8) = 1;
            goto block_16;
        case 1:
            amTask_Kill(arg0);
            return;
        }
    } else {
block_16:
        sp44 = 0x1000;
        sp48 = 0xFFFFFF;
        sp40 = var_f20;
        sp4C = 0xFFFFFF;
        func_001E11E0(temp_s0, &sp40);
    }
}

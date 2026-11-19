/* Draft (not built): func_001D92B0 at 0x001D92B0, size 0x1C4, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); llegal implicit conversion from 'int' to 'struct Game' @ 1175: *(gBattle + (var_v1 * 0x48) + 0x897E + (var_s2 * 2)) = 1;
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001D92B0.s */

// src/unk/unk_1D5B30.c func_001D92B0 cerr diff=-1/0
void func_001D92B0(u8 *arg0) {
    s32 sp50;
    s32 sp54;
    s16 temp_v1;
    s32 var_s2;
    s32 var_v1;
    s8 var_v0;
    u8 *temp_s1;

    temp_s1 = (unsigned char *)(gBattle);
    sp50 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1350);
    sp54 = 0;
    var_s2 = 0x18;
    if (*(s32 *)((u8 *)arg0 + 0x1350) == *(s32 *)((u8 *)temp_s1 + 0x8900)) {
        temp_v1 = *(s16 *)((u8 *)temp_s1 + 0x7FA);
        if ((temp_v1 != 8) && (temp_v1 != 7) && (temp_v1 != 6) && (temp_v1 != 5)) {

        } else {
            func_001D80A0((Fighter *)(arg0), (s32) ((s64) ((s64) temp_v1 << 0x30) >> 0x30));
        }
    }
    if (*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1354)) + 0x1350) != *(s32 *)((u8 *)temp_s1 + 0x8900)) {
        if (*(s16 *)((u8 *)arg0 + 0x1A58) != 0) {
            var_s2 = 0x19;
            sp54 = 2;
        }
        if ((s32)(arg0) == (s32)(*(s32 *)((u8 *)temp_s1 + 0x8934))) {
            if (*(s16 *)((u8 *)temp_s1 + 0x894C) != 0) {
                var_s2 = 0x1A;
                sp54 = 3;
            }
            if (*(s8 *)((u8 *)temp_s1 + 0x8AB8) != 0) {
                var_s2 = 0x1B;
                sp54 = 3;
            }
        }
        var_v0 = *(s8 *)((u8 *)temp_s1 + 0x8AB1);
        if (var_v0 < 0) {
            var_v0 = -var_v0;
        }
        if (*(s32 *)((u8 *)arg0 + 0x1350) == (var_v0 - 1)) {
            sp54 = 1;
        }
        if (*(s8 *)((u8 *)arg0 + 0x2015) != 0) {
            var_v1 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x1358)) + 0x1350);
        } else {
            var_v1 = *(s32 *)((u8 *)arg0 + 0x1350);
        }
        if ((var_s2 >= 0) && (var_s2 < 0x23)) {
            *(gBattle + (var_v1 * 0x48) + 0x897E + (var_s2 * 2)) = 1;
        }
    }
    func_001D9480((Fighter *)(*(u8 **)((u8 *)arg0 + 0x1354)));
    if (M2C_ERROR(/* Read from unset register $v0 */) == 0) {
        A2d_CallHandler(0xE, &sp50);
    }
}

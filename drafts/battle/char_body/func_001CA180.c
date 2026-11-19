/* Draft (not built): func_001CA180 at 0x001CA180, size 0x1F0, segment battle/char_body (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 76 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1EC, original 0x1F0
 * Original: asm/nonmatchings/battle/char_body/func_001CA180.s */

// src/battle/char_body.c func_001CA180 size diff=76/123
extern s32 D_00447446;
extern s32 D_0044744C;
extern s32 D_00447453;
u8 *func_001CA180(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 sp60;
    s32 sp70;
    s32 sp80;
    s32 sp90;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_s2;
    s32 temp_s4;
    s32 temp_v0_3;
    s32 var_v0_2;
    s32 var_v0_3;
    s8 temp_v1;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_s0;
    u8 *var_v0;

    temp_a1 = arg0 * 0x60;
    var_v0_2 = -1;
    temp_v1 = *((arg1 * 8) + (&D_00447453 + temp_a1));
    if (temp_v1 != -1) {
        var_v0_2 = temp_v1 + (arg2 * *(&D_00447446 + temp_a1));
    }
    var_s0 = NULL;
    if (var_v0_2 >= 0) {
        var_v0_3 = -1;
        if (temp_v1 != -1) {
            var_v0_3 = temp_v1 + (arg2 * *(&D_00447446 + temp_a1));
        }
        var_s0 = (unsigned char *)(*(&D_0044744C + temp_a1) + (var_v0_3 * 8));
    }
    if (var_s0 == NULL) {
        return NULL;
    }
    var_v0 = *(u8 **)((u8 *)var_s0 + 4);
    if (var_v0 != NULL) {
loop_10:
        if (*(s32 *)((u8 *)var_v0 + 0x9C) == arg3) {
            *(s32 *)((u8 *)var_v0 + 0xA0) = (s32) (*(s32 *)((u8 *)var_v0 + 0xA0) + 1);
            return var_v0;
        }
        var_v0 = *(u8 **)((u8 *)var_v0 + 0xA8);
        if (var_v0 == NULL) {
            goto block_15;
        }
        goto loop_10;
    }
block_15:
    sp90 = 0x10;
    sp70 = 0x10;
    temp_s2 = (amObject_GetSize(&sp80, temp_a1) + 0xF) & ~0xF;
    temp_s4 = ((amMotion_CalcSize(&sp60, 0) + 0xF) & ~0xF) + (temp_s2 + 0xB0);
    temp_v0 = Character_CreateWork(2, temp_s4);
    memset(temp_v0, 0, temp_s4);
    *(u8 **)((u8 *)temp_v0 + 0x18) = (u8 *) (temp_v0 + 0xB0);
    *(u8 **)((u8 *)temp_v0 + 0x1C) = (u8 *) (temp_s2 + temp_v0 + 0xB0);
    *(u8 **)((u8 *)temp_v0 + 0x80) = var_s0;
    *(s32 *)((u8 *)temp_v0 + 0x94) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x98) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x9C) = arg3;
    *(s32 *)((u8 *)temp_v0 + 0xA0) = 1;
    *(s32 *)((u8 *)temp_v0 + 0xA4) = 0;
    *(u8 **)((u8 *)temp_v0 + 0xA8) = (u8 *) *(u8 **)((u8 *)var_s0 + 4);
    temp_v0_2 = *(u8 **)((u8 *)temp_v0 + 0xA8);
    if (temp_v0_2 != NULL) {
        *(u8 **)((u8 *)temp_v0_2 + 0xA4) = temp_v0;
    }
    *(u8 **)((u8 *)var_s0 + 4) = temp_v0;
    temp_a1_2 = *(s32 *)((u8 *)var_s0 + 0);
    if (temp_a1_2 != -1) {
        temp_v0_3 = (int)(CharBody_Load(2, temp_a1_2, 0, 0));
        *(s32 *)((u8 *)temp_v0 + 0x90) = temp_v0_3;
        *(s32 *)((u8 *)temp_v0 + 0x94) = temp_v0_3;
    }
    return temp_v0;
}

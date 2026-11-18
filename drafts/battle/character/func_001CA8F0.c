/* Draft (not built): func_001CA8F0 at 0x001CA8F0, size 0x138, segment battle/character (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 43 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x134, original 0x138
 * Original: asm/nonmatchings/battle/character/func_001CA8F0.s */

// src/battle/character.c func_001CA8F0 size diff=43/77
s32 CharBody_Init(s32);
s32 amMotion_FindBone(s32, s32 *, void *, void *);
s32 func_001C9910(void *);
extern s32 D_00469240;
extern s32 D_00469248;
void func_001CA8F0(u8 *arg0) {
    s32 temp_s1;
    s32 temp_v0;
    s32 var_a1;
    u8 *temp_a2;
    u8 *temp_a3;
    u8 *temp_s2;
    u8 *var_a0;

    if (arg0 == NULL) {
        goto block_3;
    }
    if (*(s32 *)((u8 *)arg0 + 0x24) == 0) {
        goto block_4;
    }
block_3:
    return;
block_4:
    func_001C9910(*(u8 **)((u8 *)arg0 + 0));
    CharBody_Init(*(s32 *)((u8 *)arg0 + 4));
    temp_a3 = *(u8 **)((u8 *)arg0 + 0);
    if (temp_a3 == NULL) {
        goto block_15;
    }
    temp_a2 = *(u8 **)((u8 *)temp_a3 + 0x48);
    var_a1 = 0;
    if (*(s32 *)((u8 *)temp_a2 + 4) <= 0) {
        goto block_9;
    }
    var_a0 = temp_a2;
loop_7:
    *(s32 *)((u8 *)var_a0 + 8) = 0;
    var_a1 += 1;
    var_a0 += 8;
    if (var_a1 < *(s32 *)((u8 *)temp_a2 + 4)) {
        goto loop_7;
    }
block_9:
    if (*(s32 *)((u8 *)arg0 + 0xC) == 0xE) {
        goto block_11;
    }
    goto block_15;
block_11:
    temp_s2 = *(u8 **)((u8 *)temp_a3 + 0x4C);
    temp_s1 = amMotion_FindBone(*(s32 *)((u8 *)temp_s2 + 4), &D_00469240, temp_a2, temp_a3);
    temp_v0 = amMotion_FindBone(*(s32 *)((u8 *)temp_s2 + 4), &D_00469248, 0, 0);
    if (temp_s1 < 0) {
        goto block_13;
    }
    *(s32 *)((u8 *)((temp_s1 * 8) + *(s32 *)((u8 *)temp_s2 + 0)) + 8) = -1;
block_13:
    if (temp_v0 < 0) {
        goto block_15;
    }
    *(s32 *)((u8 *)((temp_v0 * 8) + *(s32 *)((u8 *)temp_s2 + 0)) + 8) = -1;
block_15:
    *(s32 *)((u8 *)arg0 + 0x24) = 1;
    *(s32 *)((u8 *)arg0 + 0x20) = 0;
    return;
}

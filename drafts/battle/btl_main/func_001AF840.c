/* Draft (not built): func_001AF840 at 0x001AF840, size 0x138, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 42 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x134, original 0x138
 * Original: asm/nonmatchings/battle/btl_main/func_001AF840.s */

// src/battle/btl_main.c func_001AF840 size diff=42/77
void func_001AF840(void *arg0) {
    BattleWork *temp_s2;
    s32 (**var_s1)(u8 *);
    s32 (*var_v0)(u8 *);
    s32 temp_v0;

    if (*D_004B4B40 == 0x19) {
        goto block_8;
    }
    if (*D_004B4B40 == 0x15) {
        goto block_8;
    }
    if (*D_004B4B40 == 0x14) {
        goto block_8;
    }
    if (*D_004B4B40 == 0x12) {
        goto block_8;
    }
    if (*D_004B4B40 == 0xF) {
        goto block_8;
    }
    if (*D_004B4B40 == 9) {
        goto block_8;
    }
    if (*D_004B4B40 == 3) {
        goto block_8;
    }
    return;
block_8:
    *(s32 *)((u8 *)arg0 + 0x30) = (s32) (*(s32 *)((u8 *)arg0 + 0x30) - 1);
    if (*(s32 *)((u8 *)arg0 + 0x30) >= 0) {
        goto block_15;
    }
    func_001CA460(2, 0);
    var_v0 = *D_00468240;
    temp_s2 = gBattle;
    var_s1 = D_00468240;
    if (var_v0 == NULL) {
        goto block_14;
    }
loop_11:
    temp_v0 = var_v0(&temp_s2->unk0000[0x690]);
    if (temp_v0 == 0) {
        goto block_13;
    }
    *(s32 *)((u8 *)temp_s2 + 0x8970) = temp_v0;
block_13:
    var_s1 += 4;
    var_v0 = *var_s1;
    if (var_v0 != NULL) {
        goto loop_11;
    }
block_14:
    amTask_Kill(arg0);
    amTask_Create((void (*)(u8 *)) Btl_TaskInit, (void *)(NULL), 0x4000, 0x20, (s32)(M2C_ERROR(/* Read from unset register $a4 */)), (char *)(M2C_ERROR(/* Read from unset register $a5 */)));
block_15:
    return;
}

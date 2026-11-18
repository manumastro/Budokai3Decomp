/* Draft (not built): func_00300800 at 0x00300800, size 0x1D4, segment unk/unk_2FAFF0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 76 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1CC, original 0x1D4
 * Original: asm/nonmatchings/unk/unk_2FAFF0/func_00300800.s */

// src/unk/unk_2FAFF0.c func_00300800 size diff=76/115
s32 SoundRpc_SetVolume(s32, s32, void *, f32);
extern f32 D_004E0614;
extern s8 D_005D0082;
extern void *amTask_Create();
extern void SoundRpc_Send3();
void func_00300800(u8 *arg0) {
    f32 sp5C;
    f32 temp_f1;
    f32 temp_f20;
    s32 temp_a1;
    s32 var_s1;
    s64 temp_a1_2;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_v0;
    u8 *temp_v1;

    temp_a1 = *(s32 *)((u8 *)arg0 + 0x30);
    temp_a2 = *(u8 **)((u8 *)gTourMap + 0x44);
    temp_f20 = *(f32 *)((u8 *)temp_a2 + 0x30);
    *(s32 *)((u8 *)arg0 + 0x30) = (s32) (temp_a1 + 1);
    if ((temp_a1 % 10) != 1) {
        goto block_3;
    }
    SoundRpc_SetVolume(1, 0, temp_a2, D_004E0614);
    if (D_004E0614 <= 0.0f) {
        goto block_3;
    }
    SoundRpc_Send3(1, 0, 1, 0);
block_3:
    var_s1 = 0;
    goto loop_9;
block_4:
    temp_v1 = (u8 *)(gTourMap + (var_s1 * 0x14));
    temp_s0 = temp_v1 + 0x2EC;
    if (*(u8 *)((u8 *)temp_v1 + 0x2F1) != 0) {
        goto block_8;
    }
    if (*(s16 *)((u8 *)temp_s0 + 0xA) != -1) {
        goto block_8;
    }
    temp_a1_2 = (s64) ((s64) D_005D0082 << 0x38) >> 0x38;
    temp_f1 = 200.0f + ((f32) ((((1 << temp_a1_2) - 1) * 0x64) + 0x190 + (temp_a1_2 * 5)) / -2.0f) + (f32) (var_s1 * 0x64);
    sp5C = temp_f1;
    if (!((temp_f1 - temp_f20) <= 30.0f)) {
        goto block_11;
    }
    temp_v0 = amTask_Create(&func_00300760, 0, 0x3000, 0x200);
    *(s32 *)((u8 *)temp_v0 + 0x30) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x34) = 0;
    *(u8 **)((u8 *)temp_v0 + 0x48) = temp_s0;
    *(s8 *)((u8 *)temp_s0 + 5) = 1;
    *(s8 *)((u8 *)temp_s0 + 6) = 1;
block_8:
    var_s1 += 1;
loop_9:
    if (var_s1 < (1 << D_005D0082)) {
        goto block_4;
    }
    amTask_Kill(arg0);
block_11:
    return;
}

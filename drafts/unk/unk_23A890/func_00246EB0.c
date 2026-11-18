/* Draft (not built): func_00246EB0 at 0x00246EB0, size 0x1A4, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); (*)(), int, int, int, void *)' @ 2170: *(u8 **)((u8 *)temp_s0 + 0x24) = amTask_Create(&func_00244660, 0, 0x5900, 0x400);
 * Original: asm/nonmatchings/unk/unk_23A890/func_00246EB0.s */

// src/unk/unk_23A890.c func_00246EB0 cerr diff=-1/0
extern void func_00244660(void);
void func_00246EB0(u8 *arg0) {
    f32 var_f1;
    f32 var_f1_2;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s0_2;
    u8 *temp_v0;
    u8 *temp_v1;
    u8 *temp_v1_2;

    if (*(s32 *)((u8 *)arg0 + 0xB9C) == 0x2A) {
        *(s16 *)((u8 *)D_0046FE4C + 0x91A) = 0;
        temp_v0 = D_0046FE4C + (*(s32 *)((u8 *)arg0 + 0x1350) * 0x480);
        temp_a0 = *(u8 **)((u8 *)temp_v0 + 0x34);
        if (temp_a0 != NULL) {
            amTask_Kill((s32)((void *)(temp_a0)));
            *(s32 *)((u8 *)(temp_v0 + 0x10) + 0x24) = 0;
        }
        func_00215040((s16) *(s32 *)((u8 *)arg0 + 0x1350), 0x800, 0xC6);
        temp_v1 = D_0046FE4C + (*(s32 *)((u8 *)arg0 + 0x1350) * 0x480);
        temp_s0 = temp_v1 + 0x10;
        if (*(s32 *)((u8 *)temp_v1 + 0x34) == 0) {
            *(u8 **)((u8 *)temp_s0 + 0x24) = amTask_Create(&func_00244660, 0, 0x5900, 0x400);
            temp_v1_2 = *(u8 **)((u8 *)temp_s0 + 0x24);
            if (temp_v1_2 != NULL) {
                temp_s0_2 = temp_v1_2 + 0x30;
                memset(temp_s0_2, 0, 0x18);
                *(s32 *)((u8 *)temp_s0_2 + 0x10) = 0;
                if (gBattle != NULL) {
                    var_f1 = *(f32 *)((u8 *)gBattle + 0x88F0);
                } else if (D_004703F4 != 3) {
                    var_f1 = 1.0f;
                } else {
                    var_f1 = 1.2f;
                }
                *(f32 *)((u8 *)temp_s0_2 + 0x14) = (f32) (800.0f * var_f1);
                if (gBattle != NULL) {
                    var_f1_2 = *(f32 *)((u8 *)gBattle + 0x88F0);
                } else if (D_004703F4 != 3) {
                    var_f1_2 = 1.0f;
                } else {
                    var_f1_2 = 1.2f;
                }
                *(f32 *)((u8 *)temp_s0_2 + 0xC) = (f32) (400.0f * var_f1_2);
                *(u8 **)((u8 *)temp_v1_2 + 0x30) = arg0;
            }
        }
    }
}

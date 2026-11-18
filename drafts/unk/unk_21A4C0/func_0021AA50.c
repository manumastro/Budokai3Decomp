/* Draft (not built): func_0021AA50 at 0x0021AA50, size 0xD4, segment unk/unk_21A4C0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); ask_Create(&func_0021A930 + 0x20, 0, 0x3700, 0x400); @ 47: *(u8 **)((u8 *)temp_v0 + 8) = (u8 *) (&func_0021A930 + 0x40);
 * Original: asm/nonmatchings/unk/unk_21A4C0/func_0021AA50.s */

// src/unk/unk_21A4C0.c func_0021AA50 cerr diff=-1/0
void *func_00215320(s16, s32);
s32 memcpy(void *, void *, s32);
extern s32 D_0046FDD8;
extern void *amTask_Create();
extern void func_0021A930(void);
void func_0021AA50(u8 *arg0) {
    u8 *temp_s0;
    u8 *temp_v0;

    temp_v0 = func_00215320(*(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x30)) + 0x1350), 1);
    if (temp_v0 != NULL) {
        *(u8 **)((u8 *)temp_v0 + 8) = (u8 *) (&func_0021A930 + 0x40);
        temp_s0 = temp_v0 + 0x20;
        *(s32 **)((u8 *)temp_v0 + 0xC) = &func_0021A930;
        *(s32 *)((u8 *)temp_v0 + 0x18) = 0xBF800000;
        memcpy(temp_s0, arg0, 0x60);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($s0) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        *(u8 **)((u8 *)temp_s0 + 0x44) = amTask_Create(&func_0021A930 + 0x20, 0, 0x3700, 0x400);
        *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x44)) + 0x30) = temp_s0;
        *(&D_0046FDD8 + (*(s16 *)((u8 *)temp_s0 + 0x52) * 4))(temp_s0);
    }
}

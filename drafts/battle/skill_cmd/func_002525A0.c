/* Draft (not built): func_002525A0 at 0x002525A0, size 0x1DC, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); = amTask_Create(&func_002523B0, 0, 0x3710, 0x400); @ 1143: *(u8 **)((u8 *)temp_v0 + 8) = (u8 *) (&func_00252410 + 0x30);
 * Original: asm/nonmatchings/battle/skill_cmd/func_002525A0.s */

// src/battle/skill_cmd.c func_002525A0 cerr diff=-1/0
extern s32 amTask_Create(void (*)(void *), void *, s32, s32, s32, char *);
void *func_00215320(s16, s32);
extern s32 D_00450190;
extern void func_00252410(void);
void func_002525A0(u8 *arg0, u8 *arg1, s32 arg2) {
    s16 temp_t3;
    s16 var_v0;
    s32 temp_v0_2;
    u8 *temp_s0;
    u8 *temp_v0;
    u8 *temp_v0_3;
    u8 *temp_v1;

    temp_v0 = func_00215320(*(s16 *)((u8 *)arg0 + 0x1350), 1);
    if (temp_v0 != NULL) {
        *(u8 **)((u8 *)temp_v0 + 8) = (u8 *) (&func_00252410 + 0x30);
        temp_s0 = temp_v0 + 0x20;
        *(s32 **)((u8 *)temp_v0 + 0xC) = (int *)(&func_00252410);
        *(s32 *)((u8 *)temp_v0 + 0x18) = 0xBF800000;
        temp_v1 = D_0046FE4C + ((s32) *(s16 *)((u8 *)arg0 + 0x1350) * 0x480) + 0x10;
        if (arg2 != 0) {
            if (gBattle != NULL) {
                var_v0 = *(s16 *)((u8 *)gBattle + 0x8944);
            } else {
                var_v0 = 0;
            }
            if (var_v0 != 0) {
                M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s1) */);
                M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
                *(s16 *)((u8 *)temp_s0 + 4) = (s16) (*(s16 *)((u8 *)temp_s0 + 4) | 4);
            }
        }
        *(f32 *)((u8 *)temp_v0 + 0x20) = (f32) *(f32 *)((u8 *)arg1 + 0x24);
        *(s16 *)((u8 *)temp_s0 + 6) = (s16) *(s32 *)((u8 *)arg1 + 0xC8);
        *(u8 **)((u8 *)temp_s0 + 8) = arg0;
        *(u8 **)((u8 *)temp_s0 + 0xC) = arg1;
        *(s32 *)((u8 *)temp_v1 + 0x18) = 0;
        if (*(s32 *)((u8 *)arg1 + 0xD8) != 0) {
            *(s16 *)((u8 *)temp_s0 + 4) = (s16) (*(s16 *)((u8 *)temp_s0 + 4) | 0x1C00);
        } else {
            *(s16 *)((u8 *)temp_s0 + 4) = (s16) (*(s16 *)((u8 *)temp_s0 + 4) | 0x1400);
        }
        temp_t3 = *(s16 *)((u8 *)temp_s0 + 6);
        temp_v0_2 = *(s16 *)((u8 *)temp_v1 + 0x2A) * 0x19;
        *(s16 *)((u8 *)temp_s0 + 6) = (s16) (temp_t3 + ((s64) ((((temp_t3 * temp_v0_2) / 100) + ((u32) (temp_t3 * temp_v0_2) >> 0x1F)) << 0x30) >> 0x30));
        *(u8 **)((u8 *)D_0046FE54 + 0x10) = amTask_Create(&func_002523B0, 0, 0x3710, 0x400);
        temp_v0_3 = *(u8 **)((u8 *)D_0046FE54 + 0x10);
        memset(temp_v0_3 + 0x30, 0, 8);
        *(u8 **)((u8 *)temp_v0_3 + 0x30) = temp_s0;
        *(&D_00450190 + (*(s16 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0xC)) + 0x10) * 4))(temp_s0);
    }
}

/* Draft (not built): func_001F1890 at 0x001F1890, size 0x16C, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 31 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x168, original 0x16C
 * Original: asm/nonmatchings/battle/btb_draw/func_001F1890.s */

// src/battle/btb_draw.c func_001F1890 size diff=31/90
extern void func_00142100(void *, void *);
void func_001F1890(u8 *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    u8 *temp_s0;

    D_00470238 = 0;
    temp_s0 = arg0 + 0x30;
    amModel_SetCurrent(*(s32 *)((u8 *)arg0 + 0x60), 0x02003000);
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x20);
    if (!(temp_v1 & 0x800)) {
        if (temp_v1 & 0x8000) {
            goto block_3;
        }
    } else {
block_3:
        if (*(s32 *)((u8 *)arg0 + 0x30) != 0) {
            BtbBg_GetStageModel();
            M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
            M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
            *(f32 *)((u8 *)(&D_0051CCD0) + 0xC) = 1.0f;
            D_0047064C = (s32)(&D_0051CCD0);
        }
        if (!(*(f32 *)((u8 *)gBattle + 0x892C) <= 0.0f)) {
            func_00133D80(*(s32 *)((u8 *)gBattle + 0x8928));
            func_00133D90(*(f32 *)((u8 *)gBattle + 0x892C));
            DrawFlags_Apply(0x8000, 0, 0, 0x8000, 0);
        }
    }
    func_0013B0B0(NULL);
    func_00142100(temp_s0 + 0x20, temp_s0 + 0x10);
    func_00208D70((s32)((void *)(*(u8 **)((u8 *)temp_s0 + 0x38))));
    func_0013B110(1);
    temp_a0 = *(s32 *)((u8 *)arg0 + 0x20);
    if (!(temp_a0 & 0x800)) {
        if (temp_a0 & 0x8000) {
            goto block_10;
        }
    } else {
block_10:
        D_0047064C = (s32)(NULL);
        if (!(*(f32 *)((u8 *)gBattle + 0x892C) <= 0.0f)) {
            DrawFlags_Apply(0, 0x8000, 0, 0, 0);
        }
    }
}

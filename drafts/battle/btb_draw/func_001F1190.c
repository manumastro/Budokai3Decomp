/* Draft (not built): func_001F1190 at 0x001F1190, size 0x1EC, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operand @ 3621: if (D_0047064C != NULL) {
 * Original: asm/nonmatchings/battle/btb_draw/func_001F1190.s */

// src/battle/btb_draw.c func_001F1190 cerr diff=-1/0
extern void amModel_SetCurrent(s32, s32);
extern void *BtbBg_GetStageModel(void);
extern void func_00133D80(s32);
extern void func_00133D90(f32);
extern void func_0013B0B0(void *);
extern void func_0013B110(s32);
extern void DrawFlags_Apply(s32, s32, s32, s32, s32);
extern s32 gBattle;
extern s32 D_0047064C;
extern f32 D_0051CCD0[];
extern void func_0013E170(s32);
extern void func_0012F2C0(void);
extern void func_001339B0(void *);
void func_001F1190(u8 *arg0) {
    s32 temp_v1;
    s32 temp_v1_2;

    D_00470238 = 0;
    amModel_SetCurrent(*(s32 *)((u8 *)arg0 + 0x38), 0x02005000);
    func_00133780(0, 0);
    temp_v1 = *(s32 *)((u8 *)arg0 + 0x20);
    if ((temp_v1 & 0x800) || (temp_v1 & 0x8000)) {
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
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: vmulax.xyzw ACC, $vf28, $vf1x */);
    M2C_ERROR(/* unknown instruction: vmadday.xyzw ACC, $vf29, $vf1y */);
    M2C_ERROR(/* unknown instruction: vmaddaz.xyzw ACC, $vf30, $vf1z */);
    M2C_ERROR(/* unknown instruction: vmaddw.xyzw $vf31, $vf31, $vf0w */);
    if (D_0047064C != NULL) {
        DrawFlags_Apply(0x700, 0, 0, 0x300, 0);
        func_001339B0((void *)(D_0047064C));
    }
    func_0013E170(*(s32 *)((u8 *)(arg0 + 0x30) + 0x14));
    func_0013B110(1);
    temp_v1_2 = *(s32 *)((u8 *)arg0 + 0x20);
    if ((temp_v1_2 & 0x800) || (temp_v1_2 & 0x8000)) {
        D_0047064C = (s32)(NULL);
        if (!(*(f32 *)((u8 *)gBattle + 0x892C) <= 0.0f)) {
            DrawFlags_Apply(0, 0x8000, 0, 0, 0);
        }
    }
    func_00133980(0x3F800000, 0x3F800000, 0x3F800000, 0x3F800000);
    DrawFlags_Apply(0x700, 0, 0, 0, 0);
    func_00133780(0, 1);
    func_0012F2C0();
}

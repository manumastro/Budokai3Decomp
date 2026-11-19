/* Draft (not built): func_002918A0 at 0x002918A0, size 0xC8, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 39 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xA0, original 0xC8
 * Original: asm/nonmatchings/unk/unk_2918A0/func_002918A0.s */

// src/unk/unk_2918A0.c func_002918A0 size diff=39/40
extern s32 D_005AA620;
extern void *D_005AA638;
extern s32 D_005AA63C;
extern s32 D_005AA644;
extern s32 D_005AA66C;
extern void Ball_Start(void);
extern void func_002BFC50(void);
extern void func_00292A40(void);
void func_002918A0(void) {
    s32 *var_v1;

    D_005AA620 = 0;
    D_005AA664[0] = 0;
    D_005AA66C = 0;
    D_005AA640[0] = 0;
    D_005AA63C = 0;
    *(s32 *)((u8 *)D_005AA604 + 0x11D4) = -1;
    *(s32 *)((u8 *)D_005AA604 + 0x11D8) = -1;
    D_005AA644 = 0;
    if (D_005AA638 != NULL) {
        *(f32 *)((u8 *)D_005AA604 + 0x11C0) = (f32) *(f32 *)((u8 *)D_005AA638 + 0x10);
        *(f32 *)((u8 *)D_005AA604 + 0x11C8) = (f32) *(f32 *)((u8 *)D_005AA638 + 0x18);
    }
    func_002BFC50();
    Ball_Start();
    var_v1 = (int *)(&func_00292A40);
    if (&func_00292A40 == NULL) {
        var_v1 = NULL;
    }
    *(s32 **)((u8 *)(*D_005AA5A0) + 0x1C) = var_v1;
}

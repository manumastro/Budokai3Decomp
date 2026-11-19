/* Draft (not built): func_002DDCA0 at 0x002DDCA0, size 0x94, segment unk/unk_2DB970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 33 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2DB970/func_002DDCA0.s */

// src/unk/unk_2DB970.c func_002DDCA0 diff diff=33/37
extern s32 D_00456B80;
void func_002DDCA0(void) {
    u8 sp[0x400];
    s32 sp10;
    f32 temp_f1;
    f32 var_f1;

    *(s128 *)((u8 *)(&sp10) + 0) = (s128) *(s128 *)((u8 *)(&D_00456B80) + 0);
    *(s64 *)((u8 *)(&sp10) + 0x10) = (s64) *(s64 *)((u8 *)(&D_00456B80) + 0x10);
    if (D_004703F4 != 3) {
        var_f1 = 1.0f;
    } else {
        var_f1 = 1.2f;
    }
    temp_f1 = *(f32 *)((u8 *)gOptionWork + 0x388) + var_f1;
    *(f32 *)((u8 *)gOptionWork + 0x388) = temp_f1;
    if (!(temp_f1 < *(f32 *)((u8 *)((*(s32 *)((u8 *)gOptionWork + 0x378) * 4) + sp) + 0x10))) {
        *(f32 *)((u8 *)gOptionWork + 0x388) = 0.0f;
        func_002DDAD0(D_004703F4, *(s128 *)((u8 *)(&D_00456B80) + 0), &sp10, gOptionWork);
    }
}

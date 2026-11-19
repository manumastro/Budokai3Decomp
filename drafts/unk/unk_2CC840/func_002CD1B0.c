/* Draft (not built): func_002CD1B0 at 0x002CD1B0, size 0x118, segment unk/unk_2CC840 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 20 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2CC840/func_002CD1B0.s */

s32 *BtlSys_GetSlot(s32);
s32 func_0021C360(s32);
extern f32 D_00470710;
extern s32 D_00470920;
extern void amTask_Kill(void *);
void func_002CD1B0(u8 *arg0) {
    u8 *var_s3;
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1;
    u8 *var_s4;
    var_s4 = arg0;
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        var_s3 = var_s4 + 0x30;
        var_s2 = *(s32 *)((u8 *)var_s4 + 0x30) + 0x30;
        func_0021C660(*(s32 *)((u8 *)var_s4 + 0x3C));
        var_s1 = M2C_ERROR();
        temp_v0 = func_0021C360(*(s32 *)((u8 *)var_s3 + 0xC));
        *(f32 *)((u8 *)var_s3 + 8) = (f32)(*(f32 *)((u8 *)var_s3 + 8) + D_00470710);
        var_s0 = temp_v0;
        if (*BtlSys_GetSlot(*(s32 *)((u8 *)var_s3 + 0xC)) & 0x80) {
            if (D_00470920 == 0) {
                func_002CCB70(var_s2, var_s1, var_s0, 1);
                D_00470920 = 1;
            }
        } else {
            D_00470920 = 0;
        }
        func_002CC840(var_s2, var_s1, 1);
        if (!(*(f32 *)((u8 *)var_s3 + 8) < 30.0f)) {
            amTask_Kill(var_s4);
        }
    }
}

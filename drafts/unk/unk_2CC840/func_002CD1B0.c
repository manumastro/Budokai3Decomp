/* Draft (not built): func_002CD1B0 at 0x002CD1B0, size 0x118, segment unk/unk_2CC840 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal use of type 'void' @ 97: temp_s1 = func_0021C660(*(s32 *)((u8 *)arg0 + 0x3C));
 * Original: asm/nonmatchings/unk/unk_2CC840/func_002CD1B0.s */

// src/unk/unk_2CC840.c func_002CD1B0 cerr diff=-1/0
s32 *BtlSys_GetSlot(s32);
s32 func_0021C360(s32);
extern f32 D_00470710;
extern s32 D_00470920;
extern void amTask_Kill(void *);
void func_002CD1B0(u8 *arg0) {
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0;
    s32 var_v1;
    u8 *temp_s3;

    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        temp_s3 = arg0 + 0x30;
        temp_s2 = *(s32 *)((u8 *)arg0 + 0x30) + 0x30;
        temp_s1 = func_0021C660(*(s32 *)((u8 *)arg0 + 0x3C));
        temp_v0 = func_0021C360(*(s32 *)((u8 *)temp_s3 + 0xC));
        *(f32 *)((u8 *)temp_s3 + 8) = (f32) (*(f32 *)((u8 *)temp_s3 + 8) + D_00470710);
        if (*BtlSys_GetSlot(*(s32 *)((u8 *)temp_s3 + 0xC)) & 0x80) {
            if (D_00470920 == 0) {
                func_002CCB70(temp_s2, temp_s1, temp_v0, 1);
                D_00470920 = 1;
            }
        } else {
            D_00470920 = 0;
        }
        func_002CC840(temp_s2, temp_s1, 1);
        if (!(*(f32 *)((u8 *)temp_s3 + 8) < 30.0f)) {
            amTask_Kill(arg0);
        }
    }
}

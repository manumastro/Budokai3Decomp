/* Draft (not built): func_002CD2D0 at 0x002CD2D0, size 0x1AC, segment unk/unk_2CC840 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal use of type 'void' @ 110: temp_s1 = func_0021C660(*(s32 *)((u8 *)arg0 + 0x3C));
 * Original: asm/nonmatchings/unk/unk_2CC840/func_002CD2D0.s */

// src/unk/unk_2CC840.c func_002CD2D0 cerr diff=-1/0
s32 *BtlSys_GetSlot(s32);
s32 func_0021C360(s32);
s32 func_0022C060(s32, s32);
extern s32 D_00470238;
extern s32 D_00470708;
extern s32 D_0047070C;
extern f32 D_00470710;
extern s32 D_00470920;
extern void *gBtlSys;
extern void *D_00470704;
extern void amModel_SetCurrent();
extern void func_002CD1B0(void);
void func_002CD2D0(u8 *arg0) {
    s32 *var_v1_2;
    s32 temp_a0_2;
    s32 temp_v0;
    s32 var_v1;
    u8 *temp_a0;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_s4;

    temp_s4 = gBtlSys;
    if (gBattle != NULL) {
        var_v1 = *(s32 *)((u8 *)gBattle + 0x88EC);
    } else {
        var_v1 = 0;
    }
    if (var_v1 == 0) {
        temp_s3 = arg0 + 0x30;
        temp_s2 = (u8 *)(*(s32 *)((u8 *)arg0 + 0x30) + 0x30);
        temp_s1 = func_0021C660(*(s32 *)((u8 *)arg0 + 0x3C));
        temp_v0 = func_0021C360(*(s32 *)((u8 *)temp_s3 + 0xC));
        *(f32 *)((u8 *)temp_s3 + 8) = (f32) (*(f32 *)((u8 *)temp_s3 + 8) + D_00470710);
        if (*BtlSys_GetSlot(*(s32 *)((u8 *)temp_s3 + 0xC)) & 0x80) {
            if (D_00470920 == 0) {
                func_002CCB70(temp_s2, temp_s1, temp_v0, 2);
                D_00470920 = 1;
            }
        } else {
            D_00470920 = 0;
        }
        func_002CC840(temp_s2, temp_s1, 2);
        temp_a0 = *(u8 **)((u8 *)temp_s4 + 0xE84);
        D_00470704 = temp_a0;
        D_0047070C = 0x04010000;
        D_00470708 = 0;
        amModel_SetCurrent(temp_a0, 0x04010000);
        D_00470238 = 0;
        func_0022C060(*(s32 *)((u8 *)temp_s2 + 0x14), 0x3F800000);
        temp_a0_2 = *(s32 *)((u8 *)temp_s1 + 0xCC);
        if (temp_a0_2 & 0x20040000) {
            if ((*(f32 *)((u8 *)temp_s3 + 8) < *(f32 *)((u8 *)temp_s3 + 4)) || (temp_a0_2 & 0x20000000)) {
                return;
            }
            goto block_13;
        }
        if (*(f32 *)((u8 *)temp_s1 + 0xE4) <= 0.0f) {
block_13:
            *(f32 *)((u8 *)temp_s3 + 8) = 0.0f;
            func_002CCB70(temp_s2, temp_s1, temp_v0, 1);
            var_v1_2 = (s32 *)(&func_002CD1B0);
            if (&func_002CD1B0 == NULL) {
                var_v1_2 = NULL;
            }
            *(s32 **)((u8 *)arg0 + 0x1C) = var_v1_2;
        }
    }
}

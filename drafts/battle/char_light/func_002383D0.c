/* Draft (not built): func_002383D0 at 0x002383D0, size 0x240, segment battle/char_light (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); nversion from 'int' to 'int (*)(unsigned char *)' @ 934: temp_v1 = *(&D_0046AAF0 + (*(s32 *)((u8 *)temp_s0 + 0xC) * 4));
 * Original: asm/nonmatchings/battle/char_light/func_002383D0.s */

// src/battle/char_light.c func_002383D0 cerr diff=-1/0
s32 func_0022BF80(void *);
s32 func_0022C060(void *, s32);
extern s32 D_0046AAF0;
extern s32 D_0058BF10;
extern s32 D_0058BF14;
void func_002383D0(u8 *arg0) {
    s32 (*temp_v1)(u8 *);
    s16 temp_v1_2;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_a1;
    u8 **var_s0;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_s0;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *var_a0;

    temp_s0 = arg0 + 0x30;
    if (*(s32 *)((u8 *)gBattle + 0x88EC) == 0) {
        temp_v1 = *(&D_0046AAF0 + (*(s32 *)((u8 *)temp_s0 + 0xC) * 4));
        if (temp_v1 != NULL) {
            temp_v1(temp_s0);
            return;
        }
        if (*(f32 *)((u8 *)temp_s0 + 4) != -1.0f) {
            *(f32 *)((u8 *)arg0 + 0x30) = (f32) (*(f32 *)((u8 *)arg0 + 0x30) + D_00470710);
            if (*(u8 **)((u8 *)temp_s0 + 0x10) != NULL) {
                temp_a3 = *(s32 *)((u8 *)temp_s0 + 0xC);
                var_a0 = NULL;
                temp_a2 = temp_a3 * 0xC;
                temp_v1_2 = *(((u8 *)&D_0046A982) + temp_a2);
                var_a1 = 0;
                switch (temp_v1_2) {                /* irregular */
                case 0:
                    var_a0 = *(u8 **)((u8 *)gBtlSys + 0xED0);
                    var_a1 = 0x04030000;
                    break;
                case 1:
                    var_a0 = *(u8 **)((u8 *)gBtlSys + 0xE84);
                    var_a1 = 0x04010000;
                    break;
                }
                D_00470704 = (int)(var_a0);
                D_0047070C = var_a1;
                D_00470708 = 0;
                amModel_SetCurrent((s32)(var_a0), (s32)(var_a1));
                D_00470238 = 0;
                func_00228430(0);
                func_002284D0(0);
                func_0022C060(*(u8 **)((u8 *)temp_s0 + 0x10), 0x3F800000);
                func_00228410();
                if ((*(s32 *)((u8 *)temp_s0 + 0xC) == 0x16) && (D_0058BF10 != 0)) {
                    temp_v0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x10)) + 0x30);
                    *(f32 *)((u8 *)temp_v0 + 0x24) = (f32) (*(f32 *)((u8 *)temp_v0 + 0x24) + 28.0f);
                }
                if ((*(s32 *)((u8 *)temp_s0 + 0xC) == 0x17) && (D_0058BF14 != 0)) {
                    temp_v0_2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x10)) + 0x30);
                    *(f32 *)((u8 *)temp_v0_2 + 0x24) = (f32) (*(f32 *)((u8 *)temp_v0_2 + 0x24) + 28.0f);
                }
                if ((func_0022BF80(*(u8 **)((u8 *)temp_s0 + 0x10)) == 0xFF) && (D_0047072C != 0)) {
                    var_s0 = (unsigned char **)(((u8 *)&D_0058BEB0) + (*(s32 *)((u8 *)temp_s0 + 0xC) * 4));
                    temp_a0 = *var_s0;
                    if (temp_a0 != NULL) {
                        amTask_Kill(temp_a0);
                        goto block_26;
                    }
                }
            } else if (!(*(f32 *)((u8 *)arg0 + 0x30) < *(f32 *)((u8 *)temp_s0 + 4)) && (D_0047072C != 0)) {
                var_s0 = (unsigned char **)(((u8 *)&D_0058BEB0) + (*(s32 *)((u8 *)temp_s0 + 0xC) * 4));
                temp_a0_2 = *var_s0;
                if (temp_a0_2 != NULL) {
                    amTask_Kill(temp_a0_2);
block_26:
                    *var_s0 = NULL;
                }
            }
        }
    }
}

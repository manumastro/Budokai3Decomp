/* Draft (not built): func_001E9980 at 0x001E9980, size 0x17C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 35 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x198, original 0x17C
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E9980.s */

// src/unk/unk_1D5B30.c func_001E9980 size diff=35/102
s32 func_00143B50(s32, s32);
extern s32 gSoundState;
extern void amCdFs_ReleaseCache(void *);
extern void amSound_LoadBank();
extern void amSound_LoadStream();
void func_001E9980(u8 *arg0) {
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a2;
    s32 var_s0;
    s32 var_v1;
    u8 *temp_a0_2;
    u8 *temp_s1;
    u8 *var_s2;

    temp_s1 = arg0 + 0x30;
    var_s2 = (u8 *)(gBattle + 0x290);
    if (gSoundState == 0) {
        temp_a0 = *(s32 *)((u8 *)temp_s1 + 8);
        temp_a2 = *(s32 *)((u8 *)temp_s1 + 4);
        if (temp_a2 >= temp_a0) {
            var_s0 = 0;
            if (temp_a0 > 0) {
                do {
                    temp_a0_2 = *(u8 **)((u8 *)var_s2 + 0x30);
                    if (temp_a0_2 != NULL) {
                        amCdFs_ReleaseCache(temp_a0_2);
                        *(u8 **)((u8 *)var_s2 + 0x30) = NULL;
                    }
                    func_00143B50(*(s32 *)((u8 *)var_s2 + 0x20) + 9, *(s32 *)((u8 *)var_s2 + 0));
                    var_s0 += 1;
                    var_s2 += 0xCC;
                } while (var_s0 < *(s32 *)((u8 *)temp_s1 + 8));
            }
            amTask_Kill(arg0);
            D_004705D4 = 0;
            return;
        }
        temp_a0_3 = *(s32 *)((u8 *)arg0 + 0x30);
        switch (temp_a0_3) {                        /* irregular */
        case 0:
            var_v1 = temp_a2 + 1;
            if (*(s32 *)((u8 *)((temp_a2 * 0xCC) + var_s2) + 0x30) == 0) {
block_20:
                *(s32 *)((u8 *)temp_s1 + 4) = var_v1;
            } else {
                *(s32 *)((u8 *)arg0 + 0x30) = 1;
            case 1:
                amSound_LoadStream(var_s2 + (*(s32 *)((u8 *)temp_s1 + 4) * 0xCC), 1, temp_a2);
                *(s32 *)((u8 *)arg0 + 0x30) = 2;
                return;
            }
            break;
        case 2:
            amSound_LoadBank(var_s2 + (temp_a2 * 0xCC) + 0x20, 1, temp_a2);
            *(s32 *)((u8 *)arg0 + 0x30) = 0;
            var_v1 = *(s32 *)((u8 *)temp_s1 + 4) + 1;
            goto block_20;
        }
    }
}

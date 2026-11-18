/* Draft (not built): func_00242870 at 0x00242870, size 0x198, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); onversion from 'unsigned char *' to 'int' mwccps2.exe Compiler: @ 1300: temp_v0 = (s32)(func_001A50F0(temp_s3, var_s4));
 * Original: asm/nonmatchings/unk/unk_23A890/func_00242870.s */

// src/unk/unk_23A890.c func_00242870 cerr diff=-1/0
extern s32 D_0046ACB8;
void func_00242870(void) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s4;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v0;

    temp_s0 = *(u8 **)((u8 *)D_0046FE48 + 0x3C8);
    if (temp_s0 != NULL) {
        *(u8 **)((u8 *)D_0046FE48 + 0x3C8) = (u8 *) *(u8 **)((u8 *)temp_s0 + 0x40);
        *(u8 **)((u8 *)D_0046FE48 + 0x3CC) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x40)) + 0x50);
        amFile_Load(*(u8 **)((u8 *)D_0046FE48 + 0x3CC));
        *(u8 **)((u8 *)temp_s0 + 0x40) = NULL;
        amCdFs_Close((s32)(temp_s0), 0);
        temp_s3 = *(u8 **)((u8 *)D_0046FE48 + 0x3CC);
        var_s4 = 0;
        if (*(s32 *)((u8 *)temp_s3 + 0x10) > 0) {
            var_s0 = 0;
            do {
                temp_s2 = (u8 *)(BtlCmd_GetMotEntry(temp_s3, var_s4));
                temp_v0 = (s32)(func_001A50F0(temp_s3, var_s4));
                temp_a0 = temp_v0;
                if (*(s32 *)((u8 *)temp_s2 + 8) >= 0) {
                    amFile_Load(temp_a0);
                } else if (func_00127E88(temp_v0, &D_0046ACB8, 4) == 0) {
                    func_0020A100(temp_v0);
                }
                *(u8 **)((u8 *)(D_0046FE48 + var_s0) + 0x348) = temp_v0;
                if (*(s32 *)((u8 *)temp_s2 + 8) == 1) {
                    *(u8 **)((u8 *)(D_0046FE48 + var_s0) + 0x388) = amObject_Create((void *)(*(u8 **)((u8 *)(D_0046FE48 + var_s0) + 0x348)), (void *)(NULL));
                }
                var_s4 += 1;
                var_s0 += 4;
            } while (var_s4 < *(s32 *)((u8 *)temp_s3 + 0x10));
        }
    }
    var_s0_2 = 0;
    if (*(s16 *)((u8 *)D_0046FE44 + 0x102) > 0) {
        do {
            func_00242540(var_s0_2);
            var_s0_2 += 1;
        } while (var_s0_2 < *(s16 *)((u8 *)D_0046FE44 + 0x102));
    }
}

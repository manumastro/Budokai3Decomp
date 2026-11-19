/* Draft (not built): func_00242540 at 0x00242540, size 0x328, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 0A100(...)' redeclared was declared as: 'int (...)' now declared as: 'void (void *)' @ 1837: void func_0020A100(void *);
 * Original: asm/nonmatchings/unk/unk_23A890/func_00242540.s */

// src/unk/unk_23A890.c func_00242540 cerr diff=-1/0
extern s32 D_0046ACB8;
void func_00242540(s32 arg0) {
    s32 var_s0;
    s32 var_s3_2;
    s32 var_s5;
    s32 var_s6;
    u8 *temp_a0;
    u8 *temp_a0_2;
    u8 *temp_a0_3;
    u8 *temp_s1;
    u8 *temp_s2;
    u8 *temp_s2_2;
    u8 *temp_s4;
    u8 *temp_s5;
    u8 *temp_s5_2;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_5;
    u8 *var_s1;
    u8 *var_s2;
    u8 *var_s3;

    temp_s1 = D_0046FE48 + (arg0 * 0x1A4);
    temp_s2 = *(u8 **)((u8 *)temp_s1 + 0);
    if (temp_s2 != NULL) {
        *(u8 **)((u8 *)temp_s1 + 0) = (u8 *) *(u8 **)((u8 *)temp_s2 + 0x40);
        *(u8 **)((u8 *)temp_s1 + 4) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s2 + 0x40)) + 0x50);
        var_s0 = 0;
        amFile_Load(*(u8 **)((u8 *)temp_s1 + 4));
        *(u8 **)((u8 *)temp_s2 + 0x40) = NULL;
        amCdFs_Close((s32)(temp_s2), 0);
        *(s32 *)((u8 *)temp_s1 + 8) = 0;
        temp_v0 = (unsigned char *)(func_001A50F0((s32)(*(u8 **)((u8 *)temp_s1 + 4)), 0));
        amFile_Load(temp_v0);
        var_s5 = 0;
        if (*(s32 *)((u8 *)temp_v0 + 0x10) > 0) {
            var_s2 = temp_s1;
            do {
                temp_s4 = (unsigned char *)(BtlCmd_GetMotEntry(temp_v0, var_s5));
                temp_v0_2 = (unsigned char *)(func_001A50F0((s32)(temp_v0), (s32)(var_s5)));
                temp_a0 = temp_v0_2;
                if (*(s32 *)((u8 *)temp_s4 + 8) >= 0) {
                    amFile_Load(temp_a0);
                } else if (func_00127E88(temp_v0_2, &D_0046ACB8, 4) == 0) {
                    func_0020A100(temp_v0_2);
                }
                *(u8 **)((u8 *)var_s2 + 0x14) = temp_v0_2;
                if (*(s32 *)((u8 *)temp_s4 + 8) == 1) {
                    *(u8 **)((u8 *)var_s2 + 0xD4) = (unsigned char *)(amObject_Create(*(u8 **)((u8 *)var_s2 + 0x14), NULL));
                }
                var_s5 += 1;
                var_s2 += 4;
                var_s0 += 1;
            } while (var_s5 < *(s32 *)((u8 *)temp_v0 + 0x10));
        }
        *(s32 *)((u8 *)temp_s1 + 0xC) = var_s0;
        temp_v0_3 = (unsigned char *)(func_001A50F0((s32)(*(u8 **)((u8 *)temp_s1 + 4)), 1));
        amFile_Load(temp_v0_3);
        var_s6 = 0;
        if (*(s32 *)((u8 *)temp_v0_3 + 0x10) > 0) {
            var_s3 = temp_s1 + (var_s0 * 4);
            do {
                temp_s5 = (unsigned char *)(BtlCmd_GetMotEntry(temp_v0_3, var_s6));
                temp_v0_4 = (unsigned char *)(func_001A50F0((s32)(temp_v0_3), (s32)(var_s6)));
                temp_a0_2 = temp_v0_4;
                if (*(s32 *)((u8 *)temp_s5 + 8) >= 0) {
                    amFile_Load(temp_a0_2);
                } else if (func_00127E88(temp_v0_4, &D_0046ACB8, 4) == 0) {
                    func_0020A100(temp_v0_4);
                }
                *(u8 **)((u8 *)var_s3 + 0x14) = temp_v0_4;
                if (*(s32 *)((u8 *)temp_s5 + 8) == 1) {
                    *(u8 **)((u8 *)var_s3 + 0xD4) = (unsigned char *)(amObject_Create(*(u8 **)((u8 *)var_s3 + 0x14), NULL));
                }
                var_s6 += 1;
                var_s3 += 4;
                var_s0 += 1;
            } while (var_s6 < *(s32 *)((u8 *)temp_v0_3 + 0x10));
        }
        *(s32 *)((u8 *)temp_s1 + 0x10) = var_s0;
        temp_s2_2 = *(u8 **)((u8 *)temp_s1 + 4);
        var_s3_2 = 2;
        if (*(s32 *)((u8 *)temp_s2_2 + 0x10) >= 3) {
            var_s1 = temp_s1 + (var_s0 * 4);
            do {
                temp_s5_2 = (unsigned char *)(BtlCmd_GetMotEntry(temp_s2_2, var_s3_2));
                temp_v0_5 = (unsigned char *)(func_001A50F0((s32)(temp_s2_2), (s32)(var_s3_2)));
                temp_a0_3 = temp_v0_5;
                if (*(s32 *)((u8 *)temp_s5_2 + 8) >= 0) {
                    amFile_Load(temp_a0_3);
                } else if (func_00127E88(temp_v0_5, &D_0046ACB8, 4) == 0) {
                    func_0020A100(temp_v0_5);
                }
                *(u8 **)((u8 *)var_s1 + 0x14) = temp_v0_5;
                if (*(s32 *)((u8 *)temp_s5_2 + 8) == 1) {
                    *(u8 **)((u8 *)var_s1 + 0xD4) = (unsigned char *)(amObject_Create(*(u8 **)((u8 *)var_s1 + 0x14), NULL));
                }
                var_s3_2 += 1;
                var_s1 += 4;
            } while (var_s3_2 < *(s32 *)((u8 *)temp_s2_2 + 0x10));
        }
    }
}

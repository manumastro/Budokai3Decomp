/* Draft (not built): func_00216270 at 0x00216270, size 0x160, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); cit conversion from 'unsigned char *' to 'unsigned char' mwccps2.exe Compiler: @ 3822: *(D_0046FDD0 + var_s0) = temp_v0;
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_00216270.s */

// src/unk/unk_20A4D0.c func_00216270 cerr diff=-1/0
void *BtlCmd_GetMotEntry(void *, s32);
s32 func_00127E88(void *, s32 *, s32);
void *func_001A50F0(void *, s32);
s32 func_0020A100(void *);
extern s32 D_00469CD0;
extern void *amObject_Create(void *, void *);
extern void amFile_Load(void *);
void func_00216270(void) {
    s32 var_s0;
    s32 var_s3;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s4;
    u8 *temp_v0;

    temp_s0 = *(u8 **)((u8 *)D_0046FDD0 + 0x180);
    if (temp_s0 != NULL) {
        *(u8 **)((u8 *)D_0046FDD0 + 0x180) = (u8 *) *(u8 **)((u8 *)temp_s0 + 0x40);
        *(u8 **)((u8 *)D_0046FDD0 + 0x184) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x40)) + 0x50);
        amFile_Load(*(u8 **)((u8 *)D_0046FDD0 + 0x184));
        *(u8 **)((u8 *)temp_s0 + 0x40) = NULL;
        amCdFs_Close(temp_s0, 0);
        temp_s4 = *(u8 **)((u8 *)D_0046FDD0 + 0x184);
        var_s3 = 0;
        if (*(s32 *)((u8 *)temp_s4 + 0x10) > 0) {
            var_s0 = 0;
            do {
                temp_s2 = BtlCmd_GetMotEntry(temp_s4, var_s3);
                temp_v0 = func_001A50F0(temp_s4, var_s3);
                temp_a0 = temp_v0;
                if (*(s32 *)((u8 *)temp_s2 + 8) >= 0) {
                    amFile_Load(temp_a0);
                } else if (func_00127E88(temp_v0, &D_00469CD0, 4) == 0) {
                    func_0020A100(temp_v0);
                }
                *(D_0046FDD0 + var_s0) = temp_v0;
                if (*(s32 *)((u8 *)temp_s2 + 8) == 1) {
                    *(u8 **)((u8 *)(D_0046FDD0 + var_s0) + 0xC0) = amObject_Create((void *)(*(D_0046FDD0 + var_s0)), (void *)(NULL));
                }
                var_s3 += 1;
                var_s0 += 4;
            } while (var_s3 < *(s32 *)((u8 *)temp_s4 + 0x10));
        }
    }
}

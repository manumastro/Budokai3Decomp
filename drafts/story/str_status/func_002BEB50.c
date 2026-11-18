/* Draft (not built): func_002BEB50 at 0x002BEB50, size 0x160, segment story/str_status (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 49 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x168, original 0x160
 * Original: asm/nonmatchings/story/str_status/func_002BEB50.s */

// src/story/str_status.c func_002BEB50 size diff=49/90
void *BtlCmd_GetMotEntry(void *, s32);
s32 func_00127E88(void *, s32 *, s32);
void *func_001A50F0(void *, s32);
s32 func_0020A100(void *);
extern s32 D_0046EEA8;
extern void *amObject_Create(void *, void *);
void func_002BEB50(void) {
    s32 var_s0;
    s32 var_s4;
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s2;
    u8 *temp_s3;
    u8 *temp_v0;

    temp_s0 = *(u8 **)((u8 *)D_0047011C + 0x2D4);
    if (temp_s0 != NULL) {
        *(u8 **)((u8 *)D_0047011C + 0x2D4) = (u8 *) *(u8 **)((u8 *)temp_s0 + 0x40);
        *(u8 **)((u8 *)D_0047011C + 0x2D8) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x40)) + 0x50);
        amFile_Load((s32)((void *)(*(u8 **)((u8 *)D_0047011C + 0x2D8))));
        *(u8 **)((u8 *)temp_s0 + 0x40) = NULL;
        amCdFs_Close((s32)(temp_s0), 0);
        temp_s3 = *(u8 **)((u8 *)D_0047011C + 0x2D8);
        var_s4 = 0;
        if (*(s32 *)((u8 *)temp_s3 + 0x10) > 0) {
            var_s0 = 0;
            do {
                temp_s2 = BtlCmd_GetMotEntry(temp_s3, var_s4);
                temp_v0 = func_001A50F0(temp_s3, var_s4);
                temp_a0 = temp_v0;
                if (*(s32 *)((u8 *)temp_s2 + 8) >= 0) {
                    amFile_Load((s32)((void *)(temp_a0)));
                } else if (func_00127E88(temp_v0, &D_0046EEA8, 4) == 0) {
                    func_0020A100(temp_v0);
                }
                *(u8 **)((u8 *)(D_0047011C + var_s0) + 0x1D4) = temp_v0;
                if (*(s32 *)((u8 *)temp_s2 + 8) == 1) {
                    *(u8 **)((u8 *)(D_0047011C + var_s0) + 0x254) = amObject_Create(*(u8 **)((u8 *)(D_0047011C + var_s0) + 0x1D4), NULL);
                }
                var_s4 += 1;
                var_s0 += 4;
            } while (var_s4 < *(s32 *)((u8 *)temp_s3 + 0x10));
        }
    }
}

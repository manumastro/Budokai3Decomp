/* Draft (not built): func_001E6F70 at 0x001E6F70, size 0xFC, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); *)' does not match 'func_001E6F70(unsigned char *, int)' mwccps2.exe Compiler: @ 2939: func_001E6F70((char *)c + 0x650);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E6F70.s */

// src/unk/unk_1D5B30.c func_001E6F70 cerr diff=-1/0
extern void func_001E6890(void);
extern void func_001E6CE0(void);
extern void func_001E66E0(void);
void func_001E6F70(u8 *arg0, s32 arg1) {
    s32 *var_v1;
    u8 *temp_v0;

    *(s32 *)((u8 *)arg0 + 0x558) = arg1;
    temp_v0 = amTask_Create(0, 0, 0x5380, 0x20);
    *(u8 **)((u8 *)temp_v0 + 0x30) = arg0;
    *(s32 *)((u8 *)temp_v0 + 0x34) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x38) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x3C) = arg1;
    *(s32 *)((u8 *)temp_v0 + 0x40) = (s32) (arg1 - *(s32 *)((u8 *)arg0 + 0x554));
    if (*(s32 *)((u8 *)temp_v0 + 0x40) > 0) {
        if (*(s8 *)((u8 *)((*(s32 *)((u8 *)(temp_v0 + 0x30) + 0xC) * 0x14) + *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x568)) + 0x1CF8)) + 0xDB) & 1) {
            var_v1 = (s32 *)(&func_001E6890);
            if (&func_001E6890 == NULL) {
                var_v1 = NULL;
            }
        } else {
            var_v1 = (s32 *)(&func_001E6CE0);
            if (&func_001E6CE0 == NULL) {
                var_v1 = NULL;
            }
        }
    } else {
        var_v1 = (s32 *)(&func_001E66E0);
        if (&func_001E66E0 == NULL) {
            var_v1 = NULL;
        }
    }
    *(s32 **)((u8 *)temp_v0 + 0x1C) = var_v1;
}

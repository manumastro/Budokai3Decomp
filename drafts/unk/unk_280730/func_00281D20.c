/* Draft (not built): func_00281D20 at 0x00281D20, size 0x11C, segment unk/unk_280730 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); s1 + 0x78)) + 0x46) = (s16) sp58; @ 346: *(s16 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_s1 + 0x78)) + 0x44) = (s16) sp54;
 * Original: asm/nonmatchings/unk/unk_280730/func_00281D20.s */

// src/unk/unk_280730.c func_00281D20 cerr diff=-1/0
s32 func_002B4C80(s32);
s32 func_002B4CC0(s32, s32 *);
s32 func_002F92C0(s32);
extern void func_00281E40(void);
void func_00281D20(u8 *arg0) {
    s32 sp50;
    s32 *var_a0;
    s32 temp_s0;
    s32 temp_v1;
    u8 *temp_s1;
    u8 *temp_s2;

    temp_s2 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s1 = *(u8 **)((u8 *)temp_s2 + 0x10);
    func_002811D0(temp_s2);
    temp_s0 = (*(s8 *)((u8 *)temp_s2 + 4) == 0) ? 1 : 2;
    if (func_002B4C80(temp_s0) == 9) {
        func_002B4CC0(temp_s0, &sp50);
        func_002F92C0(*(s32 *)((u8 *)temp_s1 + 0x28));
        var_a0 = (s32 *)(&func_00281E40);
        temp_v1 = *(s8 *)((u8 *)temp_s1 + 4) * 0xE;
        *(s16 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_s1 + 0x78)) + 0x44) = (s16) sp54;
        *(s16 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_s1 + 0x78)) + 0x46) = (s16) sp58;
        *(s16 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_s1 + 0x78)) + 0x48) = (s16) sp5C;
        *(s16 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_s1 + 0x78)) + 0x4A) = (s16) sp60;
        *(s16 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_s1 + 0x78)) + 0x4C) = (s16) sp64;
        *(s16 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_s1 + 0x78)) + 0x4E) = (s16) sp68;
        *(s16 *)((u8 *)(temp_v1 + *(s32 *)((u8 *)temp_s1 + 0x78)) + 0x50) = (s16) sp6C;
        *(s8 *)((u8 *)temp_s2 + 2) = 2;
        if (&func_00281E40 == NULL) {
            var_a0 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_a0;
    }
}

/* Draft (not built): func_002194C0 at 0x002194C0, size 0xF0, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); red as: 'void (unsigned char *, short, short, int)' @ 4876: void func_002194C0(u8 *arg0, s16 arg1, s16 arg2, s32 arg3) {
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_002194C0.s */

// src/unk/unk_20A4D0.c func_002194C0 cerr diff=-1/0
void func_002194C0(u8 *arg0, s16 arg1, s16 arg2, s32 arg3) {
    s32 *temp_t0_2;
    s32 temp_t0;
    s32 temp_t1;

    if ((arg1 < 0) || (arg1 >= 0x79)) {
        return;
    }
    if (arg2 >= 0) {
        temp_t0 = arg1 * 4;
        if (arg2 >= *(&D_0044F4E0 + temp_t0)) {

        } else {
            temp_t1 = arg2 * 4;
            temp_t0_2 = &D_0044F2F0 + temp_t0;
            if (*(*temp_t0_2 + temp_t1) != -1) {
                *(s32 *)((u8 *)arg0 + 0x10) = (s32) (*(s32 *)((u8 *)arg0 + 0x10) | 1);
                *(s16 *)((u8 *)arg0 + 0x14) = arg1;
                *(s16 *)((u8 *)arg0 + 0x16) = arg2;
                *(s32 *)((u8 *)arg0 + 8) = amAdx_PlayAfs(arg3, *(*temp_t0_2 + temp_t1) | 0x20000, 0);
                amAdx_Pause(*(s32 *)((u8 *)arg0 + 8), 1);
                *(s32 *)((u8 *)arg0 + 0xC) = 2;
                *(f32 *)((u8 *)arg0 + 0x18) = (f32) *(f32 *)((u8 *)gBattle + 0x8908);
            }
        }
    }
}

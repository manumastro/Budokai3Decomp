/* Draft (not built): func_002470B0 at 0x002470B0, size 0x1CC, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 49 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1E0, original 0x1CC
 * Original: asm/nonmatchings/unk/unk_23A890/func_002470B0.s */

// src/unk/unk_23A890.c func_002470B0 size diff=49/120
s32 func_002528E0(s32, s32, s32, void *);
extern void *D_0046FE54;
void func_002470B0(s32 arg0, s64 arg1) {
    s32 unksp3C;
    s64 sp38;
    s32 temp_a2;
    u8 *temp_s0;

    sp38 = arg1;
    temp_a2 = *(s32 *)((u8 *)((u8 *) sp38) + 0x1350);
    temp_s0 = D_0046FE4C + (temp_a2 * 0x480) + 0x10;
    switch (unksp3C) {
    case 0:
        if (!(*(s16 *)((u8 *)D_0046FE54 + 0x60) & 0x100)) {
            func_002528E0(0, 2, temp_a2, (u8 *) sp38);
        }
        func_00246680(arg0, &sp38);
        return;
    case 1:
        func_002528E0(0, -1, temp_a2, (u8 *) sp38);
        func_002463B0(arg0,(unsigned char **)(&sp38));
        return;
    case 2:
        func_002528E0(0, -1, temp_a2, (u8 *) sp38);
        func_002528E0(0x100, 1, 0, 0);
        return;
    case 3:
        func_002528E0(0x80, 1, temp_a2, (u8 *) sp38);
        return;
    case 4:
        func_002528E0(0x10, 1, temp_a2, (u8 *) sp38);
        func_002528E0(0x100, 0, 0, 0);
        return;
    case 5:
        if (*(s32 *)((u8 *)((u8 *) sp38) + 0xB9C) == 0x29) {
            *(s16 *)((u8 *)temp_s0 + 0x2C) = (s16) (*(s16 *)((u8 *)temp_s0 + 0x2C) + 1);
            if (*(s16 *)((u8 *)temp_s0 + 0x2C) >= 4) {
                *(s16 *)((u8 *)temp_s0 + 0x2C) = 3;
                return;
            }
        }
    default:
        return;
    case 6:
        if (*(s32 *)((u8 *)((u8 *) sp38) + 0xB9C) == 0x29) {
            if (*(s16 *)((u8 *)temp_s0 + 0x2C) > 0) {
                func_002528E0(0, 2, temp_a2, (u8 *) sp38);
                func_00246680(1, &sp38);
                *(s16 *)((u8 *)temp_s0 + 0x2C) = (s16) (*(s16 *)((u8 *)temp_s0 + 0x2C) - 1);
            }
            *(s16 *)((u8 *)D_0046FE4C + 0x91A) = 0;
            return;
        }
        break;
    case 7:
        if (*(s32 *)((u8 *)((u8 *) sp38) + 0xB9C) == 0x29) {
            *(s16 *)((u8 *)temp_s0 + 0x2C) = 0;
            *(s16 *)((u8 *)D_0046FE4C + 0x91A) = 0;
        }
        break;
    }
}

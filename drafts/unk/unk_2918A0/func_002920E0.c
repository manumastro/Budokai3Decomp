/* Draft (not built): func_002920E0 at 0x002920E0, size 0x1E0, segment unk/unk_2918A0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 21 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2918A0/func_002920E0.s */

extern char D_00511479[];
extern char D_004E6560[];
s32 func_002920E0(u8 *arg0) {
    s32 var_a2;
    s16 *var_a2_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a2_2;
    s32 var_v1;
    s8 temp_v1_3;
    u32 temp_v0;
    var_a2 = *(s32 *)((u8 *)arg0 + 0x20);
    temp_v1 = var_a2 >> 0x1C;
    if (var_a2 != -1) {
        switch (temp_v1) {
            case 1:

            case 0:
                var_a2 = D_004E6560[var_a2 & 0x0FFFFFFC];
                break;

            case 2:
                var_a2 = *(s32 *)(*D_005AA604 + (var_a2 & 0x0FFFFFFC));
                break;

            case 3:
                var_a2 = 0;
                break;
        }

        temp_v0 = *(u32 *)((u8 *)arg0 + 0x24);
        temp_a1 = *(s32 *)((u8 *)arg0 + 0x28);
        switch (temp_v0) {
            case 0:
                var_a2 = var_a2 == temp_a1;
                break;

            case 1:
                var_a2 = var_a2 != temp_a1;
                break;

            case 2:
                var_a2 = temp_a1 < var_a2;
                break;

            case 3:
                var_a2_2 = var_a2 < temp_a1;
                block_21:
            var_a2 = var_a2_2 ^ 1;

                break;

            case 4:
                var_a2 = var_a2 < temp_a1;
                break;

            case 5:
                var_a2_2 = temp_a1 < var_a2;
                goto block_21;
        }

        if (var_a2 == 0) {
            return 0;
        }
        goto block_24;
    }
    block_24:
    temp_a1_2 = *(s32 *)((u8 *)arg0 + 0x2C);

    if (temp_a1_2 != -1) {
        var_v1 = 0;
        var_a2_3 = (short *)(*D_005AA604 + 0x11F0);
        loop_26:
        if (*var_a2_3 != temp_a1_2) {
            var_v1 += 1;
            var_a2_3 += 2;
            if (var_v1 >= 7) {
            } else {
                goto loop_26;
            }
        }

        if (var_v1 == 7) {
            return 0;
        }
        goto block_32;
    }
    block_32:
    temp_v1_2 = *(s32 *)((u8 *)arg0 + 0x30);

    if (temp_v1_2 != -1 && (u8)D_00511479[temp_v1_2] == 0) {
        return 0;
    }
    temp_v1_3 = *(s8 *)((u8 *)*D_005AA604 + 0x11E7);
    if (*(s32 *)((u8 *)arg0 + 0x34) <= temp_v1_3) {
        if (temp_v1_3 > *(s32 *)((u8 *)arg0 + 0x38)) {
            goto block_39;
        }
        return 1;
    }
    block_39:
    return 0;
}

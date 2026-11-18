/* Draft (not built): func_002E8DB0 at 0x002E8DB0, size 0x144, segment unk/unk_2E8540 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 40 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x140, original 0x144
 * Original: asm/nonmatchings/unk/unk_2E8540/func_002E8DB0.s */

// src/unk/unk_2E8540.c func_002E8DB0 size diff=40/80
s32 memcpy(s8 *, void *, s32);
void func_002E8DB0(u8 *arg0) {
    s32 var_s2;
    s8 *var_s1;
    s8 *var_s3;
    s8 *var_s4;
    u8 *var_s0;
    u8 *var_s5;

    var_s5 = arg0;
    var_s4 = (s8 *)(D_004B4B40[0]);
    var_s4 = (s8 *)(D_004B4B40[0]);
    if (*(s16 *)((u8 *)arg0 + 0) != 0) {
        if ((*(s64 *)((u8 *)var_s5 + 0x10) == *(s64 *)((u8 *)D_004B4B40 + 0x80)) && (*(s64 *)((u8 *)var_s5 + 0x18) == *(s64 *)((u8 *)D_004B4B40 + 0x88)) && (*(s64 *)((u8 *)var_s5 + 0x20) == *(s64 *)((u8 *)D_004B4B40 + 0x90)) && (*(s64 *)((u8 *)var_s5 + 0x28) == *(s64 *)((u8 *)D_004B4B40 + 0x98))) {
            if (*(s32 *)((u8 *)var_s5 + 0x30) != *(s32 *)((u8 *)D_004B4B40 + 0xA0)) {

            } else {
                *(s16 *)((u8 *)var_s5 + 0x42) = 0;
                var_s2 = 0;
                var_s1 = (s8 *)(D_004B4B40[0]);
                var_s0 = var_s5;
                do {
                    memcpy(var_s1 + 0x1330, var_s0 + 0x44, 0xE);
                    var_s2 += 1;
                    var_s1 += 0x1210;
                    var_s0 += 0xE;
                } while (var_s2 < 0x26);
                var_s2 = 0;
                var_s1 = (s8 *)(D_004B4B40[0]);
                var_s0 = var_s5;
                do {
                    var_s3 = var_s1 + 0x140;
                    *(s8 *)((u8 *)var_s1 + 0x1327) = (s8) *(s8 *)((u8 *)var_s0 + 0x258);
                    memcpy(var_s3 + 0x11E8, var_s0 + 0x259, 7);
                    var_s2 += 1;
                    var_s1 += 0x1210;
                    *(s32 *)((u8 *)var_s3 + 0x1200) = (s32) *(s32 *)((u8 *)var_s0 + 0x260);
                    var_s0 += 0xC;
                } while (var_s2 < 0x26);
                memcpy(D_004B4B40 + 0x2AFD9, var_s5 + 0x446, 0x260);
            }
        }
    }
}

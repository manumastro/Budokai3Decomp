/* Draft (not built): func_001C73B0 at 0x001C73B0, size 0x1BC, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 35 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1CC, original 0x1BC
 * Original: asm/nonmatchings/battle/btl_main/func_001C73B0.s */

// src/battle/btl_main.c func_001C73B0 size diff=35/115
void func_001C73B0(u8 *arg0) {
    s16 temp_a1;
    s32 temp_a1_2;
    s32 var_s1;
    u8 *temp_s2;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *var_s3;

    var_s1 = 0;
    var_s3 = (unsigned char *)(gBattle);
    var_s0 = arg0;
    do {
        temp_a1 = *(s16 *)((u8 *)var_s0 + 0x20);
        temp_s2 = var_s3 + 0x830;
        temp_v0 = var_s0 + 0x10;
        *(s32 *)((u8 *)var_s3 + 0x252C) = (s32) temp_a1;
        *(s32 *)((u8 *)var_s3 + 0x2530) = (s32) *(s16 *)((u8 *)var_s0 + 0x22);
        switch (temp_a1) {                          /* irregular */
        case 0x49:
        case 0x45:
        case 0x43:
        case 0x41:
            if (*(s16 *)((u8 *)temp_v0 + 0x14) < 2) {
                *(s16 *)((u8 *)temp_v0 + 0x14) = 1;
            }
            if (*(s16 *)((u8 *)temp_v0 + 0x16) < 2) {
                *(s16 *)((u8 *)temp_v0 + 0x16) = 1;
            }
            break;
        case 0x47:
            if (*(s16 *)((u8 *)temp_v0 + 0x14) < 3) {
                *(s16 *)((u8 *)temp_v0 + 0x14) = 2;
            }
            if (*(s16 *)((u8 *)temp_v0 + 0x16) < 3) {
                *(s16 *)((u8 *)temp_v0 + 0x16) = 2;
            }
            break;
        case 0x54:
            *(s16 *)((u8 *)temp_v0 + 0x14) = 1;
            *(s16 *)((u8 *)temp_v0 + 0x16) = 1;
            *(s32 *)((u8 *)temp_s2 + 0x1CFC) = 0x23;
            break;
        case 0x4E:
            *(s16 *)((u8 *)temp_v0 + 0x14) = 2;
            *(s16 *)((u8 *)temp_v0 + 0x16) = 2;
            *(s32 *)((u8 *)temp_s2 + 0x1CFC) = 0x23;
            break;
        case 0x4F:
            *(s16 *)((u8 *)temp_v0 + 0x14) = 3;
            *(s16 *)((u8 *)temp_v0 + 0x16) = 3;
            *(s32 *)((u8 *)temp_s2 + 0x1CFC) = 0x23;
            break;
        }
        *(u8 **)((u8 *)temp_s2 + 0x1CF4) = temp_v0;
        temp_a1_2 = *(s32 *)((u8 *)temp_s2 + 0x1CFC);
        *(u8 **)((u8 *)temp_s2 + 0x1CF8) = (u8 *) (D_00428C60 + (temp_a1_2 * 0x174));
        func_001D7A70(temp_s2);
        func_001D79F0(temp_s2);
        func_001DF1F0(temp_s2);
        var_s1 += 1;
        var_s3 += 0x2020;
        var_s0 += 0x50;
    } while (var_s1 < 4);
    func_001C7130();
}

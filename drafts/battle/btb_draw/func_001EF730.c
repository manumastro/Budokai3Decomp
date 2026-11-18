/* Draft (not built): func_001EF730 at 0x001EF730, size 0x144, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 48 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x120, original 0x144
 * Original: asm/nonmatchings/battle/btb_draw/func_001EF730.s */

// src/battle/btb_draw.c func_001EF730 size diff=48/72
s32 memcpy(s32 *, s32);
void func_001EF730(u8 *arg0) {
    s32 temp_s4;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1_2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_t0;
    u8 *var_a2;
    u8 *var_s2;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_s5;
    u8 temp_v1;
    u8 temp_v1_3;
    u8 *temp_a1;
    u8 *temp_a1_2;

    memcpy((s32 *)(&D_004696F0), 8);
    *(s32 *)((u8 *)arg0 + 0xC) = (s32) (func_0012EAE0(0x20) + 1);
    memset(arg0 + 0x10, 0, 0x20);
    var_a2 = arg0 + 0x30;
    var_a3 = 0;
    var_t0 = 0xD64F;
    if (0xD650 != 0) {
        do {
            temp_a1 = arg0 + var_a3;
            temp_v1 = *var_a2;
            temp_a0 = *(u8 *)((u8 *)temp_a1 + 0x20);
            temp_v0 = var_t0;
            var_a3 = (var_a3 + 1) & 0xF;
            var_t0 -= 1;
            var_a2 += 1;
            *(s8 *)((u8 *)temp_a1 + 0x20) = (s8) (temp_a0 + temp_v1);
        } while (temp_v0 != 0);
    }
    func_0012EAE0(0x20);
    var_s0 = 0;
    var_s2 = arg0 + 0x20;
    var_a3_2 = 0;
    var_s1 = 0xD65F;
    if (0xD660 != 0) {
        do {
            temp_s5 = *var_s2;
            temp_s4 = var_a3_2 & 0xFF;
            temp_v0_2 = func_0012EAE0((temp_s4 & 0xF) + 8);
            var_a3_2 = temp_s5 & 0xFF;
            temp_a1_2 = arg0 + var_s0;
            temp_v1_3 = (var_a3_2 - temp_s4) + (temp_v0_2 & 0xFF);
            *var_s2 = temp_v1_3;
            temp_a0_2 = *(u8 *)((u8 *)temp_a1_2 + 0x10);
            temp_v1_2 = var_s1;
            var_s2 += 1;
            var_s0 = (var_s0 + 1) & 0xF;
            var_s1 -= 1;
            *(s8 *)((u8 *)temp_a1_2 + 0x10) = (s8) (temp_a0_2 + (temp_v1_3 & 0xFF));
        } while (temp_v1_2 != 0);
    }
}

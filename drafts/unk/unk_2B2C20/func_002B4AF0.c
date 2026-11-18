/* Draft (not built): func_002B4AF0 at 0x002B4AF0, size 0x144, segment unk/unk_2B2C20 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 45 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x14C, original 0x144
 * Original: asm/nonmatchings/unk/unk_2B2C20/func_002B4AF0.s */

// src/unk/unk_2B2C20.c func_002B4AF0 size diff=45/83
s32 memset(void *, s32, s32);
void func_002B4AF0(s32 arg0, s32 arg1, u8 *arg2) {
    s16 temp_a1;
    s32 temp_a0;
    s32 temp_a2;
    s32 temp_a3;
    s32 var_t0;
    s32 var_t1;
    s32 var_v1;
    u8 *temp_s0;
    u8 *temp_v1;
    u8 *var_t2;

    temp_a1 = *(&D_0046B560 + (arg1 * 2));
    if (temp_a1 >= 0) {
        temp_v1 = (u8 *)(gSklEdit + ((arg0 >> 1) * 0x1C8));
        temp_s0 = temp_v1 + 0x48;
        if (*(s32 *)((u8 *)temp_v1 + 0x64) != temp_a1) {
            *(s32 *)((u8 *)temp_s0 + 0x1C) = (s32) temp_a1;
            memset(temp_s0 + 0x48, 0, 0x70);
            var_t2 = temp_s0 + 0xB8;
            var_t1 = 0;
            *(s32 *)((u8 *)temp_s0 + 0xB8) = (s32) *(s32 *)((u8 *)arg2 + 0);
            *(f32 *)((u8 *)temp_s0 + 0xBC) = (f32) *(f32 *)((u8 *)arg2 + 4);
            *(f32 *)((u8 *)temp_s0 + 0xC0) = (f32) *(f32 *)((u8 *)arg2 + 8);
            *(f32 *)((u8 *)temp_s0 + 0xC4) = (f32) *(f32 *)((u8 *)arg2 + 0xC);
            *(f32 *)((u8 *)temp_s0 + 0xC8) = (f32) *(f32 *)((u8 *)arg2 + 0x10);
            *(f32 *)((u8 *)temp_s0 + 0xCC) = (f32) *(f32 *)((u8 *)arg2 + 0x14);
            *(f32 *)((u8 *)temp_s0 + 0xD0) = (f32) *(f32 *)((u8 *)arg2 + 0x18);
            *(f32 *)((u8 *)temp_s0 + 0xD4) = (f32) *(f32 *)((u8 *)arg2 + 0x1C);
            temp_a3 = *(s32 *)((u8 *)temp_s0 + 0xB8);
            var_t0 = 0;
            if (temp_a3 > 0) {
loop_4:
                if (var_t0 < 8) {
                    temp_a2 = *(s32 *)((u8 *)var_t2 + 4);
                    var_t0 += 1;
                    temp_a0 = temp_a2 * 4;
                    var_t2 += 4;
                    var_t1 += *(u8 *)((u8 *)(&D_004E0660 + ((temp_a0 + temp_a2) * 8)) + 8) & 7;
                    if (var_t0 >= temp_a3) {

                    } else {
                        goto loop_4;
                    }
                }
            }
            var_v1 = var_t1 + 1;
            if (var_t1 < 7) {

            } else {
                var_v1 = 7;
            }
            *(s32 *)((u8 *)temp_s0 + 0x20) = var_v1;
        }
    }
}

/* Draft (not built): func_001C9DB0 at 0x001C9DB0, size 0x140, segment battle/char_body (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 72 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/battle/char_body/func_001C9DB0.s */

// src/battle/char_body.c func_001C9DB0 diff diff=72/80
void func_001C9DB0(s16 *arg0, u8 *arg1, s32 arg2) {
    s16 *var_a0;
    s16 *var_t3;
    s16 temp_a1;
    s16 temp_v1;
    s32 var_t2;
    u8 *temp_t0;
    u8 *temp_t1;
    u8 *var_a2;
    u8 *var_v1;

    var_a0 = arg0;
    if (var_a0 != NULL) {
        if (arg1 == NULL) {

        } else {
            if (arg2 == 0) {
                var_a2 = *(u8 **)((u8 *)var_a0 + 0x1C);
                var_t3 = var_a0;
                var_v1 = *(u8 **)((u8 *)arg1 + 0x4C);
                var_a0 = (s16 *)(arg1 + 0x30);
            } else {
                var_a2 = *(u8 **)((u8 *)arg1 + 0x4C);
                var_v1 = *(u8 **)((u8 *)var_a0 + 0x1C);
                var_t3 = (s16 *)(arg1 + 0x30);
            }
            var_t2 = 0;
            do {
                temp_a1 = *var_t3;
                if (temp_a1 >= 0) {
                    temp_v1 = *var_a0;
                    if (temp_v1 >= 0) {
                        temp_t0 = (u8 *)(*(s32 *)((u8 *)var_a2 + 0x45C) + (temp_a1 << 7));
                        temp_t1 = (u8 *)(*(s32 *)((u8 *)var_v1 + 0x45C) + (temp_v1 << 7));
                        *(s128 *)((u8 *)temp_t1 + 0) = (s128) *(s128 *)((u8 *)temp_t0 + 0);
                        *(s128 *)((u8 *)temp_t1 + 0x10) = (s128) *(s128 *)((u8 *)temp_t0 + 0x10);
                        *(s128 *)((u8 *)temp_t1 + 0x20) = (s128) *(s128 *)((u8 *)temp_t0 + 0x20);
                        *(s128 *)((u8 *)temp_t1 + 0x30) = (s128) *(s128 *)((u8 *)temp_t0 + 0x30);
                        *(f32 *)((u8 *)temp_t1 + 0x40) = (f32) *(f32 *)((u8 *)temp_t0 + 0x40);
                        *(f32 *)((u8 *)temp_t1 + 0x44) = (f32) *(f32 *)((u8 *)temp_t0 + 0x44);
                        *(f32 *)((u8 *)temp_t1 + 0x48) = (f32) *(f32 *)((u8 *)temp_t0 + 0x48);
                        *(f32 *)((u8 *)temp_t1 + 0x4C) = (f32) *(f32 *)((u8 *)temp_t0 + 0x4C);
                        *(f32 *)((u8 *)temp_t1 + 0x50) = (f32) *(f32 *)((u8 *)temp_t0 + 0x50);
                        *(f32 *)((u8 *)temp_t1 + 0x54) = (f32) *(f32 *)((u8 *)temp_t0 + 0x54);
                        *(f32 *)((u8 *)temp_t1 + 0x58) = (f32) *(f32 *)((u8 *)temp_t0 + 0x58);
                        *(f32 *)((u8 *)temp_t1 + 0x5C) = (f32) *(f32 *)((u8 *)temp_t0 + 0x5C);
                        *(f32 *)((u8 *)temp_t1 + 0x60) = (f32) *(f32 *)((u8 *)temp_t0 + 0x60);
                        *(f32 *)((u8 *)temp_t1 + 0x64) = (f32) *(f32 *)((u8 *)temp_t0 + 0x64);
                        *(f32 *)((u8 *)temp_t1 + 0x68) = (f32) *(f32 *)((u8 *)temp_t0 + 0x68);
                        *(f32 *)((u8 *)temp_t1 + 0x6C) = (f32) *(f32 *)((u8 *)temp_t0 + 0x6C);
                        *(f32 *)((u8 *)temp_t1 + 0x70) = (f32) *(f32 *)((u8 *)temp_t0 + 0x70);
                        *(f32 *)((u8 *)temp_t1 + 0x74) = (f32) *(f32 *)((u8 *)temp_t0 + 0x74);
                        *(f32 *)((u8 *)temp_t1 + 0x78) = (f32) *(f32 *)((u8 *)temp_t0 + 0x78);
                        *(f32 *)((u8 *)temp_t1 + 0x7C) = (f32) *(f32 *)((u8 *)temp_t0 + 0x7C);
                    }
                }
                var_t2 += 1;
                var_t3 += 2;
                var_a0 += 2;
            } while (var_t2 < 9);
        }
    }
}

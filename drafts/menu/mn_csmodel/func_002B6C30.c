/* Draft (not built): func_002B6C30 at 0x002B6C30, size 0x184, segment menu/mn_csmodel (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 51 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_csmodel/func_002B6C30.s */

s32 func_00131F00(void *, s32, s32);
s32 func_0029E120(s32, s16, s32, s32, s32);
s32 func_0029E610(s32);
s32 func_0029E7F0(s32);
extern void func_00131B90(void *);
extern void func_002B61E0(void);
void func_002B6C30(u8 *arg0) {
    s32 *var_v1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f3;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 var_f2;
    u16 temp_v1;
    u8 *temp_s0;
    temp_f3 = *(f32 *)((u8 *)temp_s0 + 0xC0);
    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    if (temp_f3 != 0.0f) {
        temp_f0 = temp_f3 - 0.125f * gFrameDelta;
        *(f32 *)((u8 *)temp_s0 + 0xC0) = temp_f0;
        if (temp_f0 < 0.0f) {
            *(f32 *)((u8 *)temp_s0 + 0xC0) = 0.0f;
        }
    }
    temp_v1 = *(u16 *)((u8 *)temp_s0 + 0xB0);
    if (temp_v1 == 3) {
        *(f32 *)((u8 *)temp_s0 + 0xBC) = 0.0f;
    } else
        if (!(temp_v1 == 2))
        if (temp_v1 == 4) {
        temp_f3_3 = *(f32 *)((u8 *)temp_s0 + 0xBC);
        var_f2 = 20.0f;
        if (temp_f3_3 < 20.0f) {
            temp_f0_3 = temp_f3_3 + 2.0f * gFrameDelta;
            *(f32 *)((u8 *)temp_s0 + 0xBC) = temp_f0_3;
            if (!(temp_f0_3 <= 20.0f)) {
                block_12:
                *(f32 *)((u8 *)temp_s0 + 0xBC) = var_f2;
            }
        }
    } else {
        temp_f3_2 = *(f32 *)((u8 *)temp_s0 + 0xBC);
        var_f2 = 0.0f;
        if (!(temp_f3_2 <= 0.0f)) {
            temp_f0_2 = temp_f3_2 - 2.0f * gFrameDelta;
            *(f32 *)((u8 *)temp_s0 + 0xBC) = temp_f0_2;
            if (temp_f0_2 < 0.0f) {
                goto block_12;
            }
        }
    }
    if (func_0029E7F0(*(s32 *)((u8 *)temp_s0 + 0)) != 0) {
        func_0029E610(*(s32 *)((u8 *)temp_s0 + 0));
        func_0029E120(*(s32 *)((u8 *)temp_s0 + 0), *(u16 *)((u8 *)temp_s0 + 0xB4), 1, 0x3F800000, 0);
        func_00131B90(temp_s0 + 0x50);
        func_00131F00(temp_s0 + 0x50, 0, 0);
        var_v1 = (int *)&func_002B61E0;
        if (&func_002B61E0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

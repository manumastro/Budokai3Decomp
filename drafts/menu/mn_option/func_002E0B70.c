/* Draft (not built): func_002E0B70 at 0x002E0B70, size 0xB4, segment menu/mn_option (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 28 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x94, original 0xB4
 * Original: asm/nonmatchings/menu/mn_option/func_002E0B70.s */

// src/menu/mn_option.c func_002E0B70 size diff=28/37
extern void func_002E08F0(void);
void func_002E0B70(u8 *arg0) {
    f32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    f32 sp40;
    s32 sp44;
    s32 sp48;
    s32 sp4C;
    s32 *var_v1;
    f32 temp_f1;
    u8 *temp_s0;

    temp_s0 = gOptionState;
    sp44 = 0x42200000;
    sp40 = 0.0f;
    sp30 = 540.0f;
    sp48 = 0x3F800000;
    sp34 = 0x43800000;
    sp4C = 0x3F800000;
    sp38 = 0x3F800000;
    sp3C = 0x3F800000;
    func_002D2AD0(*(f32 *)((u8 *)temp_s0 + 0xC), &sp40, &sp30);
    temp_f1 = *(f32 *)((u8 *)temp_s0 + 0xC) + 0.05f;
    *(f32 *)((u8 *)temp_s0 + 0xC) = temp_f1;
    if (!(temp_f1 <= 1.0f)) {
        var_v1 = (int *)(&func_002E08F0);
        *(f32 *)((u8 *)temp_s0 + 0xC) = 1.0f;
        if (&func_002E08F0 == NULL) {
            var_v1 = NULL;
        }
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Similar function already in C: func_002E0800 (src/menu/mn_option.c), similarity 0.73.
 * It is the template below (not built). */
#if 0
void func_002E0800(u8 *a0) {
    u8 *s0;
    u8 *s1;
    f32 b[4];
    f32 a[4];
    f32 f;
    s1 = a0;
    s0 = (u8 *)gOptionState;
    b[2] = 1.0f;
    b[1] = 40.0f;
    b[0] = 0.0f;
    a[0] = 540.0f;
    a[1] = 256.0f;
    b[3] = 1.0f;
    a[2] = 1.0f;
    a[3] = 1.0f;
    func_002D2AD0(*(f32 *)(s0 + 0xC), b, a);
    f = *(f32 *)(s0 + 0xC) - 0.05f;
    *(f32 *)(s0 + 0xC) = f;
    if (f < 0.0f) {
        *(f32 *)(s0 + 0xC) = 0.0f;
        if (*(s8 *)(s0 + 0x14) == 0) {
            *(s8 *)(s0 + 0x14) = 1;
            *(s8 *)(s0 + 0x15) = 100;
            *(void **)(s1 + 0x1C) = ((void *)func_002E06A0 == 0) ? 0 : (void *)func_002E06A0;
        } else {
            amTask_Kill(*(void **)(s0 + 0x18));
            *(void **)(s0 + 0x18) = 0;
            *(s32 *)(s0 + 0x8) = 4;
        }
    }
}
#endif

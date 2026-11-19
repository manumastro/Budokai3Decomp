/* Draft (not built): func_00253E60 at 0x00253E60, size 0x160, segment battle/skill_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); version from 'float' to 'int *' @ 1999: return func_00253320(&sp30, arg1, temp_a2, temp_a3, temp_f21,(int *)(temp_f20));
 * Original: asm/nonmatchings/battle/skill_cmd/func_00253E60.s */

// src/battle/skill_cmd.c func_00253E60 cerr diff=-1/0
f32 func_00253E60(s32 unused_arg0, u8 *arg1) {
    s32 sp9A;
    s32 sp98;
    s32 sp94;
    f32 sp30;
    s32 sp34;
    u8 *sp40;
    s32 sp44;
    s16 sp48;
    s16 sp4A;
    s32 sp50;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    s32 sp80;
    u8 *sp90;
    f32 temp_f20;
    f32 temp_f21;
    s32 temp_a3_2;
    u32 temp_a2;
    u32 temp_a3;
    u8 *temp_v0;

    if ((func_00253690(*(s16 *)((u8 *)arg1 + 0x34), &sp90) == 0) || (sp9A != 0)) {
        return *(f32 *)((u8 *)arg1 + 0);
    }
    temp_a3_2 = sp98 + 1;
    temp_v0 = sp90 + *(*(s32 *)((u8 *)sp90 + 0x14) + sp90 + ((temp_a3_2 - *(s32 *)((u8 *)sp90 + 0x18)) * 4));
    temp_f21 = (f32) *(s16 *)((u8 *)temp_v0 + 0x10);
    temp_f20 = (f32) *(s16 *)((u8 *)temp_v0 + 0x12);
    memset(&sp30, 0, 0x60, temp_a3_2);
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
    sp74 = 0.5f;
    sp78 = temp_f21 - 0.5f;
    sp7C = temp_f20 - 0.5f;
    M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
    M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
    sp30 = 0.0f;
    temp_a3 = *(s32 *)((u8 *)arg1 + 0x30) & 0x30000;
    sp40 = sp90;
    temp_a2 = temp_a3 >> 0xF;
    sp44 = sp94;
    sp48 = (s16) ((s64) ((((s64) ((s64) sp98 << 0x30) >> 0x30) + 1) << 0x30) >> 0x30);
    sp34 = temp_a2 | 1;
    sp4A = 0;
    return func_00253320(&sp30, arg1, temp_a2, temp_a3, temp_f21,(int *)(temp_f20));
}

/* Similar function already in C: func_00253FC0 (src/battle/skill_cmd.c), similarity 0.87.
 * It is the template below (not built). */
#if 0
f32 func_00253FC0(u8 *a0, u8 *o) {
    s32 res[4] __attribute__((aligned(16)));
    u8 buf[0x60] __attribute__((aligned(16)));
    u8 *t;
    s32 a3;
    s32 base;
    u8 *q;
    f32 fx;
    f32 fy;

    if (func_00253690(a0, *(s16 *)(o + 0x34), (u8 *)res) == 0) {
        return *(f32 *)o;
    }
    t = (u8 *)res[0];
    a3 = *(s16 *)((u8 *)res + 8);
    base = *(s32 *)(t + 0x14) + (s32)t;
    q = t + *(s32 *)(base + ((a3 - *(s32 *)(t + 0x18)) << 2));
    fx = (f32)*(s16 *)(q + 0x10);
    fy = (f32)*(s16 *)(q + 0x12);
    memset(buf, 0, 0x60);
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(buf + 0x20), "r"(o));
    *(f32 *)(buf + 0x44) = 0.5f;
    *(f32 *)(buf + 0x48) = fx - 0.5f;
    *(f32 *)(buf + 0x4C) = fy - 0.5f;
    __asm__ volatile ("lqc2 $vf1, 0x0(%1) ; sqc2 $vf1, 0x0(%0)" : : "r"(buf + 0x50), "r"(o + 0x10));
    *(f32 *)buf = 0.0f;
    *(s32 *)(buf + 4) = (((u32)*(s32 *)(o + 0x30) & 0x30000) >> 15) | 1;
    *(s32 *)(buf + 0x10) = res[0];
    *(s32 *)(buf + 0x14) = res[1];
    *(s16 *)(buf + 0x18) = *(s16 *)((u8 *)res + 8);
    *(s16 *)(buf + 0x1A) = 0;
    return func_00253320((s32 *)buf, o, fx, fy);
}
#endif

/* Draft (not built): func_001F4E70 at 0x001F4E70, size 0x1C8, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 61 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x14C, original 0x1C8
 * Original: asm/nonmatchings/battle/btb_draw/func_001F4E70.s */

// src/battle/btb_draw.c func_001F4E70 size diff=61/83
s32 func_00209950(s8 *, s32 *, s32);
extern s128 D_0044B5B0;
extern s128 D_0044B5C0;
extern s8 D_00469818;
extern void func_00146F30(void *);
void func_001F4E70(s32 unused_arg0, s8 *arg1, s32 arg2, s32 arg3) {
    s32 sp60;
    s32 sp70;
    f32 sp74;
    s128 sp80;
    s128 sp90;
    s32 var_a1;
    s8 *temp_s2;
    s8 *temp_v0;
    s8 *var_s1;
    u8 *temp_v0_2;

    var_a1 = 8;
    temp_s2 = (signed char *)(*D_0051CD0C);
    if (arg3 & 4) {
        var_a1 = 0x108;
    }
    var_s1 = NULL;
    temp_v0 = (signed char *)(func_001A50F0((char *)(temp_s2), (s32)(var_a1 + (*D_0051CD20 << 7))));
    if (temp_v0 != NULL) {
        var_s1 = (signed char *)(func_00209540((char *)(temp_v0), 0x02000001, 0));
    }
    if (var_s1 != NULL) {
        func_00209B50((char *)(var_s1), (char *)(arg1), 0);
        sp90 = D_0044B5B0;
        sp80 = D_0044B5C0;
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($s0) */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($a2) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v0) */);
        M2C_ERROR(/* unknown instruction: vsub.xyz $vf1, $vf0, $vf1 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v0) */);
        sp74 = 0.0f;
        func_00146F30(&sp70);
        M2C_ERROR(/* unknown instruction: lqc2 $vf1, ($v1) */);
        M2C_ERROR(/* unknown instruction: lqc2 $vf2, ($v0) */);
        M2C_ERROR(/* unknown instruction: vadd.xyz $vf1, $vf1, $vf2 */);
        M2C_ERROR(/* unknown instruction: sqc2 $vf1, ($v1) */);
        func_00146F30(&sp70);
        M2C_ERROR(/* unknown instruction: sqc2 $vf0, ($v0) */);
        func_00141C30(&sp60, &sp80, &sp70);
        func_00209950(var_s1, &sp60, 0);
        temp_v0_2 = func_001F5FD0((u32)(0x85000000U), (char *)(&D_00469818), 0, (void *)(func_001F2150), (void *)(M2C_ERROR(/* Read from unset register $a4 */)));
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) & ~0x800);
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32) (*(s32 *)((u8 *)temp_v0_2 + 0x20) | 0x800);
        memset(temp_v0_2 + 0x30, 0, 0x80);
        *(s8 **)((u8 *)temp_v0_2 + 0x38) = var_s1;
        *(s8 **)((u8 *)(temp_v0_2 + 0x30) + 4) = (signed char *)(func_001A50F0((char *)(temp_s2), 0x280));
        *(s32 *)((u8 *)temp_v0_2 + 0x30) = (s32) (arg3 & 2);
    }
}

/* Similar function already in C: func_001F4520 (src/battle/btb_draw.c), similarity 0.74.
 * It is the template below (not built). */
#if 0
void func_001F4520(s32 p0, char *p1, s32 p2, s32 flags) {
    BtbVec16b tmp;
    s32 s2;
    char *s1;
    char *s0;
    char *ptr;
    char *q;
    BtbRecC *rb;
    s32 a1;
    f32 f;

    s2 = (s32)D_0051CD0C[0];
    s0 = p1;
    a1 = 0xB;
    if (flags & 4) {
        a1 += 0x100;
    }
    a1 += D_0051CD20[0] << 7;
    s1 = NULL;
    ptr = func_001A50F0((char *)s2, a1);
    if (ptr != NULL) {
        s1 = func_00209540(ptr, 0x2000001, 0);
    }
    if (s1 != NULL) {
        __asm__ volatile("lqc2 $vf1, 0(%0) ; sqc2 $vf1, 0(%1)" : : "r"(s0), "r"(&tmp) : "memory");
        f = func_00200270(0, *(f32 *)&tmp.b[0], *(f32 *)&tmp.b[8]);
        *(f32 *)&tmp.b[4] = f;
        func_00209B50(s1, (char *)&tmp, 0);
        s0 = (char *)func_001F5FD0(0x85000000, D_004697A8, 0, (void *)func_001F2150, (void *)BtbObj_ReleaseSub38);
        *(s32 *)(s0 + 0x20) = *(s32 *)(s0 + 0x20) & -0x801;
        *(s32 *)(s0 + 0x20) = *(s32 *)(s0 + 0x20) | 0x800;
        memset(s0 + 0x30, 0, 0x80);
        *(s32 *)(s0 + 0x38) = (s32)s1;
        rb = (BtbRecC *)(s0 + 0x30);
        q = func_001A50F0((char *)s2, 0x280);
        rb->f4 = q;
        rb->f0 = flags & 2;
    }
}
#endif

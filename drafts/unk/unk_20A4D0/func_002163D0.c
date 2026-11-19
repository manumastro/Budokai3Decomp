/* Draft (not built): func_002163D0 at 0x002163D0, size 0xF4, segment unk/unk_20A4D0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 19 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_20A4D0/func_002163D0.s */

void func_002163D0(u8 *arg0) {
    u8 *temp_v0;
    u16 temp_s1;
    s32 temp_a0;
    u8 *temp_s0;
    temp_v0 = func_00215320(0, 0x400);
    temp_s1 = *(s16 *)((u8 *)arg0 + 0x20);
    if (temp_v0 != NULL) {
        temp_s0 = temp_v0 + 0x20;
        *(s32 **)((u8 *)temp_v0 + 8) = (int *)&func_00215EB0;
        *(s32 *)((u8 *)temp_v0 + 0x18) = 0x442F0000;
        *(s32 **)((u8 *)temp_v0 + 0xC) = (int *)&func_00212650;
        memset(temp_s0, 0, 0x50);
        temp_a0 = *(D_0046FDD0 + temp_s1 * 4);
        if (temp_a0 != 0) {
            *(s32 *)((u8 *)temp_v0 + 0x10) = func_00209540(temp_a0, 0x04000040, 0);
        }
        if (*(s32 *)((u8 *)temp_v0 + 0x10) != 0) {
            *(s32 *)((u8 *)temp_s0 + 0x20) = (s32)*(s32 *)(D_0046FDD0 + *(s16 *)((u8 *)arg0 + 0x22) * 4);
            *(s32 *)((u8 *)temp_s0 + 0x28) = (s32)((*(s16 *)((u8 *)arg0 + 0x22) << 5) + 0x03001000);
        }
    }
}

/* Similar function already in C: func_00216640 (src/unk/unk_20A4D0.c), similarity 0.76.
 * It is the template below (not built). */
#if 0
void func_00216640(u8 *a) {
    u8 *p;
    s32 idx;
    u8 *q;
    s32 e;
    Copy16A t60;
    Copy16A t50;

    p = func_00215320(-1, 0x10);
    idx = *(s16 *)(a + 0x20);
    t60 = *(Copy16A *)D_0044BAA0;
    if (p != 0) {
        void *fa = (void *)func_00212480;
        void *fb = (void *)func_00212650;
        q = p + 0x20;
        *(void **)(p + 0x8) = fa;
        *(void **)(p + 0xC) = fb;
        memset(q, 0, 0x50);
        e = *(s32 *)(D_0046FDD0 + idx * 4);
        if (e != 0) {
            *(s32 *)(p + 0x10) = func_00209540(e, 0x4000002, 0);
        }
        if (*(s32 *)(p + 0x10) != 0) {
            __asm__ volatile ("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(*(u8 **)a), "r"(q));
            func_00146F30(*(void **)(a + 0x4));
            func_00141C30(&t50, &t60, *(void **)(a + 0x4));
            func_00209950(*(s32 *)(p + 0x10), &t50, 0);
            *(s32 *)(q + 0x20) = *(s32 *)(D_0046FDD0 + *(s16 *)(a + 0x22) * 4);
            *(s32 *)(q + 0x28) = (*(s16 *)(a + 0x22) << 5) + 0x03001000;
        }
    }
}
#endif

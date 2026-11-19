/* Draft (not built): func_0021AB60 at 0x0021AB60, size 0x158, segment unk/unk_21AB30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: m2cfail
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); */
 * Original: asm/nonmatchings/unk/unk_21AB30/func_0021AB60.s */

/* no draft: decompile from the assembly */

/* Similar function already in C: func_0021ACC0 (src/unk/unk_21AB30.c), similarity 0.81.
 * It is the template below (not built). */
#if 0
void func_0021ACC0(Task *t) {
    Vec4 v;
    Eff e;

    v = D_0044F6E0;
    memset(&e, 0, sizeof(Eff));
    e.f54 = 0;
    e.f50 = 0x10;
    e.f52 = 7;
    e.f56 = 1;
    /* a VU0 quadword copy (an inline-assembly macro in the original, as Sony's libvu0 has) */
    __asm__ volatile("lqc2 $vf1, 0(%0)\n\tsqc2 $vf1, 0(%1)" : : "r"(t->f0), "r"(&e.f10));
    func_00146F30(t->f4);
    func_00141C30(e.f40, &v, t->f4);
    e.f8C = 2;
    e.f94 = 6;
    e.fA2 = 3;
    e.f96 = 6;
    e.fA4 = 0xB;
    e.f98 = 6;
    e.f58 = 0;
    e.fA0 = 0;
    e.f74 |= 0x10;
    e.f90 = func_0020F690();
    e.f6C = t->f8;
    func_00214DD0(&e);
    func_00214F80(e.f52, &e);
}
#endif

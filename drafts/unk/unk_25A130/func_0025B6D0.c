/* Draft (not built): func_0025B6D0 at 0x0025B6D0, size 0xB4, segment unk/unk_25A130 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 22 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_25A130/func_0025B6D0.s */

s32 memcpy(void *, void *, s32);
extern s32 func_0020F970;
void func_0025B6D0(u8 *arg0) {
    s32 temp_s0;
    u8 *temp_v0;
    u8 *temp_v0_2;
    func_0020D9F0(*(s32 *)((u8 *)arg0 + 0));
    temp_s0 = *(s32 *)((u8 *)*(u8 **)((u8 *)arg0 + 8) + 0x1350);
    M2C_ERROR();
    temp_v0 = (unsigned char *)func_00215320((s64)((s64)temp_s0 << 0x30) >> 0x30, 0x80);
    if (temp_v0 != NULL) {
        *(void (**)())((u8 *)temp_v0 + 8) = func_00211650;
        *(s32 *)((u8 *)temp_v0 + 0xC) = 0;
        *(f32 *)((u8 *)temp_v0 + 0x18) = (f32)*(f32 *)((u8 *)arg0 + 0x20);
        temp_v0_2 = (unsigned char *)func_00215320((s64)((s64)temp_s0 << 0x30) >> 0x30, 0x100);
        if (temp_v0_2 != NULL) {
            *(void (**)())((u8 *)temp_v0_2 + 0xC) = func_00212560;
            *(s32 **)((u8 *)temp_v0_2 + 8) = &func_0020F970;
            *(f32 *)((u8 *)temp_v0_2 + 0x18) = (f32)*(f32 *)((u8 *)arg0 + 0x20);
            memcpy(temp_v0_2 + 0x20, arg0, 0x58);
        }
    }
}

/* Similar function already in C: func_0025B790 (src/unk/unk_25A130.c), similarity 0.93.
 * It is the template below (not built). */
#if 0
void func_0025B790(EffSrc *e) {
    s32 owner = e->f8->f1350;
    Eff *f;

    func_0020D9F0(e->f0);
    f = func_00215320(owner, 0x80);
    if (f == NULL) {
        return;
    }
    f->f8 = func_00211650;
    f->fC = NULL;
    f->f18 = e->f20;
    f = func_00215320(owner, 0x100);
    if (f == NULL) {
        return;
    }
    f->f8 = func_00210240;
    f->fC = func_00212560;
    f->f18 = e->f20;
    func_00125740(f->f20, e, 0x58);
}
#endif

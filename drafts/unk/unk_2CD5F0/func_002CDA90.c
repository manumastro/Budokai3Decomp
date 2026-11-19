/* Draft (not built): func_002CDA90 at 0x002CDA90, size 0xD8, segment unk/unk_2CD5F0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2CD5F0/func_002CDA90.s */

void func_002CDA90(void) {
    u8 *temp_v0_2;
    s32 temp_a3;
    s32 temp_v0;
    s32 var_s1;
    s8 *temp_s2;
    var_s1 = 0;
    temp_s2 = (signed char *)*D_0051CD0C;
    temp_v0 = func_001A50F0((s32)temp_s2, 0xFF);
    if (temp_v0 != 0) {
        var_s1 = func_00209540(temp_v0, 0x02000004, 0);
    }
    if (var_s1 != 0) {
        temp_v0_2 = func_001F5FD0(0x85000000, &D_0046F218, 0, &func_002CDA30, 0);
        temp_a3 = *(s32 *)((u8 *)temp_v0_2 + 0x20);
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32)(temp_a3 & ~0x800);
        *(s32 *)((u8 *)temp_v0_2 + 0x20) = (s32)(*(s32 *)((u8 *)temp_v0_2 + 0x20) | 0x800);
        memset(temp_v0_2 + 0x30, 0, 0x80);
        *(s32 *)((u8 *)temp_v0_2 + 0x38) = var_s1;
        *(s32 *)((u8 *)(temp_v0_2 + 0x30) + 4) = func_001A50F0((s32)temp_s2, 0x280);
    }
}

/* Similar function already in C: func_001F5540 (src/battle/btb_draw.c), similarity 0.82.
 * It is the template below (not built). */
#if 0
void func_001F5540(s32 p0, char *p1, s32 p2, s32 flags) {
    s32 s2;
    char *s1;
    s32 s3;
    char *s0;
    char *ptr;
    char *q;
    BtbRecB *rb;
    s32 a1;

    s2 = (s32)D_0051CD0C[0];
    s0 = p1;
    s3 = flags;
    a1 = 3;
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
        func_00209B50(s1, s0, 0);
        s0 = (char *)func_001F5FD0(0x85000000, D_00469848, 0, (void *)func_001F2150, (void *)BtbObj_ReleaseSub38);
        *(s32 *)(s0 + 0x20) = *(s32 *)(s0 + 0x20) & -0x801;
        *(s32 *)(s0 + 0x20) = *(s32 *)(s0 + 0x20) | 0x800;
        memset(s0 + 0x30, 0, 0x80);
        *(s32 *)(s0 + 0x38) = (s32)s1;
        rb = (BtbRecB *)(s0 + 0x30);
        q = func_001A50F0((char *)s2, 0x280);
        rb->f4 = q;
        rb->f0 = s3 & 2;
    }
}
#endif

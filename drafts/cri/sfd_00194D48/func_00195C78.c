/* Draft (not built): func_00195C78 at 0x00195C78, size 0x88, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: diff, 15 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00195C78.s */

s32 func_00107C88(s32);                         /* extern */
s32 func_00195700(s32);                         /* extern */
s32 func_001957B8();                                /* extern */
s32 func_00195D00(void *);                      /* extern */
s32 func_00197EB8();                                /* extern */
s32 sceMpegDelete(s32);                         /* extern */

void func_00195C78(u8 *arg0) {
    s32 temp_a0;
    s32 temp_s0;

    if (func_001957B8() == 0) {
        goto block_6;
    }
    temp_s0 = *(s32 *)((u8 *)arg0 + 0x1C70);
    func_00195700(temp_s0 + 0x1038);
    temp_a0 = temp_s0 + 0xFF0;
    if (func_00197EB8() == 1) {
        goto block_4;
    }
    sceMpegDelete(temp_a0);
    return;
block_4:
    func_00107C88(temp_a0);
    func_00195D00(arg0);
    return;
block_6:
    return;
}

/* Similar function already in C: func_0018CCB8 (src/cri/sfd.c), similarity 0.64.
 * It is the template below (not built). */
#if 0
void func_0018CCB8(s32 arg0) {
    s32 temp_s0;
    s32 temp_v0;

    temp_s0 = arg0 + 0x78;
    temp_v0 = func_0018CD20();
    if (temp_v0 != 0) {
        func_0018CBE8(temp_s0, temp_v0);
        func_0018CD70(temp_s0);
        func_0018D390(arg0);
    }
}
#endif

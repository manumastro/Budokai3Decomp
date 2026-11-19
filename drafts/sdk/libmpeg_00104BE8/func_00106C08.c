/* Draft (not built): func_00106C08 at 0x00106C08, size 0x50, segment sdk/libmpeg_00104BE8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/nonmatchings/sdk/libmpeg_00104BE8/func_00106C08.s */

s32 func_00106A68();                            /* extern */
s32 func_00106AA0(s32, s32);                    /* extern */

void func_00106C08(s32 arg0) {
    s32 temp_a1;

    func_00106A68();
    temp_a1 = -(*(s32 *)0x10002020 & 7) & 7;
    if (temp_a1 != 0) {
        func_00106AA0(arg0, temp_a1);
    }
}

/* Similar function already in C: func_0018CBA8 (src/cri/sfd.c), similarity 0.61.
 * It is the template below (not built). */
#if 0
void func_0018CBA8(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_0018CD20();
    if (temp_v0 != 0) {
        func_0018CBE8(temp_v0, arg0 + 0x78);
    }
}
#endif

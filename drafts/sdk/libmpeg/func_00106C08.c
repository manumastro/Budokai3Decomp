/* Draft (not built): func_00106C08 at 0x00106C08, size 0x50, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libmpeg.s */

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

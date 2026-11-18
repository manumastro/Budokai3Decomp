/* Draft (not built): func_0019A080 at 0x0019A080, size 0x9C, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 8 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019A080.s */

void func_0019A080(u8 *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_t1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;

    temp_a2 = *(s32 *)((u8 *)arg0 + 0x288);
    if (temp_a2 == -5) {
        *(s32 *)((u8 *)arg0 + 0x288) = arg1;
        return;
    }
    temp_a3 = arg1 - temp_a2;
    if (temp_a3 != 0) {
        temp_v1 = *(s32 *)((u8 *)arg0 + 0x290);
        temp_v0 = *(s32 *)((u8 *)arg0 + 0x294);
        temp_t1 = *(s32 *)((u8 *)arg0 + 0x28C);
        *(s32 *)((u8 *)arg0 + 0x288) = arg1;
        *(s32 *)((u8 *)arg0 + 0x290) = (s32) ((temp_a3 >= temp_v1) ? temp_a3 : temp_v1);
        *(s32 *)((u8 *)arg0 + 0x294) = (s32) ((temp_v0 >= temp_a3) ? temp_a3 : temp_v0);
        if ((temp_t1 != 0x7FFFFFFF) && (temp_a3 < temp_t1)) {
            temp_v0_2 = temp_t1 - temp_a3;
            temp_v0_3 = (s32) ((temp_v0_2 < 0) ? (temp_v0_2 + 7) : temp_v0_2) >> 3;
            if (temp_v0_3 != 0) {
                *(s32 *)((u8 *)arg0 + 0x28C) = (s32) (temp_t1 - temp_v0_3);
                return;
            }
        }
        *(s32 *)((u8 *)arg0 + 0x28C) = temp_a3;
    }
}

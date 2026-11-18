/* Draft (not built): func_0019CA98 at 0x0019CA98, size 0x234, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 84 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_0019CA98.s */

s32 dpmul(s32, s64);                                /* extern */
s64 func_0011F758(s64, s64);                        /* extern */
s32 func_00120F68(s64);                             /* extern */
s32 func_00121930(s32, s64);                        /* extern */
s32 func_00121C78(s32, s32);                        /* extern */
s32 func_00121ED8(s32, s32);                        /* extern */
s32 func_00121F28(s32);                             /* extern */
s32 func_00121FE0(s32);                             /* extern */
s32 func_00127A88(u32, s32 *);              /* extern */
s32 sprintf(s32 *, s32 *, void *, s64, s64, s64, s64, s64, s64, s64, s64, s64, s64, s64, s64, s64, s64, s64, s64, s64, s64, s64, s64); /* extern */
extern s32 D_004268C0;
extern s32 D_00426B38;
extern s32 D_00426B3C;
extern u32 D_00426B44;
extern u32 D_00426B48;
extern s32 D_004678B8;
extern s64 D_00467948;

void func_0019CA98(u8 *arg0) {
    s32 spA0;
    s64 sp1A0;
    s64 sp1A8;
    s64 sp1B0;
    s64 sp1B8;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s64 temp_a0;
    s64 temp_a1;
    s64 temp_s1;
    s64 temp_t4;
    u32 temp_v1;

    if (D_00426B3C != 0) {
        temp_s1 = *(s64 *)((u8 *)arg0 + 0x120);
        sp1A0 = func_0011F758(*(s64 *)((u8 *)arg0 + 0x118), temp_s1);
        temp_s0 = func_00120F68(*(s64 *)((u8 *)arg0 + 0x118));
        temp_v0 = func_00121930(dpmul(func_00121C78(temp_s0, func_00120F68(temp_s1)), D_00467948), 0xFF80 << 0x2E);
        temp_v0_2 = func_00121FE0(temp_v0);
        temp_a0 = *(s64 *)((u8 *)arg0 + 0x188);
        temp_t4 = *(s64 *)((u8 *)arg0 + 0x128);
        temp_s1_2 = (func_00121ED8(func_00121F28(temp_v0_2), temp_v0) > 0) ? (temp_v0_2 - 1) : temp_v0_2;
        sp1A8 = temp_a0;
        temp_a1 = *(s64 *)((u8 *)arg0 + 0x108);
        sp1B0 = temp_a1;
        sp1B8 = (s64) *(s32 *)((u8 *)arg0 + 0x1B4);
        temp_s0_2 = sprintf(&spA0, &D_004678B8, arg0, sp1A0, sp1A8, sp1B0, temp_t4, temp_a1 - temp_t4, temp_a0 - temp_t4, (s64) *(s32 *)((u8 *)arg0 + 0x1AC), (s64) *(s32 *)((u8 *)arg0 + 0x1B0), sp1B8, (s64) *(s32 *)((u8 *)arg0 + 0x1B8), (s64) *(u32 *)((u8 *)arg0 + 4), (s64) *(u32 *)((u8 *)arg0 + 8), (s64) *(s32 *)((u8 *)arg0 + 0x19C), (s64) *(s32 *)((u8 *)arg0 + 0x1A0), (s64) *(s32 *)((u8 *)arg0 + 0x190), (s64) *(s32 *)((u8 *)arg0 + 0x194), (s64) *(s32 *)((u8 *)arg0 + 0x198), (s64) *(s32 *)((u8 *)arg0 + 0x1A4), (s64) *(s32 *)((u8 *)arg0 + 0x1A8), (s64) D_004268C0);
        func_00127A88(D_00426B44, &spA0);
        temp_v1 = D_00426B44 + temp_s0_2;
        D_00426B44 = temp_v1;
        if (temp_v1 >= (u32) ((D_00426B3C + D_00426B38) - 0x400)) {
            D_00426B44 = D_00426B48;
        }
    }
}

/* Draft (not built): func_001814C8 at 0x001814C8, size 0x100, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_001814C8.c:30: parse error before "int"
 * Original: asm/nonmatchings/cri/mwsfd/func_001814C8.s */

s32 func_00182260();                                /* extern */
s32 func_00185A60(void *, s32, s32);            /* extern */
s32 func_001A13C0(s32, s32, void *, s32 *);     /* extern */
s32 memcpy(s32, s32, s32);                      /* extern */
s32 memset(s32, s32, s32, s32);             /* extern */

void func_001814C8(u8 *arg0, u8 *arg1) {
    s32 sp0;
    s32 sp4;
    s32 temp_a3;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_v0_2;
    u8 *temp_v0;

    temp_v0 = *(u8 **)((u8 *)arg1 + 0x38);
    temp_s2 = *(s32 *)((u8 *)temp_v0 + 4);
    temp_s1 = *(s32 *)((u8 *)temp_v0 + 0);
    if ((func_00182260() == 1) && (*(s32 *)((u8 *)arg0 + 0x180) != 0)) {
        if ((temp_s1 != 0) && (temp_s2 >= 5)) {
            func_001A13C0(temp_s1 + 4, temp_s2 - 4, sp, &sp4);
        } else {
            sp0 = 0;
            sp4 = 0;
        }
        if ((sp0 != 0) && (sp4 > 0)) {
            temp_v0_2 = *(s32 *)((u8 *)arg0 + 0x184);
            temp_a3 = (temp_v0_2 < sp4) int temp_v0_2 : sp4;
            sp4 = temp_a3;
            memset(*(s32 *)((u8 *)arg0 + 0x180), 0, temp_v0_2, temp_a3);
            memcpy(*(s32 *)((u8 *)arg0 + 0x180), sp0, sp4);
            *(s32 *)((u8 *)arg0 + 0x188) = (s32) *(s32 *)((u8 *)arg0 + 0x180);
            *(s32 *)((u8 *)arg0 + 0x18C) = sp4;
        } else {
            *(s32 *)((u8 *)arg0 + 0x188) = 0;
            *(s32 *)((u8 *)arg0 + 0x18C) = 0;
        }
        func_00185A60(arg0, *(s32 *)((u8 *)arg0 + 0x188), *(s32 *)((u8 *)arg0 + 0x18C));
    }
}

/* Draft (not built): func_001853F8 at 0x001853F8, size 0x14C, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_001853F8.c:28: `sp14' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/func_001853F8.s */

s32 func_0016F290(void *, s32 *, s32 *, s32 *, s32, s32); /* extern */
s32 func_00185650(void *, s32);                 /* extern */
s32 memcpy(s32, s32, s32);                      /* extern */
extern s32 D_00466B50;
extern s32 D_00466B58;

void func_001853F8(u8 *arg0) {
    s32 sp10;
    s32 sp20;
    s32 temp_v0;
    s32 temp_v0_2;
    u8 **temp_s2;
    u8 *temp_s1;

    temp_s1 = arg0 + 0x1A8;
    temp_s2 = *(u8 ***)((u8 *)arg0 + 0x190);
    temp_v0 = (*(s32 (**)(u8 **, s32))((u8 *)(*temp_s2) + 0x24))(temp_s2, 1);
    if ((temp_v0 == 0) || (func_0016F290(sp, &D_00466B50, &D_00466B58, &sp10, *(s32 *)((u8 *)arg0 + 0x194), temp_v0) == 0)) {
        *(s32 *)((u8 *)temp_s1 + 4) = 0;
        *(s32 *)((u8 *)arg0 + 0x1A8) = 1;
        *(s32 *)((u8 *)temp_s1 + 8) = 0;
        return;
    }
    temp_v0_2 = *(s32 *)((u8 *)arg0 + 0x19C);
    if (temp_v0_2 != 0) {
        memcpy(temp_v0_2, sp10, sp14);
        *(s32 *)((u8 *)arg0 + 0x1A8) = 1;
        *(s32 *)((u8 *)temp_s1 + 4) = (s32) *(s32 *)((u8 *)arg0 + 0x19C);
        *(s32 *)((u8 *)temp_s1 + 8) = sp14;
        (*(s32 (**)(u8 **, s32, s32, s32 *))((u8 *)(*temp_s2) + 0x18))(temp_s2, 1, 0x7FFFFFFF, &sp20);
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s2) + 0x20))(temp_s2, 0, &sp20);
        (*(s32 (**)(u8 **))((u8 *)(*temp_s2) + 0x14))(temp_s2);
        return;
    }
    *(s32 *)((u8 *)arg0 + 0x1A8) = 1;
    *(s32 *)((u8 *)temp_s1 + 4) = sp10;
    *(s32 *)((u8 *)temp_s1 + 8) = sp14;
    func_00185650(arg0, sp14);
}

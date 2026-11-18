/* Draft (not built): func_00191300 at 0x00191300, size 0x1C8, segment cri/sfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00191300.c:57: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/sfd/func_00191300.s */

s32 func_0016E858(s32, s32, s32);           /* extern */
s32 func_0017C590(s32, void *);                     /* extern */
s32 func_0017C868(s32, s32, s32);               /* extern */
s32 func_0017C880(s32, s32, void *);        /* extern */
s32 func_0017C8A8(s32, s32);                        /* extern */
s32 func_0018D650(void *, s32, s32, void *);    /* extern */
s32 func_001911E0(void *, s32);                 /* extern */
s32 func_00191260(void *, s32, s32, s32);       /* extern */
s32 func_001914C8(void *, void *, s32, void *); /* extern */
s32 func_00191748(void *, void *, s32);         /* extern */
s32 func_00191AA0(void *, void *, s32, s32);    /* extern */
s32 func_00192040(void *, void *);              /* extern */
s32 func_00192120(void *, void *);              /* extern */
s32 func_001922B8(void *, s32, void *, s32);        /* extern */

s32 func_00191300(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s6;
    s32 temp_v1;
    s32 var_v0;
    u8 *temp_s3;
    u8 *temp_s5;
    u8 *temp_v0;

    temp_s3 = *(u8 **)((u8 *)arg0 + 0x1C70);
    temp_s6 = *(s32 *)((u8 *)temp_s3 + 0);
    temp_v0 = temp_s3 + 0xF2C;
    temp_s5 = temp_s3 + 0x8C;
    func_0017C868(temp_s6, *(s32 *)((u8 *)temp_v0 + 0xC), *(s32 *)((u8 *)temp_v0 + 8));
    temp_s2 = func_0016E858(arg2, 0, 1);
    temp_s1 = func_0017C8A8(temp_s6, arg2);
    temp_s0 = func_0016E858(arg2, 0, 1) - temp_s2;
    temp_s1_2 = func_00191260(arg0, temp_s1, temp_s0, 0xFF000F04);
    func_001911E0(arg0, temp_s0);
    var_v0 = temp_s1_2;
    if (temp_s1_2 == 0) {
        func_0017C880(temp_s6, 0, temp_s3 + 0xF3C);
        if (func_0017C590(temp_s6, temp_s5) != 0) {
            return func_0018D650(arg0, 0xFF000F05, arg1, sp);
        }
        temp_v1 = *(s32 *)((u8 *)temp_s5 + 0x30);
        if (*(s32 *)((u8 *)temp_s3 + 0x10C) != temp_v1) {
            *(s32 *)((u8 *)temp_s3 + 0x10C) = temp_v1;
            *(s32 *)((u8 *)temp_s3 + 0x110) = 1;
        } else {
            *(s32 *)((u8 *)temp_s3 + 0x110) = 0;
        }
        func_001914C8(arg0, temp_s5, arg1, sp);
        var_v0 = 0;
        if (arg3 != 0) {
            func_00191748(arg0, temp_s5, *(s32 *)((u8 *)temp_s3 + 0x110));
            func_00191AA0(arg0, temp_s5, sp0, *(s32 *)((u8 *)temp_s3 + 0x110));
            func_00192040(arg0, temp_s5);
            func_00192120(arg0, temp_s5);
            var_v0 = func_001922B8(arg0, temp_s6, temp_s5, arg1);
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return var_v0;
    }
    return var_v0;
}

/* Draft (not built): func_00195878 at 0x00195878, size 0x214, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_00195878.s */

s32 func_00106F48(s32, s32, s32);               /* extern */
s32 func_00107D60(s32, s32, s32 *, void *); /* extern */
s32 func_00194D70(s32, s32, s32, s32);      /* extern */
s32 func_001950E8(s32);                         /* extern */
s32 func_001952E8(s32);                         /* extern */
s32 func_00195D28(void *, s32);                 /* extern */
s32 func_00197EB8(s32, void *, void *, s32);    /* extern */
extern s32 D_00426B18;
extern s32 func_00195AA0;
extern s32 func_00195BA8;
extern s32 func_00195C28;
extern s32 func_00195C50;

void func_00195878(u8 *arg0) {
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0;
    s32 var_v0;
    u8 *temp_a1;
    u8 *temp_a2;
    u8 *temp_s1;

    temp_a1 = *(u8 **)((u8 *)arg0 + 0x1C70);
    temp_a2 = temp_a1 + 4;
    temp_s1 = temp_a1 + 0xFC8;
    temp_s3 = temp_a1 + 0xFF0;
    if (D_00426B18 == 0) {
        *(s32 *)((u8 *)temp_a1 + 0xFC8) = 0;
        return;
    }
    temp_a3 = *(s32 *)((u8 *)temp_a1 + 0x28);
    temp_s4 = ((s32) (*(s32 *)((u8 *)temp_a2 + 8) * *(s32 *)((u8 *)temp_a2 + 0xC) * 9) / 2) + 0x2800;
    if (temp_a3 == 0) {
        temp_v0 = (*(s32 *)((u8 *)temp_a2 + 0x10) + 0x3F) & ~0x3F;
        *(s32 *)((u8 *)temp_a1 + 0x28) = temp_v0;
        var_v0 = (temp_v0 + temp_s4 + 0x3F) & ~0x3F;
    } else {
        var_v0 = (*(s32 *)((u8 *)temp_a1 + 0x2C) + 0x3F) & ~0x3F;
        *(s32 *)((u8 *)temp_a1 + 0x28) = (s32) ((temp_a3 + 0x3F) & ~0x3F);
    }
    *(s32 *)((u8 *)temp_a1 + 0x2C) = var_v0;
    temp_s6 = *(s32 *)((u8 *)temp_a1 + 0x2C);
    temp_s0 = *(s32 *)((u8 *)temp_a1 + 0x28);
    temp_s5 = (temp_s6 + 0x8003F) & ~0x3F;
    temp_s7 = (temp_s5 + 0x104F) & ~0x3F;
    if (func_00197EB8(-0x40, temp_a1, temp_a2, temp_a3) != 1) {
        func_00106F48(temp_s3, temp_s0, temp_s4);
        func_00107D60(temp_s3, 0, &func_00195AA0, arg0);
        func_00107D60(temp_s3, 1, &func_00195BA8, arg0);
        func_00107D60(temp_s3, 2, &func_00195C28, arg0);
        func_00107D60(temp_s3, 3, &func_00195C50, arg0);
    } else {
        func_00195D28(arg0, temp_s0);
    }
    temp_s0_2 = temp_s1 + 0x70;
    func_00194D70(temp_s0_2, temp_s6, temp_s5, 0x100);
    func_001950E8(temp_s0_2);
    func_001952E8(temp_s0_2);
    *(s8 *)((u8 *)temp_s1 + 0x10) = 0;
    *(s8 *)((u8 *)temp_s1 + 0x11) = 0;
    *(s8 *)((u8 *)temp_s1 + 0x12) = 0;
    *(s32 *)((u8 *)temp_a1 + 0xFC8) = 1;
    *(s32 *)((u8 *)temp_s1 + 0x20) = 0;
    *(s32 *)((u8 *)temp_a1 + 0x1098) = -1;
    *(s32 *)((u8 *)(temp_a1 + 0x1098) + 4) = 0;
    *(s32 *)((u8 *)temp_s1 + 4) = 0;
    *(s32 *)((u8 *)temp_s1 + 8) = 0;
    *(s32 *)((u8 *)temp_s1 + 0xC) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x14) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x18) = 0;
    *(s32 *)((u8 *)temp_s1 + 0x1C) = 0;
}

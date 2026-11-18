/* Draft (not built): func_00105FB0 at 0x00105FB0, size 0x2AC, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: d_00105FB0.c:84: too few arguments to function `func_00106A68'
 * Original: asm/sdk/libmpeg.s */

s32 DI();                                           /* extern */
s32 EI(s32, s32);                       /* extern */
u32 func_00104728(void *, s32);                 /* extern */
s32 func_00105C98(s32);                         /* extern */
s32 func_00106898(void *);                      /* extern */
s32 func_00106A68(void *, s32);             /* extern */
s32 func_00107DE0(s32, void *, s32);            /* extern */
s32 func_00109738(void *, s32 *);           /* extern */
extern s32 D_003EC4C0;
extern s32 D_003EC500;
extern s32 D_0045CFB0;

void func_00105FB0(u8 *arg0) {
    s32 temp_v0_2;
    s32 temp_v0_5;
    s32 temp_v0_7;
    u32 temp_v0;
    u32 temp_v0_3;
    u32 temp_v0_4;
    u32 temp_v0_6;

    *(s32 *)((u8 *)arg0 + 0xE8) = 0;
    temp_v0 = func_00104728((u8 *)0x20);
    temp_v0_2 = (temp_v0 >> 8) & 0xFFF;
    *(u32 *)((u8 *)arg0 + 0x134) = (u32) (temp_v0 >> 0x14);
    *(s32 *)((u8 *)arg0 + 0x138) = temp_v0_2;
    if (temp_v0_2 >= 0xAF1) {
        func_00109738(arg0, &D_0045CFB0);
    }
    temp_v0_3 = func_00104728(arg0, 0x1E);
    *(u32 *)((u8 *)arg0 + 0x144) = (u32) (temp_v0_3 >> 0xC);
    *(s32 *)((u8 *)arg0 + 0x148) = (s32) ((temp_v0_3 >> 1) & 0x3FF);
    temp_v0_4 = func_00104728(arg0, 1);
    *(u32 *)((u8 *)arg0 + 0x850) = temp_v0_4;
    if (temp_v0_4 != 0) {
        func_00106A68(arg0);
        *(s32 *)0x10002000 = 0x50000000;
        *(s32 *)((u8 *)arg0 + 0x82C) = 0x50000000;
        *(s32 *)((u8 *)arg0 + 0x828) = 1;
        func_00106A68(arg0, 1);
    } else {
        func_00107DE0(*(s32 *)((u8 *)arg0 + 0x868), sp, 2);
        func_00106A68(arg0);
        *(u8 *)0x10002000 = 0;
        func_00106A68(arg0);
        temp_v0_5 = DI();
        *(s32 *)0x1000B410 = (s32) &D_003EC4C0 & 0x0FFFFFFF;
        *(s32 *)0x1000B420 = 4;
        *(s32 *)0x1000B400 = 0x101;
        if (temp_v0_5 != 0) {
            EI(0x101, 0x1000B420);
        }
        *(u8 *)0x10002000 = 0x50000000;
        *(s32 *)((u8 *)arg0 + 0x82C) = 0x50000000;
        *(s32 *)((u8 *)arg0 + 0x828) = 1;
        func_00106A68(arg0);
        func_00107DE0(*(s32 *)((u8 *)arg0 + 0x868), sp, 3);
    }
    temp_v0_6 = func_00104728(arg0, 1);
    *(u32 *)((u8 *)arg0 + 0x854) = temp_v0_6;
    if (temp_v0_6 != 0) {
        func_00106A68(arg0);
        *(u8 *)0x10002000 = 0x58000000;
        *(s32 *)((u8 *)arg0 + 0x82C) = 0x50000000;
        *(s32 *)((u8 *)arg0 + 0x828) = 1;
        func_00106A68(arg0, 1);
    } else {
        func_00107DE0(*(s32 *)((u8 *)arg0 + 0x868), sp, 2);
        func_00106A68(arg0);
        *(u8 *)0x10002000 = 0;
        func_00106A68(arg0);
        temp_v0_7 = DI();
        *(u8 *)0x1000B410 = (s32) ((s32) &D_003EC500 & 0x0FFFFFFF);
        *(u8 *)0x1000B420 = 4;
        *(u8 *)0x1000B400 = 0x101;
        if (temp_v0_7 != 0) {
            EI(0x101, 0x1000B420);
        }
        *(u8 *)0x10002000 = 0x58000000;
        *(s32 *)((u8 *)arg0 + 0x82C) = 0x50000000;
        *(s32 *)((u8 *)arg0 + 0x828) = 1;
        func_00106A68(arg0);
        func_00107DE0(*(s32 *)((u8 *)arg0 + 0x868), sp, 3);
    }
    func_00106898(arg0);
    func_00105C98(*(s32 *)((u8 *)arg0 + 0x868));
}

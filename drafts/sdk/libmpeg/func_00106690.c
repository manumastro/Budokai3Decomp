/* Draft (not built): func_00106690 at 0x00106690, size 0x1E4, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/sdk/libmpeg.s */

s32 func_00104728();

void func_00106690(u8 *arg0) {
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_a2_3;
    s32 temp_v0;

    *(s32 *)((u8 *)arg0 + 0x174) = func_00104728((u8 *)4);
    *(s32 *)((u8 *)arg0 + 0x178) = func_00104728(arg0, 4);
    *(s32 *)((u8 *)arg0 + 0x17C) = func_00104728(arg0, 4);
    *(s32 *)((u8 *)arg0 + 0x180) = func_00104728(arg0, 4);
    *(s32 *)0x10002010 = (*(s32 *)0x10002010 & 0xFFFCFFFF) | (func_00104728(arg0, 2) << 0x10);
    temp_v0 = func_00104728(arg0, 2, 0xFFFCFFFF, 0x10002010);
    *(s32 *)((u8 *)arg0 + 0x184) = temp_v0;
    if (*(s32 *)((u8 *)arg0 + 0xE8) == 0) {
        *(s32 *)((u8 *)arg0 + 0xE8) = temp_v0;
    }
    *(s32 *)((u8 *)arg0 + 0x188) = func_00104728(arg0, 1);
    *(s32 *)((u8 *)arg0 + 0x18C) = func_00104728(arg0, 1);
    *(s32 *)((u8 *)arg0 + 0x190) = func_00104728(arg0, 1);
    temp_a2 = (*(u8 *)0x10002010 & 0xFFBFFFFF) | (func_00104728(arg0, 1) << 0x16);
    *(u8 *)0x10002010 = temp_a2;
    temp_a2_2 = (*(u8 *)0x10002010 & 0xFFDFFFFF) | (func_00104728(arg0, 1, temp_a2) << 0x15);
    *(u8 *)0x10002010 = temp_a2_2;
    temp_a2_3 = (*(u8 *)0x10002010 & 0xFFEFFFFF) | (func_00104728(arg0, 1, temp_a2_2) << 0x14);
    *(u8 *)0x10002010 = temp_a2_3;
    *(s32 *)((u8 *)arg0 + 0x194) = func_00104728(arg0, 1, temp_a2_3);
    func_00104728(arg0, 1);
    *(s32 *)((u8 *)arg0 + 0x198) = func_00104728(arg0, 1);
    if (func_00104728(arg0, 1) != 0) {
        func_00104728(arg0, 1);
        func_00104728(arg0, 3);
        func_00104728(arg0, 1);
        func_00104728(arg0, 7);
        func_00104728(arg0, 8);
    }
}

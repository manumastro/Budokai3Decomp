/* Draft (not built): func_00104728 at 0x00104728, size 0xE8, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O1 -G0; declarations unprototyped
 * Original: asm/sdk/libmpeg.s */

s64 func_001045A8();
s32 func_00104938();

u32 func_00104728(u8 *arg0, s32 arg1) {
    s32 temp_a1;
    s32 temp_a3;
    u32 temp_a2;

    func_00104938();
    if ((*(s32 *)((u8 *)arg0 + 0x828) != 0) || (*(s32 *)((u8 *)arg0 + 0x84C) < arg1)) {
        *(s32 *)0x10002000 = 0x40000000;
        *(s32 *)((u8 *)arg0 + 0x828) = 0;
        *(s32 *)((u8 *)arg0 + 0x82C) = 0x40000000;
        *(u32 *)((u8 *)arg0 + 0x848) = (u32) ((s64) (func_001045A8(arg0) << 0x20) >> 0x20);
    }
    temp_a1 = arg1 | 0x40000000;
    *(s32 *)((u8 *)arg0 + 0x84C) = 0x20;
    temp_a2 = *(u32 *)((u8 *)arg0 + 0x848);
    temp_a3 = temp_a1 & 0xF0000000;
    *(u8 *)0x10002000 = temp_a1;
    *(s32 *)((u8 *)arg0 + 0x82C) = temp_a3;
    switch (temp_a3) {                              /* irregular */
    case 0x30000000:
        *(s32 *)((u8 *)arg0 + 0x828) = 0;
        break;
    case 0x20000000:
    case 0x40000000:
        *(s32 *)((u8 *)arg0 + 0x828) = 0;
        break;
    default:
        *(s32 *)((u8 *)arg0 + 0x828) = 1;
        break;
    }
    *(u32 *)((u8 *)arg0 + 0x848) = (u32) ((s64) (func_001045A8(arg0, temp_a1, temp_a2, temp_a3) << 0x20) >> 0x20);
    return temp_a2 >> (0x20 - arg1);
}

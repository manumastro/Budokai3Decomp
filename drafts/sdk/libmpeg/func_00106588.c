/* Draft (not built): func_00106588 at 0x00106588, size 0xE8, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; declarations unprototyped
 * Original: asm/sdk/libmpeg.s */

s32 func_00104728();
s32 func_00106A68();
s32 func_00109738();
extern s32 D_0045D010;
extern s32 D_0045D038;

void func_00106588(u8 *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;

    temp_v0 = func_00104728((u8 *)1);
    *(s32 *)((u8 *)arg0 + 0x850) = temp_v0;
    if (temp_v0 != 0) {
        func_00106A68(arg0);
        *(s32 *)0x10002000 = 0x50000000;
        *(s32 *)((u8 *)arg0 + 0x82C) = 0x50000000;
        *(s32 *)((u8 *)arg0 + 0x828) = 1;
        func_00106A68(arg0, 1);
    }
    temp_v0_2 = func_00104728(arg0, 1);
    *(s32 *)((u8 *)arg0 + 0x854) = temp_v0_2;
    if (temp_v0_2 != 0) {
        func_00106A68(arg0);
        *(u8 *)0x10002000 = 0x58000000;
        *(s32 *)((u8 *)arg0 + 0x82C) = 0x50000000;
        *(s32 *)((u8 *)arg0 + 0x828) = 1;
        func_00106A68(arg0, 1);
    }
    if (func_00104728(arg0, 1) != 0) {
        func_00109738(arg0, &D_0045D010);
    }
    if (func_00104728(arg0, 1) != 0) {
        func_00109738(arg0, &D_0045D038);
    }
}

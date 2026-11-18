/* Draft (not built): func_00106448 at 0x00106448, size 0x140, segment sdk/libmpeg (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 16 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0
 * Original: asm/sdk/libmpeg.s */

u32 func_00104728(void *, s32);                 /* extern */
s32 func_00109738(void *, s32 *);           /* extern */
extern s32 D_0045CFC8;
extern s32 D_0045CFF0;

void func_00106448(u8 *arg0) {
    s32 temp_v0_2;
    u32 temp_s0;
    u32 temp_s2;
    u32 temp_v0;

    *(s32 *)((u8 *)arg0 + 0x858) = 1;
    *(s32 *)0x10002010 &= 0xFF7FFFFF;
    temp_v0 = func_00104728((u8 *)0x1C, 0x10002010);
    temp_v0_2 = (temp_v0 >> 0x11) & 3;
    *(s32 *)((u8 *)arg0 + 0x150) = temp_v0_2;
    if (temp_v0_2 != 1) {
        func_00109738(arg0, &D_0045CFC8);
    }
    *(s32 *)((u8 *)arg0 + 0x14C) = (s32) ((temp_v0 >> 0x13) & 1);
    temp_s0 = temp_v0 >> 0x14;
    temp_s2 = func_00104728(arg0, 0x10) >> 8;
    if ((temp_s0 != 0x48) && (temp_s0 != 0x58) && (temp_s0 != 0x44)) {
        func_00109738(arg0, &D_0045CFF0);
    }
    *(s32 *)((u8 *)arg0 + 0x148) = (s32) (*(s32 *)((u8 *)arg0 + 0x148) + (temp_s2 << 0xA));
    *(s32 *)((u8 *)arg0 + 0x134) = (s32) ((((temp_v0 >> 0xF) & 3) << 0xC) | (*(s32 *)((u8 *)arg0 + 0x134) & 0xFFF));
    *(s32 *)((u8 *)arg0 + 0x138) = (s32) ((((temp_v0 >> 0xD) & 3) << 0xC) | (*(s32 *)((u8 *)arg0 + 0x138) & 0xFFF));
    *(s32 *)((u8 *)arg0 + 0x144) = (s32) (*(s32 *)((u8 *)arg0 + 0x144) + (((temp_v0 >> 1) & 0xFFF) << 0x12));
}

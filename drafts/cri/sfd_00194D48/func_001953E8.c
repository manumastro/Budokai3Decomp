/* Draft (not built): func_001953E8 at 0x001953E8, size 0x314, segment cri/sfd_00194D48 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 72 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O1 -G0
 * Original: asm/nonmatchings/cri/sfd_00194D48/func_001953E8.s */

s32 SignalSema(s32);                            /* extern */
s32 WaitSema(s32);                              /* extern */
s32 func_00194C28(void *, u32);                     /* extern */
s32 setD3_CHCR(s32);                            /* extern */
s32 setD4_CHCR(s32);                            /* extern */

s32 func_001953E8(u8 *arg0) {
    s32 temp_a0_2;
    s32 temp_a2;
    s32 temp_hi;
    s32 temp_hi_2;
    s32 temp_s1;
    s32 temp_t0;
    s32 temp_t2;
    s32 temp_t4;
    s32 temp_t5;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_s3;
    s32 var_s4;
    u32 temp_a0;
    u32 temp_a3;
    u32 temp_t0_2;
    u32 temp_t1;
    u32 var_s2;
    u32 var_s5;

    WaitSema(*(s32 *)((u8 *)arg0 + 0x40));
    temp_a0 = *(u32 *)((u8 *)arg0 + 0x38);
    temp_t1 = *(u32 *)((u8 *)arg0 + 0x1C);
    temp_v1 = ((temp_a0 >> 0x10) & 3) + ((temp_a0 >> 8) & 0xF);
    temp_a3 = *(u32 *)((u8 *)arg0 + 0);
    var_s2 = temp_t1 - (temp_v1 * 0x10);
    temp_t2 = *(s32 *)((u8 *)arg0 + 0x28);
    var_s5 = *(s32 *)((u8 *)arg0 + 0x24) + temp_v1;
    var_s4 = *(s32 *)((u8 *)arg0 + 0x20);
    var_s3 = temp_t2 | 0x100;
    if (var_s2 < temp_a3) {
        temp_a2 = *(s32 *)((u8 *)arg0 + 8);
        temp_t0 = temp_a2 << 0xB;
        var_s4 = *(s32 *)((u8 *)arg0 + 4) & 0x0FFFFFFF;
        var_s5 = (u32) (temp_a3 - var_s2) >> 4;
        var_s2 += temp_t0;
        if ((temp_t1 == temp_a3) || (var_a0 = 3, (temp_t1 == (temp_a3 + temp_t0)))) {
            var_a0 = 0;
        }
        temp_hi = (s32) (temp_a2 - *(s32 *)((u8 *)arg0 + 0xC)) % temp_a2;
        var_s3 = (temp_t2 & 0x0FFFFFFF) | (var_a0 << 0x1C) | 0x100;
        if (temp_hi < 0) {
            goto block_9;
        }
        if (temp_hi >= *(s32 *)((u8 *)arg0 + 0x10)) {
block_9:
            *(s32 *)((u8 *)arg0 + 0xC) = (s32) (temp_a2 - 1);
            *(s32 *)((u8 *)arg0 + 0x10) = (s32) (*(s32 *)((u8 *)arg0 + 0x10) + 1);
        }
    } else {
        temp_s1 = func_00194C28(arg0, temp_t1);
        temp_v0 = func_00194C28(arg0, var_s2);
        if ((temp_s1 != temp_v0) && ((temp_t4 = *(s32 *)((u8 *)arg0 + 8), temp_t0_2 = *(u32 *)((u8 *)arg0 + 0), temp_a0_2 = *(s32 *)((u8 *)arg0 + 0xC), temp_t5 = *(s32 *)((u8 *)arg0 + 0x10), var_s5 = (u32) ((temp_t0_2 + (temp_s1 << 0xB)) - var_s2) >> 4, var_s4 = ((temp_s1 * 0x10) + *(s32 *)((u8 *)arg0 + 4)) & 0x0FFFFFFF, temp_hi_2 = (s32) ((temp_v0 + temp_t4) - temp_a0_2) % temp_t4, var_s3 = (*(s32 *)((u8 *)arg0 + 0x28) & 0x0FFFFFFF) | (((((temp_t0_2 + ((u32) (*(u32 *)((u8 *)arg0 + 0x1C) - temp_t0_2) % (u32) (temp_t4 << 0xB))) ^ (temp_t0_2 + (((s32) (temp_a0_2 + temp_t5) % temp_t4) << 0xB))) == 0) ? 0 : 3) << 0x1C) | 0x100, (temp_hi_2 < 0)) || (temp_hi_2 >= temp_t5))) {
            *(s32 *)((u8 *)arg0 + 0xC) = temp_v0;
            *(s32 *)((u8 *)arg0 + 0x10) = (s32) (temp_t5 + 1);
        }
    }
    temp_v1_2 = *(s32 *)((u8 *)arg0 + 0x2C);
    if ((temp_v1_2 != 0) && (*(s32 *)((u8 *)arg0 + 0x30) != 0)) {
        *(s32 *)0x1000B010 = temp_v1_2;
        *(s32 *)0x1000B020 = *(s32 *)((u8 *)arg0 + 0x30);
        setD3_CHCR(*(s32 *)((u8 *)arg0 + 0x34) | 0x100);
    }
    do {

    } while (*(s32 *)0x10002010 < 0);
    *(s32 *)0x10002000 = temp_a0 & 0x7F;
    do {

    } while (*(u8 *)0x10002010 < 0);
    *(u32 *)0x1000B410 = var_s2;
    *(s32 *)0x1000B430 = var_s4;
    *(u32 *)0x1000B420 = var_s5;
    if (*(s32 *)((u8 *)arg0 + 0x10) != 0) {
        setD4_CHCR(var_s3);
    }
    *(u8 *)0x10002010 = (s32) *(s32 *)((u8 *)arg0 + 0x3C);
    *(s32 *)((u8 *)arg0 + 0x44) = 1;
    SignalSema(*(s32 *)((u8 *)arg0 + 0x40));
    return 1;
}

/* Draft (not built): func_00108798 at 0x00108798, size 0x420, segment sdk/libmpeg_001081F8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: le error: d_00108798.c:121: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libmpeg_001081F8/func_00108798.s */

s64 __muldi3(s64, s64);                             /* extern */
s32 func_00108248(void *, void *);              /* extern */
s32 func_00108EC8(void *, void *);              /* extern */
s32 func_00109738(void *, void *);              /* extern */
s32 func_0010CE90(void *, s32, s32 *, s32); /* extern */
extern s32 D_0045D2F8;

void func_00108798(u8 *arg0, u8 *arg1, u8 *arg2) {
    s32 sp100;
    s64 *sp104;
    s64 *sp108;
    s32 temp_a1_2;
    s32 temp_s1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s0;
    s32 var_v0;
    s64 temp_a0;
    s64 temp_a0_2;
    s64 temp_a1;
    s64 temp_s0;
    s64 temp_v0;
    s64 temp_v0_2;
    s64 temp_v1;
    u8 *temp_s3;
    u8 *var_s5;
    u8 *var_s6;

    sp100 = 0;
    if (*(s32 *)((u8 *)arg0 + 0x184) == 2) {
        var_s5 = arg1;
        var_s6 = arg2;
        sp100 = 0x40;
    } else {
        var_s5 = arg2;
        var_s6 = arg1;
    }
    temp_s3 = *(u8 **)((u8 *)arg0 + 0x868);
    sp104 = temp_s3 + 0x18;
    sp108 = temp_s3 + 0x20;
    if (*(s32 *)((u8 *)arg0 + 0x8C) != 0) {
        temp_v1 = *(s64 *)((u8 *)var_s5 + 0x18);
        if (temp_v1 >= 0) {
            *(s64 *)((u8 *)temp_s3 + 0x10) = temp_v1;
        } else if (*(s32 *)((u8 *)arg0 + 0x98) < 0) {
            *(s64 *)((u8 *)temp_s3 + 0x10) = temp_v1;
        } else {
            temp_a1 = (s64) (*(s64 *)((u8 *)arg0 + 0xA0) << 0x20) >> 0x20;
            temp_a0 = *(s64 *)((u8 *)arg0 + 0x90);
            temp_s1 = temp_a1 & 1;
            temp_s0 = (s64) ((temp_s1 & (*(s32 *)((u8 *)arg0 + 0x9C) & 1) & (temp_a0 & 1)) << 0x20) >> 0x20;
            *(s64 *)((u8 *)temp_s3 + 0x10) = (s64) (*(s32 *)((u8 *)arg0 + 0x98) + (((s64) (__muldi3(temp_a0, temp_a1) << 0x1F) >> 0x20) + temp_s0));
            if (temp_s1 & *(s64 *)((u8 *)arg0 + 0x90)) {
                *(s32 *)((u8 *)arg0 + 0x9C) = (s32) (*(s32 *)((u8 *)arg0 + 0x9C) + 1);
            }
        }
    } else {
        *(s64 *)((u8 *)temp_s3 + 0x10) = (s64) *(s64 *)((u8 *)var_s5 + 0x18);
    }
    if (*(s32 *)((u8 *)arg0 + 0x108) == 2) {
        temp_v0 = *(s64 *)((u8 *)arg0 + 0x100);
        if (temp_v0 >= 0) {
            *(s64 *)((u8 *)temp_s3 + 0x10) = temp_v0;
            *(s32 *)((u8 *)arg0 + 0x108) = 0;
            *(s64 *)((u8 *)arg0 + 0x100) = -1;
        }
    }
    *sp104 = *(s64 *)((u8 *)var_s5 + 0x20);
    *sp108 = ((s64) *(s32 *)((u8 *)var_s5 + 0x34) << 8) | *(s32 *)((u8 *)var_s5 + 0x2C) | (((s64) *(s32 *)((u8 *)var_s5 + 0x40) << 5) | ((s64) *(s32 *)((u8 *)var_s5 + 0x3C) << 6)) | (((s64) *(s32 *)((u8 *)var_s5 + 0x38) << 7) | ((s64) *(s32 *)((u8 *)var_s5 + 0x30) * 8));
    temp_v1_2 = *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x868)) + 0x10);
    *(s64 *)((u8 *)arg0 + 0xA0) = 1;
    *(s32 *)((u8 *)arg0 + 0x98) = temp_v1_2;
    if (*(s32 *)((u8 *)arg0 + 0x8C) != 0) {
        if ((*(s64 *)((u8 *)var_s6 + 0x18) < 0) && (temp_v1_2 >= 0)) {
            temp_a0_2 = *(s64 *)((u8 *)arg0 + 0x90);
            *(s64 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x868)) + 0x28) = (s64) (temp_v1_2 + ((*(s32 *)((u8 *)arg0 + 0x9C) & 1 & (temp_a0_2 & 1)) + ((s64) (temp_a0_2 << 0x1F) >> 0x20)));
            if (*(s64 *)((u8 *)arg0 + 0x90) & 1) {
                *(s32 *)((u8 *)arg0 + 0x9C) = (s32) (*(s32 *)((u8 *)arg0 + 0x9C) + 1);
            }
        } else {
            goto block_23;
        }
    } else {
block_23:
        *(s64 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x868)) + 0x28) = *(s64 *)((u8 *)var_s6 + 0x18);
    }
    if (*(s32 *)((u8 *)arg0 + 0x108) == 2) {
        temp_v0_2 = *(s64 *)((u8 *)arg0 + 0x100);
        if (temp_v0_2 >= 0) {
            *(s64 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x868)) + 0x28) = temp_v0_2;
            *(s32 *)((u8 *)arg0 + 0x108) = 0;
            *(s64 *)((u8 *)arg0 + 0x100) = -1;
        }
    }
    *(s64 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x868)) + 0x30) = (s64) *(s64 *)((u8 *)var_s6 + 0x20);
    temp_a1_2 = *(s32 *)((u8 *)arg0 + 0xF4);
    *(s64 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x868)) + 0x38) = (s64) (((s64) *(s32 *)((u8 *)var_s6 + 0x34) << 8) | *(s32 *)((u8 *)var_s6 + 0x2C) | (((s64) *(s32 *)((u8 *)var_s6 + 0x40) << 5) | ((s64) *(s32 *)((u8 *)var_s6 + 0x3C) << 6)) | (((s64) *(s32 *)((u8 *)var_s6 + 0x38) << 7) | ((s64) *(s32 *)((u8 *)var_s6 + 0x30) * 8)));
    *(s64 *)((u8 *)arg0 + 0xA0) = 1;
    *(s32 *)((u8 *)arg0 + 0x98) = (s32) *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x868)) + 0x28);
    *(s32 *)((u8 *)arg0 + 0xE0) = (s32) *(s32 *)((u8 *)var_s5 + 0x5C);
    *(s64 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x868)) + 0x20) = (s64) (*(s64 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x868)) + 0x20) | sp100);
    *(s64 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x868)) + 0x38) = (s64) (*(s64 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x868)) + 0x38) | sp100);
    *(s32 *)((u8 *)arg0 + 0xE4) = (s32) *(s32 *)((u8 *)var_s5 + 0x60);
    *(s32 *)((u8 *)arg0 + 0xC8) = (s32) *(s32 *)((u8 *)var_s5 + 0x44);
    *(s32 *)((u8 *)arg0 + 0xCC) = (s32) *(s32 *)((u8 *)var_s6 + 0x48);
    *(s32 *)((u8 *)arg0 + 0xD4) = (s32) *(s32 *)((u8 *)var_s5 + 0x50);
    *(s32 *)((u8 *)arg0 + 0xD8) = (s32) *(s32 *)((u8 *)var_s6 + 0x54);
    if (temp_a1_2 != 0) {
        var_s0 = 0;
        if (*(s32 *)((u8 *)arg0 + 0xF0) >= *(s32 *)((u8 *)arg1 + 4)) {
            var_v0 = temp_a1_2 < *(s32 *)((u8 *)arg1 + 8);
            goto block_31;
        }
    } else {
        var_v0 = *(s32 *)((u8 *)arg0 + 0xF8) < (*(s32 *)((u8 *)arg1 + 0xC) * *(s32 *)((u8 *)arg1 + 0x10));
block_31:
        var_s0 = var_v0 ^ 1;
    }
    if ((var_s0 != 0) || (func_0010CE90(sp, 0x100, &D_0045D2F8, *(s32 *)((u8 *)arg1 + 4)), func_00109738(arg0, sp), (var_s0 != 0))) {
        temp_v1_3 = *(s32 *)((u8 *)arg1 + 0x28);
        if ((temp_v1_3 == 1) && (*(s32 *)((u8 *)arg2 + 0x28) == temp_v1_3)) {
            *(s32 *)((u8 *)arg1 + 0x10) = (s32) (*(s32 *)((u8 *)arg1 + 0x10) * 2);
            if (*(s32 *)((u8 *)arg0 + 0xC4) != 0) {
                func_00108EC8(arg0, arg1);
            } else {
                func_00108248(arg0, arg1);
            }
            *(s32 *)((u8 *)arg1 + 0x10) = (s32) ((s32) *(s32 *)((u8 *)arg1 + 0x10) >> 1);
            if (*(s32 *)((u8 *)arg0 + 8) != 2) {
                *(s32 *)((u8 *)arg0 + 8) = 2;
                *(s32 *)((u8 *)arg0 + 0xC0) = (s32) *(s32 *)((u8 *)arg0 + 0x128);
            }
            *(s32 *)((u8 *)arg0 + 0x834) = 1;
        }
    }
}

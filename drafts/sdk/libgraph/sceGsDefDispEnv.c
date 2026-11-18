/* Draft (not built): sceGsDefDispEnv at 0x00100508, size 0x374, segment sdk/libgraph (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error:  d_00100508.c:111: warning: left shift count >= width of type
 * Original: asm/nonmatchings/sdk/libgraph/sceGsDefDispEnv.s */

s32 func_00100458(u16);                             /* extern */
s32 func_001004F8(s16, void *, s32 *, s32 *);   /* extern */
void *sceGsGetGParam(s32, s32, s32);                /* extern */
s32 scePrintf(s32 *, s16, u16);             /* extern */
extern s32 D_0045CB90;

void sceGsDefDispEnv(u8 *arg0, s16 arg1, s16 arg2, s16 arg3) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s16 temp_s4;
    s16 temp_s5;
    s32 temp_lo;
    s32 temp_lo_2;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_lo;
    s32 var_v1_2;
    s32 var_v1_3;
    s64 var_a3;
    s64 var_a3_2;
    s64 var_t2;
    s64 var_v0;
    s64 var_v0_2;
    s64 var_v1;
    u16 temp_a0;
    u16 temp_a2;
    u32 temp_v0_2;
    u8 *temp_v0;

    temp_s5 = M2C_ERROR(/* Read from unset register $t0 */);
    temp_s4 = M2C_ERROR(/* Read from unset register $t1 */);
    temp_v0 = sceGsGetGParam(arg1 << 0x10, arg2 << 0x10, arg3 << 0x10);
    temp_a0 = *(u16 *)((u8 *)temp_v0 + 2);
    if ((u32) (temp_a0 - 2) >= 2U) {
        if (func_00100458(temp_a0) != 0) {
            func_001004F8((s16) *(u16 *)((u8 *)temp_v0 + 2), sp, &sp4, &sp8);
        } else {
            goto block_4;
        }
    } else {
block_4:
        spC = 0;
        sp8 = 0;
        sp4 = 0;
        sp0 = 0;
    }
    temp_a2 = *(u16 *)((u8 *)temp_v0 + 0);
    *(s64 *)((u8 *)arg0 + 0) = 0x66;
    var_v0 = 2;
    if ((s16) *(u16 *)((u8 *)temp_v0 + 0) != 0) {
        var_v0 = 3;
        if (*(s16 *)((u8 *)temp_v0 + 4) == 0) {
            var_v0 = 1;
        }
    }
    *(s64 *)((u8 *)arg0 + 8) = var_v0;
    *(s64 *)((u8 *)arg0 + 0x10) = (s64) (((arg1 & 0xF) << 0xF) | ((((s32) (arg2 + 0x3F) >> 6) & 0x3F) << 9));
    switch ((s16) *(u16 *)((u8 *)temp_v0 + 2)) {   /* irregular */
    case 0x2:
        if ((s16) temp_a2 == 1) {
            temp_lo = (s32) (arg2 + 0x9FF) / arg2;
            var_a3 = ((temp_s4 + sp4 + 0x32) & 0xFFF) << 0xC;
            var_t2 = (temp_lo - 1) << 0x17;
            var_v1 = ((temp_lo * arg2) - 1) << 0x20;
            var_a1 = ((temp_s5 * temp_lo) + (sp0 + 0x27C)) & 0xFFF;
            if (*(s16 *)((u8 *)temp_v0 + 4) != 0) {
                var_v1_2 = var_t2 | var_v1;
                var_v0_2 = (arg3 * 2) - 1;
            } else {
block_17:
                var_v0_2 = arg3 - 1;
                var_v1_2 = var_t2 | var_v1;
            }
block_18:
            *(s64 *)((u8 *)arg0 + 0x18) = (s64) (var_v1_2 | (var_a1 | (var_v0_2 << 0x2C)) | var_a3);
        } else {
            var_lo = (s32) (arg2 + 0x9FF) / arg2;
            var_a3_2 = (arg3 - 1) << 0x2C;
            var_a1_2 = sp0 + 0x27C;
            var_v1_3 = temp_s4 + sp4 + 0x19;
block_20:
            *(s64 *)((u8 *)arg0 + 0x18) = (s64) (((var_lo - 1) << 0x17) | (((var_lo * arg2) - 1) << 0x20) | ((((temp_s5 * var_lo) + var_a1_2) & 0xFFF) | var_a3_2) | ((var_v1_3 & 0xFFF) << 0xC));
        }
        break;
    case 0x3:
        if ((s16) temp_a2 == 1) {
            temp_lo_2 = (s32) (arg2 + 0x9FF) / arg2;
            var_a3 = ((temp_s4 + sp4 + 0x48) & 0xFFF) << 0xC;
            var_t2 = (temp_lo_2 - 1) << 0x17;
            var_v1 = ((temp_lo_2 * arg2) - 1) << 0x20;
            var_a1 = ((temp_s5 * temp_lo_2) + (sp0 + 0x290)) & 0xFFF;
            if (*(s16 *)((u8 *)temp_v0 + 4) != 0) {
                var_v1_2 = var_t2 | var_v1;
                var_v0_2 = (arg3 * 2) - 1;
            } else {
                goto block_17;
            }
            goto block_18;
        }
        var_lo = (s32) (arg2 + 0x9FF) / arg2;
        var_a3_2 = (arg3 - 1) << 0x2C;
        var_a1_2 = sp0 + 0x290;
        var_v1_3 = temp_s4 + sp4 + 0x24;
        goto block_20;
    case 0x50:
        temp_v0_2 = 0x2D0 - arg2;
        *(s64 *)((u8 *)arg0 + 0x18) = (s64) (((arg3 - 1) << 0x2C) | (((arg2 * 2) - 1) << 0x20) | ((((((s32) (temp_v0_2 + (temp_v0_2 >> 0x1F)) >> 1) * 2) + sp0 + ((temp_s5 * 2) + 0xE8)) & 0xFFF) | 0x800000) | (((temp_s4 + sp4 + 0x23) & 0xFFF) << 0xC));
        break;
    default:
        scePrintf(&D_0045CB90, (s16) *(u16 *)((u8 *)temp_v0 + 2), temp_a2);
        break;
    }
    *(s64 *)((u8 *)arg0 + 0x20) = 0;
}

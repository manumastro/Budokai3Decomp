/* Draft (not built): ADXB_DecodeHeader at 0x00158EC0, size 0x298, segment cri/adx_001563B0 (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: compile error: d_00158EC0.c:57: parse error before "int"
 * Original: asm/nonmatchings/cri/adx_001563B0/ADXB_DecodeHeader.s */

s32 func_00150B28(void *);                      /* extern */
s32 func_00150BC8(void *, s8 *, s32);               /* extern */
s32 func_00150D58(void *);                          /* extern */
s32 func_00154178(s32 *, s32 *);        /* extern */
s32 func_0016F050(s32 *, s32, s32 *, s32 *); /* extern */
s32 memcpy(void *, s8 *, s32);                  /* extern */
extern s32 (*D_0040D5E8)(void *, s32);
extern s32 D_004616F0;
extern s32 D_00461710;

void ADXB_DecodeHeader(u8 *arg0) {
    s32 sp10;
    s32 temp_v0;
    s32 var_a1;
    s32 var_s1;
    s8 var_v0;
    u8 **temp_s0;
    u8 *temp_s2;

    temp_s0 = *(u8 ***)((u8 *)arg0 + 8);
    temp_s2 = *(u8 **)((u8 *)arg0 + 4);
    (*(s32 (**)(u8 **, s32, s32, s32 *))((u8 *)(*temp_s0) + 0x18))(temp_s0, 1, 0xC800, sp);
    var_a1 = 0;
    if (sp4 > 0) {
        if (*sp0 == 0) {
            var_a1 = 1;
loop_3:
            if (var_a1 < sp4) {
                if (sp0[var_a1] == 0) {
                    var_a1 += 1;
                    goto loop_3;
                }
            }
        }
    }
    func_0016F050(sp, var_a1, &sp10, sp);
    (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s0) + 0x20))(temp_s0, 0, &sp10);
    if ((sp4 < 0x10) || (var_s1 = func_00150BC8(temp_s2, sp0, sp4), (var_s1 == 0)) || (sp4 < var_s1)) {
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s0) + 0x1C))(temp_s0, 1, sp);
        return;
    }
    if (var_s1 >= 0) {
        *(s32 *)((u8 *)arg0 + 0x98) = var_s1;
        goto block_21;
    }
    if (*(s16 *)((u8 *)temp_s2 + 0x9A) != 0) {
        var_s1 = 0;
        func_00150B28(temp_s2);
        *(s32 *)((u8 *)arg0 + 0x98) = 0;
block_21:
        if (func_00150D58(temp_s2) == 4) {
            *(s8 *)((u8 *)arg0 + 3) = 1;
        }
        if (func_00150D58(temp_s2) == 2) {
            memcpy(arg0 + 0x58, sp0, (sp4 >= 0x41) int 0x40 : sp4);
        }
        temp_v0 = func_00150D58(temp_s2);
        if (((u32) (temp_v0 - 0xA) < 3U) || (temp_v0 == 0x14) || (temp_v0 == 0xF)) {
            (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s0) + 0x1C))(temp_s0, 1, sp);
        } else {
            func_0016F050(sp, var_s1, sp, &sp10);
            (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s0) + 0x20))(temp_s0, 0, sp);
            (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s0) + 0x1C))(temp_s0, 1, &sp10);
        }
        if ((*(s32 *)((u8 *)temp_s2 + 0xE8) != 0) && (D_0040D5E8 != NULL)) {
            D_0040D5E8(temp_s2, *(s32 *)((u8 *)temp_s2 + 0x14));
        }
        var_v0 = 2;
    } else {
        (*(s32 (**)(u8 **, s32, s32 *))((u8 *)(*temp_s0) + 0x1C))(temp_s0, 1, sp);
        func_00154178(&D_004616F0, &D_00461710);
        var_v0 = 4;
    }
    *(s8 *)((u8 *)arg0 + 1) = var_v0;
}

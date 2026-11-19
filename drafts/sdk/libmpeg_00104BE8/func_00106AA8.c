/* Draft (not built): func_00106AA8 at 0x00106AA8, size 0x154, segment sdk/libmpeg_00104BE8 (c)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; compile error: ile error: d_00106AA8.c:36: for each function it appears in.)
 * Original: asm/nonmatchings/sdk/libmpeg_00104BE8/func_00106AA8.s */

u32 func_00104728(void *, s32);                 /* extern */
s32 func_00104810(void *, s32);                 /* extern */
s32 func_00105FB0(void *);                      /* extern */
s32 func_00106260(void *);                      /* extern */
s32 func_00106300(void *);                      /* extern */
s32 func_00106AA0(void *, s32);             /* extern */
s32 func_00106C08(void *);                      /* extern */
s32 func_00107DE0(s32, void *, s32);            /* extern */

s32 func_00106AA8(u8 *arg0) {
    s64 sp8;
    s64 sp10;
    s32 var_v0;
    u32 temp_v0;

loop_1:
    var_v0 = -1;
    if (*(s32 *)((u8 *)arg0 + 0x878) == 0) {
        func_00106C08(arg0);
loop_5:
        if ((func_00104810(arg0, 0x18) != 1) && (*(s32 *)((u8 *)arg0 + 0x878) == 0)) {
            func_00106AA0(arg0, 8);
            goto loop_5;
        }
        temp_v0 = func_00104728(arg0, 0x20);
        if (temp_v0 != 0x1B3) {
            if (temp_v0 < 0x1B4U) {
                if (temp_v0 != 0x100) {
                    goto loop_1;
                }
                func_00106300(arg0);
                sp10 = -1;
                sp8 = -1;
                func_00107DE0(*(s32 *)((u8 *)arg0 + 0x868), sp, 5);
                *(s64 *)((u8 *)arg0 + 0x840) = sp10;
                *(s64 *)((u8 *)arg0 + 0x838) = sp8;
                var_v0 = *(s32 *)((u8 *)arg0 + 0x160);
            } else {
                var_v0 = 0;
                switch (temp_v0) {                  /* irregular */
                case 0x1B7:
                    break;
                case 0x1B8:
                    func_00106260(arg0);
                    goto loop_1;
                }
            }
        } else {
            func_00105FB0(arg0);
            goto loop_1;
        }
    }
    return var_v0;
}

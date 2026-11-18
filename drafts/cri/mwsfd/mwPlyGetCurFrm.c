/* Draft (not built): mwPlyGetCurFrm at 0x00180EC0, size 0x160, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: d_00180EC0.c:29: `sp0' undeclared (first use in this function)
 * Original: asm/nonmatchings/cri/mwsfd/mwPlyGetCurFrm.s */

s32 func_00181020(void *, void *);              /* extern */
s32 func_00181070(void *);                      /* extern */
s32 func_001810E8(void *, s32, void *);         /* extern */
s32 func_001813D8(void *, s32);                     /* extern */
s32 func_00181480(void *, s32);                 /* extern */
s32 func_001814C8(void *, s32);                 /* extern */
s32 func_00183B38();                                /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_001982C8(s32, void *);                 /* extern */
s32 func_00198380(s32, s32);                    /* extern */
s32 mwPlyGetSfdHn(void *);                          /* extern */
s32 mwPlyIsNextFrmReady(void *);                    /* extern */
extern s32 D_00465A70;

void mwPlyGetCurFrm(u8 *arg0, u8 *arg1) {
    s32 temp_s4;
    s32 temp_v0;
    s32 var_s2;
    s32 var_v0;

    if (func_00183B38() == 0) {
        func_001870E8(&D_00465A70);
        goto block_11;
    }
    temp_v0 = mwPlyGetSfdHn(arg0);
    func_001982C8(temp_v0, sp);
    if (sp0 != 0) {
        var_s2 = 0;
        if (*(s32 *)((u8 *)arg0 + 0x58) == 0) {
            temp_s4 = *(s32 *)((u8 *)arg0 + 0x1C);
            var_v0 = temp_s4 > 0;
loop_5:
            var_s2 += 1;
            if ((var_v0 != 0) && (mwPlyIsNextFrmReady(arg0) == 1)) {
                func_00198380(temp_v0, sp0);
                *(s32 *)((u8 *)arg0 + 0x88) = (s32) (*(s32 *)((u8 *)arg0 + 0x88) + 1);
                func_001982C8(temp_v0, sp);
                var_v0 = var_s2 < temp_s4;
                goto loop_5;
            }
        }
        if (sp0 != 0) {
            *(s32 *)((u8 *)arg0 + 0x7C) = sp0;
            *(s32 *)((u8 *)arg0 + 0x80) = (s32) (*(s32 *)((u8 *)arg0 + 0x80) + 1);
            func_00181480(arg0, sp0);
            func_001810E8(arg0, sp0, arg1);
            func_001814C8(arg0, sp0);
            func_00181020(arg0, arg1);
            func_00181070(arg0);
            *(s32 *)((u8 *)arg1 + 0x48) = func_001813D8(arg0, sp0);
            *(s32 *)((u8 *)arg0 + 0xBC) = (s32) *(s32 *)((u8 *)arg1 + 0x2C);
            return;
        }
        goto block_11;
    }
block_11:
    *(s32 *)((u8 *)arg1 + 0) = 0;
}

/* Draft (not built): func_0016C460 at 0x0016C460, size 0x2CC, segment cri/ps2rna (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: cerr
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0; compile error: ile error: d_0016C460.c:97: for each function it appears in.)
 * Original: asm/nonmatchings/cri/ps2rna/func_0016C460.s */

s32 DTX_Create(s32, s32, s32, s32);             /* extern */
s32 func_00112598(s32);                             /* extern */
s32 func_00165CD0(s32, s32 *, s32);     /* extern */
s32 func_00165CE0(s32, s32 *, s32);     /* extern */
s32 func_00165E50();                            /* extern */
s32 func_00165FB8(s32, void *, s32, s32, s32, s32, s32); /* extern */
s32 func_0016C788();                            /* extern */
s32 func_0016F6F8(s32, s32);                    /* extern */
s32 func_0016FAF0();                            /* extern */
s32 memset(s32 *, s32, s32);        /* extern */
s32 ps2rna_init_psj();                          /* extern */
s32 scePrintf(s32 *, s32, s32);             /* extern */
extern s32 D_00419128;
extern s32 D_0041A0D0;
extern s32 D_0041A0D8;
extern s32 D_0041A0E8;
extern s32 D_0041A0EC;
extern s32 D_0041A0F0;
extern s32 D_0041A0F4;
extern s32 D_0041A10C;
extern s32 D_0041A110;
extern s32 D_0041A114;
extern s32 D_0041A118;
extern s32 D_0041CB60;
extern s32 D_0041CB64;
extern s32 D_0041CB68;
extern s32 D_004648E8;
extern s32 D_00464A20;
extern s32 D_00464A68;
extern s32 D_00464A90;
extern s32 func_0016C0F8;
extern s32 func_0016C158;

void func_0016C460(void) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;

    if (D_0041A0D8 == 1) {
        if (D_0041A0D0 > 0) {
            goto block_3;
        }
    } else {
block_3:
        if (D_0041A10C == 0) {
            func_0016F6F8(D_0041A0D8, D_00419128);
            func_0016FAF0();
            func_00165E50();
            func_0016C788();
            ps2rna_init_psj();
            memset(&D_0041CB68, 0, 0x8D0);
            D_0041CB64 = 0x880;
            D_0041A110 = (s32) (&D_0041CB68 + 0x40) & ~0x3F;
            if (D_0041A114 == 0) {
                temp_v0 = func_00112598(0x8D0);
                D_0041A114 = temp_v0;
                if (temp_v0 == 0) {
                    scePrintf(&D_00464A20, 0x8D0);
loop_7:
                    goto loop_7;
                }
            }
            scePrintf(&D_004648E8, 0x8D0, D_0041A114);
            temp_v0_2 = (D_0041A114 + 0x40) & ~0x3F;
            D_0041A118 = temp_v0_2;
            temp_v0_3 = DTX_Create(1, D_0041A110, temp_v0_2, D_0041CB64);
            D_0041CB60 = temp_v0_3;
            if (temp_v0_3 == 0) {
                scePrintf(&D_00464A68);
loop_11:
                goto loop_11;
            }
            func_00165CD0(D_0041CB60, &func_0016C0F8, 0);
            func_00165CE0(D_0041CB60, &func_0016C158, 0);
            if (D_0041A0EC == 0) {
                D_0041A0F4 = D_0041A0D0;
                temp_v0_4 = (D_0041A0D0 << 0xA) + 0x40;
                D_0041A0E8 = temp_v0_4;
                temp_v0_5 = func_00112598(temp_v0_4);
                D_0041A0EC = temp_v0_5;
                if (temp_v0_5 == 0) {
                    scePrintf(&D_00464A90, D_0041A0E8);
loop_16:
                    goto loop_16;
                }
                scePrintf(&D_004648E8, D_0041A0E8, D_0041A0EC);
                goto block_20;
            }
block_20:
            temp_v0_6 = (D_0041A0EC + 0x3F) & ~0x3F;
            D_0041A0F0 = temp_v0_6;
            func_00165FB8(0xA, sp, 3, 0, D_0041A0F4, temp_v0_6, D_0041A0E8);
            goto block_21;
        }
block_21:
        D_0041A10C += 1;
    }
}

/* Draft (not built): func_00181FD0 at 0x00181FD0, size 0x174, segment cri/mwsfd (c)
 * Compiler: ee-gcc 2.96 -O2 -G0
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.96 -O2 -G0
 * Original: asm/nonmatchings/cri/mwsfd/func_00181FD0.s */

s32 fn_80008FB0();                              /* extern */
s32 func_001214F8(f32);                             /* extern */
s32 func_00121930(s32, s64);                        /* extern */
s32 func_00121FE0(s32);                             /* extern */
s32 func_0016A198(s32 *, s32);          /* extern */
s32 func_0016A260();                            /* extern */
s32 func_0016DB40();                            /* extern */
s32 func_0016E078();                            /* extern */
s32 func_0016E890();                            /* extern */
s32 func_00182148(void *);                      /* extern */
s32 func_00182190(void *);                      /* extern */
s32 func_001822C8(void *);                      /* extern */
s32 func_00182420(s32);                     /* extern */
s32 func_00184740();                            /* extern */
s32 func_00186E18();                            /* extern */
s32 func_001870E8(s32 *);                   /* extern */
s32 func_00187E70();                                /* extern */
s32 mwPlySfdInit(s32);                              /* extern */
extern s32 D_00425260;
extern s32 D_00425264;
extern s32 D_004268B4;
extern s32 D_00465C38;
extern s32 D_00465CD8;
extern s32 D_00465D00;
extern s32 D_00465D28;
extern s32 *D_00484DB8;
extern s32 func_00181FB8;

void func_00181FD0(u8 *arg0) {
    s32 temp_v0;

    if (arg0 == NULL) {
        func_001870E8(&D_00465CD8);
        return;
    }
    D_00484DB8 = &D_00465C38;
    func_00186E18();
    temp_v0 = *(s32 *)((u8 *)arg0 + 8) - 2;
    *(s32 *)((u8 *)arg0 + 8) = (s32) ((temp_v0 < 0) ? 0 : temp_v0);
    if (D_00425260 == 0) {
        fn_80008FB0();
        func_0016E078();
        func_0016DB40();
        func_0016E890();
        if (func_00187E70() != 0) {
            func_00182420(-0x65);
            func_001870E8(&D_00465D00);
        }
        func_00182190(arg0);
        D_004268B4 = 0;
        if (mwPlySfdInit(func_00121FE0(func_00121930(func_001214F8(*(f32 *)((u8 *)arg0 + 0) * 1000.0f), 0xFF80 << 0x2E))) != 0) {
            func_001870E8(&D_00465D28);
        }
        D_00425264 = 1;
        func_001822C8(arg0);
        func_0016A260();
        func_0016A198(&func_00181FB8, 0);
        func_00184740();
        func_00182148(arg0);
    }
    D_00425260 += 1;
}

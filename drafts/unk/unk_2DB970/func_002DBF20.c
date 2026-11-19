/* Draft (not built): func_002DBF20 at 0x002DBF20, size 0xC0, segment unk/unk_2DB970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 12 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0xB8, original 0xC0
 * Original: asm/nonmatchings/unk/unk_2DB970/func_002DBF20.s */

// src/unk/unk_2DB970.c func_002DBF20 size diff=12/46
s32 func_001A3610(s32);
s32 func_001A36E0(s32, s32);
extern void amTask_Kill(void *);
void func_002DBF20(u8 *arg0) {
    f32 temp_f1;
    f32 var_f2;
    s32 temp_s1;
    u8 *temp_s0;

    temp_s0 = (unsigned char *)(gOptionWork);
    temp_s1 = *(s32 *)((u8 *)temp_s0 + 0x330);
    if (*(s32 *)((u8 *)((temp_s1 * 4) + temp_s0) + 0x334) != -1) {
        func_001A36E0(temp_s1, 0x80);
        if (D_004703F4 != 3) {
            var_f2 = 1.0f;
        } else {
            var_f2 = 1.2f;
        }
        temp_f1 = *(f32 *)((u8 *)temp_s0 + 0x32C) + var_f2;
        *(f32 *)((u8 *)temp_s0 + 0x32C) = temp_f1;
        if (!(temp_f1 <= 60.0f)) {
            func_001A3610(temp_s1);
            amTask_Kill(arg0);
            *(s32 *)((u8 *)temp_s0 + 0x328) = 0;
        }
    }
}

/* Similar function already in C: func_002DFE20 (src/menu/mn_option.c), similarity 0.71.
 * It is the template below (not built). */
#if 0
void func_002DFE20(u8 *a0) {
    u8 *s0;
    f32 f2;
    s0 = gOptionWork;
    func_002DFBC0();
    if (D_004703F4 != 3) {
        f2 = 1.0f;
    } else {
        f2 = 1.2f;
    }
    *(f32 *)(s0 + 0x388) = *(f32 *)(s0 + 0x388) + f2;
    if (!(*(f32 *)(s0 + 0x388) < 60.0f)) {
        *(s32 *)(s0 + 0x388) = 0;
        *(void **)(a0 + 0x1C) = ((void *)Option_ReadSound == 0) ? 0 : (void *)Option_ReadSound;
    }
}
#endif

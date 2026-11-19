/* Draft (not built): func_002AE760 at 0x002AE760, size 0xA8, segment unk/unk_2AE760 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 27 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2AE760/func_002AE760.s */

// src/unk/unk_2AE760.c func_002AE760 diff diff=27/42
extern u8 D_005ABA80[];
extern s32 func_002AE380;
s32 func_002AE760(u8 *arg0, u8 *arg1) {
    u8 *temp_a2;
    u8 *temp_t1;

    temp_t1 = *(u8 **)((u8 *)arg1 + 0x2C);
    temp_a2 = (*(s32 *)((u8 *)temp_t1 + 8) * 0x20E0) + (((u8 *)&D_005ABA80) + (**(s32 **)((u8 *)arg0 + 0) * 0x8380));
    if (*(s32 *)((u8 *)temp_t1 + 4) != 0) {
        *(s32 **)((u8 *)arg0 + 0x14) = &func_002AE380;
        *(s8 *)((u8 *)arg0 + 0x28) = (s8) *(s32 *)((u8 *)temp_t1 + 8);
        *(s8 *)((u8 *)arg0 + 0x29) = (s8) *(s32 *)((u8 *)temp_t1 + 0);
        *(s8 *)((u8 *)temp_a2 + 0x20D4) = 1;
        *(s32 *)((u8 *)temp_a2 + 0x20D8) = 0x3F800000;
    } else {
        if (*(s32 **)((u8 *)arg0 + 0x14) == &func_002AE380) {
            *(s32 **)((u8 *)arg0 + 0x14) = NULL;
        }
        *(s8 *)((u8 *)temp_a2 + 0x20D4) = 0;
    }
    return 1;
}

/* Similar function already in C: func_002AE2D0 (src/unk/unk_2ADDC0.c), similarity 1.00, same instructions apart from immediates/symbols.
 * It is the template below (not built). */
#if 0
s32 func_002AE2D0(UnkObj *o, UnkMsg *m) {
    s32 *a = m->arg;
    UnkSlot *sl = &D_005ABA80[*o->f0][a[2]];

    if (a[1] != 0) {
        o->f14 = func_002ADE10;
        o->f28 = a[2];
        o->f29 = a[0];
        sl->f20D4 = 1;
        sl->f20D8 = 1.0f;
    } else {
        if (o->f14 == func_002ADE10) {
            o->f14 = NULL;
        }
        sl->f20D4 = 0;
    }
    return 1;
}
#endif

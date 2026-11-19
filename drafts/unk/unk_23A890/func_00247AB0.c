/* Draft (not built): func_00247AB0 at 0x00247AB0, size 0x1C4, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); clared was declared as: 'int (...)' now declared as: 'void (int, int, float)' @ 2503: void func_002D0110(s32, s32, f32);
 * Original: asm/nonmatchings/unk/unk_23A890/func_00247AB0.s */

// src/unk/unk_23A890.c func_00247AB0 cerr diff=-1/0
u32 func_0012EAE0(s32);
extern s32 D_00470744;
void func_00247AB0(u8 *arg0) {
    s32 temp_a3;
    s32 var_a0;
    s32 var_a1;
    u8 *temp_a2;
    u8 *temp_s0;
    u8 *temp_t0;

    temp_s0 = arg0 + 0x30;
    switch (D_00470734) {                           /* irregular */
    case 0:
        *(s32 *)((u8 *)temp_s0 + 0x14) = (s32) (((func_0012EAE0(0x20) % 5U) + 1) | 0x10000);
        *(s32 *)((u8 *)temp_s0 + 0x18) = (s32) ((func_0012EAE0(0x20) % 5U) + 1);
    default:
block_10:
        temp_t0 = *(u8 **)((u8 *)temp_s0 + 8);
        temp_a3 = *(s32 *)((u8 *)temp_s0 + 0x14);
        temp_a2 = temp_t0 + 0x41C;
        if (*(s32 *)((u8 *)temp_t0 + 0x41C) != temp_a3) {
            var_a1 = 0;
            if (*(s32 *)((u8 *)temp_t0 + 0x418) > 0) {
                var_a0 = 0;
                do {
                    var_a1 += 1;
                    *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a2 + 0x10) + var_a0) + 0x30) = -1;
                    *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a2 + 0x10) + var_a0) + 0x34) = -1;
                    *(s32 *)((u8 *)(*(s32 *)((u8 *)temp_a2 + 0x10) + var_a0) + 0x38) = -1;
                    var_a0 += 0x40;
                } while (var_a1 < *(s32 *)((u8 *)temp_t0 + 0x418));
            }
            *(s32 *)((u8 *)temp_a2 + 0xC) = 0xBF800000;
        }
        *(s32 *)((u8 *)temp_t0 + 0x41C) = temp_a3;
        *(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x424) = 0;
        amMotion_Apply(*(u8 **)((u8 *)temp_s0 + 8), 0, 0x3F800000);
        if (*(s32 *)((u8 *)arg0 + 0x30) != 0) {
            func_002D04A0(*(s32 *)((u8 *)temp_s0 + 0x1C));
            func_002D0110(*(s32 *)((u8 *)arg0 + 0x30), 0, (f32) *(s32 *)((u8 *)temp_s0 + 0x18));
            func_002D04A0(0);
        }
        return;
    case 1:
        *(s32 *)((u8 *)temp_s0 + 0x14) = 0x10007;
        *(s32 *)((u8 *)temp_s0 + 0x18) = 7;
        goto block_10;
    case 2:
        amHeap_Free(*(u8 **)((u8 *)temp_s0 + 8));
        amHeap_Free(*(u8 **)((u8 *)temp_s0 + 0xC));
        BtbObj_RemoveFromList(arg0);
        D_00470744 = 0;
        return;
    case 3:
        *(s32 *)((u8 *)temp_s0 + 0x14) = 0x10008;
        *(s32 *)((u8 *)temp_s0 + 0x18) = 8;
        goto block_10;
    }
}

/* Similar function already in C: func_00247C80 (src/unk/unk_23A890.c), similarity 0.87.
 * It is the template below (not built). */
#if 0
void func_00247C80(u8 *o) {
    u8 *s0;
    u8 *t0;
    s32 a3;
    u8 *a2;
    s32 i;
    s32 off;
    s32 mode;

    s0 = o + 0x30;
    mode = D_00470734;
    switch (mode) {
    case 0:
        *(s32 *)(s0 + 0x14) = 0x10000;
        *(s32 *)(s0 + 0x18) = 0;
        break;
    case 1:
        *(s32 *)(s0 + 0x14) = 0x10006;
        *(s32 *)(s0 + 0x18) = 6;
        break;
    case 2:
        amHeap_Free(*(void **)(s0 + 0x8));
        amHeap_Free(*(void **)(s0 + 0xC));
        BtbObj_RemoveFromList(o);
        D_00470740[0] = 0;
        return;
    case 3:
        *(s32 *)(s0 + 0x14) = 0x10000;
        *(s32 *)(s0 + 0x18) = 0;
        break;
    }
    t0 = *(u8 **)(s0 + 0x8);
    a3 = *(s32 *)(s0 + 0x14);
    a2 = t0 + 0x41C;
    if (*(s32 *)(t0 + 0x41C) != a3) {
        if (0 < *(s32 *)(t0 + 0x418)) {
            i = 0;
            off = 0;
            do {
                *(s32 *)(*(u8 **)(a2 + 0x10) + off + 0x30) = -1;
                *(s32 *)(*(u8 **)(a2 + 0x10) + off + 0x34) = -1;
                *(s32 *)(*(u8 **)(a2 + 0x10) + off + 0x38) = -1;
                i++;
                off += 0x40;
            } while (i < *(s32 *)(t0 + 0x418));
        }
        *(s32 *)(a2 + 0xC) = 0xBF800000;
    }
    *(s32 *)a2 = a3;
    *(s32 *)(*(u8 **)(s0 + 0x8) + 0x424) = 0;
    amMotion_Apply(*(u8 **)(s0 + 0x8), 0.0f, 1.0f);
    if (*(s32 *)s0 != 0) {
        func_002D04A0(*(s32 *)(s0 + 0x1C));
        func_002D0110(*(s32 *)s0, 0, (f32)*(s32 *)(s0 + 0x18));
        func_002D04A0(0);
    }
}
#endif

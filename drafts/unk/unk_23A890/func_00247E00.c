/* Draft (not built): func_00247E00 at 0x00247E00, size 0x170, segment unk/unk_23A890 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 58 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x18C, original 0x170
 * Original: asm/nonmatchings/unk/unk_23A890/func_00247E00.s */

// src/unk/unk_23A890.c func_00247E00 size diff=58/99
extern f32 D_0051CD24;
void func_00247E00(u8 *arg0) {
    s32 (*temp_v0)(u8 *, u8 *);
    s32 (*temp_v1_2)(u8 *, u8 *);
    f32 temp_f20;
    s32 temp_a3;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    u8 *temp_a1;
    u8 *temp_t0;
    u8 *temp_a2;
    u8 *temp_s0;

    temp_f20 = D_0051CD24;
    if (!(temp_f20 < 0.0f)) {
        temp_s0 = arg0 + 0x30;
        if (*(s32 *)((u8 *)arg0 + 0x50) != D_00470734) {
            *(s32 *)((u8 *)temp_s0 + 0x20) = (s32) D_00470734;
            *(f32 *)((u8 *)temp_s0 + 0x10) = 0.0f;
            temp_v0 = *(s32 (**)(u8 *, u8 *))((u8 *)temp_s0 + 0x24);
            if (temp_v0 != NULL) {
                ((s32 (*)(void))temp_v0)();
            }
        }
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
        *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 8)) + 0x424) = (f32) *(f32 *)((u8 *)temp_s0 + 0x10);
        amMotion_Apply(*(u8 **)((u8 *)temp_s0 + 8), 0.0f, 1.0f);
        *(f32 *)((u8 *)temp_s0 + 0x10) = (f32) (*(f32 *)((u8 *)temp_s0 + 0x10) + temp_f20);
        temp_v1 = *(s32 *)((u8 *)temp_s0 + 0x14);
        temp_a1 = *(u8 **)((u8 *)temp_s0 + 8);
        if (!(*(f32 *)((u8 *)temp_s0 + 0x10) < (f32) *(s32 *)((u8 *)(((temp_v1 & 0xFFFF) * 0x10) + *(s32 *)((u8 *)(*(u8 **)((u8 *)((((temp_v1 >> 0x10) - 1) * 4) + temp_a1) + 0x46C)) + 0x14)) + 8))) {
            *(f32 *)((u8 *)temp_s0 + 0x10) = 0.0f;
            temp_v1_2 = *(s32 (**)(u8 *, u8 *))((u8 *)temp_s0 + 0x24);
            if (temp_v1_2 != NULL) {
                temp_v1_2(arg0, temp_a1);
            }
        }
    }
}

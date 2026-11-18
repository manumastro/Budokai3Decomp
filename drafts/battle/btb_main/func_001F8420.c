/* Draft (not built): func_001F8420 at 0x001F8420, size 0x320, segment battle/btb_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); 0xC)) + 8)) + 4); @ 81: *(s3232 *)((u8 *)temp_s3 + 0x1C) = (s3232) *(s3232 *)((u8 *)(*(s32 **)((u8 *)temp_v1 + 8)) + 8);
 * Original: asm/nonmatchings/battle/btb_main/func_001F8420.s */

// src/battle/btb_main.c func_001F8420 cerr diff=-1/0
extern char D_004698D8[];
extern void *amHeap_Alloc(s32 size, s32 flag, char *file, s32 line);
extern void memset(void *, s32, s32);
s32 amMotSet_Bind(void *, s32, s32);
s32 amMotSet_Init(void *, void *);
s32 amMotion_BindAnim(void *, s32, s32);
void *amMotion_CreateFromObj(void *, s32, s32);
extern void *amObject_Create(void *, void *);
void func_001F8420(u8 *arg0, u8 *arg1) {
    s32 temp_a3;
    s32 var_a0;
    s32 var_a1;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    u8 *temp_a2;
    u8 *temp_s3;
    u8 *temp_s4;
    u8 *temp_t0;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v1;
    u8 *temp_v1_2;

    *(u8 **)((u8 *)arg1 + 0) = arg0;
    *(u8 **)((u8 *)arg1 + 4) = amObject_Create(*(u8 **)((u8 *)arg0 + 8), NULL);
    if (*(s32 *)((u8 *)arg0 + 0) > 0) {
        *(u8 **)((u8 *)arg1 + 8) = amHeap_Alloc(0x20, 0, D_004698D8, 0x685);
        memset(*(u8 **)((u8 *)arg1 + 8), 0, 0x20);
        temp_s3 = *(u8 **)((u8 *)arg1 + 8);
        *(u8 **)((u8 *)temp_s3 + 0) = amMotion_CreateFromObj(*(u8 **)((u8 *)arg1 + 4), 0, 0);
        var_s4 = 0;
        if (*(s32 *)((u8 *)arg0 + 0) > 0) {
            var_s2 = 0;
            do {
                amMotion_BindAnim(*(u8 **)((u8 *)temp_s3 + 0), var_s4, *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC) + var_s2) + 4));
                var_s4 += 1;
                var_s2 += 0x10;
            } while (var_s4 < *(s32 *)((u8 *)arg0 + 0));
        }
        *(s32 *)((u8 *)temp_s3 + 0x18) = 1;
        temp_v0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0)) + 0x46C);
        if (temp_v0 != NULL) {
            var_v0 = *(s32 *)((u8 *)temp_v0 + 0x10);
        } else {
            var_v0 = -1;
        }
        *(s32 *)((u8 *)temp_s3 + 0xC) = var_v0;
        temp_v1 = *(u8 **)((u8 *)arg0 + 0xC);
        if (*(s32 *)((u8 *)temp_v1 + 0) > 0) {
            *(s3232 *)((u8 *)temp_s3 + 0x1C) = (s3232) *(s3232 *)((u8 *)(*(s32 **)((u8 *)temp_v1 + 8)) + 8);
            *(s3232 *)((u8 *)temp_s3 + 0x14) = (s3232) *(s3232 *)((u8 *)(*(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 8)) + 4);
            *(s32 *)((u8 *)temp_s3 + 0x10) = (s32) **(s32 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0xC)) + 8);
        } else {
            *(s3232 *)((u8 *)temp_s3 + 0x1C) = 0x3F800000;
            *(s3232 *)((u8 *)temp_s3 + 0x14) = 0x3F800000;
        }
        temp_t0 = *(u8 **)((u8 *)temp_s3 + 0);
        temp_a3 = ((*(s32 *)((u8 *)temp_s3 + 8) + 1) << 0x10) | *(s32 *)((u8 *)temp_s3 + 0x10);
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
        *(f32 *)((u8 *)(*(u8 **)((u8 *)temp_s3 + 0)) + 0x424) = (f32) *(f32 *)((u8 *)temp_s3 + 4);
    }
    if (*(s32 *)((u8 *)arg0 + 4) > 0) {
        *(u8 **)((u8 *)arg1 + 0xC) = amHeap_Alloc(0x20, 0, D_004698D8, 0x6A9);
        memset(*(u8 **)((u8 *)arg1 + 0xC), 0, 0x20);
        temp_s4 = *(u8 **)((u8 *)arg1 + 0xC);
        *(u8 **)((u8 *)temp_s4 + 0) = amHeap_Alloc(0x2044, 0, D_004698D8, 0x6AE);
        amMotSet_Init(*(u8 **)((u8 *)temp_s4 + 0), *(u8 **)((u8 *)arg1 + 4));
        var_s2_2 = 0;
        if (*(s32 *)((u8 *)arg0 + 4) > 0) {
            var_s3 = 0;
            do {
                amMotSet_Bind(*(u8 **)((u8 *)temp_s4 + 0), var_s2_2, *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x10) + var_s3) + 4));
                var_s2_2 += 1;
                var_s3 += 0x10;
            } while (var_s2_2 < *(s32 *)((u8 *)arg0 + 4));
        }
        *(s32 *)((u8 *)temp_s4 + 0x18) = 1;
        temp_v0_2 = *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s4 + 0)) + 4);
        if (temp_v0_2 != NULL) {
            var_v0_2 = *(s32 *)((u8 *)temp_v0_2 + 0x10);
        } else {
            var_v0_2 = 0;
        }
        *(s32 *)((u8 *)temp_s4 + 0xC) = var_v0_2;
        temp_v1_2 = *(u8 **)((u8 *)arg0 + 0x10);
        if (*(s32 *)((u8 *)temp_v1_2 + 0) > 0) {
            *(s3232 *)((u8 *)temp_s4 + 0x14) = (s3232) *(s3232 *)((u8 *)(*(u8 **)((u8 *)temp_v1_2 + 8)) + 4);
        } else {
            *(s3232 *)((u8 *)temp_s4 + 0x14) = 0x3F800000;
        }
    }
    *(u8 **)((u8 *)arg1 + 0x10) = amHeap_Alloc(0x10, 0, D_004698D8, 0x6C3);
    memset(*(u8 **)((u8 *)arg1 + 0x10), 0, 0x10);
    *(s32 *)((u8 *)(*(u8 **)((u8 *)arg1 + 0x10)) + 8) = 0x3F800000;
}

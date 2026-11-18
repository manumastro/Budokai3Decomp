/* Draft (not built): func_002893F0 at 0x002893F0, size 0x500, segment sys/mc_opr (asm)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: uncompiled
 * Made with: m2c -t mipsee-mwcc-c --valid-syntax, not compiled
 * Original: asm/sys/mc_opr.s */

M2C_UNK amHeap_Free(void *);                        /* extern */
s32 func_001EF510(void *, M2C_UNK);                 /* extern */
M2C_UNK func_001EFDB0(void *, M2C_UNK *);           /* extern */
s32 memcmp(M2C_UNK *, void *, M2C_UNK);             /* extern */
extern void *D_0047054C;
extern s32 D_00470558;
extern M2C_UNK D_00470838;
extern s32 D_0047084C;
extern void *D_004708A0;
extern M2C_UNK D_004B4B40;
extern M2C_UNK D_004B4BC0;
extern M2C_UNK D_0058F680;
extern M2C_UNK func_00289DF0;
extern s32 gMcState;

void func_002893F0(void *arg0) {
    M2C_UNK *var_v1;
    s128 *var_a3_10;
    s128 *var_t0_10;
    s16 temp_a1_5;
    s16 temp_a1_7;
    s32 *temp_a0;
    s32 *temp_a0_3;
    s32 temp_a1_6;
    s32 temp_a1_9;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a3_3;
    s32 var_a3_4;
    s32 var_a3_5;
    s32 var_a3_6;
    s32 var_a3_7;
    s32 var_a3_8;
    s32 var_a3_9;
    s8 temp_a1;
    s8 temp_a1_2;
    s8 temp_a1_3;
    s8 temp_a1_4;
    s8 temp_a1_8;
    s8 temp_v1;
    void *temp_a0_2;
    void *var_a2_2;
    void *var_a3_11;
    void *var_t0;
    void *var_t0_2;
    void *var_t0_3;
    void *var_t0_4;
    void *var_t0_5;
    void *var_t0_6;
    void *var_t0_7;
    void *var_t0_8;
    void *var_t0_9;
    void *var_t1;
    void *var_t1_2;
    void *var_t1_3;
    void *var_t1_4;
    void *var_t1_5;
    void *var_t1_6;
    void *var_t1_7;
    void *var_t1_8;
    void *var_t1_9;

    switch (gMcState) {                             /* irregular */
    case 2:
        temp_a0 = &D_00470838 + (D_0047084C * 4);
        if (*temp_a0 & 0x8000) {
            amHeap_Free(D_0047054C);
            D_0047054C = NULL;
        } else if (D_00470558 != 0xD680) {
            *temp_a0 = 5;
        } else {
            D_004708A0 = D_0047054C;
            D_0047054C = NULL;
            if (func_001EF510(D_004708A0, 0xD680) != 0) {
                amHeap_Free(D_004708A0);
                D_004708A0 = NULL;
                *(&D_00470838 + (D_0047084C * 4)) = 5;
            } else {
                if (memcmp(&D_004B4BC0, D_004708A0 + 0x30, 0x24) == 0) {
                    func_001EFDB0(D_004708A0, &D_004B4B40);
                }
                var_a3 = 4;
                var_t1 = D_004708A0;
                temp_a0_2 = &D_0058F680 + (D_0047084C * 0xD680);
                var_t0 = temp_a0_2;
                do {
                    var_a3 -= 1;
                    temp_a1 = M2C_FIELD(var_t1, s8 *, 1);
                    M2C_FIELD(var_t0, s8 *, 0) = (s8) M2C_FIELD(var_t1, s8 *, 0);
                    var_t1 += 2;
                    M2C_FIELD(var_t0, s8 *, 1) = temp_a1;
                    var_t0 += 2;
                } while (var_a3 > 0);
                var_t1_2 = D_004708A0 + 0x10;
                var_t0_2 = temp_a0_2 + 0x10;
                var_a3_2 = 8;
                M2C_FIELD(temp_a0_2, s32 *, 8) = (s32) M2C_FIELD(D_004708A0, s32 *, 8);
                M2C_FIELD(temp_a0_2, s32 *, 0xC) = (s32) M2C_FIELD(D_004708A0, s32 *, 0xC);
                do {
                    var_a3_2 -= 1;
                    temp_a1_2 = M2C_FIELD(var_t1_2, s8 *, 1);
                    M2C_FIELD(var_t0_2, s8 *, 0) = (s8) M2C_FIELD(var_t1_2, s8 *, 0);
                    var_t1_2 += 2;
                    M2C_FIELD(var_t0_2, s8 *, 1) = temp_a1_2;
                    var_t0_2 += 2;
                } while (var_a3_2 > 0);
                var_t1_3 = D_004708A0 + 0x20;
                var_t0_3 = temp_a0_2 + 0x20;
                var_a3_3 = 8;
                do {
                    var_a3_3 -= 1;
                    temp_a1_3 = M2C_FIELD(var_t1_3, s8 *, 1);
                    M2C_FIELD(var_t0_3, s8 *, 0) = (s8) M2C_FIELD(var_t1_3, s8 *, 0);
                    var_t1_3 += 2;
                    M2C_FIELD(var_t0_3, s8 *, 1) = temp_a1_3;
                    var_t0_3 += 2;
                } while (var_a3_3 > 0);
                var_t1_4 = D_004708A0 + 0x68;
                var_t0_4 = temp_a0_2 + 0x68;
                var_a3_4 = 0xA;
                M2C_FIELD(temp_a0_2, s128 *, 0x30) = (s128) M2C_FIELD(D_004708A0, s128 *, 0x30);
                M2C_FIELD(temp_a0_2, s128 *, 0x40) = (s128) M2C_FIELD(D_004708A0, s128 *, 0x40);
                M2C_FIELD(temp_a0_2, s32 *, 0x50) = (s32) M2C_FIELD(D_004708A0, s32 *, 0x50);
                M2C_FIELD(temp_a0_2, f32 *, 0x54) = (f32) M2C_FIELD(D_004708A0, f32 *, 0x54);
                M2C_FIELD(temp_a0_2, f32 *, 0x58) = (f32) M2C_FIELD(D_004708A0, f32 *, 0x58);
                M2C_FIELD(temp_a0_2, f32 *, 0x5C) = (f32) M2C_FIELD(D_004708A0, f32 *, 0x5C);
                M2C_FIELD(temp_a0_2, s16 *, 0x60) = (s16) M2C_FIELD(D_004708A0, s16 *, 0x60);
                M2C_FIELD(temp_a0_2, s16 *, 0x62) = (s16) M2C_FIELD(D_004708A0, s16 *, 0x62);
                M2C_FIELD(temp_a0_2, s16 *, 0x64) = (s16) M2C_FIELD(D_004708A0, s16 *, 0x64);
                M2C_FIELD(temp_a0_2, s16 *, 0x66) = (s16) M2C_FIELD(D_004708A0, s16 *, 0x66);
                do {
                    var_a3_4 -= 1;
                    temp_a1_4 = M2C_FIELD(var_t1_4, s8 *, 1);
                    M2C_FIELD(var_t0_4, s8 *, 0) = (s8) M2C_FIELD(var_t1_4, s8 *, 0);
                    var_t1_4 += 2;
                    M2C_FIELD(var_t0_4, s8 *, 1) = temp_a1_4;
                    var_t0_4 += 2;
                } while (var_a3_4 > 0);
                var_t1_5 = D_004708A0 + 0xA6;
                var_t0_5 = temp_a0_2 + 0xA6;
                var_a3_5 = 0x18C;
                M2C_FIELD(temp_a0_2, s16 *, 0x7C) = (s16) M2C_FIELD(D_004708A0, s16 *, 0x7C);
                M2C_FIELD(temp_a0_2, s16 *, 0x7E) = (s16) M2C_FIELD(D_004708A0, s16 *, 0x7E);
                M2C_FIELD(temp_a0_2, s16 *, 0x80) = (s16) M2C_FIELD(D_004708A0, s16 *, 0x80);
                M2C_FIELD(temp_a0_2, s16 *, 0x82) = (s16) M2C_FIELD(D_004708A0, s16 *, 0x82);
                M2C_FIELD(temp_a0_2, s8 *, 0x84) = (s8) M2C_FIELD(D_004708A0, s8 *, 0x84);
                M2C_FIELD(temp_a0_2, s8 *, 0x85) = (s8) M2C_FIELD(D_004708A0, s8 *, 0x85);
                M2C_FIELD(temp_a0_2, u8 *, 0x86) = (u8) M2C_FIELD(D_004708A0, u8 *, 0x86);
                M2C_FIELD(temp_a0_2, u8 *, 0x87) = (u8) M2C_FIELD(D_004708A0, u8 *, 0x87);
                M2C_FIELD(temp_a0_2, u8 *, 0x88) = (u8) M2C_FIELD(D_004708A0, u8 *, 0x88);
                M2C_FIELD(temp_a0_2, s8 *, 0x89) = (s8) M2C_FIELD(D_004708A0, s8 *, 0x89);
                M2C_FIELD(temp_a0_2, s8 *, 0x8A) = (s8) M2C_FIELD(D_004708A0, s8 *, 0x8A);
                M2C_FIELD(temp_a0_2, s8 *, 0x8B) = (s8) M2C_FIELD(D_004708A0, s8 *, 0x8B);
                M2C_FIELD(temp_a0_2, s8 *, 0x8C) = (s8) M2C_FIELD(D_004708A0, s8 *, 0x8C);
                M2C_FIELD(temp_a0_2, u8 *, 0x8D) = (u8) M2C_FIELD(D_004708A0, u8 *, 0x8D);
                M2C_FIELD(temp_a0_2, u8 *, 0x8E) = (u8) M2C_FIELD(D_004708A0, u8 *, 0x8E);
                M2C_FIELD(temp_a0_2, u8 *, 0x8F) = (u8) M2C_FIELD(D_004708A0, u8 *, 0x8F);
                M2C_FIELD(temp_a0_2, s64 *, 0x90) = (s64) M2C_FIELD(D_004708A0, s64 *, 0x90);
                M2C_FIELD(temp_a0_2, s32 *, 0x98) = (s32) M2C_FIELD(D_004708A0, s32 *, 0x98);
                M2C_FIELD(temp_a0_2, s32 *, 0x9C) = (s32) M2C_FIELD(D_004708A0, s32 *, 0x9C);
                M2C_FIELD(temp_a0_2, s8 *, 0xA0) = (s8) M2C_FIELD(D_004708A0, s8 *, 0xA0);
                M2C_FIELD(temp_a0_2, u8 *, 0xA1) = (u8) M2C_FIELD(D_004708A0, u8 *, 0xA1);
                M2C_FIELD(temp_a0_2, u8 *, 0xA2) = (u8) M2C_FIELD(D_004708A0, u8 *, 0xA2);
                M2C_FIELD(temp_a0_2, u8 *, 0xA3) = (u8) M2C_FIELD(D_004708A0, u8 *, 0xA3);
                M2C_FIELD(temp_a0_2, u16 *, 0xA4) = (u16) M2C_FIELD(D_004708A0, u16 *, 0xA4);
                do {
                    var_a3_5 -= 1;
                    temp_a1_5 = M2C_FIELD(var_t1_5, s16 *, 2);
                    M2C_FIELD(var_t0_5, s16 *, 0) = (s16) M2C_FIELD(var_t1_5, s16 *, 0);
                    var_t1_5 += 4;
                    M2C_FIELD(var_t0_5, s16 *, 2) = temp_a1_5;
                    var_t0_5 += 4;
                } while (var_a3_5 > 0);
                var_t1_6 = D_004708A0 + 0x6D8;
                var_t0_6 = temp_a0_2 + 0x6D8;
                var_a3_6 = 0x39;
                do {
                    var_a3_6 -= 1;
                    temp_a1_6 = M2C_FIELD(var_t1_6, s32 *, 4);
                    M2C_FIELD(var_t0_6, s32 *, 0) = (s32) M2C_FIELD(var_t1_6, s32 *, 0);
                    var_t1_6 += 8;
                    M2C_FIELD(var_t0_6, s32 *, 4) = temp_a1_6;
                    var_t0_6 += 8;
                } while (var_a3_6 > 0);
                var_t1_7 = D_004708A0 + 0x8A0;
                var_t0_7 = temp_a0_2 + 0x8A0;
                var_a3_7 = 0x10B;
                do {
                    var_a3_7 -= 1;
                    temp_a1_7 = M2C_FIELD(var_t1_7, s16 *, 2);
                    M2C_FIELD(var_t0_7, s16 *, 0) = (s16) M2C_FIELD(var_t1_7, s16 *, 0);
                    var_t1_7 += 4;
                    M2C_FIELD(var_t0_7, s16 *, 2) = temp_a1_7;
                    var_t0_7 += 4;
                } while (var_a3_7 > 0);
                var_t1_8 = D_004708A0 + 0xCCC;
                var_t0_8 = temp_a0_2 + 0xCCC;
                var_a3_8 = 6;
                do {
                    var_a3_8 -= 1;
                    temp_a1_8 = M2C_FIELD(var_t1_8, s8 *, 1);
                    M2C_FIELD(var_t0_8, s8 *, 0) = (s8) M2C_FIELD(var_t1_8, s8 *, 0);
                    var_t1_8 += 2;
                    M2C_FIELD(var_t0_8, s8 *, 1) = temp_a1_8;
                    var_t0_8 += 2;
                } while (var_a3_8 > 0);
                var_t1_9 = D_004708A0 + 0xCD8;
                var_t0_9 = temp_a0_2 + 0xCD8;
                var_a3_9 = 0x10;
                do {
                    var_a3_9 -= 1;
                    temp_a1_9 = M2C_FIELD(var_t1_9, s32 *, 4);
                    M2C_FIELD(var_t0_9, s32 *, 0) = (s32) M2C_FIELD(var_t1_9, s32 *, 0);
                    var_t1_9 += 8;
                    M2C_FIELD(var_t0_9, s32 *, 4) = temp_a1_9;
                    var_t0_9 += 8;
                } while (var_a3_9 > 0);
                var_t0_10 = D_004708A0 + 0xD60;
                var_a3_10 = temp_a0_2 + 0xD60;
                var_a2 = 0xC6B;
                do {
                    var_a2 -= 1;
                    *var_a3_10 = *var_t0_10;
                    var_t0_10 += 0x10;
                    var_a3_10 += 0x10;
                } while (var_a2 > 0);
                var_a1 = 0x130;
                var_a3_11 = D_004708A0 + 0xD41D;
                var_a2_2 = temp_a0_2 + 0xD41D;
                M2C_FIELD(temp_a0_2, s64 *, 0xD410) = (s64) M2C_FIELD(D_004708A0, s64 *, 0xD410);
                M2C_FIELD(temp_a0_2, s32 *, 0xD418) = (s32) M2C_FIELD(D_004708A0, s32 *, 0xD418);
                M2C_FIELD(temp_a0_2, s8 *, 0xD41C) = (s8) M2C_FIELD(D_004708A0, s8 *, 0xD41C);
                do {
                    var_a1 -= 1;
                    temp_v1 = M2C_FIELD(var_a3_11, s8 *, 1);
                    M2C_FIELD(var_a2_2, s8 *, 0) = (s8) M2C_FIELD(var_a3_11, s8 *, 0);
                    var_a3_11 += 2;
                    M2C_FIELD(var_a2_2, s8 *, 1) = temp_v1;
                    var_a2_2 += 2;
                } while (var_a1 > 0);
                D_004708A0 = NULL;
                *(&D_00470838 + (D_0047084C * 4)) = 4;
            }
        }
block_38:
        var_v1 = &func_00289DF0;
        D_0047084C ^= 1;
        if (&func_00289DF0 == NULL) {
            var_v1 = NULL;
        }
        M2C_FIELD(arg0, M2C_UNK **, 0x1C) = var_v1;
        return;
    case 3:
        temp_a0_3 = &D_00470838 + (D_0047084C * 4);
        if (!(*temp_a0_3 & 0x8000)) {
            *temp_a0_3 = 5;
        }
        goto block_38;
    }
}

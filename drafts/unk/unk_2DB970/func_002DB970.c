/* Draft (not built): func_002DB970 at 0x002DB970, size 0x5B0, segment unk/unk_2DB970 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 310 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/unk/unk_2DB970/func_002DB970.s */

// src/unk/unk_2DB970.c func_002DB970 diff diff=310/364
s32 SoundRpc_SetVolume(s32, s32, u16, s8, f32);
s32 func_001A3610(s32);
s32 func_001A38B0(s32, s32, s32);
s32 func_002D2E50(s8, s16, s32 *);
s32 func_002D3050(s32, void *, s32, s32);
s32 func_002D33B0(s32, void *, s32, s32);
s32 memcpy(s32, s32 *, s32);
extern s32 D_00456B20;
extern s32 D_00456B30;
extern s16 D_00470180;
extern u8 D_00470182;
extern s32 D_00492FCC;
extern s32 D_00492FD2;
extern s32 D_0049302C;
extern s32 D_00493032;
extern f32 D_004E0614;
extern void amTask_Kill(void *);
extern void *amTask_Create();
extern void SoundRpc_Send3();
extern char D_004B4B40[];
extern char D_00492FCE[];
extern void func_002DCC60(void);
extern void func_002DBF20(void);
void func_002DB970(void) {
    u8 sp[0x400];
    s32 spA0;
    s32 spBC;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_t0;
    s32 var_fp;
    s32 var_s1;
    s32 var_s4;
    s32 var_s5;
    s8 *var_s7;
    s8 temp_a0_4;
    s8 temp_a3;
    u16 temp_a0;
    u16 temp_a1;
    u16 temp_a2;
    u16 var_s6;
    u8 *temp_a0_5;
    u8 *temp_a0_6;
    u8 *temp_t1;
    u8 *var_s0;
    u8 *var_s2;
    u8 *var_s3;

    var_s7 = (signed char *)(D_004B4B40);
    var_s7 = (signed char *)(D_004B4B40);
    var_s0 = (unsigned char *)(gOptionWork);
    var_s4 = *(s32 *)((u8 *)var_s0 + 0x380);
    var_s1 = *(s32 *)((u8 *)var_s0 + 0x37C);
    var_fp = var_s4 * 0xA;
    temp_t1 = (unsigned char *)(D_004B4B40 + var_fp);
    temp_t0 = var_s4 * 0xB8;
    var_s3 = temp_t1 + 0x2BA86;
    var_s6 = *(D_00492FCE + temp_t0);
    temp_a0 = *(&D_00492FCC + temp_t0);
    temp_a2 = *(&D_00492FD2 + temp_t0);
    var_s2 = temp_t1 + 0x2BAA2;
    temp_a1 = *(&D_00493032 + temp_t0);
    temp_a3 = *(s8 *)((u8 *)temp_t1 + 0x2BA86);
    var_s5 = temp_a2 | temp_a1;
    spA0 = temp_a0 | *(&D_0049302C + temp_t0);
    if ((var_s1 == 1) && ((var_s6 & 0x10) || (var_s5 & 0x10))) {
        SoundRpc_SetVolume(0, 0, temp_a2, temp_a3, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 2, 0);
        }
        *(s32 **)((u8 *)var_s0 + 0x344) = (int *)(&func_002DCC60);
        *(s32 *)((u8 *)var_s0 + 0x37C) = 0;
        return;
    }
    if ((*(s32 *)((u8 *)var_s0 + 0x37C) == 1) && (((s64) ((s64) temp_a3 << 0x38) >> 0x38) == 2)) {
        func_002DBFE0(temp_a0, temp_a1, temp_a2, temp_a3);
    } else if (var_s6 & 0x1000) {
        SoundRpc_SetVolume(0, 0, temp_a2, temp_a3, D_004E0614);
        if (!(D_004E0614 <= 0.0f)) {
            SoundRpc_Send3(0, 0, 5, 0);
        }
        *(s32 **)((u8 *)var_s0 + 0x344) = (int *)(&func_002DCC60);
        *(s32 *)((u8 *)var_s0 + 0x37C) = 0;
    }
    if (var_s6 & 8) {
        temp_a0_2 = *(s32 *)((u8 *)var_s0 + 0x37C);
        if ((temp_a0_2 == 1) && (*(s8 *)((u8 *)temp_t1 + 0x2BA86) == 2)) {
            var_s6 = (u16) (D_004B4B40 + var_fp);
            memcpy(var_s6 + 0x2BA86 + 2, &D_00456B20 + (*(s8 *)((u8 *)var_s6 + 0x2BA86) * 8), 8);
            memcpy(var_s6 + 0x2BAA4, &D_00456B30, 8);
        } else if ((temp_a0_2 == 2) && (*(s8 *)((u8 *)var_s3 + 1) == 1)) {
            func_001A38B0(var_s4, 1, 0);
            *(s8 *)((u8 *)var_s3 + 1) = 0;
            var_s6 = (u16) gOptionWork;
            *(u8 **)((u8 *)var_s6 + 0x328) = amTask_Create(&func_002DBF20, 0, 0x2100, 0x4000);
            *(s32 *)((u8 *)var_s6 + 0x330) = var_s4;
            *(s32 *)((u8 *)var_s6 + 0x32C) = 0;
        }
    }
    func_002D33B0(var_s5, var_s0 + 0x37C, 0, 3);
    temp_a0_3 = *(s32 *)((u8 *)var_s0 + 0x37C);
    switch (temp_a0_3) {                            /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        if (*(s8 *)((u8 *)temp_t1 + 0x2BA86) == 2) {
            if (!(spA0 & 0xFF00)) {
                goto block_28;
            }
        } else {
block_28:
            func_002D3050(var_s5, var_s3, 3, 1);
            temp_a0_4 = *(s8 *)((u8 *)temp_t1 + 0x2BA86);
            switch (temp_a0_4) {                    /* switch 2; irregular */
            case 1:                                 /* switch 2 */
            case 0:                                 /* switch 2 */
                *(s8 *)((u8 *)var_s3 + 2) = (s8) *(&D_00456B20 + (temp_a0_4 * 8));
                *(s8 *)((u8 *)var_s3 + 3) = (s8) *(s8 *)((u8 *)(&D_00456B20 + (*(s8 *)((u8 *)temp_t1 + 0x2BA86) * 8)) + 1);
                *(s8 *)((u8 *)var_s3 + 4) = (s8) *(s8 *)((u8 *)(&D_00456B20 + (*(s8 *)((u8 *)temp_t1 + 0x2BA86) * 8)) + 2);
                *(s8 *)((u8 *)var_s3 + 5) = (s8) *(s8 *)((u8 *)(&D_00456B20 + (*(s8 *)((u8 *)temp_t1 + 0x2BA86) * 8)) + 3);
                *(s8 *)((u8 *)var_s3 + 6) = (s8) *(s8 *)((u8 *)(&D_00456B20 + (*(s8 *)((u8 *)temp_t1 + 0x2BA86) * 8)) + 4);
                *(s8 *)((u8 *)var_s3 + 7) = (s8) *(s8 *)((u8 *)(&D_00456B20 + (*(s8 *)((u8 *)temp_t1 + 0x2BA86) * 8)) + 5);
                *(s8 *)((u8 *)var_s3 + 8) = (s8) *(s8 *)((u8 *)(&D_00456B20 + (*(s8 *)((u8 *)temp_t1 + 0x2BA86) * 8)) + 6);
                *(s8 *)((u8 *)var_s3 + 9) = (s8) *(s8 *)((u8 *)(&D_00456B20 + (*(s8 *)((u8 *)temp_t1 + 0x2BA86) * 8)) + 7);
                break;
            case 2:                                 /* switch 2 */
                *(s8 *)((u8 *)var_s3 + 2) = (s8) *(s8 *)((u8 *)var_s2 + 2);
                *(s8 *)((u8 *)var_s3 + 3) = (s8) *(s8 *)((u8 *)var_s2 + 3);
                *(s8 *)((u8 *)var_s3 + 4) = (s8) *(s8 *)((u8 *)var_s2 + 4);
                *(s8 *)((u8 *)var_s3 + 5) = (s8) *(s8 *)((u8 *)var_s2 + 5);
                *(s8 *)((u8 *)var_s3 + 6) = (s8) *(s8 *)((u8 *)var_s2 + 6);
                *(s8 *)((u8 *)var_s3 + 7) = (s8) *(s8 *)((u8 *)var_s2 + 7);
                *(s8 *)((u8 *)var_s3 + 8) = (s8) *(s8 *)((u8 *)var_s2 + 8);
                *(s8 *)((u8 *)var_s3 + 9) = (s8) *(s8 *)((u8 *)var_s2 + 9);
                break;
            }
        }
        break;
    case 2:                                         /* switch 1 */
        func_002D3050(var_s5, var_s3 + 1, 2, 1);
        if (*(s8 *)((u8 *)var_s3 + 1) == 0) {
            temp_a0_5 = (var_s4 * 4) + var_s0;
            if (*(s32 *)((u8 *)temp_a0_5 + 0x334) == -1) {
                *(s32 *)((u8 *)temp_a0_5 + 0x334) = 0;
                func_001A38B0(var_s4, 1, 0);
                var_s5 = (s32) gOptionWork;
                *(u8 **)((u8 *)var_s5 + 0x328) = amTask_Create(&func_002DBF20, 0, 0x2100, 0x4000);
                *(s32 *)((u8 *)var_s5 + 0x330) = var_s4;
                *(s32 *)((u8 *)var_s5 + 0x32C) = 0;
            }
        }
        if (*(s8 *)((u8 *)var_s3 + 1) == 1) {
            *(s32 *)((u8 *)((var_s4 * 4) + var_s0) + 0x334) = -1;
            temp_a0_6 = *(u8 **)((u8 *)var_s0 + 0x328);
            if (temp_a0_6 != NULL) {
                amTask_Kill(temp_a0_6);
                *(u8 **)((u8 *)var_s0 + 0x328) = NULL;
            }
            func_001A3610(var_s4);
            func_001A38B0(var_s4, 1, 1);
        }
        break;
    }
    *(s16 *)((u8 *)(&spBC) + 0) = (s16) D_00470180;
    *(u8 *)((u8 *)(&spBC) + 2) = (u8) D_00470182;
    switch (var_s1) {                               /* switch 3; irregular */
    case 1:                                         /* switch 3 */
        func_002D2E50(*(s8 *)((u8 *)(var_s1 + sp) + 0xBC) + *(s8 *)((u8 *)temp_t1 + 0x2BA86), D_00470180, &spBC);
        break;
    case 2:                                         /* switch 3 */
        func_002D2E50(*(s8 *)((u8 *)(var_s1 + sp) + 0xBC), D_00470180, &spBC);
        break;
    }
    *(s8 *)((u8 *)temp_t1 + 0x2BAA2) = (s8) *(s8 *)((u8 *)temp_t1 + 0x2BA86);
    *(s8 *)((u8 *)var_s2 + 1) = (s8) *(s8 *)((u8 *)var_s3 + 1);
}

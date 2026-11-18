/* Draft (not built): func_00272660 at 0x00272660, size 0x3B4, segment menu/ess_list (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 130 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x3B8, original 0x3B4
 * Original: asm/nonmatchings/menu/ess_list/func_00272660.s */

// src/menu/ess_list.c func_00272660 size diff=130/238
extern void *amHeap_Alloc(s32, s32, char *, s32);
extern s32 amCdFs_ReadFileId(s32, s32, s32);
extern char D_0046B4F0[];
extern u8 D_0058F680[];
void func_00272660(u8 *arg0) {
    s16 var_t2;
    s16 var_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_s0;
    s32 var_t0;
    s32 var_t1;
    u8 **temp_s2;
    u8 *var_a1;

    temp_s0 = *(s32 *)((u8 *)arg0 + 4);
    temp_s2 = (u8 **)(&D_00470800 + (temp_s0 * 4));
    if (*temp_s2 == NULL) {
        *temp_s2 = amHeap_Alloc(0x7C0, 0, D_0046B4F0, 0xAB);
        D_004707FC = (s32)(*temp_s2);
        memset(D_004707FC, 0, 0x7C0);
        *(s32 *)((u8 *)D_004707FC + 0x44) = temp_s0;
        *(s32 *)((u8 *)D_004707FC + 0) = amCdFs_ReadFileId(0x107F1, 0, 1);
        *(s32 *)((u8 *)D_004707FC + 4) = amCdFs_ReadFileId((temp_s0 + 0x7F2) | 0x10000, 0, 1);
        *(s32 *)((u8 *)D_004707FC + 8) = amCdFs_ReadFileId(0x10A9C, 0, 1);
        *(u8 **)((u8 *)D_004707FC + 0x54) = (u8 *) (&D_0058F680 + (temp_s0 * 0xD680) + 0xD41D);
    }
    *(s32 *)((u8 *)D_004707FC + 0x44) = (s32) *(s32 *)((u8 *)arg0 + 4);
    *(u8 **)((u8 *)D_004707FC + 0x18) = amTask_Create(&func_00272510, 0, 0x3200, 0x200);
    *(u8 **)((u8 *)D_004707FC + 0x1C) = amTask_Create(NULL, 0, 0x3200, 0x200);
    memset(*(u8 **)((u8 *)D_004707FC + 0x18) + 0x30, 0, 0x1C);
    func_002700E0();
    *(s32 *)((u8 *)D_004707FC + 0x40) = (s32) *(s32 *)((u8 *)arg0 + 0);
    *(s32 *)((u8 *)D_004707FC + 0x64) = (s32) *(s32 *)((u8 *)arg0 + 0x10);
    *(s32 *)((u8 *)D_004707FC + 0x68) = (s32) *(s32 *)((u8 *)arg0 + 0x14);
    *(s32 *)((u8 *)D_004707FC + 0x70) = (s32) *(s32 *)((u8 *)arg0 + 0x1C);
    *(s32 *)((u8 *)D_004707FC + 0x6C) = (s32) *(s32 *)((u8 *)arg0 + 0x18);
    if (*(s32 *)((u8 *)D_004707FC + 0x70) == 0) {
        *(s32 *)((u8 *)D_004707FC + 0x48) = (s32) *(s32 *)((u8 *)arg0 + 0xC);
        *(s32 *)((u8 *)D_004707FC + 0x4C) = (s32) *(s32 *)((u8 *)arg0 + 8);
    } else {
        temp_a1 = *(s32 *)((u8 *)arg0 + 8);
        temp_a0 = *(s32 *)((u8 *)arg0 + 0xC) + temp_a1;
        var_v1 = -1;
        if (temp_a0 < 0) {

        } else if (temp_a0 < *(s32 *)((u8 *)D_004707FC + 0x58)) {
            var_v1 = *(s16 *)((u8 *)((temp_a0 * 2) + D_004707FC) + 0x134);
        } else {
            var_v1 = -1;
        }
        temp_a0_2 = *(s32 *)((u8 *)arg0 + 0x18);
        if (temp_a0_2 == var_v1) {
            *(s32 *)((u8 *)D_004707FC + 0x4C) = temp_a1;
            *(s32 *)((u8 *)D_004707FC + 0x48) = (s32) *(s32 *)((u8 *)arg0 + 0xC);
        } else {
            var_t2 = *(s16 *)((u8 *)D_004707FC + 0x134);
            var_t1 = 0;
            if (var_t2 != temp_a0_2) {
                temp_a2 = *(s32 *)((u8 *)D_004707FC + 0x58) - 1;
                do {
                    var_t0 = 0;
                    if (temp_a2 > 0) {
                        var_a1 = (u8 *)(D_004707FC);
loop_18:
                        if (var_t2 == *(s16 *)((u8 *)var_a1 + 0x134)) {
                            var_t2 = *(s16 *)((u8 *)(D_004707FC + (var_t0 * 2)) + 0x136);
                        } else {
                            var_t0 += 1;
                            var_a1 += 2;
                            if (var_t0 >= temp_a2) {
                                goto block_21;
                            }
                            goto loop_18;
                        }
                    } else {
block_21:
                        var_t2 = -1;
                    }
                    var_t1 += 1;
                } while (var_t2 != temp_a0_2);
            }
            *(s32 *)((u8 *)D_004707FC + 0x4C) = var_t1;
            *(s32 *)((u8 *)D_004707FC + 0x48) = 0;
        }
    }
    if (*(s32 *)((u8 *)D_004707FC + 0x48) < 0) {
        *(s32 *)((u8 *)D_004707FC + 0x48) = 0;
    }
    *(s32 *)((u8 *)D_004707FC + 0x48) = (s32) ((s32) *(s32 *)((u8 *)D_004707FC + 0x48) % 9);
    if (*(s32 *)((u8 *)D_004707FC + 0x4C) < 0) {
        *(s32 *)((u8 *)D_004707FC + 0x4C) = 0;
    }
    *(s32 *)((u8 *)D_004707FC + 0x4C) = (s32) ((s32) *(s32 *)((u8 *)D_004707FC + 0x4C) % (s32) (*(s32 *)((u8 *)D_004707FC + 0x58) - 9));
    *(s32 *)((u8 *)D_004707FC + 0x74) = 0;
    if (*(s32 *)((u8 *)D_004707FC + 0x4C) > 0) {
        *(s32 *)((u8 *)D_004707FC + 0xA4) = 2;
    } else {
        *(s32 *)((u8 *)D_004707FC + 0xA4) = 3;
        *(s32 *)((u8 *)(D_004707FC + 0xA4) + 8) = 0x2710;
    }
    if ((*(s32 *)((u8 *)D_004707FC + 0x4C) + *(s32 *)((u8 *)D_004707FC + 0x48) + 9) < *(s32 *)((u8 *)D_004707FC + 0x58)) {
        *(s32 *)((u8 *)D_004707FC + 0xD4) = 4;
    } else {
        *(s32 *)((u8 *)D_004707FC + 0xD4) = 5;
        *(s32 *)((u8 *)(D_004707FC + 0xD4) + 8) = 0x2710;
    }
    *(s32 *)((u8 *)D_004707FC + 0x104) = 8;
}

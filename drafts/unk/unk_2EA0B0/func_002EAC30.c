/* Draft (not built): func_002EAC30 at 0x002EAC30, size 0x278, segment unk/unk_2EA0B0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 80 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x290, original 0x278
 * Original: asm/nonmatchings/unk/unk_2EA0B0/func_002EAC30.s */

// src/unk/unk_2EA0B0.c func_002EAC30 size diff=80/164
extern void func_001C75D0(void *, s32);
void func_002EAC30(void) {
    s32 (*temp_v1)(s32);
    s32 temp_a0;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_s0_2;
    s32 temp_v1_3;
    s8 temp_a0_2;
    s8 temp_v1_2;
    s8 var_a0;
    u8 *temp_a0_7;
    u8 *temp_a1;
    u8 *temp_a1_2;
    u8 *temp_s0;
    u8 *temp_s1;
    u8 *temp_s1_2;
    u8 *temp_s2;

    temp_s0 = D_00470958;
    temp_a0 = *(s32 *)((u8 *)temp_s0 + 0x20) * 8;
    *(u8 **)((u8 *)temp_s0 + 0x1C) = (u8 *) (*(s32 *)((u8 *)(*(u8 **)((u8 *)temp_s0 + 0x14)) + 4) + temp_a0);
    temp_s2 = *(u8 **)((u8 *)temp_s0 + 0x18);
    temp_s1 = *(u8 **)((u8 *)temp_s0 + 0x1C);
    *(s32 *)((u8 *)temp_s0 + 0x24) = 0;
    temp_v1 = *(s32 (**)(s32))((u8 *)temp_s1 + 4);
    if (temp_v1 != NULL) {
        temp_v1(temp_a0);
    }
    temp_a0_2 = *(s8 *)((u8 *)temp_s1 + 0);
    if (temp_a0_2 & 4) {
        temp_a0_3 = *(s32 *)((u8 *)temp_s0 + 0xC);
        if (temp_a0_3 == 1) {
            D_004573F8(temp_a0_3);
        } else {
            *(s32 *)((u8 *)temp_s0 + 0xC) = -1;
        }
        *(u8 **)((u8 *)temp_s0 + 0x18) = temp_s1;
        *(s32 *)((u8 *)temp_s0 + 0x1C) = 0;
        return;
    }
    if (temp_a0_2 & 1) {
        if (temp_s2 != NULL) {
            if ((*(s8 *)((u8 *)temp_s2 + 1) != *(s8 *)((u8 *)temp_s1 + 1)) && ((temp_v1_2 = *(s8 *)((u8 *)temp_s2 + 2), (temp_v1_2 == 0)) || (temp_v1_2 == 2))) {
                D_004573F8((s32) temp_a0_2);
                *(u8 **)((u8 *)temp_s0 + 0x18) = temp_s1;
                goto block_23;
            }
            *(u8 **)((u8 *)temp_s0 + 0x18) = temp_s1;
            *(s32 *)((u8 *)temp_s0 + 0x1C) = 0;
            temp_a1 = *(u8 **)((u8 *)temp_s0 + 0x58);
            temp_a0_4 = *(s32 *)((u8 *)temp_s0 + 0x48);
            *(u8 **)((u8 *)temp_s0 + 0x4C) = (u8 *) (temp_a1 + *(*(s32 *)((u8 *)temp_a1 + 0x14) + temp_a1 + ((temp_a0_4 - *(s32 *)((u8 *)temp_a1 + 0x18)) * 4)));
            D_004573F4[0]();
        } else {
            *(u8 **)((u8 *)temp_s0 + 0x18) = temp_s1;
            *(s32 *)((u8 *)temp_s0 + 0x1C) = 0;
            temp_a1_2 = *(u8 **)((u8 *)temp_s0 + 0x58);
            temp_a0_5 = *(s32 *)((u8 *)temp_s0 + 0x48);
            *(u8 **)((u8 *)temp_s0 + 0x4C) = (u8 *) (temp_a1_2 + *(*(s32 *)((u8 *)temp_a1_2 + 0x14) + temp_a1_2 + ((temp_a0_5 - *(s32 *)((u8 *)temp_a1_2 + 0x18)) * 4)));
            D_004573F0[0]();
        }
    } else {
        temp_a0_6 = *(s32 *)((u8 *)temp_s0 + 0xC);
        if (temp_a0_6 == 1) {
            D_004573F8(temp_a0_6);
        }
        *(u8 **)((u8 *)temp_s0 + 0x18) = temp_s1;
block_23:
        *(s32 *)((u8 *)temp_s0 + 0x1C) = 0;
    }
    if (*(s8 *)((u8 *)temp_s1 + 0) & 2) {
        var_a0 = *(s8 *)((u8 *)temp_s1 + 3);
        temp_s0_2 = *(s32 *)((u8 *)temp_s0 + 0x20) != 0;
        if (var_a0 < 0) {
            var_a0 = -var_a0;
        }
        temp_v1_3 = var_a0 + 0x2D8;
        temp_a0_7 = gBattle + (*(s8 *)((u8 *)temp_s1 + 1) * 0x2020);
        temp_s1_2 = temp_a0_7 + 0x830;
        if (*(s32 *)((u8 *)temp_a0_7 + 0x13A0) != temp_v1_3) {
            *(s16 *)((u8 *)temp_s1_2 + 0xCB4) = 1;
            *(s32 *)((u8 *)temp_s1_2 + 0xB70) = temp_v1_3;
            *(s16 *)((u8 *)temp_s1_2 + 0xCB6) = 1;
            func_001C75D0(temp_s1_2, 0xF);
            if (temp_s0_2 != 0) {
                *(s32 *)((u8 *)temp_s1_2 + 0xCA4) = 0x3DCCCCCD;
                *(s32 *)((u8 *)temp_s1_2 + 0xCA8) = 0x3D4CCCCD;
                return;
            }
            *(s32 *)((u8 *)temp_s1_2 + 0xCA4) = 0x3F800000;
            *(s32 *)((u8 *)temp_s1_2 + 0xCA8) = 0;
        }
    }
}

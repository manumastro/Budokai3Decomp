/* Draft (not built): func_001E8290 at 0x001E8290, size 0x39C, segment unk/unk_1D5B30 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal implicit conversion from 'int' to 'char *' @ 4528: func_001E6E90(-1);
 * Original: asm/nonmatchings/unk/unk_1D5B30/func_001E8290.s */

// src/unk/unk_1D5B30.c func_001E8290 cerr diff=-1/0
s32 amMotion_CopyPose(s8 *, s8 *);
s8 amMotion_FindBone(s32, s32 *);
s32 func_001D41F0(s32);
extern s32 D_00469650;
extern s32 D_00469660;
extern s32 D_00469668;
extern s32 D_00469670;
extern s32 D_00469678;
extern s32 D_00469680;
extern void amMotion_BuildMatrices(char *);
s32 func_001E8290(u8 *arg0) {
    s16 temp_a0_2;
    s16 temp_a1_3;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v1;
    s32 temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a3;
    s32 var_s4;
    s32 var_v0;
    s32 var_v1;
    s8 *temp_a0;
    s8 *temp_a1;
    s8 *temp_a1_2;
    s8 *temp_s1_2;
    s8 temp_s2_2;
    u8 *temp_a2;
    u8 *temp_s1;
    u8 *temp_t0;
    u8 *temp_v0_2;
    u8 *var_a2;
    u8 *var_s0;

    var_s4 = 0;
    temp_v0 = *(s32 *)((u8 *)arg0 + 0x554);
    temp_s2 = *(s32 *)((u8 *)arg0 + 0x568);
    var_s0 = *(u8 **)((u8 *)arg0 + 0x52C);
    if (temp_v0 >= 0) {
        temp_v0_2 = *(u8 **)((u8 *)((temp_v0 * 4) + temp_s2) + 0x1DB8);
        if (var_s0 != temp_v0_2) {
            *(u8 **)((u8 *)arg0 + 0x52C) = temp_v0_2;
            var_s0 = temp_v0_2;
            func_001E6E90(-1);
        }
    }
    if (var_s0 != NULL) {
        temp_s1 = *(u8 **)((u8 *)var_s0 + 0);
        temp_a1 = *(s8 **)((u8 *)arg0 + 0x538);
        temp_a0 = *(s8 **)((u8 *)temp_s1 + 0x4C);
        temp_s0 = *(s32 *)((u8 *)var_s0 + 4);
        if (temp_a0 != temp_a1) {
            if ((temp_a0 != NULL) && (temp_a1 != NULL)) {
                amMotion_CopyPose(temp_a0, temp_a1);
                amMotion_BuildMatrices((char *)(*(s8 **)((u8 *)temp_s1 + 0x4C)));
            }
            temp_a1_2 = *(s8 **)((u8 *)arg0 + 0x538);
            if (temp_a1_2 != NULL) {
                temp_a2 = *(u8 **)((u8 *)arg0 + 0x53C);
                temp_v0_3 = *(s16 *)((u8 *)temp_a2 + 0x26);
                var_a0 = 0;
                if (temp_v0_3 >= 0) {
                    var_a0 = *(s32 *)((u8 *)((temp_v0_3 * 8) + *(s32 *)((u8 *)temp_a1_2 + 0)) + 8);
                }
                temp_v0_4 = *(s16 *)((u8 *)temp_a2 + 0x14);
                var_v1 = 0;
                if (temp_v0_4 >= 0) {
                    var_v1 = *(s32 *)((u8 *)((temp_v0_4 * 8) + *(s32 *)((u8 *)temp_a1_2 + 0)) + 8);
                }
                temp_v0_5 = *(s16 *)((u8 *)temp_a2 + 0x16);
                if (temp_v0_5 >= 0) {
                    var_v0 = *(s32 *)((u8 *)((temp_v0_5 * 8) + *(s32 *)((u8 *)temp_a1_2 + 0)) + 8);
                } else {
                    var_v0 = 0;
                }
            } else {
                var_a0 = 0;
                var_v1 = 0;
                var_v0 = 0;
            }
            *(u8 **)((u8 *)arg0 + 0x530) = temp_s1;
            *(s32 *)((u8 *)arg0 + 0x534) = (s32) *(s32 *)((u8 *)temp_s1 + 0x58);
            *(s8 **)((u8 *)arg0 + 0x538) = (s8 *) *(s8 **)((u8 *)temp_s1 + 0x4C);
            *(u8 **)((u8 *)arg0 + 0x53C) = temp_s1;
            *(s32 *)((u8 *)arg0 + 0x544) = (s32) (temp_s2 + (*(s32 *)((u8 *)arg0 + 0x554) * 4) + 0x1DD8);
            temp_t0 = *(u8 **)((u8 *)(*(u8 **)((u8 *)arg0 + 0x530)) + 0x48);
            var_a3 = 0;
            if (*(s32 *)((u8 *)temp_t0 + 4) > 0) {
                var_a2 = temp_t0;
                do {
                    *(s32 *)((u8 *)var_a2 + 8) = 0;
                    var_a3 += 1;
                    var_a2 += 8;
                } while (var_a3 < *(s32 *)((u8 *)temp_t0 + 4));
            }
            temp_a1_3 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x53C)) + 0x26);
            if (temp_a1_3 >= 0) {
                *(s32 *)((u8 *)((temp_a1_3 * 8) + *(s32 *)((u8 *)(*(s8 **)((u8 *)arg0 + 0x538)) + 0)) + 8) = var_a0;
            }
            temp_a0_2 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x53C)) + 0x14);
            if (temp_a0_2 >= 0) {
                *(s32 *)((u8 *)((temp_a0_2 * 8) + *(s32 *)((u8 *)(*(s8 **)((u8 *)arg0 + 0x538)) + 0)) + 8) = var_v1;
            }
            temp_v1 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x53C)) + 0x16);
            if (temp_v1 >= 0) {
                *(s32 *)((u8 *)((temp_v1 * 8) + *(s32 *)((u8 *)(*(s8 **)((u8 *)arg0 + 0x538)) + 0)) + 8) = var_v0;
            }
            temp_s1_2 = *(s8 **)((u8 *)arg0 + 0x538);
            *(s8 *)((u8 *)arg0 + 0x670) = 0;
            *(s8 *)((u8 *)arg0 + 0x671) = 0;
            *(s8 *)((u8 *)arg0 + 0x673) = 0;
            *(s8 *)((u8 *)arg0 + 0x674) = 0;
            *(s8 *)((u8 *)arg0 + 0x672) = 0;
            temp_v1_2 = *(s32 *)((u8 *)arg0 + 0x54C);
            switch (temp_v1_2) {                    /* irregular */
            case 1:
                amMotion_FindBone(*(s32 *)((u8 *)temp_s1_2 + 4), &D_00469650);
                *(s8 *)((u8 *)arg0 + 0x671) = amMotion_FindBone(*(s32 *)((u8 *)temp_s1_2 + 4), &D_00469660);
                break;
            case 8:
                temp_s2_2 = amMotion_FindBone(*(s32 *)((u8 *)temp_s1_2 + 4), &D_00469650);
                *(s8 *)((u8 *)arg0 + 0x671) = amMotion_FindBone(*(s32 *)((u8 *)temp_s1_2 + 4), &D_00469660);
                *(s32 *)((u8 *)((*(s8 *)((u8 *)arg0 + 0x671) * 8) + *(s32 *)((u8 *)temp_s1_2 + 0)) + 8) = 0;
                *(s32 *)((u8 *)((temp_s2_2 * 8) + *(s32 *)((u8 *)temp_s1_2 + 0)) + 8) = 0;
                break;
            case 28:
                *(s8 *)((u8 *)arg0 + 0x670) = amMotion_FindBone(*(s32 *)((u8 *)temp_s1_2 + 4), &D_00469668);
                break;
            case 14:
                *(s8 *)((u8 *)arg0 + 0x672) = amMotion_FindBone(*(s32 *)((u8 *)temp_s1_2 + 4), &D_00469670);
                *(s8 *)((u8 *)arg0 + 0x673) = amMotion_FindBone(*(s32 *)((u8 *)temp_s1_2 + 4), &D_00469678);
                *(s8 *)((u8 *)arg0 + 0x674) = amMotion_FindBone(*(s32 *)((u8 *)temp_s1_2 + 4), &D_00469680);
                *(s32 *)((u8 *)((*(s8 *)((u8 *)arg0 + 0x673) * 8) + *(s32 *)((u8 *)temp_s1_2 + 0)) + 8) = -1;
                *(s32 *)((u8 *)((*(s8 *)((u8 *)arg0 + 0x674) * 8) + *(s32 *)((u8 *)temp_s1_2 + 0)) + 8) = -1;
                break;
            }
            func_001D41F0(*(s32 *)((u8 *)arg0 + 0x534));
            var_s4 = 1;
        }
        *(s32 *)((u8 *)arg0 + 0x540) = temp_s0;
        *(s8 *)((u8 *)arg0 + 0x66C) = 0;
    } else {
        *(u8 **)((u8 *)arg0 + 0x530) = NULL;
        *(s8 **)((u8 *)arg0 + 0x538) = NULL;
        *(u8 **)((u8 *)arg0 + 0x53C) = NULL;
        *(s32 *)((u8 *)arg0 + 0x540) = 0;
    }
    return var_s4;
}

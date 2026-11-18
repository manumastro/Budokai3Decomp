/* Draft (not built): func_001C9AF0 at 0x001C9AF0, size 0x2A0, segment battle/char_body (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); rom 'struct CharFile *' to 'int' @ 179: temp_v0_3 = amCdFs_ReadFileId((s32)((s32)((s32)((s32)((s32)(temp_a0))))), 0, 1);
 * Original: asm/nonmatchings/battle/char_body/func_001C9AF0.s */

// src/battle/char_body.c func_001C9AF0 cerr diff=-1/0
extern s32 D_00447445;
extern s32 D_00447448;
extern s32 D_00447452;
extern char D_00447450[];
u8 *func_001C9AF0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 spAC;
    s32 spB0;
    s32 spC0;
    s32 spD0;
    s32 spE0;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 var_a0;
    s32 var_v0_2;
    s8 temp_v1;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_4;
    u8 *var_s1;
    u8 *var_v0;

    temp_s6 = arg1 * 8;
    var_v0_2 = -1;
    temp_s0 = arg0 * 0x60;
    spAC = arg1;
    temp_v1 = *(temp_s6 + (&D_00447452 + temp_s0));
    if (temp_v1 != -1) {
        var_v0_2 = temp_v1 + (arg2 * *(&D_00447445 + temp_s0));
    }
    var_s1 = NULL;
    if (var_v0_2 >= 0) {
        var_a0 = -1;
        if (temp_v1 != -1) {
            var_a0 = temp_v1 + (arg2 * *(&D_00447445 + temp_s0));
        }
        var_s1 = (u8 *)(*(&D_00447448 + temp_s0) + (var_a0 * 0xC));
    }
    if (var_s1 == NULL) {
        return NULL;
    }
    var_v0 = *(u8 **)((u8 *)var_s1 + 8);
    if (var_v0 != NULL) {
loop_10:
        if (*(s32 *)((u8 *)var_v0 + 0x78) == arg3) {
            *(s32 *)((u8 *)var_v0 + 0x7C) = (s32) (*(s32 *)((u8 *)var_v0 + 0x7C) + 1);
            return var_v0;
        }
        var_v0 = *(u8 **)((u8 *)var_v0 + 0x84);
        if (var_v0 == NULL) {
            goto block_15;
        }
        goto loop_10;
    }
block_15:
    spE0 = 0x80;
    spC0 = 0x80;
    temp_s3 = (amObject_GetSize(&spD0) + 0xF) & ~0xF;
    temp_s7 = ((amMotion_CalcSize(&spB0, 2) + 0xF) & ~0xF) + (temp_s3 + 0x90);
    temp_v0 = amHeap_Alloc(temp_s7, 1, D_00469040, 0xAF);
    memset(temp_v0, 0, temp_s7);
    *(u8 **)((u8 *)temp_v0 + 0x48) = (u8 *) (temp_v0 + 0x90);
    *(u8 **)((u8 *)temp_v0 + 0x4C) = (u8 *) (temp_s3 + temp_v0 + 0x90);
    *(u8 **)((u8 *)temp_v0 + 0x54) = var_s1;
    *(s32 *)((u8 *)temp_v0 + 0x70) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x74) = 0;
    *(s32 *)((u8 *)temp_v0 + 0x50) = (s32) *(temp_s6 + (D_00447450 + temp_s0));
    *(s32 *)((u8 *)temp_v0 + 0x78) = arg3;
    *(s32 *)((u8 *)temp_v0 + 0x7C) = 1;
    *(s32 *)((u8 *)temp_v0 + 0x80) = 0;
    *(u8 **)((u8 *)temp_v0 + 0x84) = (u8 *) *(u8 **)((u8 *)var_s1 + 8);
    temp_v0_2 = *(u8 **)((u8 *)temp_v0 + 0x84);
    if (temp_v0_2 != NULL) {
        *(u8 **)((u8 *)temp_v0_2 + 0x80) = temp_v0;
    }
    *(u8 **)((u8 *)var_s1 + 8) = temp_v0;
    temp_a0 = *(s32 *)((u8 *)var_s1 + 0);
    if (temp_a0 != -1) {
        temp_v0_3 = amCdFs_ReadFileId((s32)((s32)((s32)((s32)((s32)((s32)(temp_a0)))))), 0, 1);
        *(s32 *)((u8 *)temp_v0 + 0x6C) = temp_v0_3;
        *(s32 *)((u8 *)temp_v0 + 0x70) = temp_v0_3;
    }
    *(u8 **)((u8 *)temp_v0 + 0x58) = (u8 *)CharSecp_Create(*(s32 *)((u8 *)var_s1 + 4));
    temp_v0_4 = *(u8 **)((u8 *)temp_v0 + 0x58);
    if (temp_v0_4 != NULL) {
        temp_v0_5 = *(s32 *)((u8 *)temp_v0_4 + 0x3C);
        if (temp_v0_5 != 0) {
            *(s32 *)((u8 *)temp_v0 + 0x70) = temp_v0_5;
        }
    }
    *(s32 *)((u8 *)temp_v0 + 0x60) = (s32) (((arg2 + 1) << 8) + (((arg0 + 1) << 0x10) + 0x01000000 + ((spAC + 1) << 0xC)));
    return temp_v0;
}

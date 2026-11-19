/* Draft (not built): StrSelect_TaskMain at 0x002EBFB0, size 0x2C0, segment story/str_select (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); explicit conversion from 'struct PadState' to 'unsigned short' mwccps2.exe Compiler: @ 389: var_v0 = (u16)(*D_00492FCE);
 * Original: asm/nonmatchings/story/str_select/StrSelect_TaskMain.s */

// src/story/str_select.c StrSelect_TaskMain cerr diff=-1/0
extern u16 D_00493086;
void StrSelect_TaskMain(Task *arg0) {
    s32 sp48;
    s8 sp40;
    s32 sp41;
    s32 *var_v1;
    s32 var_a1;
    s16 temp_s2;
    s32 temp_a2;
    s32 temp_v0;
    s32 var_v0_2;
    s64 temp_a1_2;
    s64 temp_v1;
    u16 var_v0;
    u8 temp_a1;
    u8 *temp_s0;

    temp_s0 = *(u8 **)((u8 *)arg0 + 0x30);
    if (D_004B4B63 == 0) {
        var_v0 = (u16)(*D_00492FCE);
        var_a1 = 1;
    } else {
        var_v0 = D_00493086;
        var_a1 = 2;
    }
    if (var_v0 & 0xFFFF & 1) {
        Help_Open(0x40000 | (0x800048 << 0x20), var_a1);
    }
    func_0027DAF0((s32)(*(u8 **)((u8 *)temp_s0 + 8)), (StrSelectInfo *)(&sp40));
    temp_v1 = (s64) (func_0027DAE0((s32)(*(u8 **)((u8 *)temp_s0 + 8))) << 0x38) >> 0x38;
    *(s8 *)((u8 *)temp_s0 + 0x5F) = sp40;
    *(s8 *)((u8 *)temp_s0 + 0x58) = (s8) *(s8 *)((u8 *)(&sp41) + 0);
    *(s8 *)((u8 *)temp_s0 + 0x59) = (s8) *(s8 *)((u8 *)(&sp41) + 1);
    *(s8 *)((u8 *)temp_s0 + 0x5A) = (s8) *(s8 *)((u8 *)(&sp41) + 2);
    *(s8 *)((u8 *)temp_s0 + 0x5B) = (s8) *(s8 *)((u8 *)(&sp41) + 3);
    *(s8 *)((u8 *)temp_s0 + 0x5C) = (s8) *(s8 *)((u8 *)(&sp41) + 4);
    *(s8 *)((u8 *)temp_s0 + 0x5D) = (s8) *(s8 *)((u8 *)(&sp41) + 5);
    *(s8 *)((u8 *)temp_s0 + 0x5E) = (s8) *(s8 *)((u8 *)(&sp41) + 6);
    *(s32 *)((u8 *)temp_s0 + 0x60) = sp48;
    temp_a1 = (u8) *(s8 *)((u8 *)temp_s0 + 0x5F);
    temp_a2 = *(s32 *)((u8 *)temp_s0 + 0x60);
    if (temp_v1 == 0x26) {
        var_v0_2 = 0;
    } else {
        temp_v0 = *(s32 *)(*(((u8 *)&D_00455760) + (temp_v1 * 4)) + ((temp_a1 & 0xFF) * 4));
        if (temp_v0 == 0) {
            var_v0_2 = 0;
        } else {
            var_v0_2 = temp_v0 - temp_a2;
        }
    }
    *(s32 *)((u8 *)temp_s0 + 0x64) = var_v0_2;
    StrSelect_Draw((StrSelectWork *)(temp_s0), temp_a1, temp_a2);
    if ((((s64) (func_0027DAB0((s32)(*(u8 **)((u8 *)temp_s0 + 8))) << 0x38) >> 0x38) == 4) && (*(D_00492FCE + (((s32)(D_004B4B63)) * 0xB8)) & 0x1000)) {
        func_0027DB20((s32)(*(u8 **)((u8 *)temp_s0 + 8)));
        Scene_Request(6, 0);
        Scene_FadeTo(0xA, 0);
        var_v1 = (int *)(&StrSelect_TaskClose);
        if (&StrSelect_TaskClose == NULL) {
            var_v1 = NULL;
        }
        goto block_23;
    }
    if (((s64) (func_0027DAA0((s32)(*(u8 **)((u8 *)temp_s0 + 8))) << 0x38) >> 0x38) == 1) {
        temp_s2 = (*(short *)(D_005C9F00));
        StrSelect_Reset(temp_s2);
        D_00511450[0] = (s8) temp_s2;
        temp_a1_2 = (s64) temp_s2 << 0x30;
        if (*(u8 *)((u8 *)temp_s0 + 0x51) != 0) {
            func_002A8CE0(temp_s2, D_004E6560 + ((temp_a1_2 >> 0x30) * 0x1210) + 0x80);
        } else if (StrSelect_TestFlag(temp_s2) == 0) {
            func_002A8CE0(temp_s2, D_004E6560 + (((s64) ((s64) temp_s2 << 0x30) >> 0x30) * 0x1210) + 0x80);
        }
        Scene_Request(8, 0);
        Scene_FadeTo(-1, 0);
        var_v1 = (int *)(&StrSelect_TaskClose);
        if (&StrSelect_TaskClose == NULL) {
            var_v1 = NULL;
        }
block_23:
        *(s32 **)((u8 *)arg0 + 0x1C) = var_v1;
    }
}

/* Draft (not built): func_001BBC60 at 0x001BBC60, size 0x2F0, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 112 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x318, original 0x2F0
 * Original: asm/nonmatchings/battle/btl_main/func_001BBC60.s */

// src/battle/btl_main.c func_001BBC60 size diff=112/198
s32 func_001D9280(void *);
void func_001BBC60(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1_3;
    s16 var_v0;
    u8 *temp_v1;
    u8 *temp_v1_2;

    *(s16 *)((u8 *)arg0 + 0xCAE) = (s16) *(s16 *)((u8 *)arg0 + 0xCAC);
    *(s16 *)((u8 *)arg0 + 0xCAC) = 0xF;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == *(s16 *)((u8 *)arg0 + 0xCAC)) {
        *(s16 *)((u8 *)arg0 + 0xCB0) = (s16) (*(s16 *)((u8 *)arg0 + 0xCB0) + 1);
    } else {
        *(s16 *)((u8 *)arg0 + 0xCB0) = 0;
    }
    if (*(s16 *)((u8 *)arg0 + 0xCB4) == 0) {
        temp_v1 = *(u8 **)((u8 *)arg0 + 0x17A0);
        if (*(s16 *)((u8 *)temp_v1 + 0x1A) > 0) {
            var_v0 = *(s16 *)((u8 *)(((*(s8 *)((u8 *)arg0 + 0x1FF9) != 0) * 2) + temp_v1) + 0x18);
        } else {
            var_v0 = *(s16 *)((u8 *)temp_v1 + 0x18);
        }
        *(s32 *)((u8 *)arg0 + 0xB70) = (s32) var_v0;
        temp_v1_2 = *(u8 **)((u8 *)arg0 + 0x17A0);
        if (*(s32 *)((u8 *)temp_v1_2 + 8) & 2) {
            *(s16 *)((u8 *)arg0 + 0x1A58) = (s16) *(s16 *)((u8 *)temp_v1_2 + 0x10);
            temp_v0 = *(s16 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x17A0)) + 0x16);
            if (temp_v0 != 0) {
                *(s16 *)((u8 *)arg0 + 0x1A58) = temp_v0;
            }
        } else {
            goto block_37;
        }
    } else {
        temp_v0_2 = *(s16 *)((u8 *)arg0 + 0xCAC);
        switch (temp_v0_2) {
        case 0:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 1U;
            break;
        case 1:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 2U;
            break;
        case 4:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 4U;
            break;
        case 5:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 8U;
            break;
        case 6:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 0x10U;
            break;
        case 7:
        case 8:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 0x20U;
            break;
        case 9:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 0x40U;
            break;
        case 11:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 0x80U;
            break;
        default:
            *(u16 *)((u8 *)arg0 + 0xCB2) = 0U;
            break;
        }
        if (*(s8 *)((u8 *)arg0 + 0x2010) != 0) {
            *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x8000);
        }
        if (*(s8 *)((u8 *)arg0 + 0x2011) != 0) {
            *(u16 *)((u8 *)arg0 + 0xCB2) = (u16) (*(u16 *)((u8 *)arg0 + 0xCB2) | 0x4000);
        }
        *(u8 **)((u8 *)arg0 + 0x17A0) = NULL;
block_37:
        *(s16 *)((u8 *)arg0 + 0x1A58) = 0;
    }
    *(s16 *)((u8 *)arg0 + 0x1A5A) = 0;
    *(s16 *)((u8 *)arg0 + 0x1A5C) = 0;
    func_001E3460(arg0);
    if (*(s16 *)((u8 *)arg0 + 0xCB4) == 0) {
        temp_f1 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB74)) + 8);
        if (*(f32 *)((u8 *)arg0 + 0xCA4) < temp_f1) {
            *(f32 *)((u8 *)arg0 + 0xCA4) = temp_f1;
        }
        temp_f1_2 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB74)) + 0xC);
        if (*(f32 *)((u8 *)arg0 + 0xCA8) < temp_f1_2) {
            *(f32 *)((u8 *)arg0 + 0xCA8) = temp_f1_2;
        }
    }
    temp_v1_3 = *(s16 *)((u8 *)arg0 + 0xCAE);
    if ((temp_v1_3 == 5) || (temp_v1_3 == 9)) {
        *(s32 *)((u8 *)arg0 + 0x1770) = 0;
    }
    *(s32 *)((u8 *)arg0 + 0xCB8) = 0;
    *(s8 *)((u8 *)arg0 + 0x2003) = (s8) ((*(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0xB74)) + 0x10) & 0x10) != 0);
    *(s8 *)((u8 *)arg0 + 0x1FFD) = 0;
    *(s16 *)((u8 *)arg0 + 0x181C) = 0;
    *(s8 *)((u8 *)arg0 + 0x2001) = 0;
    *(s8 *)((u8 *)arg0 + 0x2002) = 0;
    *(s8 *)((u8 *)arg0 + 0x201B) = 0;
    *(s8 *)((u8 *)arg0 + 0x2017) = 0;
    *(s8 *)((u8 *)arg0 + 0x2018) = 0;
    *(s8 *)((u8 *)arg0 + 0x2019) = 0;
    if (*(s16 *)((u8 *)arg0 + 0xCAE) != 0xF) {
        *(s8 *)((u8 *)arg0 + 0x200C) = 0;
    }
    if (*(s16 *)((u8 *)arg0 + 0xCAE) == 0x28) {
        *(s8 *)((u8 *)arg0 + 0x2019) = 1;
        *(s8 *)((u8 *)arg0 + 0x201A) = (s8) (*(s8 *)((u8 *)arg0 + 0x201A) + 1);
    } else {
        *(s8 *)((u8 *)arg0 + 0x2019) = 0;
        *(s8 *)((u8 *)arg0 + 0x201A) = 0;
    }
    if (func_001E3D60(*(s32 *)((u8 *)arg0 + 0x17AC), 0x43340000) != 0) {
        *(s8 *)((u8 *)arg0 + 0x2003) = 1;
    }
    *(s8 *)((u8 *)arg0 + 0x2006) = 1;
    func_001D9280(arg0);
    func_001E1300((s32)(arg0));
}

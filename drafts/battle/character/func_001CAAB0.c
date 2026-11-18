/* Draft (not built): func_001CAAB0 at 0x001CAAB0, size 0x158, segment battle/character (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 49 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x134, original 0x158
 * Original: asm/nonmatchings/battle/character/func_001CAAB0.s */

// src/battle/character.c func_001CAAB0 size diff=49/77
s32 amCdFs_SetHeap(s32);
void *func_001C9AF0(s32, s32, s32, s32);
void *func_001CA180(s32, s32, s32, s32);
s32 func_002378F0(void *);
extern s32 D_00447440;
u8 *func_001CAAB0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0_3;
    s32 temp_v0_5;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_4;

    amCdFs_SetHeap(1);
    temp_v0 = amHeap_Alloc(0x28, 1, D_00469250, 0xB7);
    memset(temp_v0, 0, 0x28);
    *(s32 *)((u8 *)temp_v0 + 0x24) = 0;
    *(u8 **)((u8 *)temp_v0 + 8) = (u8 *) (&D_00447440 + (arg0 * 0x60));
    *(s32 *)((u8 *)temp_v0 + 0xC) = arg0;
    *(s32 *)((u8 *)temp_v0 + 0x10) = arg1;
    *(s32 *)((u8 *)temp_v0 + 0x14) = arg2;
    *(s32 *)((u8 *)temp_v0 + 0x18) = arg3;
    *(u8 **)((u8 *)temp_v0 + 0) = func_001C9AF0(arg0, arg1, arg2, arg3);
    *(u8 **)((u8 *)temp_v0 + 4) = func_001CA180(arg0, arg1, arg2, arg3);
    *(s32 *)((u8 *)temp_v0 + 0x20) = 0;
    temp_v0_2 = *(u8 **)((u8 *)temp_v0 + 4);
    if ((temp_v0_2 != NULL) && (temp_v0_3 = *(s32 *)((u8 *)temp_v0_2 + 0x94), (temp_v0_3 != 0))) {
        *(s32 *)((u8 *)temp_v0 + 0x20) = temp_v0_3;
    } else {
        temp_v0_4 = *(u8 **)((u8 *)temp_v0 + 0);
        if (temp_v0_4 != NULL) {
            temp_v0_5 = *(s32 *)((u8 *)temp_v0_4 + 0x70);
            if (temp_v0_5 != 0) {
                *(s32 *)((u8 *)temp_v0 + 0x20) = temp_v0_5;
            }
        }
    }
    amCdFs_SetHeap(0);
    if (M2C_ERROR(/* Read from unset register $t0 */) != 0) {
        *(s32 *)((u8 *)temp_v0 + 0x1C) = func_002378F0(temp_v0);
    }
    return temp_v0;
}

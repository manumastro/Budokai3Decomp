/* Draft (not built): func_001A4920 at 0x001A4920, size 0x1D0, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); cit conversion from 'unsigned char *' to 'char' mwccps2.exe Compiler: @ 286: *D_00495718 = *(u8 **)((u8 *)arg0 + 0x260);
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A4920.s */

// src/battle/btl_cmd.c func_001A4920 cerr diff=-1/0
s32 memcpy(s32 *, void *, s32);
extern void *D_0049571C;
extern void *D_00495720;
extern void *D_00495724;
extern f32 D_00495728;
extern f32 D_0049572C;
extern f32 D_00495730;
extern f32 D_00495734;
extern f32 D_0049575C;
extern f32 D_00495760;
extern f32 D_00495764;
extern f32 D_00495768;
extern f32 D_0049576C;
extern f32 D_00495770;
extern f32 D_00495774;
extern s32 D_004958A0;
extern s32 D_004958B0;
extern s32 D_004958C0;
extern s32 D_004958D0;
extern char D_00495718[];
extern char D_00495758[];
void func_001A4920(u8 *arg0) {
    s32 *temp_v1;
    s32 temp_v1_2;
    u8 *temp_a1;

    temp_v1 = *(s32 **)((u8 *)arg0 + 0xC);
    temp_a1 = arg0 + 0x260;
    if ((temp_v1 != NULL) && (temp_v1_2 = (s32) (*temp_v1 & 0x03C00000) >> 0x16, (temp_v1_2 != 0))) {
        switch (temp_v1_2) {
        case 6:
            *D_00495718 = *(u8 **)((u8 *)arg0 + 0x260);
            *D_00495758 = *(f32 *)((u8 *)temp_a1 + 4);
            return;
        case 7:
            D_0049571C = *(u8 **)((u8 *)arg0 + 0x260);
            D_0049575C = *(f32 *)((u8 *)temp_a1 + 4);
            return;
        case 8:
            D_00495720 = *(u8 **)((u8 *)arg0 + 0x260);
            D_00495760 = *(f32 *)((u8 *)temp_a1 + 4);
            return;
        case 9:
            D_00495724 = *(u8 **)((u8 *)arg0 + 0x260);
            D_00495764 = *(f32 *)((u8 *)temp_a1 + 4);
            return;
        case 10:
            memcpy(&D_004958A0, *(u8 **)((u8 *)arg0 + 0x260), 0x10);
            D_00495728 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x260)) + 0x10);
            D_00495768 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x260)) + 0x14);
            return;
        case 11:
            memcpy(&D_004958B0, *(u8 **)((u8 *)arg0 + 0x260), 0x10);
            D_0049572C = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x260)) + 0x10);
            D_0049576C = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x260)) + 0x14);
            return;
        case 12:
            memcpy(&D_004958C0, *(u8 **)((u8 *)arg0 + 0x260), 0x10);
            D_00495730 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x260)) + 0x10);
            D_00495770 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x260)) + 0x14);
            return;
        case 13:
            memcpy(&D_004958D0, *(u8 **)((u8 *)arg0 + 0x260), 0x10);
            D_00495734 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x260)) + 0x10);
            D_00495774 = *(f32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x260)) + 0x14);
            break;
        }
    } else {
    default:
    }
}

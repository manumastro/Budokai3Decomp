/* Draft (not built): func_001A4AF0 at 0x001A4AF0, size 0x1F4, segment battle/btl_cmd (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 61 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x1B4, original 0x1F4
 * Original: asm/nonmatchings/battle/btl_cmd/func_001A4AF0.s */

// src/battle/btl_cmd.c func_001A4AF0 size diff=61/109
void *amPkt_AllocTop(s32, void *);
s32 memcpy(void *, s32 *, s32);
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
void func_001A4AF0(u8 *arg0) {
    s32 *temp_v1;
    s32 temp_v1_2;
    u8 *temp_a1;
    u8 *temp_v0;
    u8 *temp_v0_2;
    u8 *temp_v0_3;
    u8 *temp_v0_4;

    temp_v1 = *(s32 **)((u8 *)arg0 + 0xC);
    temp_a1 = arg0 + 0x260;
    if (temp_v1 != NULL) {
        temp_v1_2 = (s32) (*temp_v1 & 0x03C00000) >> 0x16;
        switch (temp_v1_2) {                        /* irregular */
        case 6:
            *(u8 **)((u8 *)arg0 + 0x260) = (u8 *) *D_00495718;
            *(f32 *)((u8 *)temp_a1 + 4) = (f32) *D_00495758;
            return;
        case 7:
            *(u8 **)((u8 *)arg0 + 0x260) = (u8 *) D_0049571C;
            *(f32 *)((u8 *)temp_a1 + 4) = (f32) D_0049575C;
            return;
        case 8:
            *(u8 **)((u8 *)arg0 + 0x260) = (u8 *) D_00495720;
            *(f32 *)((u8 *)temp_a1 + 4) = (f32) D_00495760;
            return;
        case 9:
            *(u8 **)((u8 *)arg0 + 0x260) = (u8 *) D_00495724;
            *(f32 *)((u8 *)temp_a1 + 4) = (f32) D_00495764;
            return;
        case 10:
            temp_v0 = amPkt_AllocTop(0x20, temp_a1);
            memcpy(temp_v0, &D_004958A0, 0x10);
            *(f32 *)((u8 *)temp_v0 + 0x10) = (f32) D_00495728;
            *(f32 *)((u8 *)temp_v0 + 0x14) = (f32) D_00495768;
            *(u8 **)((u8 *)arg0 + 0x260) = temp_v0;
            return;
        case 11:
            temp_v0_2 = amPkt_AllocTop(0x20, temp_a1);
            memcpy(temp_v0_2, &D_004958B0, 0x10);
            *(f32 *)((u8 *)temp_v0_2 + 0x10) = (f32) D_0049572C;
            *(f32 *)((u8 *)temp_v0_2 + 0x14) = (f32) D_0049576C;
            *(u8 **)((u8 *)arg0 + 0x260) = temp_v0_2;
            return;
        case 12:
            temp_v0_3 = amPkt_AllocTop(0x20, temp_a1);
            memcpy(temp_v0_3, &D_004958C0, 0x10);
            *(f32 *)((u8 *)temp_v0_3 + 0x10) = (f32) D_00495730;
            *(f32 *)((u8 *)temp_v0_3 + 0x14) = (f32) D_00495770;
            *(u8 **)((u8 *)arg0 + 0x260) = temp_v0_3;
            return;
        case 13:
            temp_v0_4 = amPkt_AllocTop(0x20, temp_a1);
            memcpy(temp_v0_4, &D_004958D0, 0x10);
            *(f32 *)((u8 *)temp_v0_4 + 0x10) = (f32) D_00495734;
            *(f32 *)((u8 *)temp_v0_4 + 0x14) = (f32) D_00495774;
            *(u8 **)((u8 *)arg0 + 0x260) = temp_v0_4;
            break;
        }
    }
}

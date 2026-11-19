/* Draft (not built): func_002E7400 at 0x002E7400, size 0x1F0, segment menu/mn_Logomark (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: size, 90 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); compiled 0x15C, original 0x1F0
 * Original: asm/nonmatchings/menu/mn_Logomark/func_002E7400.s */

// src/menu/mn_Logomark.c func_002E7400 size diff=90/87
extern void amVram_Apply(s32);
s32 amSofdec_Draw(s32, s128, f32 *, s128);
s32 func_00136E80(s32, f32 *, s32, s32);
extern s128 D_00456EB0;
extern s128 D_00456EC0;
extern s128 D_00456ED0;
extern s32 D_0047042C;
extern s32 D_00470430;
extern s32 gSofdecMovie;
extern void amDraw_FlushPacket(void);
extern void func_00137560(void *, void *);
void func_002E7400(u8 *arg0, f32 fparg0) {
    f32 sp40;
    f32 sp44;
    f32 sp48;
    f32 sp50;
    f32 sp54;
    s32 sp58;
    s32 sp5C;
    s32 sp60;
    s32 sp64;
    s32 sp68;
    s32 sp6C;
    s32 temp_a1;
    s32 temp_v0;
    s32 temp_v1;

    sp60 = (s128) D_00456EB0;
    sp50 = (s128) D_00456EC0;
    sp40 = (s128) D_00456ED0;
    sp40 = fparg0;
    sp44 = fparg0;
    sp48 = fparg0;
    temp_v0 = amSofdec_Draw(*(s32 *)((u8 *)arg0 + 0xC), D_00456EC0, &sp50, D_00456EB0);
    if (temp_v0 != -1) {
        if (temp_v0 == 0) {

        } else {
            if (temp_v0 != 2) {
                if (temp_v0 != 1) {
                    goto block_15;
                }
                temp_v1 = *(s32 *)((u8 *)arg0 + 0x10);
                if (temp_v1 < 2) {
                    *(s32 *)((u8 *)arg0 + 0x10) = (s32) (temp_v1 + 1);
                    return;
                }
                goto block_15;
            }
            temp_a1 = *(s32 *)((u8 *)arg0 + 0x10);
            if (temp_a1 > 0) {
                if (temp_a1 == 1) {
                    *(s32 *)((u8 *)arg0 + 0x10) = 2;
                    return;
                }
block_15:
                func_00136E80(0x40000620, &sp40, -1, 0x44);
                sp60 = 0;
                sp64 = 0;
                sp68 = 0;
                sp6C = 0x3F800000;
                sp50 = 0.0f;
                sp54 = 0.0f;
                sp58 = 0x3F800000;
                sp5C = 0x3F800000;
                func_00137560(&sp60, &sp50);
                sp60 = D_0047042C;
                sp64 = D_00470430;
                sp50 = (f32) *(&gSofdecMovie + 0x20 + (*(s32 *)((u8 *)arg0 + 0xC) * 0x108));
                sp54 = (f32) *(&gSofdecMovie + 0x24 + (*(s32 *)((u8 *)arg0 + 0xC) * 0x108));
                func_00137560(&sp60, &sp50);
                amDraw_FlushPacket();
                amVram_Apply(2);
            }
        }
    }
}

/* Draft (not built): func_00310640 at 0x00310640, size 0x17C, segment story/str_dataerase (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 33 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/story/str_dataerase/func_00310640.s */

void func_00310640(u8 *arg0) {
    s16 temp_a1;
    s16 temp_v1;
    u8 *temp_s0;
    temp_a1 = *(s16 *)((u8 *)arg0 + 0x32);
    temp_s0 = arg0 + 0x30;
    switch (temp_a1) {
        case 0:
            temp_v1 = *(s16 *)((u8 *)arg0 + 0x30);
            if (temp_v1 < 0) {
            *(s16 *)((u8 *)temp_s0 + 2) = 2;
            return;
        }
            SklSheet_SetIndex(*((u8 *)&D_004DFB19 + *(s16 *)((u8 *)&D_0046FC50 + temp_v1 * 2)) == 0);
            *(s16 *)((u8 *)temp_s0 + 2) = (s16)(*(s16 *)((u8 *)temp_s0 + 2) + 1);
            return;

        case 1:
            if (func_00283BF0() == 8) {
            SklSheet_Free();
            *(s16 *)((u8 *)temp_s0 + 2) = (s16)(*(s16 *)((u8 *)temp_s0 + 2) + 1);
            return;
        }
            return;

        case 2:
            Scene_Request(0x18, 0);
            Save_Request(6, -1, 0);
            *(s16 *)((u8 *)temp_s0 + 2) = (s16)(*(s16 *)((u8 *)temp_s0 + 2) + 1);
            return;

        case 3:
            if (Save_GetState() >= 3) {
            Save_Exit();
            *(s16 *)((u8 *)temp_s0 + 2) = (s16)(*(s16 *)((u8 *)temp_s0 + 2) + 1);
            return;
        }
            break;

        case 4:
            func_002E8F90(D_005C4150, D_004B4B41, D_004B4B59, 0);
            Scene_MarkDone();
            amTask_Kill((struct Task *)arg0);
            break;
    }
}

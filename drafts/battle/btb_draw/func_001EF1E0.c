/* Draft (not built): func_001EF1E0 at 0x001EF1E0, size 0x32C, segment battle/btb_draw (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: data
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); .rodata 0x1C
 * Original: asm/nonmatchings/battle/btb_draw/func_001EF1E0.s */

// src/battle/btb_draw.c func_001EF1E0 data diff=0/203
extern void func_002A93E0(void);
void func_001EF1E0(s32 arg0) {
    switch (*D_004B4B41) {
    case 1:
        if (arg0 == 2) {
            if (gSceneNext == -1) {
                gSceneNext = 5;
            } else {
                gSceneQueued = 5;
            }
            gSceneArg = 0;
            return;
        }
        if (arg0 == -1) {
            if (gSceneNext == -1) {
                gSceneNext = 0xA;
            } else {
                gSceneQueued = 0xA;
            }
            gSceneArg = 0;
            return;
        }
        func_002A93E0();
        if (gSceneNext == -1) {
            gSceneNext = 8;
        } else {
            gSceneQueued = 8;
        }
        gSceneArg = 0;
        return;
    case 2:
        if (arg0 != 2) {
            if (gSceneNext == -1) {
                gSceneNext = 0xE;
            } else {
                gSceneQueued = 0xE;
            }
            gSceneArg = 1;
            return;
        }
        if (gSceneNext == -1) {
            gSceneNext = 5;
        } else {
            gSceneQueued = 5;
        }
        gSceneArg = 0;
        return;
    case 3:
        if (arg0 != 2) {
            if (gSceneNext == -1) {
                gSceneNext = 0x11;
            } else {
                gSceneQueued = 0x11;
            }
            gSceneArg = arg0;
            return;
        }
        if (gSceneNext == -1) {
            gSceneNext = 5;
        } else {
            gSceneQueued = 5;
        }
        gSceneArg = 0;
        return;
    case 4:
        if (arg0 != 2) {
            if (gSceneNext == -1) {
                gSceneNext = 0x13;
            } else {
                gSceneQueued = 0x13;
            }
            gSceneArg = 1;
            return;
        }
        if (gSceneNext == -1) {
            gSceneNext = 5;
        } else {
            gSceneQueued = 5;
        }
        gSceneArg = 0;
        return;
    case 5:
        if (arg0 == -1) {
            if (gSceneNext == -1) {
                gSceneNext = 0x13;
            } else {
                gSceneQueued = 0x13;
            }
            gSceneArg = 3;
            return;
        }
        if (arg0 != 2) {
            if (gSceneNext == -1) {
                gSceneNext = 0x13;
            } else {
                gSceneQueued = 0x13;
            }
            gSceneArg = 2;
            return;
        }
        if (gSceneNext == -1) {
            gSceneNext = 5;
        } else {
            gSceneQueued = 5;
        }
        gSceneArg = 0;
        return;
    case 6:
        if (arg0 == -1) {
            if (gSceneNext == -1) {
                gSceneNext = 0x1A;
            } else {
                gSceneQueued = 0x1A;
            }
            gSceneArg = 0;
            return;
        }
        if (arg0 != 2) {
            if (gSceneNext == -1) {
                gSceneNext = 0x18;
            } else {
                gSceneQueued = 0x18;
            }
            gSceneArg = 0;
            return;
        }
        if (gSceneNext == -1) {
            gSceneNext = 5;
        } else {
            gSceneQueued = 5;
        }
        gSceneArg = 0;
    default:
        return;
    }
}

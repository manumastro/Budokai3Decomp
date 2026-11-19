/* Draft (not built): func_001433F0 at 0x001433F0, size 0x3EC, segment sys/unk_142AA0 (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); c(struct SifClient *, int, int, void *, int, void *, int, @ 213: if (sceSifCallRpc(&gSoundRpc, 0x19, 0, NULL, 0) >= 0) {
 * Original: asm/nonmatchings/sys/unk_142AA0/func_001433F0.s */

// src/sys/unk_142AA0.c func_001433F0 cerr diff=-1/0
s32 func_00117CC0(s32, s32, s32, s32);
s32 memcpy(void *, s32 *, s32);
s32 sceSifCheckStatRpc(s32 *);
extern s32 D_0047033C;
extern s32 D_00470340;
extern s32 D_00470344;
void func_001433F0(void) {
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s0_3;
    s32 var_s0_4;

    if (gSoundState != 0) {
        do {

        } while (sceSifCheckStatRpc((s32 *)(&gSoundRpc)) != 0);
        if (sceSifCallRpc(&gSoundRpc, 0x19, 0, NULL, 0) >= 0) {
            switch (gSoundState) {
            case 1:
                var_s0 = D_00470330 - D_0047032C;
                if (var_s0 >= 0x8001) {
                    var_s0 = 0x8000;
                } else {
                    gSoundState = 2;
                }
                func_00117CC0(D_00470334 + D_0047032C, D_00470338, var_s0, 1);
                D_0047032C += var_s0;
                if (gSoundState != 1) {
                case 2:
                    if (D_00470324 == 0) {
                        memcpy((void *)(gSoundSendBuf), (s32 *)(&D_0047E3F0), 0x10);
                        sceSifCallRpc(&gSoundRpc, 5, 1, gSoundSendBuf, 0);
                    } else {
                        memcpy((void *)(gSoundSendBuf), (s32 *)(&D_0047E400), 0x10);
                        sceSifCallRpc(&gSoundRpc, 0x12, 1, gSoundSendBuf, 0);
                    }
                    gSoundState = 0;
                    return;
                }
                break;
            case 3:
                var_s0_2 = D_00470330 - D_0047032C;
                if (var_s0_2 >= 0x8001) {
                    var_s0_2 = 0x8000;
                } else {
                    gSoundState = 4;
                }
                func_00117CC0(D_00470334 + D_0047032C, D_00470338, var_s0_2, 1);
                D_0047032C += var_s0_2;
                return;
            case 4:
                var_s0_3 = (*(int *)(D_0047E418));
                if (var_s0_3 < 0x8000) {
                    gSoundState = 6;
                } else {
                    D_00470340 = var_s0_3;
                    gSoundState = 5;
                    var_s0_3 = 0x8000;
                }
                func_00117CC0((s32)(D_0047E420), (s32)(D_00470348), (s32)(var_s0_3), 1);
                memcpy((void *)(gSoundSendBuf), (s32 *)(&D_0047E410), 0x20);
                D_0047033C = 1;
                D_0047032C = var_s0_3;
                D_00470344 = (*(int *)(D_0047E420));
                sceSifCallRpc(&gSoundRpc, 0x18, 3, gSoundSendBuf, 0);
                return;
            case 5:
                if ((s32)(gSoundRecvBuf) != (s32)(D_0047033C)) {
                    var_s0_4 = D_00470340 - D_0047032C;
                    if (var_s0_4 >= 0x8001) {
                        var_s0_4 = 0x8000;
                    } else {
                        gSoundState = 6;
                    }
                    func_00117CC0(D_00470344 + D_0047032C, (&D_00470348)[D_0047033C], var_s0_4, 1);
                    *(s32 *)((u8 *)gSoundSendBuf + 0) = (s32) D_0047033C;
                    *(s32 *)((u8 *)gSoundSendBuf + 4) = var_s0_4;
                    sceSifCallRpc(&gSoundRpc, 0x1A, 3, gSoundSendBuf, 0);
                    D_0047032C += var_s0_4;
                    D_0047033C ^= 1;
                    return;
                }
                break;
            case 6:
                if ((s32)(gSoundRecvBuf) == (s32)(-1)) {
                    gSoundState = 0;
                }
                break;
            }
        }
    } else {
    default:
    }
}

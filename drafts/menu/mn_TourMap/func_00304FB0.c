/* Draft (not built): func_00304FB0 at 0x00304FB0, size 0x174, segment menu/mn_TourMap (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: diff, 68 instructions differ
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept)
 * Original: asm/nonmatchings/menu/mn_TourMap/func_00304FB0.s */

s32 amCdFs_ReadFileId(s32, s32, s32, void *);
void *amHeap_Alloc(s32, s32, s32 *, s32);
s32 func_002FCAF0();
s32 func_002FD090(s32);
s32 func_002FD560();
s32 func_002FD7E0(s32);
s32 func_002FDAC0(void *);
s32 memcpy(void *, s32 *, s32);
extern s32 D_0046F9B8;
extern s8 D_004B4B63;
extern s32 D_005CFE00;
extern s8 D_005D0083;
void func_00304FB0(s32 arg0) {
    gTourMap = (int)amHeap_Alloc(0x56C, 0, &D_0046F9B8, 0x38B);
    memset(gTourMap, 0, 0x56C);
    *(s32 *)((u8 *)gTourMap + 0) = (int)(void *)amCdFs_ReadFileId(0x10834, 0, 0, (void *)gTourMap);
    *(s32 *)((u8 *)gTourMap + 4) = amCdFs_ReadFileId(0x10835, 0, 0, 0);
    *(s32 *)((u8 *)gTourMap + 0x18) = amCdFs_ReadFileId(0xF65, 0, 0, 0);
    *(s32 *)((u8 *)gTourMap + 0x1C) = amCdFs_ReadFileId(0xF66, 0, 0, 0);
    *(s32 *)((u8 *)gTourMap + 0x20) = amCdFs_ReadFileId(0xF67, 0, 0, 0);
    if (arg0 == 0xFF) {
        func_002FDAC0((void *)gTourMap);
        *(s32 *)((u8 *)gTourMap + 0x48) = 0;
    } else {
        memcpy((void *)(gTourMap + 0x2EC), (s32 *)&D_005CFE00, 0x280);
        *(s32 *)((u8 *)gTourMap + 0x48) = 3;
        func_002FD090(arg0);
        D_004B4B63 = D_005D0083;
        if (func_002FD7E0(0) == 5) {
            D_004B4B58[0] += 1;
            func_002FD560();
            func_002FCAF0();
            *(s32 *)((u8 *)gTourMap + 0x68) = 1;
        }
    }
    *(s32 *)((u8 *)gTourMap + 0x54) = 0x40A00000;
}

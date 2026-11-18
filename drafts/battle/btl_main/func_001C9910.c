/* Draft (not built): func_001C9910 at 0x001C9910, size 0x154, segment battle/btl_main (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); d char *' mwccps2.exe Compiler: @ 6652: c_001A50F0((s32)((u8 *)((s32)((u8 *)((s32)(*(u8 **)((u8 *)arg0 + 0x64)))))), 0);
 * Original: asm/nonmatchings/battle/btl_main/func_001C9910.s */

// src/battle/btl_main.c func_001C9910 cerr diff=-1/0
void func_001C9910(u8 *arg0) {
    u8 *temp_a0;
    u8 *temp_a2;
    u8 *temp_s1;
    u8 *temp_v1;

    if ((arg0 == NULL) || (*(s32 *)((u8 *)arg0 + 0x74) != 0)) {
        return;
    }
    temp_s1 = *(u8 **)((u8 *)arg0 + 0x6C);
    if (temp_s1 != NULL) {
        *(u8 **)((u8 *)arg0 + 0x6C) = (u8 *) *(u8 **)((u8 *)temp_s1 + 0x40);
        *(u8 **)((u8 *)arg0 + 0x64) = (u8 *) *(u8 **)((u8 *)(*(u8 **)((u8 *)temp_s1 + 0x40)) + 0x50);
        amFile_Load((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x64))));
        *(u8 **)((u8 *)temp_s1 + 0x40) = NULL;
        amCdFs_Close(temp_s1, 0);
        *(u8 **)((u8 *)arg0 + 0x68) = func_001A50F0((u8 *)((s32)((u8 *)((s32)((u8 *)((s32)(*(u8 **)((u8 *)arg0 + 0x64))))))), 0);
        amFile_Load((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x68))));
        *(u8 **)((u8 *)arg0 + 0x5C) = func_001A50F0((u8 *)((s32)((u8 *)((s32)((u8 *)((s32)(*(u8 **)((u8 *)arg0 + 0x64))))))), 1);
        amFile_Load((s32)((void *)(*(u8 **)((u8 *)arg0 + 0x5C))));
    }
    temp_a0 = *(u8 **)((u8 *)arg0 + 0x68);
    if (temp_a0 != NULL) {
        *(u8 **)((u8 *)arg0 + 0x48) = amObject_Create(temp_a0, *(u8 **)((u8 *)arg0 + 0x48));
        *(u8 **)((u8 *)arg0 + 0x4C) = amMotion_CreateFromObj(*(u8 **)((u8 *)arg0 + 0x48), 2, *(u8 **)((u8 *)arg0 + 0x4C));
        *(s32 *)((u8 *)(*(u8 **)((u8 *)arg0 + 0x4C)) + 0x4AC) = (s32) *(s32 *)((u8 *)arg0 + 0x50);
        temp_v1 = *(u8 **)((u8 *)arg0 + 0x4C);
        *(s32 *)((u8 *)temp_v1 + 0x410) = (s32) *(s32 *)((u8 *)temp_v1 + 0x40C);
        temp_a2 = *(u8 **)((u8 *)arg0 + 0x4C);
        *(s16 *)((u8 *)arg0 + 0) = (s16) *(s32 *)((u8 *)temp_a2 + 0x40C);
        func_0029D1E0(arg0 + 2, 0x15, temp_a2, D_00431454);
        if (*(s16 *)((u8 *)arg0 + 0x26) < 0) {
            *(s16 *)((u8 *)arg0 + 0x26) = (s16) *(s16 *)((u8 *)arg0 + 6);
        }
        func_001C9D90(arg0 + 0x30, *(u8 **)((u8 *)arg0 + 0x4C));
    }
    func_001D4710(*(u8 **)((u8 *)arg0 + 0x58), *(u8 **)((u8 *)arg0 + 0x4C), arg0 + 0x5C);
    *(s32 *)((u8 *)arg0 + 0x74) = 1;
    *(s32 *)((u8 *)arg0 + 0x70) = 0;
}

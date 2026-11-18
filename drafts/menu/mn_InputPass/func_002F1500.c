/* Draft (not built): func_002F1500 at 0x002F1500, size 0x150, segment menu/mn_InputPass (c)
 * Compiler: Metrowerks CodeWarrior PS2 3.0b52 -O4,p (game code; see configure.py)
 * Status: cerr
 * Made with: m2c -t mipsee-mwcc-c (scripts/m2c_draft.py, option variants, best kept); illegal operands 'signed char *' * 'int' @ 337: if (!(*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x4000)) {
 * Original: asm/nonmatchings/menu/mn_InputPass/func_002F1500.s */

// src/menu/mn_InputPass.c func_002F1500 cerr diff=-1/0
void func_002F1500(u8 *arg0) {
    s32 var_s2;
    void (*var_v1)();
    u8 *temp_a0;
    u8 *temp_s0;
    u8 *temp_s3;
    u8 *var_s0;
    u8 *var_s1;

    temp_s3 = *(u8 **)((u8 *)arg0 + 0x30);
    temp_s0 = gInputName;
    A2d_FlushList();
    func_00133B50(0, 0);
    temp_a0 = *(u8 **)((u8 *)temp_s0 + 0x10);
    D_00470704 = (s32)(temp_a0);
    D_0047070C = 0x5000;
    D_00470708 = 0;
    amModel_SetCurrent((s32)(temp_a0), 0x5000);
    D_00470238 = 0;
    func_002F0BC0(temp_s3);
    var_s2 = 0;
    if ((s32) *(u8 *)((u8 *)temp_s3 + 0x170) < 5) {
        var_s1 = temp_s3;
        var_s0 = temp_s3;
        do {
            if (*(u16 *)((u8 *)var_s1 + 0x128) != 0xFFFF) {
                func_0022CF70(*(s32 *)((u8 *)var_s0 + 4));
            }
            var_s2 += 1;
            var_s1 += 2;
            var_s0 += 4;
        } while (var_s2 < 0x24);
    }
    A2d_FlushList();
    func_00133B50(0, 0);
    if (*(s32 *)((u8 *)gStrStatus + 0x27C) == 2) {
        if (!(*(D_00492FCE + (D_004B4B63 * 0xB8)) & 0x4000)) {

        } else {
            var_v1 = func_002F1300;
            *(s32 *)((u8 *)temp_s3 + 0x110) = IpSysWnd_Start(4, D_004B4B63);
            if (func_002F1300 == NULL) {
                var_v1 = NULL;
            }
            *(void (**)())((u8 *)arg0 + 0x1C) = var_v1;
        }
    }
}

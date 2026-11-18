/* Draft (not built): sceTtyInit at 0x0010BC00, size 0xBC, segment sdk/libkernl_0010B9B8 (asm)
 * Compiler: ee-gcc 2.9-991111-01 -O2 -G0
 * Status: size, 4 instructions differ
 * Made with: m2c -t mipsee-gcc-c --valid-syntax; compiled with 2.9-991111-01 -O2 -G0; then decomp-permuter: score 1555 -> 1050
 * Original: asm/sdk/libkernl_0010B9B8.s */

// sceTtyInit 0010BC00 -O2 -G0 ee-gcc 2.9-991111-01: score 1555 -> 1050
s32 FlushCache(s32);                        /* extern */
s32 QueueInit(s32, s32, s32);           /* extern */
s32 sceDeci2Open(s32, s32 *, s32 *);    /* extern */
extern s32 D_00471590;
extern s32 D_004715C0;
extern s32 D_00471700;
extern s32 sceTtyHandler;

s32 sceTtyInit(void)
{
  s32 temp_v0;
  FlushCache(0);
  *((s32 *) (((u8 *) (&D_00471590)) + 0)) = sceDeci2Open(0x210, &D_00471590, &sceTtyHandler);
  if ((*((s32 *) (((u8 *) (&D_00471590)) + 0))) < 0)
  {
    return 0;
  }
  *((s32 *) (((u8 *) (&D_00471590)) + 0xC)) = 0;
  temp_v0 = ((s32) (&D_004715C0)) | 0x20000000;
  *((s32 *) (((u8 *) (&D_00471590)) + 4)) = 0;
  *((s32 *) (((u8 *) (&D_00471590)) + 8)) = 0;
  *((s32 *) (((u8 *) (&D_00471590)) + 0x14)) = (s32) (((s32) (&D_00471700)) | 0x20000000);
  *((s32 *) (((u8 *) (&D_00471590)) + 0x10)) = temp_v0;
  *((s16 *) (((u8 *) temp_v0) + 4)) = 0x210;
  *((s8 *) (((u8 *) (((s32) (&D_004715C0)) | 0x20000000)) + 6)) = 0x45;
  *((s8 *) (((u8 *) (((s32) (&D_004715C0)) | 0x20000000)) + 7)) = 0x48;
  *((s32 *) (((u8 *) (((s32) (&D_004715C0)) | 0x20000000)) + 8)) = 0;
  *((s16 *) (((u8 *) (((s32) (&D_004715C0)) | 0x20000000)) + 2)) = 0;
  return 1;
  *((s32 *) (((u8 *) (&D_00471590)) + 0x18)) = QueueInit(0x100, 0x45, 0x210);
}

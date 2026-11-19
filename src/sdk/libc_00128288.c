/* newlib objects were assembled without delay-slot filling: as-flags: -O1 */
#include "common.h"

s32 func_00128288(s32, s32, s32);               /* extern */
extern s32 _impure_ptr;

INCLUDE_ASM("asm/nonmatchings/sdk/libc_00128288", func_00128288);
void func_001291A0(s32 arg0, s32 arg1) {
    func_00128288(_impure_ptr, arg0, arg1);
}
double strtod_x001291C8(const char *s00, char **se) __asm__("func_001291A0");
double strtod_x001291C8(const char *s00, char **se) __attribute__((weak, section(".b3stub")));
double strtod_x001291C8(const char *s00, char **se) {}
float func_001291C8_x001291C8(const char *s00, char **se) __asm__("func_001291C8");
/* strtodf: from https://github.com/zm2283145/syphon-filter-omega-strain-decomp (src/lib/strtod_x001291C8/strtod_x001291C8.c, no licence stated by the repository); ee-gcc 2.96 -O2 -G0 */
float func_001291C8_x001291C8(const char *s00, char **se)
{
    return strtod_x001291C8(s00, se);
}

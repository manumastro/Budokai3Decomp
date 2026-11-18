#ifndef INCLUDE_ASM_H
#define INCLUDE_ASM_H

#if defined(__MWERKS__)

/* mwccgap replaces a function written as INCLUDE_ASM with the assembly of asm/nonmatchings/<FOLDER>/<NAME>.s
 * (written by splat) after compiling; for the compiler itself the macros are empty. */
#define INCLUDE_ASM(FOLDER, NAME)
#define INCLUDE_RODATA(FOLDER, NAME)
#define INCLUDE_PAD(BYTES)

#elif defined(NO_INCLUDE_ASM)

/* scripts/gccdiff.py compiles the C functions alone. */
#define INCLUDE_ASM(FOLDER, NAME)
#define INCLUDE_RODATA(FOLDER, NAME)
#define INCLUDE_PAD(BYTES)

#else

/* ee-gcc (the libraries): the function's assembly goes into the compiler's output where the macro stands, and gas
 * assembles both. After z3xox/Tenkaichi3Decomp's include/include_asm.h (MIT, LICENSES/Tenkaichi3Decomp-MIT.txt). */
#define INCLUDE_ASM(FOLDER, NAME) \
    __asm__( \
        ".section .text\n" \
        "    .align 3\n" \
        "    .set noat\n" \
        "    .set noreorder\n" \
        "    .include \"" FOLDER "/" #NAME ".s\"\n" \
        "    .set reorder\n" \
        "    .set at\n" \
    )
#define INCLUDE_RODATA(FOLDER, NAME) \
    __asm__( \
        ".section .rodata\n" \
        "    .include \"" FOLDER "/" #NAME ".s\"\n" \
        ".section .text" \
    )
/* The alignment bytes that end a library object (ld pads between objects only to the next one's alignment). */
#define INCLUDE_PAD(BYTES) __asm__(".section .text\n    .space " #BYTES)
__asm__(".include \"macro.inc\"\n");

#endif

#endif

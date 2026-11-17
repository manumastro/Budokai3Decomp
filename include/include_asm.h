#ifndef INCLUDE_ASM_H
#define INCLUDE_ASM_H

/* mwccgap replaces a function written as INCLUDE_ASM with the assembly of asm/nonmatchings/<FOLDER>/<NAME>.s
 * (written by splat) after compiling; for the compiler itself the macros are empty. */
#define INCLUDE_ASM(FOLDER, NAME)
#define INCLUDE_RODATA(FOLDER, NAME)

#endif

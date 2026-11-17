# The macros for the assembly that mwccgap splices into C files (INCLUDE_ASM); the same as macro.inc except for
# alabel and jlabel. configure.py passes this file to mwccgap.
# Defines the expected assembly macros

# Evaluate this file only once in case it's included more than once
.ifndef _MACRO_INC_GUARD
.internal _MACRO_INC_GUARD
.set _MACRO_INC_GUARD, 1

# A function symbol.
.macro glabel label, visibility=global
    .\visibility "\label"
    .type "\label", @function
    "\label":
        .ent "\label"
.endm

# The end of a function symbol.
.macro endlabel label
    .size "\label", . - "\label"
    .end "\label"
.endm

# An alternative entry to a function. Not defined here: mwccgap would carry it into the C object with the assembly
# object's section index. Jumps to it are relocated against build/c_labels.ld's absolute definition instead.
.macro alabel label, visibility=global
.endm

# A label referenced by an error handler table.
.macro ehlabel label, visibility=global
    .\visibility "\label"
    "\label":
.endm


# A label referenced by a jumptable. In a function spliced into a C file by mwccgap it is a plain local label:
# mwccgap would carry a global one into the C object with the assembly object's section index, so branches to it
# would point into the wrong section. The jump tables (still in asm/data) get its address from build/c_labels.ld
# (configure.py).
.macro jlabel label, visibility=global
    "\label":
.endm


# A data symbol.
.macro dlabel label, visibility=global
    .\visibility "\label"
    .type "\label", @object
    "\label":
.endm

# End of a data symbol.
.macro enddlabel label
    .size "\label", . - "\label"
.endm


# Label to signal the symbol haven't been matched yet.
.macro nonmatching label, size=1
    .global "\label\().NON_MATCHING"
    .type "\label\().NON_MATCHING", @object
    .size "\label\().NON_MATCHING", \size
    "\label\().NON_MATCHING":
.endm

# VU0 macro-mode registers are written without the dollar sign by the disassembler.
.set ACC, $ACC
.set Q, $Q


.endif

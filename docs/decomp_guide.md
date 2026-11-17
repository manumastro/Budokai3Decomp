# Decompiling a file (working notes)

The goal is C that compiles to the same bytes as the original. The Metrowerks code is built with Metrowerks
CodeWarrior PS2 `mwccps2` 3.0b52, with flags that depend on the file (docs/plan.md, "Compiler"):

- the game uses `-O4,p -sdatathreshold 8` (configure.py's `MWCC_FLAGS`);
- Dimps' `am*` library uses `-O1,p -sdatathreshold 8` (`AM_FLAGS`). These are the `src/sys/` files of the part
  linked before CRI, and `amMc.c` / `amCdFs.c`.

configure.py's `FILE_FLAGS` table (path prefixes, first match wins) chooses the flags. Both ninja and
`scripts/fdiff.py` read that table, so a new file built with other flags needs one line there. Every function gets a real name once its job is understood. After the model of
z3xox/Tenkaichi3Decomp's docs/decomp_guide.md.

## Loop

1. Pick a file of the split (`asm/<area>/<file>.s`; the yaml lists them). If it is still assembly, the coordinator
   turns it into C with `scripts/asm2c.py <area>/<file>` (then configure.py): `src/<area>/<file>.c` holds one
   `INCLUDE_ASM` per function, and each function's assembly is in `asm/nonmatchings/<area>/<file>/<name>.s`.
2. Replace an `INCLUDE_ASM` line with C, in place (functions stay in address order).
3. `python3 scripts/fdiff.py src/<area>/<file>.c [name ...]` (with the repo's `.venv/bin/python`): it compiles
   the file and compares each C function with the original; `OK` means every non-relocated bit matches and the
   size is right; `-v` shows the differing instructions side by side (original on the right).
4. Iterate until `OK`. A function that will not match after real effort stays `INCLUDE_ASM`, with the best C
   attempt above it inside `#if 0 ... #endif` and a one-line note on what differs.
5. Record each new name in the area's symbol file (below); the coordinator re-splits and runs the whole build.

## Labels in INCLUDE_ASM functions

mwccgap copies a global symbol that an INCLUDE_ASM function defines into the C object with the section index it
had in the assembly object, so a branch to it lands in the wrong place. This affects jump-table labels (`jlabel`)
and alternative entries (`alabel`). For that reason:

- mwccgap gets `include/macro_cc.inc`, not `include/macro.inc`. There, a `jlabel` is a plain local label, so
  branches to it are resolved inside the function. An `alabel` defines nothing.
- configure.py writes `build/c_labels.ld`, which gives these labels their original addresses for the jump tables
  (still in `asm/data`) and for calls. It also covers labels that a hand-written function branches to inside
  another function.

A hand-written function that falls into the next one (an entry point that is not 16-byte aligned) cannot be its
own C-file function, because Metrowerks aligns each function to 16. Give the first one a `size:` that covers both
and name the inner entry `.LXXXXXXXX` with `type:label` in the symbol file (see `func_0012EAE0` in sys.txt).

## Symbol files

`config/symbols/<area>.txt` (sys, battle, menu, story, unk; lib_sdk, lib_cri for the libraries), listed in the
yaml. Format:

    Name = 0x00123456; // type:func
    gGlobal = 0x00470570; // size:0x4

A `//` comment line above each group says what the code does and why the name fits; end a line with `// guess` when
the name is a best guess. Names are unique across all of `config/`. Functions: `Module_VerbNoun`; globals: `gName`.
Until a function is named in a symbol file, keep its `func_XXXXXXXX` name in C (fdiff finds its address from it).

## Rules for matching in the full build

- A C file covers one contiguous range of functions, in address order; nothing skipped.
- **Define no data in C yet.** The data stays in the assembly data files (asm/data/), so:
  - string literals: declare the original string as `extern char D_XXXXXXXX[];` and use that (a literal would add a
    `.rodata` or `.sdata` entry to the object and shift everything after it in the linked image);
  - float constants: Metrowerks builds a float whose low 16 bits are zero with `lui` / `mtc1` (write it as a
    literal: `0.5f`); any other float it loads from `.sdata` (`lwc1 $f, %gp_rel(D_XXXXXXXX)($gp)`): write
    `extern f32 D_XXXXXXXX;` and use the variable;
  - `switch` statements with a jump table: the table is in `.rodata` (`jtbl_...` in the assembly); a C switch would
    emit its own. Leave such functions `INCLUDE_ASM` until the coordinator migrates that file's data;
  - `static` variables of the file: refer to them as `extern` with their `D_XXXXXXXX` name for now.
- Globals: declare `extern` with the right type. Metrowerks reaches a global of 8 bytes or less through `$gp`
  (`%gp_rel`); for that the `extern` must have a complete type of at most 8 bytes (`extern s32 D_x;`,
  `extern s32 D_x[2];`), while `extern s32 D_x[];` compiles to `lui` / `addiu`.
- fdiff checks the instructions only. The coordinator's `ninja` checks the whole image (data included).

## Things Metrowerks 3.0b is sensitive to (seen so far)

- It saves `$ra` with `sd` and `$s` registers with `sq`; moves are `daddu rd, rs, $zero`.
- `-O4,p` schedules: loads hoisted to the top, `lui $at` for offsets over 0x7FFF placed early, delay slots filled.
- It pads branch targets to 8 bytes with a `nop` and every function to 16 bytes.
- `if (x >= 0)` on a value it can test with a branch on zero gives `bltz`; the original sometimes has
  `slti $at, x, 0` / `bnez $at` instead (95 of 99 such sites are in 0x1A2000-0x1E0000), source form unknown yet.
- Tail calls (`j func` with the stack restored in the delay slot) come from `-O3` and up. The `am*` files have
  none: a `j` there is either hand-written or in gcc code (`func_0014E580`).

## The `am*` files (`-O1,p`)

- **No scheduling.** Instructions come out in source order and every delay slot holds a `nop`. A load that is
  out of place means the source is in another order.
- **No common subexpressions.** Each `p->a[i].x` is recomputed from scratch (`sll` / `addu` again each time),
  and a global read twice is loaded twice. Write the expressions the way the assembly repeats them. Do not add
  locals that the assembly does not show.
- **Locals and registers.** The order in which locals are declared changes which register each one gets. For
  example, `func_0012C540` matched only with `i, it, j, a, b, k` in that order. When only the registers differ,
  try other declaration orders.
- **`for (p = x, i = 0; ...)`.** The order of the initialisers is the order of the two moves.
- **Inline assembly works.** mwccps2 3.0b52 accepts gcc-style `__asm__ volatile ("..." : outputs : inputs)`
  with VU0 mnemonics and `$vf` registers, `sync`, `ei`, `pcpyld`, `sqrt.s`, `abs.s`. Several am* functions are C
  with VU0 asm blocks: they match this way. Separate instructions with ` ; `. An `"=r"` output used as the
  source of `qmtc2` is refused. Metrowerks `asm { }` blocks constant-fold some moves. `__s_abs(x)` gives `abs.s`.
- **`slt $at` / `slti $at`.** `if (x > c)` compiles to `slti $at, x, c+1`, and `if (a <= b + k)` to `slt $at`.
  The `x >= c` form uses a `$v` register instead. `?:` also gives `$at`, and a label reached from a `?:` gets no
  alignment nop (one from an `if` statement does).
- **Small switches** without a jump table test their cases in the reverse of the source order. The case bodies
  stay in source order.
- **Calls.** Arguments are evaluated heaviest first, and an implicit conversion counts as weight (declare a
  size `u32` where the asm loads it early). `if (p->cb) { f = p->cb; f(p); }` loads the callee before the
  arguments, as the original does.
- **Struct copies.** A whole-struct assignment is copied through FPU registers (`lwc1` / `swc1`). Where the
  original has `lw` / `sw`, assign member by member.
- **Open.** Some functions lack the FPU hazard nops that 3.0b52 puts after `div.s`
  (`func_00131D00`, `func_00132D20`). `va_start` in `func_0012EC10` is not reproduced yet.
- **Hand-written functions** stay `INCLUDE_ASM`. These include VU0 macro code (`vmove`, `lqc2`, `vmul`), `addi`,
  frames saved with `sq $ra`, and entry points that are not 16-byte aligned (e.g. `func_0012EAEC`,
  `func_001315D8`).

## Working in parallel (agents)

- Work in your own git worktree when the coordinator gives you one; never run `git push`, never rewrite history.
- In a shared checkout, the only tool to run is `scripts/fdiff.py` (safe in parallel). Do not run configure.py,
  splat or ninja there: they rewrite asm/ and build/, which the others read.
- Edit only the files you were given and your area's symbol file. Report what matched, what did not and why.

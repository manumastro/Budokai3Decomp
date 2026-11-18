# Automated drafts: m2c and decomp-permuter

Two standard decompilation tools are wired to this project's compiler (Metrowerks `mwccps2` 3.0b52 through wibo,
the flags of `configure.py`) so that the mechanical part of a match does not have to be done by hand. Both only
*propose* C; nothing counts until `scripts/fdiff.py` says OK and the whole build ends with
`CHECK build/SLUS_209.98.ok`.

## Setup (once, inside WSL or Linux)

    git clone --depth 1 https://github.com/matt-kempster/m2c tools/m2c
    git clone --depth 1 https://github.com/simonlindholm/decomp-permuter tools/permuter
    .venv/bin/pip install toml Levenshtein pycparser

`tools/` and `build/` are git-ignored, so nothing from the game or from these tools is committed.

## m2c: a first draft for every INCLUDE_ASM function

    .venv/bin/python scripts/m2c_draft.py src/unk/unk_2CD5F0.c func_002CDA30 -v [--variants]
    .venv/bin/python scripts/m2c_batch.py --files src/unk/unk_2B98D0.c -j 16 --variants --csv out.csv --drafts out_drafts [--apply]

* Context: `build/m2c/ctx.h` is built from every `extern` of primitive type and every function written in C in
  `src/` (so m2c knows the callees' arguments and the globals' types); the file's own declarations win.
  Jump tables come from `asm/data`.
* m2c runs as `-t mipsee-gcc-c --valid-syntax`; `--variants` also tries `--reg-vars` (saved registers as variables),
  `--no-andor`, `--no-switches` and `--gotos-only` and keeps the best (a match, else the fewest differing
  instructions). `--gotos-only` is the one that produced exact matches (the control flow m2c cannot structure the way
  the compiler wants is left as gotos, which Metrowerks compiles the same way).
* The draft is made compilable (void pointers to `u8 *`, `M2C_FIELD` expanded to plain C, casts for the integer/pointer
  mix, argument counts of the file's prototypes, `D_x[0]` for arrays, missing declarations), spliced in place of the
  INCLUDE_ASM line of a scratch copy, compiled with the file's flags and compared with the original.
* Result per function: `match`, `diff` (N of M instructions differ), `size`, `data` (same instructions but the object
  defines data: a switch table, a string), `cerr` (compile error), `m2cfail`.
* `--apply` writes each `match` into the working tree (and removes the parked `#if 0` attempt above it) and runs fdiff
  on the changed files. Then `configure.py`, `ninja`, `CHECK build/SLUS_209.98.ok` and commit, in a worktree.
* `--drafts DIR` keeps every draft as `NAME.<status>.c`: the starting point for the permuter or for a person.

## decomp-permuter: the last instructions

    .venv/bin/python scripts/permuter_run.py --funcs func_002CDA30 func_002543B0 --budget 600 -P 5 -T 3 --csv perm.csv --apply
    .venv/bin/python scripts/permuter_run.py --all-if0 --max 60 --budget 600 -P 5 -T 3 ...      # the parked attempts
    .venv/bin/python scripts/permuter_run.py --from-csv out.csv --drafts out_drafts --max-diff 6 ...   # m2c drafts

* `scripts/permuter_import.py FILE NAME [--if0 | --c FILE]` builds `build/permuter/NAME` (base.c = the attempt plus
  the file's declarations, target.o = the original function assembled from `asm/nonmatchings`, compile.sh = the
  compiler call, settings.toml with `compiler_type = "mwcc"` and the r5900 objdump). It can be run by hand with
  `tools/permuter/permuter.py build/permuter/NAME -j8 --stop-on-zero`.
* Score 0 = identical code. `--apply` writes the function into the file, checks it with fdiff and undoes it if it is not OK.
* The permuter's output is pretty-printed C and often holds dummy constructs that steer the register allocator
  (`if (!p && !p) {}`, extra temporaries). It matches; tidy it up only if the match survives.
* One compile takes about 50 ms, so ten minutes on three threads is 30-60 thousand candidates.

## Limits

* m2c does not know struct types: fields are `*(T *)((u8 *)(p) + off)`; names and types still need a person.
* Metrowerks-specific code is out of reach for m2c: VU0 inline asm (`lqc2`, `sqc2`), 128-bit moves (`s128`),
  `asm void` hand-written code, jump-table dispatch of function pointers.
* A draft that compiles only with `-relax_pointers` is reported (column `relaxed`) but not applied.
* The permuter closes register-allocation and operand-order differences; it does not repair a wrong control flow.

## Round 7 helpers (after mh2-decomp tools)

* `scripts/adiff.py FILE.c FUNC [-c N] [--c ALT.c]`: aligned diff of one function (difflib on the masked words, then
  objdump text); the last line `mn= full=` ranks near misses (mn: mnemonic-only differences). Use `--c` for a scratch
  copy of the file in which a parked `#if 0` attempt is switched on.
* `scripts/tsweep.py FILE.c FUNC [--mode order|types|both]`: tries every declaration order and every integer type
  (s8..u32) of the function leading locals and ranks the variants by instruction differences. MWCC numbers values
  in declaration order and colours them Chaitin-style, so this is where most saved-register swaps are solved.
* `scripts/gen_objdiff.py [--build]`: writes the git-ignored objdiff.json and, with --build, the target objects (the
  original code of each file, assembled from asm/nonmatchings) for the objdiff GUI.
* A match that depends on a contrived form carries a comment starting `FAKEMATCH:`; `git grep FAKEMATCH` lists them.

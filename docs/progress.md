# Progress

Functions written in C that compile to the original bytes (the whole build stays byte-identical), against all
functions of each part of the code. Function counts are splat's; sizes are the functions' own (without the padding
between them). Regenerate with `.venv/bin/python scripts/progress.py --write` after a successful `ninja`.

<!-- progress table -->

Measured 2026-11-17 (scripts/progress.py).

| Part | Functions in C | All | % | Bytes in C | All bytes | % |
|---|---|---|---|---|---|---|
| Sony SDK + C library (gcc) | 0 | 857 | 0.00 | 0 | 179,392 | 0.00 |
| Metrowerks, linked before CRI (am* layer, main) | 276 | 411 | 67.15 | 58,124 | 137,476 | 42.28 |
| CRI ADX / Sofdec, libmtap (gcc) | 10 | 2,798 | 0.36 | 1,176 | 337,024 | 0.35 |
| Metrowerks, linked after CRI (the game) | 906 | 4,244 | 21.35 | 103,720 | 1,476,904 | 7.02 |
| All | 1,192 | 8,310 | 14.34 | 163,020 | 2,130,796 | 7.65 |

<!-- end of progress table -->

## Milestones

| Date | Milestone | State |
|---|---|---|
| 2026-11-17 | Split rebuilt byte-identical; compiler identified (Metrowerks 3.0b, `-O4,p`) | Done |
| 2026-11-17 | One file per source (`scripts/find_files.py`): 155 files in the two Metrowerks parts, 77 named | Done (boundaries inferred) |
| 2026-11-17 | First C file linked in the matching build (`src/unk/unk_1CBD90.c`, through mwccgap) | Done |
| | Library names (Sony SDK, CRI, C library) | |
| | The `am*` layer | |
| | The game, subsystem by subsystem | |
| | The libraries with ee-gcc | |

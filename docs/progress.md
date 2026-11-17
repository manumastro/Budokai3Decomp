# Progress

Functions written in C that compile to the original bytes (the whole build stays byte-identical), against all
functions of each part of the code. Function counts are splat's; sizes are the functions' own (without the padding
between them). Regenerate with `.venv/bin/python scripts/progress.py --write` after a successful `ninja`.

<!-- progress table -->

Measured 2026-11-17 (scripts/progress.py).

| Part | Functions in C | All | % | Bytes in C | All bytes | % |
|---|---|---|---|---|---|---|
| Sony SDK + C library (gcc) | 0 | 857 | 0.00 | 0 | 179,392 | 0.00 |
| Metrowerks, linked before CRI (am* layer, main) | 0 | 414 | 0.00 | 0 | 137,460 | 0.00 |
| CRI ADX / Sofdec, libmtap (gcc) | 0 | 2,798 | 0.00 | 0 | 337,024 | 0.00 |
| Metrowerks, linked after CRI (the game) | 6 | 4,228 | 0.14 | 580 | 1,477,492 | 0.04 |
| All | 6 | 8,297 | 0.07 | 580 | 2,131,368 | 0.03 |

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

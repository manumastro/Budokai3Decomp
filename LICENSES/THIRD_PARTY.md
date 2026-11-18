# Third-party code in the library files

Some functions of the Sony SDK / C library parts (src/sdk/) were taken from public decompilations of other PS2 games
that link the same libraries, after checking that they compile (ee-gcc, flags in each file's first comment) to the
instructions of this executable (scripts/lib_port.py). Each file's first comment names its origin. Headers they need
are under include/ext/<repo>/ in the origin's layout.

| Origin | Licence | Text |
|---|---|---|
| https://github.com/nathanialf/ico-pc (sce/) | MIT | LICENSES/ico-pc-MIT.txt |
| https://github.com/Voicedrew11/kfiv-decomp (src/sce/) | MIT | LICENSES/kfiv-decomp-MIT.txt |
| https://github.com/ShulkMaster/mk-deception (src/libadxgca/) | CC0-1.0 | LICENSES/mk-deception-CC0.txt |
| https://github.com/karamzov123/fzero-gx-decomp | CC0-1.0 | LICENSES/fzero-gx-decomp-CC0.txt |
| https://github.com/AshfordFamily/recvx-decomp | MIT | LICENSES/recvx-decomp-MIT.txt |

Sources under the GPL / AGPL or without a licence (3s-decomp, pes6decomp, Persona4-Decompilation, crashwoc, ...) are
not used.

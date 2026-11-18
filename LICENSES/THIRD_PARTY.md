# Third-party code in the library files

Some functions of the Sony SDK / C library / CRI middleware parts (src/sdk/, src/cri/) were taken from public
decompilations of other games that link the same libraries, after checking that they compile (ee-gcc, flags in each
file's first comment) to the instructions of this executable.

- Whole files (scripts/lib_port.py): each file's first comment names its origin. Headers they need are under
  include/ext/<repo>/ in the origin's layout.
- Single functions (scripts/func_port.py + scripts/func_insert.py): each function is preceded by a comment naming its
  origin repository, file and licence, and (when the origin file has one) the origin file's own notice. Its
  declarations come from the origin's preprocessed source, renamed for that function only.

| Origin | Licence | Text |
|---|---|---|
| https://github.com/nathanialf/ico-pc (sce/) | MIT | LICENSES/ico-pc-MIT.txt |
| https://github.com/Voicedrew11/kfiv-decomp (src/sce/) | MIT | LICENSES/kfiv-decomp-MIT.txt |
| https://github.com/ShulkMaster/mk-deception (src/libadxgca/) | CC0-1.0 | LICENSES/mk-deception-CC0.txt |
| https://github.com/karamzov123/fzero-gx-decomp | CC0-1.0 | LICENSES/fzero-gx-decomp-CC0.txt |
| https://github.com/AshfordFamily/recvx-decomp | MIT | LICENSES/recvx-decomp-MIT.txt |
| https://github.com/Dorgengoa/RGDecomp (src/main/sdk/) | CC0-1.0 | LICENSES/RGDecomp-CC0.txt |
| newlib 1.10.0 (https://sourceware.org/newlib/) | per-file notices (BSD-style) | below |
| https://github.com/LucasPicoli/god-hand-decomp | MIT | LICENSES/god-hand-decomp-MIT.txt |
| https://github.com/new-coke/rez-decomp | MIT | LICENSES/rez-decomp-MIT.txt |
| https://github.com/TheRealestNwah/sotc-decomp | CC0-1.0 | LICENSES/sotc-decomp-CC0.txt |
| https://github.com/crowded-street/3s-decomp (src/anniversary/cri/libadxe/) | AGPL-3.0 | LICENSES/3s-decomp-AGPL-3.0.txt |

newlib: each function taken from it carries its origin file's notice where that file has one. Files without a notice
of their own are covered by newlib's COPYING.NEWLIB section for Cygnus/Red Hat code:

    Copyright (c) 1994, 1997 Cygnus Solutions. All rights reserved.

    Redistribution and use in source and binary forms are permitted provided that the above copyright notice and this
    paragraph are duplicated in all such forms and that any documentation, advertising materials, and other materials
    related to such distribution and use acknowledge that the software was developed at Cygnus Solutions. Cygnus
    Solutions may not be used to endorse or promote products derived from this software without specific prior
    written permission. THIS SOFTWARE IS PROVIDED ``AS IS'' AND WITHOUT ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING,
    WITHOUT LIMITATION, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.

Because of the 3s-decomp functions (AGPL-3.0), the repository as a whole is distributed under the terms of the
AGPL-3.0; the rest of the code keeps its own licence (MIT for the code written here). No GPL-2.0-only code is used,
since it cannot be combined with AGPL-3.0 code.

Not used: sources with no licence (Persona4-Decompilation; pes6decomp, whose own code has no licence: its
LICENSES/GPL-2.0.txt covers only its libgcc files; the other repositories without one) and GPL-2.0-only sources
(crashwoc, ...).

#!/usr/bin/env python3
"""decomp-permuter (tools/permuter) with the fast compile/disassemble steps of scripts/fastperm/fastcc.py.

    scripts/fastperm/perm.py DIR [permuter options ...]     same command line as tools/permuter/permuter.py

A permuter folder with a fast.json (scripts/lib_permute.py writes one) is compiled by cc1 directly and assembled by
Sony's 2.96 assembler (fastcc.era_assemble: the same instructions as the build's gas + prelude); every folder's
objdump runs as a zygote. Folders without fast.json use their compile.sh as before. The scoring code is the
permuter's own, untouched: it gets the same rows (fastcc.py --selftest / --check-dirs check that). fastast.py speeds
up the AST copies and one randomization pass. B3_FASTPERM=0 turns all of it off (plain permuter).
"""

import os
import shlex
import sys
import tempfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
ROOT = HERE.parent.parent
PERMUTER = ROOT / "tools" / "permuter"
sys.path.insert(0, str(HERE))
sys.path.insert(0, str(PERMUTER))

import fastcc  # noqa: E402
import mwbatch  # noqa: E402
import src.compiler as pc  # noqa: E402
import src.main as pm  # noqa: E402
import src.scorer as ps  # noqa: E402
from src.objdump import simplify_objdump  # noqa: E402
from src.helpers import try_remove  # noqa: E402

ENABLED = os.environ.get("B3_FASTPERM", "1") != "0"
_OrigCompiler = pc.Compiler
_orig_objdump = ps.objdump


class FastCompiler(_OrigCompiler):
    """The permuter's Compiler; compile() goes through fastcc when the folder has a fast.json."""

    def __init__(self, compile_cmd, *, show_errors, debug_mode):
        super().__init__(compile_cmd, show_errors=show_errors, debug_mode=debug_mode)
        cfg = fastcc.load_cfg(os.path.dirname(compile_cmd)) if ENABLED else None
        self.fast = fastcc.fast_compiler(cfg)

    def compile(self, source, *, show_errors=False):
        if self.fast is None or self.debug_mode:
            return super().compile(source, show_errors=show_errors)
        show_errors = show_errors or self.show_errors
        with tempfile.NamedTemporaryFile(prefix="permuter", suffix=".c", mode="w", delete=False) as f:
            c_name = f.name
            f.write(source)
        with tempfile.NamedTemporaryFile(prefix="permuter", suffix=".o", delete=False) as f2:
            o_name = f2.name
        try:
            ok = self.fast.compile(c_name, o_name, show_errors=show_errors)
        except BaseException:
            try_remove(c_name)
            try_remove(o_name)
            raise
        if not ok:
            if not show_errors:
                try_remove(c_name)
            try_remove(o_name)
            return None
        try_remove(c_name)
        return o_name


_DUMPS = {}


def fast_objdump(o_filename, arch, *, objdump_command=None, stack_differences=False, ign_branch_targets=False):
    """The permuter's objdump(), with the objdump program run as a zygote (one per command and process)."""
    if not objdump_command or not ENABLED:
        return _orig_objdump(o_filename, arch, objdump_command=objdump_command, stack_differences=stack_differences,
                             ign_branch_targets=ign_branch_targets)
    raw = mwbatch.PENDING_DUMPS.get(o_filename)
    if raw is not None:
        # a function of a batched Metrowerks compile, already dumped and put back at offset 0 (mwbatch.py)
        return simplify_objdump(raw.splitlines(), arch, stack_differences=stack_differences,
                                ign_branch_targets=ign_branch_targets)
    key = (tuple(objdump_command), os.getpid())
    z = _DUMPS.get(key)
    if z is None:
        z = _DUMPS[key] = fastcc.FastObjdump(list(objdump_command), o_filename)
    lines = z.text(o_filename).splitlines()
    return simplify_objdump(lines, arch, stack_differences=stack_differences, ign_branch_targets=ign_branch_targets)


if ENABLED:
    import fastast  # noqa: E402
    fastast.install()
    mwbatch.install()
pm.Compiler = FastCompiler
ps.objdump = fast_objdump


def main():
    sys.argv[1:] = [os.path.abspath(a) if not a.startswith("-") and os.path.isdir(a) else a for a in sys.argv[1:]]
    os.chdir(PERMUTER)  # the permuter resolves its own files from there (as the plain command is run)
    sys.argv[0] = str(PERMUTER / "permuter.py")
    pm.main()


if __name__ == "__main__":
    main()

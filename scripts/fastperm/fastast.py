"""Speed-ups of decomp-permuter's Python side (tools/permuter, MIT licence, Simon Lindholm and contributors),
installed by scripts/fastperm/perm.py. Measured with cProfile on a 190-line library function: copy.deepcopy of the
function's AST (once per new candidate) and perm_temp_for_expr's random.choice per (expression, place) pair took
~60 % of all time.

1. clone(): a deep copy of pycparser nodes that knows their __slots__, ~5x faster than copy.deepcopy, with the same
   result (shared references stay shared, via the same memo). Used for copy.deepcopy in candidate.py, randomizer.py
   and ast_util.py.
2. perm_temp_for_expr: the reuse candidate drawn for EVERY (expression, place) pair, of which only the chosen one is
   used, is drawn once for the chosen pair, from the same list prefix. Same distribution of outcomes; the random
   stream is consumed in another order, so a given seed gives other candidates than the plain permuter.
"""

import copy
import functools
import sys
import types

_ATOMIC = (str, int, float, bool, type(None), bytes)
_SLOTS = {}


def _slots(cls):
    names = []
    for k in cls.__mro__:
        for n in k.__dict__.get("__slots__", ()):
            if n not in ("__weakref__", "__dict__") and n not in names:
                names.append(n)
    return tuple(names)


def clone(x, memo=None):
    """copy.deepcopy for pycparser ASTs (Node/Coord objects with __slots__, lists, tuples, dicts, atoms)."""
    if memo is None:
        memo = {}
    return _clone(x, memo)


def _clone(x, memo):
    if isinstance(x, _ATOMIC):
        return x
    i = id(x)
    y = memo.get(i)
    if y is not None:
        return y
    cls = x.__class__
    if cls is list:
        y = []
        memo[i] = y
        y.extend(_clone(e, memo) for e in x)
        return y
    if cls is tuple:
        y = tuple(_clone(e, memo) for e in x)
        memo[i] = y
        return y
    if cls is dict:
        y = {}
        memo[i] = y
        for k, v in x.items():
            y[_clone(k, memo)] = _clone(v, memo)
        return y
    names = _SLOTS.get(cls, 0)
    if names == 0:
        # pycparser classes whose instances have no __dict__ (every class in the MRO declares __slots__)
        names = _slots(cls) if (cls.__module__.startswith("perm_pycparser")
                                and all(k is object or "__slots__" in k.__dict__ for k in cls.__mro__)) else None
        _SLOTS[cls] = names
    if names is not None:
        y = cls.__new__(cls)
        memo[i] = y
        for n in names:
            try:
                v = getattr(x, n)
            except AttributeError:
                continue
            object.__setattr__(y, n, _clone(v, memo))
        return y
    return copy.deepcopy(x, memo)


_fastcopy = types.SimpleNamespace(copy=copy.copy, deepcopy=lambda x, memo=None: clone(x, memo))


class _LazyPick:
    __slots__ = ("seq", "n")

    def __init__(self, seq, n):
        self.seq, self.n = seq, n


class _LazyChoiceRandom:
    """The Random given to perm_temp_for_expr: choice() called from its inner `visitor` returns a _LazyPick."""

    def __init__(self, real):
        self._real = real

    def __getattr__(self, name):
        return getattr(self._real, name)

    def choice(self, seq):
        if sys._getframe(1).f_code.co_name == "visitor":
            return _LazyPick(seq, len(seq))
        return self._real.choice(seq)


def install():
    import src.ast_util as au
    import src.candidate as cand
    import src.randomizer as rz
    for m in (au, cand, rz):
        m.copy = _fastcopy
    orig_ptfe = rz.perm_temp_for_expr
    orig_reuse = rz.maybe_reuse_var

    @functools.wraps(orig_ptfe)
    def perm_temp_for_expr(fn, ast, indices, region, random):
        return orig_ptfe(fn, ast, indices, region, _LazyChoiceRandom(random))

    @functools.wraps(orig_reuse)
    def maybe_reuse_var(reuse_cand, *args, **kw):
        if isinstance(reuse_cand, _LazyPick):
            rnd = args[-1] if args else kw["random"]
            real = rnd._real if isinstance(rnd, _LazyChoiceRandom) else rnd
            reuse_cand = real.choice(reuse_cand.seq[:reuse_cand.n])
        return orig_reuse(reuse_cand, *args, **kw)

    rz.maybe_reuse_var = maybe_reuse_var
    rz.RANDOMIZATION_PASSES[:] = [perm_temp_for_expr if p is orig_ptfe else p for p in rz.RANDOMIZATION_PASSES]

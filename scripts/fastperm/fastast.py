"""Speed-ups of decomp-permuter's Python side (tools/permuter, MIT licence, Simon Lindholm and contributors),
installed by scripts/fastperm/perm.py. Measured with cProfile on a 190-line library function: copy.deepcopy of the
function's AST (once per new candidate) and perm_temp_for_expr's random.choice per (expression, place) pair took
~60 % of all time.

1. clone(): a deep copy of pycparser nodes that knows their __slots__, ~5x faster than copy.deepcopy, with the same
   result (shared references stay shared, via the same memo). Used for copy.deepcopy in candidate.py, randomizer.py
   and ast_util.py.
2. perm_temp_for_expr: one weighted group per expression instead of one tuple (and one random.choice) per
   (expression, place) pair; the reuse candidate is drawn once, for the chosen pair, from the same list prefix.
   Same distribution of outcomes; the random stream is consumed in another order, so a given seed gives other
   candidates than the plain permuter.
"""

import copy
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


# perm_temp_for_expr, step 1: the plain code appends one ((place, expr, reuse), 1/eind * f) tuple per (expression,
# place) pair, drawing a reuse candidate for each; for a 190-line function that is ~40k tuples and random.choice calls
# per candidate. Here one group per expression: the run of places it may move to (the last k of assignment_cands at
# that moment, nearest first), weights f/(e0+1) ... f/(e0+k), and the reuse list prefix. Step 2 draws the same
# uniform(0, total) and walks groups then places; the reuse candidate is drawn once, for the chosen pair.
_OLD_LOOP = """                for place in assignment_cands[::-1]:
                    # If expr contains an ID which is written to within
                    # [place, expr), bail out; we're trying to move the
                    # assignment too high up.
                    # TODO: also fail on moving past function calls, or
                    # possibly-aliasing writes.
                    if indices.starts[place[2]] <= prev_write:
                        break

                    # Make far-away places less likely, and similarly for
                    # trivial expressions.
                    eind += 1
                    prob = 1 / eind
                    if isinstance(orig_expr, (ca.ID, ca.Constant)):
                        prob *= 0.15 if should_make_ptr else 0.5
                    reuse_cand = random.choice(reuse_cands) if reuse_cands else None
                    candidates.append(((place, expr, reuse_cand), prob))
"""
_NEW_LOOP = """                k = 0
                starts = indices.starts
                for j in range(len(assignment_cands) - 1, -1, -1):
                    if starts[assignment_cands[j][2]] <= prev_write:
                        break
                    k += 1
                if k:
                    f = (0.15 if should_make_ptr else 0.5) if isinstance(orig_expr, (ca.ID, ca.Constant)) else 1.0
                    candidates.append(_fast_group(assignment_cands, k, expr, eind, f, reuse_cands))
                    eind += k
"""
_OLD_PICK = "    place, expr, reuse_cand = random_weighted(random, candidates)\n"
_NEW_PICK = "    place, expr, reuse_cand = _fast_pick(random, candidates)\n"


def _fast_group(places, k, expr, e0, f, reuse):
    n = len(places)
    w = 0.0
    for j in range(1, k + 1):
        w += f / (e0 + j)
    return (places[n - k:n][::-1], expr, e0, f, reuse[:] if reuse else None, w)


def _fast_pick(random, groups):
    total = 0.0
    for g in groups:
        total += g[5]
    assert total > 0, "Cannot pick randomly from empty set"
    target = random.uniform(0, total)
    acc = 0.0
    chosen = None
    for g in groups:
        if acc + g[5] > target:
            chosen = g
            break
        acc += g[5]
    if chosen is None:  # float imprecision: the last pair
        chosen = groups[-1]
        place = chosen[0][-1]
    else:
        places, _, e0, f, _, _ = chosen
        place = places[-1]
        for j, pl in enumerate(places, 1):
            acc += f / (e0 + j)
            if acc > target:
                place = pl
                break
    reuse = random.choice(chosen[4]) if chosen[4] else None
    return place, chosen[1], reuse


def install():
    import inspect
    import textwrap  # noqa: F401
    import src.ast_util as au
    import src.candidate as cand
    import src.randomizer as rz
    for m in (au, cand, rz):
        m.copy = _fastcopy
    src = inspect.getsource(rz.perm_temp_for_expr)
    if _OLD_LOOP not in src or _OLD_PICK not in src:
        print("fastast: perm_temp_for_expr is not the expected text; left as it is", file=sys.stderr)
        return
    src = src.replace(_OLD_LOOP, _NEW_LOOP).replace(_OLD_PICK, _NEW_PICK)
    ns = rz.__dict__
    ns["_fast_group"], ns["_fast_pick"] = _fast_group, _fast_pick
    orig = rz.perm_temp_for_expr
    code = compile(src, inspect.getsourcefile(orig), "exec")
    local = {}
    exec(code, ns, local)
    new = local["perm_temp_for_expr"]
    new.__doc__ = orig.__doc__
    rz.perm_temp_for_expr = new
    rz.RANDOMIZATION_PASSES[:] = [new if p is orig else p for p in rz.RANDOMIZATION_PASSES]

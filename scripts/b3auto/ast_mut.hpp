#pragma once
/*
 * ast_mut.hpp - Semantic, 100%-syntax-valid C AST mutation operators for MWCC PS2 3.0b,
 * with diff-guided statement focusing (focus_ratio in [0.0, 1.0]).
 */

#include "ast_c.hpp"
#include <algorithm>
#include <cstdlib>
#include <unordered_map>

namespace b3ast {

/* ---------- Smart Condition Negation ---------- */

inline ExprPtr negate_cond(ExprPtr c) {
    // Unwrap outer parens
    while (c->kind == ExprKind::Paren) c = std::move(c->lhs);
    if (c->kind == ExprKind::Unary && c->text == "!") {
        return std::move(c->lhs);
    }
    if (c->kind == ExprKind::Binary) {
        if (c->text == "==") { c->text = "!="; return c; }
        if (c->text == "!=") { c->text = "=="; return c; }
        if (c->text == "<")  { c->text = ">="; return c; }
        if (c->text == ">=") { c->text = "<";  return c; }
        if (c->text == ">")  { c->text = "<="; return c; }
        if (c->text == "<=") { c->text = ">";  return c; }
    }
    auto n = std::make_unique<Expr>(ExprKind::Unary, "!");
    auto p = std::make_unique<Expr>(ExprKind::Paren);
    p->lhs = std::move(c);
    n->lhs = std::move(p);
    return n;
}

/* ---------- AST Collection Helpers (with focus-ratio weights) ---------- */

struct WeightedExpr {
    Expr *node;
    int weight;
};

static void collect_exprs_in_expr(Expr *e, int w, std::vector<WeightedExpr> &out) {
    if (!e) return;
    out.push_back({e, w});
    collect_exprs_in_expr(e->cond.get(), w, out);
    collect_exprs_in_expr(e->lhs.get(), w, out);
    collect_exprs_in_expr(e->rhs.get(), w, out);
    for (auto &a : e->args) collect_exprs_in_expr(a.get(), w, out);
}

static void collect_exprs_in_stmt(Stmt *s, int w, std::vector<WeightedExpr> &out) {
    if (!s) return;
    collect_exprs_in_expr(s->expr.get(), w, out);
    collect_exprs_in_expr(s->init_expr.get(), w, out);
    collect_exprs_in_expr(s->step_expr.get(), w, out);
    if (s->then_br) collect_exprs_in_stmt(s->then_br.get(), w, out);
    if (s->else_br) collect_exprs_in_stmt(s->else_br.get(), w, out);
    if (s->body) collect_exprs_in_stmt(s->body.get(), w, out);
    for (auto &st : s->stmts) collect_exprs_in_stmt(st.get(), w, out);
}

inline std::vector<WeightedExpr> collect_weighted_exprs(FuncAST &f, double focus_ratio) {
    std::vector<WeightedExpr> out;
    if (!f.body) return out;
    size_t n = f.body->stmts.size();
    for (size_t i = 0; i < n; i++) {
        double r = (n > 1) ? (double)i / (double)(n - 1) : 0.5;
        double dist = std::abs(r - focus_ratio);
        int w = (dist < 0.18) ? 6 : (dist < 0.35 ? 3 : 1);
        collect_exprs_in_stmt(f.body->stmts[i].get(), w, out);
    }
    return out;
}

template <typename T>
static T *pick_weighted(const std::vector<std::pair<T *, int>> &items, unsigned int &rng) {
    if (items.empty()) return nullptr;
    int total = 0;
    for (const auto &it : items) total += it.second;
    if (total <= 0) return items[0].first;
    int r = (int)(rand_r(&rng) % (unsigned)total);
    for (const auto &it : items) {
        if (r < it.second) return it.first;
        r -= it.second;
    }
    return items.back().first;
}

static void collect_blocks(Stmt *s, std::vector<Stmt *> &out) {
    if (!s) return;
    if (s->kind == StmtKind::Block) out.push_back(s);
    if (s->then_br) collect_blocks(s->then_br.get(), out);
    if (s->else_br) collect_blocks(s->else_br.get(), out);
    if (s->body) collect_blocks(s->body.get(), out);
    for (auto &st : s->stmts) collect_blocks(st.get(), out);
}

static void collect_stmts_kind(Stmt *s, StmtKind k, std::vector<Stmt *> &out) {
    if (!s) return;
    if (s->kind == k) out.push_back(s);
    if (s->then_br) collect_stmts_kind(s->then_br.get(), k, out);
    if (s->else_br) collect_stmts_kind(s->else_br.get(), k, out);
    if (s->body) collect_stmts_kind(s->body.get(), k, out);
    for (auto &st : s->stmts) collect_stmts_kind(st.get(), k, out);
}

/* ---------- 14 Semantic AST Mutation Operators ---------- */

// Op 1: Permute / rotate local variable declarations (primary MWCC regalloc lever)
inline bool mut_ast_decl_order(FuncAST &f, unsigned int &rng, bool multi = false) {
    auto &decls = f.body->decls;
    if (decls.size() < 2) return false;
    int rounds = multi ? (2 + (int)(rand_r(&rng) % 3)) : 1;
    for (int r = 0; r < rounds; r++) {
        size_t i = rand_r(&rng) % decls.size();
        size_t j = rand_r(&rng) % decls.size();
        if (i == j) j = (i + 1) % decls.size();
        if (rand_r(&rng) & 1) {
            std::swap(decls[i], decls[j]);
        } else {
            LocalDecl tmp = std::move(decls[j]);
            decls.erase(decls.begin() + (ptrdiff_t)j);
            decls.insert(decls.begin() + (ptrdiff_t)(i > j ? i - 1 : i), std::move(tmp));
        }
    }
    return true;
}

static std::string flip_int_type_str(const std::string &t, unsigned int &rng) {
    static const std::pair<const char *, const char *> pairs[] = {
        {"s32", "u32"}, {"u32", "s32"}, {"s16", "u16"}, {"u16", "s16"},
        {"s8", "u8"}, {"u8", "s8"}, {"s32", "s16"}, {"u32", "u16"},
        {"s16", "s32"}, {"u16", "u32"}, {"int", "u32"}, {"u32", "int"},
        {"s32", "int"},
    };
    std::vector<const char *> cands;
    for (const auto &p : pairs) if (t == p.first) cands.push_back(p.second);
    if (cands.empty()) return "";
    return cands[rand_r(&rng) % cands.size()];
}

// Op 2: Flip integer signedness/width on a LocalDecl or Cast AST node
inline bool mut_ast_int_type(FuncAST &f, unsigned int &rng, double focus_ratio) {
    if ((rand_r(&rng) & 1) && !f.body->decls.empty()) {
        std::vector<size_t> idxs;
        for (size_t i = 0; i < f.body->decls.size(); i++) {
            if (f.body->decls[i].raw_line.empty() && !flip_int_type_str(f.body->decls[i].type_str, rng).empty())
                idxs.push_back(i);
        }
        if (!idxs.empty()) {
            size_t pick = idxs[rand_r(&rng) % idxs.size()];
            f.body->decls[pick].type_str = flip_int_type_str(f.body->decls[pick].type_str, rng);
            return true;
        }
    }
    auto exprs = collect_weighted_exprs(f, focus_ratio);
    std::vector<std::pair<Expr *, int>> casts;
    for (const auto &we : exprs) {
        if (we.node->kind == ExprKind::Cast && !flip_int_type_str(we.node->text, rng).empty())
            casts.push_back({we.node, we.weight});
    }
    Expr *c = pick_weighted(casts, rng);
    if (!c) return false;
    c->text = flip_int_type_str(c->text, rng);
    return true;
}

// Op 3: Commute binary operators & MWCC addu pointer/int cast swap
inline bool mut_ast_commute_or_addu(FuncAST &f, unsigned int &rng, double focus_ratio) {
    auto exprs = collect_weighted_exprs(f, focus_ratio);
    std::vector<std::pair<Expr *, int>> cands;
    for (const auto &we : exprs) {
        if (we.node->kind != ExprKind::Binary) continue;
        const auto &op = we.node->text;
        if (op == "+" || op == "*" || op == "&" || op == "|" || op == "^" ||
            op == "==" || op == "!=" || op == "<" || op == ">" || op == "<=" || op == ">=")
            cands.push_back({we.node, we.weight});
    }
    Expr *b = pick_weighted(cands, rng);
    if (!b) return false;
    if (b->text == "+" && (rand_r(&rng) % 4 == 0)) {
        // Only apply (u8 *)(A) + (s32)(B) when one operand is already a pointer cast (safe in MWCC)
        bool has_ptr_cast = (b->lhs->kind == ExprKind::Cast && b->lhs->text.find('*') != std::string::npos) ||
                            (b->rhs->kind == ExprKind::Cast && b->rhs->text.find('*') != std::string::npos);
        if (has_ptr_cast) {
            std::swap(b->lhs, b->rhs);
            auto cl = std::make_unique<Expr>(ExprKind::Cast, "u8 *");
            cl->lhs = std::move(b->lhs);
            auto cr = std::make_unique<Expr>(ExprKind::Cast, "s32");
            cr->lhs = std::move(b->rhs);
            b->lhs = std::move(cl);
            b->rhs = std::move(cr);
            return true;
        }
    }
    std::swap(b->lhs, b->rhs);
    if (b->text == "<") b->text = ">";
    else if (b->text == ">") b->text = "<";
    else if (b->text == "<=") b->text = ">=";
    else if (b->text == ">=") b->text = "<=";
    return true;
}

// Op 4: Subscript flip `P[I]` <-> `I[P]` (changes addu rs/rt in MWCC!)
inline bool mut_ast_subscript_flip(FuncAST &f, unsigned int &rng, double focus_ratio) {
    auto exprs = collect_weighted_exprs(f, focus_ratio);
    std::vector<std::pair<Expr *, int>> subs;
    for (const auto &we : exprs)
        if (we.node->kind == ExprKind::Subscript) subs.push_back({we.node, we.weight});
    Expr *s = pick_weighted(subs, rng);
    if (!s) return false;
    std::swap(s->lhs, s->rhs);
    return true;
}

// Op 5: Drop redundant arithmetic cast `(s32)(X)` -> `X`
inline bool mut_ast_drop_cast(FuncAST &f, unsigned int &rng, double focus_ratio) {
    auto exprs = collect_weighted_exprs(f, focus_ratio);
    std::vector<std::pair<Expr *, int>> casts;
    for (const auto &we : exprs) {
        if (we.node->kind == ExprKind::Cast &&
            (we.node->text == "s32" || we.node->text == "u32" || we.node->text == "s16" ||
             we.node->text == "u16" || we.node->text == "int"))
            casts.push_back({we.node, we.weight});
    }
    Expr *c = pick_weighted(casts, rng);
    if (!c || !c->lhs) return false;
    ExprPtr inner = std::move(c->lhs);
    *c = std::move(*inner);
    return true;
}

// Op 6: Swap two adjacent simple statements inside any Block
inline bool mut_ast_stmt_swap(FuncAST &f, unsigned int &rng) {
    std::vector<Stmt *> blocks;
    collect_blocks(f.body.get(), blocks);
    std::vector<std::pair<Stmt *, size_t>> pairs;
    for (Stmt *b : blocks) {
        for (size_t i = 0; i + 1 < b->stmts.size(); i++) {
            if (b->stmts[i]->kind == StmtKind::ExprStmt && b->stmts[i + 1]->kind == StmtKind::ExprStmt)
                pairs.push_back({b, i});
        }
    }
    if (pairs.empty()) return false;
    auto [b, idx] = pairs[rand_r(&rng) % pairs.size()];
    std::swap(b->stmts[idx], b->stmts[idx + 1]);
    return true;
}

// Op 7: Swap if/else branches with smart condition negation
inline bool mut_ast_if_else_swap(FuncAST &f, unsigned int &rng) {
    std::vector<Stmt *> ifs;
    collect_stmts_kind(f.body.get(), StmtKind::If, ifs);
    std::vector<Stmt *> cands;
    for (Stmt *s : ifs) if (s->else_br) cands.push_back(s);
    if (cands.empty()) return false;
    Stmt *s = cands[rand_r(&rng) % cands.size()];
    s->expr = negate_cond(std::move(s->expr));
    std::swap(s->then_br, s->else_br);
    return true;
}

// Op 8: Toggle `if (c) v = A; else v = B;` <-> `v = (c) ? A : B;` (bidirectional!)
inline bool mut_ast_ternary_if(FuncAST &f, unsigned int &rng) {
    // Direction A: If -> Ternary
    std::vector<Stmt *> ifs;
    collect_stmts_kind(f.body.get(), StmtKind::If, ifs);
    auto unwrap_single_assign = [](Stmt *s) -> Expr * {
        if (!s) return nullptr;
        if (s->kind == StmtKind::Block && s->decls.empty() && s->stmts.size() == 1)
            s = s->stmts[0].get();
        if (s->kind == StmtKind::ExprStmt && s->expr && s->expr->kind == ExprKind::Assign && s->expr->text == "=")
            return s->expr.get();
        return nullptr;
    };
    std::vector<Stmt *> if_cands;
    for (Stmt *s : ifs) {
        Expr *a = unwrap_single_assign(s->then_br.get());
        Expr *b = unwrap_single_assign(s->else_br.get());
        if (a && b && a->lhs->print() == b->lhs->print()) if_cands.push_back(s);
    }
    if (!if_cands.empty() && (rand_r(&rng) & 1)) {
        Stmt *s = if_cands[rand_r(&rng) % if_cands.size()];
        Expr *a = unwrap_single_assign(s->then_br.get());
        Expr *b = unwrap_single_assign(s->else_br.get());
        auto tern = std::make_unique<Expr>(ExprKind::Ternary);
        tern->cond = std::move(s->expr);
        tern->lhs = a->rhs->clone();
        tern->rhs = b->rhs->clone();
        auto asg = std::make_unique<Expr>(ExprKind::Assign, "=");
        asg->lhs = a->lhs->clone();
        asg->rhs = std::move(tern);
        s->kind = StmtKind::ExprStmt;
        s->expr = std::move(asg);
        s->then_br.reset();
        s->else_br.reset();
        return true;
    }
    // Direction B: Ternary -> If
    std::vector<Stmt *> estmts;
    collect_stmts_kind(f.body.get(), StmtKind::ExprStmt, estmts);
    std::vector<Stmt *> t_cands;
    for (Stmt *s : estmts) {
        if (s->expr && s->expr->kind == ExprKind::Assign && s->expr->text == "=" &&
            s->expr->rhs && s->expr->rhs->kind == ExprKind::Ternary)
            t_cands.push_back(s);
    }
    if (t_cands.empty()) return false;
    Stmt *s = t_cands[rand_r(&rng) % t_cands.size()];
    Expr *asg = s->expr.get();
    Expr *tern = asg->rhs.get();
    auto a1 = std::make_unique<Expr>(ExprKind::Assign, "=");
    a1->lhs = asg->lhs->clone(); a1->rhs = std::move(tern->lhs);
    auto a2 = std::make_unique<Expr>(ExprKind::Assign, "=");
    a2->lhs = asg->lhs->clone(); a2->rhs = std::move(tern->rhs);
    auto s1 = std::make_unique<Stmt>(StmtKind::ExprStmt); s1->expr = std::move(a1);
    auto s2 = std::make_unique<Stmt>(StmtKind::ExprStmt); s2->expr = std::move(a2);
    auto b1 = std::make_unique<Stmt>(StmtKind::Block); b1->stmts.push_back(std::move(s1));
    auto b2 = std::make_unique<Stmt>(StmtKind::Block); b2->stmts.push_back(std::move(s2));
    s->kind = StmtKind::If;
    s->expr = std::move(tern->cond);
    s->then_br = std::move(b1);
    s->else_br = std::move(b2);
    return true;
}

// Op 9: Loop shape toggle: While <-> If(DoWhile), For -> While
inline bool mut_ast_loop_shape(FuncAST &f, unsigned int &rng) {
    std::vector<Stmt *> whiles;
    collect_stmts_kind(f.body.get(), StmtKind::While, whiles);
    if (!whiles.empty()) {
        Stmt *w = whiles[rand_r(&rng) % whiles.size()];
        auto dw = std::make_unique<Stmt>(StmtKind::DoWhile);
        dw->body = std::move(w->body);
        dw->expr = w->expr->clone();
        auto blk = std::make_unique<Stmt>(StmtKind::Block);
        blk->stmts.push_back(std::move(dw));
        w->kind = StmtKind::If;
        w->then_br = std::move(blk);
        w->else_br.reset();
        return true;
    }
    // Check If(C, Block{DoWhile(B, C)}) -> While(C, B)
    std::vector<Stmt *> ifs;
    collect_stmts_kind(f.body.get(), StmtKind::If, ifs);
    for (Stmt *s : ifs) {
        if (s->else_br || !s->then_br) continue;
        Stmt *inner = s->then_br.get();
        if (inner->kind == StmtKind::Block && inner->decls.empty() && inner->stmts.size() == 1)
            inner = inner->stmts[0].get();
        if (inner->kind == StmtKind::DoWhile && inner->expr->print() == s->expr->print()) {
            s->kind = StmtKind::While;
            s->body = std::move(inner->body);
            s->then_br.reset();
            return true;
        }
    }
    return false;
}

// Op 10: Reorder/reverse Switch case blocks
inline bool mut_ast_switch_reorder(FuncAST &f, unsigned int &rng) {
    std::vector<Stmt *> switches;
    collect_stmts_kind(f.body.get(), StmtKind::Switch, switches);
    if (switches.empty()) return false;
    Stmt *sw = switches[rand_r(&rng) % switches.size()];
    // Group [case_idx .. end_idx) ranges that end in Break or Return
    struct CaseGrp { size_t a, b; };
    std::vector<CaseGrp> grps;
    for (size_t i = 0; i < sw->stmts.size(); ) {
        if (sw->stmts[i]->kind == StmtKind::Case) {
            size_t j = i + 1;
            while (j < sw->stmts.size() && sw->stmts[j]->kind != StmtKind::Case && sw->stmts[j]->kind != StmtKind::Default)
                j++;
            if (j > i + 1 && (sw->stmts[j - 1]->kind == StmtKind::Break || sw->stmts[j - 1]->kind == StmtKind::Return))
                grps.push_back({i, j});
            i = j;
        } else {
            i++;
        }
    }
    if (grps.size() < 2) return false;
    std::vector<StmtPtr> rebuilt;
    if (rand_r(&rng) % 2 == 0) {
        // Reverse all case groups
        size_t first = grps.front().a, last = grps.back().b;
        for (size_t i = 0; i < first; i++) rebuilt.push_back(std::move(sw->stmts[i]));
        for (int g = (int)grps.size() - 1; g >= 0; g--)
            for (size_t i = grps[g].a; i < grps[g].b; i++) rebuilt.push_back(std::move(sw->stmts[i]));
        for (size_t i = last; i < sw->stmts.size(); i++) rebuilt.push_back(std::move(sw->stmts[i]));
    } else {
        // Swap two groups
        size_t g1 = rand_r(&rng) % grps.size();
        size_t g2 = rand_r(&rng) % grps.size();
        if (g1 == g2) g2 = (g1 + 1) % grps.size();
        if (g1 > g2) std::swap(g1, g2);
        for (size_t i = 0; i < grps[g1].a; i++) rebuilt.push_back(std::move(sw->stmts[i]));
        for (size_t i = grps[g2].a; i < grps[g2].b; i++) rebuilt.push_back(std::move(sw->stmts[i]));
        for (size_t i = grps[g1].b; i < grps[g2].a; i++) rebuilt.push_back(std::move(sw->stmts[i]));
        for (size_t i = grps[g1].a; i < grps[g1].b; i++) rebuilt.push_back(std::move(sw->stmts[i]));
        for (size_t i = grps[g2].b; i < sw->stmts.size(); i++) rebuilt.push_back(std::move(sw->stmts[i]));
    }
    sw->stmts = std::move(rebuilt);
    return true;
}

// Op 11: Compound assign & mul/shift & !=0 / >-1 idioms
inline bool mut_ast_idioms(FuncAST &f, unsigned int &rng, double focus_ratio) {
    auto exprs = collect_weighted_exprs(f, focus_ratio);
    std::vector<std::pair<Expr *, int>> cands;
    for (const auto &we : exprs) {
        Expr *e = we.node;
        if (e->kind == ExprKind::Assign && (e->text == "+=" || e->text == "-="))
            cands.push_back({e, we.weight});
        else if (e->kind == ExprKind::Postfix && (e->text == "++" || e->text == "--"))
            cands.push_back({e, we.weight});
        else if (e->kind == ExprKind::Binary && (e->text == "*" || e->text == "<<" || e->text == "/" || e->text == ">>") &&
                 e->rhs && e->rhs->kind == ExprKind::Num)
            cands.push_back({e, we.weight});
        else if (e->kind == ExprKind::Binary && (e->text == "!=" || e->text == "==" || e->text == ">" || e->text == ">=") &&
                 e->rhs && (e->rhs->text == "0" || e->rhs->text == "NULL" || e->rhs->text == "-1"))
            cands.push_back({e, we.weight});
    }
    Expr *e = pick_weighted(cands, rng);
    if (!e) return false;
    if (e->kind == ExprKind::Assign && (e->text == "+=" || e->text == "-=")) {
        std::string bop = e->text.substr(0, 1);
        e->text = "=";
        auto bin = std::make_unique<Expr>(ExprKind::Binary, bop);
        bin->lhs = e->lhs->clone();
        bin->rhs = std::move(e->rhs);
        if (bop == "+" && (rand_r(&rng) & 1)) std::swap(bin->lhs, bin->rhs);
        e->rhs = std::move(bin);
        return true;
    }
    if (e->kind == ExprKind::Postfix) {
        std::string bop = (e->text == "++") ? "+=" : "-=";
        e->kind = ExprKind::Assign;
        e->text = bop;
        e->rhs = std::make_unique<Expr>(ExprKind::Num, "1");
        return true;
    }
    if (e->kind == ExprKind::Binary && (e->text == "*" || e->text == "<<")) {
        if (e->text == "*" && e->rhs->text == "2") { e->text = "<<"; e->rhs->text = "1"; return true; }
        if (e->text == "*" && e->rhs->text == "4") { e->text = "<<"; e->rhs->text = "2"; return true; }
        if (e->text == "*" && e->rhs->text == "8") { e->text = "<<"; e->rhs->text = "3"; return true; }
        if (e->text == "<<" && e->rhs->text == "1") { e->text = "*"; e->rhs->text = "2"; return true; }
        if (e->text == "<<" && e->rhs->text == "2") { e->text = "*"; e->rhs->text = "4"; return true; }
        if (e->text == "<<" && e->rhs->text == "3") { e->text = "*"; e->rhs->text = "8"; return true; }
    }
    if (e->kind == ExprKind::Binary && e->text == "!=" && (e->rhs->text == "0" || e->rhs->text == "NULL")) {
        ExprPtr inner = std::move(e->lhs);
        *e = std::move(*inner);
        return true;
    }
    if (e->kind == ExprKind::Binary && e->text == ">=" && e->rhs->text == "0") {
        e->text = ">";
        e->rhs = std::make_unique<Expr>(ExprKind::Num, "-1");
        return true;
    }
    return false;
}

// Op 12: CSE Hoist / Temp Split — hoist a subexpression (e.g. deref or call arg) into a fresh local
inline bool mut_ast_cse_hoist(FuncAST &f, unsigned int &rng, double focus_ratio) {
    if (!f.body || f.body->stmts.empty() || f.body->decls.size() > 40) return false;
    // Find a top-level ExprStmt near focus_ratio that contains a Call or Assign with a complex RHS/arg
    size_t n = f.body->stmts.size();
    std::vector<std::pair<size_t, int>> cands;
    for (size_t i = 0; i < n; i++) {
        if (f.body->stmts[i]->kind != StmtKind::ExprStmt || !f.body->stmts[i]->expr) continue;
        double r = (n > 1) ? (double)i / (double)(n - 1) : 0.5;
        int w = (std::abs(r - focus_ratio) < 0.25) ? 5 : 1;
        cands.push_back({i, w});
    }
    if (cands.empty()) return false;
    int total = 0;
    for (auto &c : cands) total += c.second;
    int pick = (int)(rand_r(&rng) % (unsigned)total);
    size_t sidx = cands[0].first;
    for (auto &c : cands) { if (pick < c.second) { sidx = c.first; break; } pick -= c.second; }

    Expr *root = f.body->stmts[sidx]->expr.get();
    ExprPtr *slot = nullptr;
    if (root->kind == ExprKind::Assign && root->rhs &&
        (root->rhs->kind == ExprKind::Binary || root->rhs->kind == ExprKind::Unary || root->rhs->kind == ExprKind::Cast)) {
        slot = &root->rhs;
    } else if (root->kind == ExprKind::Call && !root->args.empty()) {
        size_t ai = rand_r(&rng) % root->args.size();
        if (root->args[ai]->kind != ExprKind::Ident && root->args[ai]->kind != ExprKind::Num)
            slot = &root->args[ai];
    }
    if (!slot) return false;

    // Infer safe hoisted type (only hoist explicit casts or simple integer expressions)
    std::string ty = "s32";
    if ((*slot)->kind == ExprKind::Cast) {
        ty = (*slot)->text;
    } else if ((*slot)->kind != ExprKind::Binary) {
        return false;
    }
    std::string tname = "_b3t" + std::to_string(f.body->decls.size());
    LocalDecl d;
    d.type_str = ty;
    d.name = tname;
    // Insert decl at random position in decls
    size_t dpos = f.body->decls.empty() ? 0 : (rand_r(&rng) % (f.body->decls.size() + 1));
    f.body->decls.insert(f.body->decls.begin() + (ptrdiff_t)dpos, std::move(d));

    auto init_asg = std::make_unique<Expr>(ExprKind::Assign, "=");
    init_asg->lhs = std::make_unique<Expr>(ExprKind::Ident, tname);
    init_asg->rhs = std::move(*slot);
    *slot = std::make_unique<Expr>(ExprKind::Ident, tname);

    auto pre_stmt = std::make_unique<Stmt>(StmtKind::ExprStmt);
    pre_stmt->expr = std::move(init_asg);
    f.body->stmts.insert(f.body->stmts.begin() + (ptrdiff_t)sidx, std::move(pre_stmt));
    return true;
}

// Op 13: Inline single-use local `t = E; next_stmt(...t...)` -> `next_stmt(...E...)`
static void replace_ident(ExprPtr &e, const std::string &name, const Expr &repl) {
    if (!e) return;
    if (e->kind == ExprKind::Ident && e->text == name) {
        auto p = std::make_unique<Expr>(ExprKind::Paren);
        p->lhs = repl.clone();
        e = std::move(p);
        return;
    }
    replace_ident(e->cond, name, repl);
    replace_ident(e->lhs, name, repl);
    replace_ident(e->rhs, name, repl);
    for (auto &a : e->args) replace_ident(a, name, repl);
}

static int count_ident_expr(const Expr *e, const std::string &name) {
    if (!e) return 0;
    int c = (e->kind == ExprKind::Ident && e->text == name) ? 1 : 0;
    c += count_ident_expr(e->cond.get(), name);
    c += count_ident_expr(e->lhs.get(), name);
    c += count_ident_expr(e->rhs.get(), name);
    for (const auto &a : e->args) c += count_ident_expr(a.get(), name);
    return c;
}

static int count_ident_stmt(const Stmt *s, const std::string &name) {
    if (!s) return 0;
    int c = count_ident_expr(s->expr.get(), name) +
            count_ident_expr(s->init_expr.get(), name) +
            count_ident_expr(s->step_expr.get(), name);
    c += count_ident_stmt(s->then_br.get(), name);
    c += count_ident_stmt(s->else_br.get(), name);
    c += count_ident_stmt(s->body.get(), name);
    for (const auto &st : s->stmts) c += count_ident_stmt(st.get(), name);
    return c;
}

inline bool mut_ast_inline_local(FuncAST &f, unsigned int &rng) {
    std::vector<Stmt *> blocks;
    collect_blocks(f.body.get(), blocks);
    std::vector<std::pair<Stmt *, size_t>> cands;
    for (Stmt *b : blocks) {
        for (size_t i = 0; i + 1 < b->stmts.size(); i++) {
            if (b->stmts[i]->kind == StmtKind::ExprStmt && b->stmts[i]->expr &&
                b->stmts[i]->expr->kind == ExprKind::Assign && b->stmts[i]->expr->text == "=" &&
                b->stmts[i]->expr->lhs->kind == ExprKind::Ident) {
                std::string vn = b->stmts[i]->expr->lhs->text;
                // Check it is used once in the whole function (specifically in stmt i+1)
                if (count_ident_stmt(f.body.get(), vn) == 2 &&
                    count_ident_stmt(b->stmts[i + 1].get(), vn) == 1 &&
                    b->stmts[i + 1]->kind == StmtKind::ExprStmt && b->stmts[i + 1]->expr) {
                    cands.push_back({b, i});
                }
            }
        }
    }
    if (cands.empty()) return false;
    auto [b, idx] = cands[rand_r(&rng) % cands.size()];
    std::string vn = b->stmts[idx]->expr->lhs->text;
    ExprPtr rhs = std::move(b->stmts[idx]->expr->rhs);
    replace_ident(b->stmts[idx + 1]->expr, vn, *rhs);
    b->stmts.erase(b->stmts.begin() + (ptrdiff_t)idx);
    return true;
}

/* ---------- Master AST Mutation Dispatcher ---------- */

inline FuncAST mutate_ast(const FuncAST &base, unsigned int &rng, int steps, double focus_ratio) {
    FuncAST cur = base.clone();
    for (int st = 0; st < steps; st++) {
        bool ok = false;
        for (int tries = 0; tries < 8 && !ok; tries++) {
            int op = (int)(rand_r(&rng) % 100);
            if (op < 20)      ok = mut_ast_decl_order(cur, rng, false);
            else if (op < 28) ok = mut_ast_decl_order(cur, rng, true);
            else if (op < 40) ok = mut_ast_int_type(cur, rng, focus_ratio);
            else if (op < 56) ok = mut_ast_commute_or_addu(cur, rng, focus_ratio);
            else if (op < 63) ok = mut_ast_subscript_flip(cur, rng, focus_ratio);
            else if (op < 70) ok = mut_ast_stmt_swap(cur, rng);
            else if (op < 77) ok = mut_ast_idioms(cur, rng, focus_ratio);
            else if (op < 82) ok = mut_ast_drop_cast(cur, rng, focus_ratio);
            else if (op < 87) ok = mut_ast_if_else_swap(cur, rng);
            else if (op < 91) ok = mut_ast_ternary_if(cur, rng);
            else if (op < 94) ok = mut_ast_loop_shape(cur, rng);
            else if (op < 96) ok = mut_ast_switch_reorder(cur, rng);
            else if (op < 98) ok = mut_ast_cse_hoist(cur, rng, focus_ratio);
            else              ok = mut_ast_inline_local(cur, rng);
        }
    }
    return cur;
}

} // namespace b3ast

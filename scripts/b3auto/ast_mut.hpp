#pragma once
/*
 * ast_mut.hpp - Semantic, 100%-syntax-valid C AST mutation operators for MWCC PS2 3.0b,
 * with diff-guided statement focusing (focus_ratio in [0.0, 1.0]).
 */

#include "ast_c.hpp"
#include <algorithm>
#include <cstdlib>
#include <unordered_map>
#include <functional>

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
    for (auto &d : s->decls)
        if (d.init) collect_exprs_in_expr(d.init.get(), w, out);
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
    for (auto &d : f.body->decls)
        if (d.init) collect_exprs_in_expr(d.init.get(), 4, out);
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
    if (b->text == "+" && (rand_r(&rng) % 3 == 0)) {
        bool has_ptr_cast = (b->lhs->kind == ExprKind::Cast && b->lhs->text.find('*') != std::string::npos) ||
                            (b->rhs->kind == ExprKind::Cast && b->rhs->text.find('*') != std::string::npos);
        unsigned mode = rand_r(&rng) % 3;
        if (has_ptr_cast && mode == 0) {
            std::swap(b->lhs, b->rhs);
            auto cl = std::make_unique<Expr>(ExprKind::Cast, "u8 *");
            cl->lhs = std::move(b->lhs);
            auto cr = std::make_unique<Expr>(ExprKind::Cast, "s32");
            cr->lhs = std::move(b->rhs);
            b->lhs = std::move(cl);
            b->rhs = std::move(cr);
            return true;
        } else if (has_ptr_cast && mode >= 1) {
            // Force integer addition (s32)(B) + (s32)(A) to flip MWCC addu rs/rt inside *(T *)(...)
            if (mode == 1) std::swap(b->lhs, b->rhs);
            auto cl = std::make_unique<Expr>(ExprKind::Cast, "s32");
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
    // Direction B: Ternary -> If (unwrapping outer Paren!)
    std::vector<Stmt *> estmts;
    collect_stmts_kind(f.body.get(), StmtKind::ExprStmt, estmts);
    std::vector<Stmt *> t_cands;
    for (Stmt *s : estmts) {
        if (s->expr && s->expr->kind == ExprKind::Assign && s->expr->text == "=" && s->expr->rhs) {
            Expr *r = s->expr->rhs.get();
            while (r->kind == ExprKind::Paren && r->lhs) r = r->lhs.get();
            if (r->kind == ExprKind::Ternary) t_cands.push_back(s);
        }
    }
    if (t_cands.empty()) return false;
    Stmt *s = t_cands[rand_r(&rng) % t_cands.size()];
    Expr *asg = s->expr.get();
    Expr *tern = asg->rhs.get();
    while (tern->kind == ExprKind::Paren && tern->lhs) tern = tern->lhs.get();
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

// Op 14: Parameter reuse — replace a local scalar variable with a function parameter name (e.g. arg0)
inline bool mut_ast_param_reuse(FuncAST &f, unsigned int &rng) {
    if (f.param_names.empty() || f.body->decls.empty()) return false;
    std::vector<size_t> cands;
    for (size_t i = 0; i < f.body->decls.size(); i++) {
        const auto &d = f.body->decls[i];
        if (d.raw_line.empty() && d.suffix.empty() &&
            (d.type_str == "s32" || d.type_str == "u32" || d.type_str == "int"))
            cands.push_back(i);
    }
    if (cands.empty()) return false;
    size_t di = cands[rand_r(&rng) % cands.size()];
    std::string old_name = f.body->decls[di].name;
    std::string new_name = f.param_names[rand_r(&rng) % f.param_names.size()];
    if (old_name == new_name) return false;
    auto repl = std::make_unique<Expr>(ExprKind::Ident, new_name);
    for (auto &st : f.body->stmts) {
        if (st->expr) replace_ident(st->expr, old_name, *repl);
    }
    f.body->decls.erase(f.body->decls.begin() + (ptrdiff_t)di);
    return true;
}

// Op 15: Repeated subexpression CSE hoist — hoist any expression occurring >= 2 times into a local
static void count_subexprs(const Expr *e, std::unordered_map<std::string, int> &cnt) {
    if (!e) return;
    if (e->kind == ExprKind::Binary || e->kind == ExprKind::Unary || e->kind == ExprKind::Member ||
        e->kind == ExprKind::Subscript) {
        std::string s = e->print();
        if (s.size() >= 6 && s.size() <= 48) cnt[s]++;
    }
    count_subexprs(e->cond.get(), cnt);
    count_subexprs(e->lhs.get(), cnt);
    count_subexprs(e->rhs.get(), cnt);
    for (const auto &a : e->args) count_subexprs(a.get(), cnt);
}

static void count_subexprs_stmt(const Stmt *s, std::unordered_map<std::string, int> &cnt) {
    if (!s) return;
    count_subexprs(s->expr.get(), cnt);
    count_subexprs(s->init_expr.get(), cnt);
    count_subexprs(s->step_expr.get(), cnt);
    count_subexprs_stmt(s->then_br.get(), cnt);
    count_subexprs_stmt(s->else_br.get(), cnt);
    count_subexprs_stmt(s->body.get(), cnt);
    for (const auto &st : s->stmts) count_subexprs_stmt(st.get(), cnt);
}

static void replace_subexpr_str(ExprPtr &e, const std::string &target, const std::string &var_name, ExprPtr &captured) {
    if (!e) return;
    if (e->print() == target) {
        if (!captured) captured = e->clone();
        e = std::make_unique<Expr>(ExprKind::Ident, var_name);
        return;
    }
    replace_subexpr_str(e->cond, target, var_name, captured);
    replace_subexpr_str(e->lhs, target, var_name, captured);
    replace_subexpr_str(e->rhs, target, var_name, captured);
    for (auto &a : e->args) replace_subexpr_str(a, target, var_name, captured);
}

static void replace_subexpr_stmt(Stmt *s, const std::string &target, const std::string &var_name, ExprPtr &captured) {
    if (!s) return;
    replace_subexpr_str(s->expr, target, var_name, captured);
    if (s->then_br) replace_subexpr_stmt(s->then_br.get(), target, var_name, captured);
    if (s->else_br) replace_subexpr_stmt(s->else_br.get(), target, var_name, captured);
    if (s->body) replace_subexpr_stmt(s->body.get(), target, var_name, captured);
    for (auto &st : s->stmts) replace_subexpr_stmt(st.get(), target, var_name, captured);
}

inline bool mut_ast_cse_repeated(FuncAST &f, unsigned int &rng) {
    if (!f.body || f.body->stmts.empty() || f.body->decls.size() > 36) return false;
    std::unordered_map<std::string, int> cnt;
    count_subexprs_stmt(f.body.get(), cnt);
    std::vector<std::string> reps;
    for (const auto &kv : cnt) if (kv.second >= 2) reps.push_back(kv.first);
    if (reps.empty()) return false;
    std::string target = reps[rand_r(&rng) % reps.size()];
    std::string tname = "_cse" + std::to_string(f.body->decls.size());
    ExprPtr captured;
    for (auto &st : f.body->stmts) replace_subexpr_stmt(st.get(), target, tname, captured);
    if (!captured) return false;
    LocalDecl d;
    d.type_str = (captured->kind == ExprKind::Cast) ? captured->text : "s32";
    d.name = tname;
    size_t dpos = f.body->decls.empty() ? 0 : (rand_r(&rng) % (f.body->decls.size() + 1));
    f.body->decls.insert(f.body->decls.begin() + (ptrdiff_t)dpos, std::move(d));
    auto init_asg = std::make_unique<Expr>(ExprKind::Assign, "=");
    init_asg->lhs = std::make_unique<Expr>(ExprKind::Ident, tname);
    init_asg->rhs = std::move(captured);
    auto pre = std::make_unique<Stmt>(StmtKind::ExprStmt);
    pre->expr = std::move(init_asg);
    f.body->stmts.insert(f.body->stmts.begin(), std::move(pre));
    return true;
}

// Op 16: Convert `for (init; cond; step) { body }` -> `init; while (cond) { body; step; }`
inline bool mut_ast_for_to_while(FuncAST &f, unsigned int &rng) {
    std::vector<Stmt *> blocks;
    collect_blocks(f.body.get(), blocks);
    std::vector<std::pair<Stmt *, size_t>> cands;
    for (Stmt *b : blocks) {
        for (size_t i = 0; i < b->stmts.size(); i++) {
            if (b->stmts[i]->kind == StmtKind::For && b->stmts[i]->expr)
                cands.push_back({b, i});
        }
    }
    if (cands.empty()) return false;
    auto [b, idx] = cands[rand_r(&rng) % cands.size()];
    Stmt *fr = b->stmts[idx].get();
    StmtPtr init_stmt;
    if (fr->init_expr) {
        init_stmt = std::make_unique<Stmt>(StmtKind::ExprStmt);
        init_stmt->expr = std::move(fr->init_expr);
    }
    if (fr->step_expr) {
        auto step_s = std::make_unique<Stmt>(StmtKind::ExprStmt);
        step_s->expr = std::move(fr->step_expr);
        if (fr->body->kind != StmtKind::Block) {
            auto nb = std::make_unique<Stmt>(StmtKind::Block);
            nb->stmts.push_back(std::move(fr->body));
            fr->body = std::move(nb);
        }
        fr->body->stmts.push_back(std::move(step_s));
    }
    fr->kind = StmtKind::While;
    if (init_stmt) b->stmts.insert(b->stmts.begin() + (ptrdiff_t)idx, std::move(init_stmt));
    return true;
}

// Op 17: Split `if (A && B) { T }` -> `if (A) { if (B) { T } }` (MWCC branch layout!)
inline bool mut_ast_bool_split(FuncAST &f, unsigned int &rng) {
    std::vector<Stmt *> ifs;
    collect_stmts_kind(f.body.get(), StmtKind::If, ifs);
    std::vector<Stmt *> cands;
    for (Stmt *s : ifs) {
        if (!s->else_br && s->expr) {
            Expr *c = s->expr.get();
            while (c->kind == ExprKind::Paren) c = c->lhs.get();
            if (c->kind == ExprKind::Binary && c->text == "&&") cands.push_back(s);
        }
    }
    if (cands.empty()) return false;
    Stmt *s = cands[rand_r(&rng) % cands.size()];
    ExprPtr c = std::move(s->expr);
    while (c->kind == ExprKind::Paren) c = std::move(c->lhs);
    auto inner_if = std::make_unique<Stmt>(StmtKind::If);
    inner_if->expr = std::move(c->rhs);
    inner_if->then_br = std::move(s->then_br);
    auto blk = std::make_unique<Stmt>(StmtKind::Block);
    blk->stmts.push_back(std::move(inner_if));
    s->expr = std::move(c->lhs);
    s->then_br = std::move(blk);
    return true;
}

// Op 18: Early-return toggle at end of void function: `if (C) { A } else { B }` -> `if (C) { A; return; } B`
inline bool mut_ast_early_return(FuncAST &f, unsigned int &rng) {
    if (!f.body || f.body->stmts.empty()) return false;
    if (f.header.rfind("void ", 0) != 0) return false;
    Stmt *last = f.body->stmts.back().get();
    if (last->kind != StmtKind::If || !last->else_br) return false;
    (void)rng;
    if (last->then_br->kind != StmtKind::Block) {
        auto nb = std::make_unique<Stmt>(StmtKind::Block);
        nb->stmts.push_back(std::move(last->then_br));
        last->then_br = std::move(nb);
    }
    last->then_br->stmts.push_back(std::make_unique<Stmt>(StmtKind::Return));
    StmtPtr eb = std::move(last->else_br);
    f.body->stmts.push_back(std::move(eb));
    return true;
}

// Op 19: MWCC boolean <-> ternary idiom: `(x != 0)` <-> `(x ? 1 : 0)` (sltu vs li 1; movz!)
inline bool mut_ast_bool_ternary(FuncAST &f, unsigned int &rng) {
    std::vector<WeightedExpr> exprs;
    collect_exprs_in_stmt(f.body.get(), 1, exprs);
    std::vector<Expr *> cands;
    for (const auto &we : exprs) {
        Expr *e = we.node;
        if (e->kind == ExprKind::Binary && (e->text == "!=" || e->text == "==") &&
            e->rhs && e->rhs->kind == ExprKind::Num && e->rhs->text == "0") {
            cands.push_back(e);
        } else if (e->kind == ExprKind::Ternary && e->lhs && e->rhs &&
                   e->lhs->kind == ExprKind::Num && e->rhs->kind == ExprKind::Num &&
                   ((e->lhs->text == "1" && e->rhs->text == "0") || (e->lhs->text == "0" && e->rhs->text == "1"))) {
            cands.push_back(e);
        }
    }
    if (cands.empty()) return false;
    Expr *e = cands[rand_r(&rng) % cands.size()];
    if (e->kind == ExprKind::Binary) {
        bool is_ne = (e->text == "!=");
        ExprPtr c = std::move(e->lhs);
        e->kind = ExprKind::Ternary;
        e->text = "?:";
        e->cond = std::move(c);
        e->lhs = std::make_unique<Expr>(ExprKind::Num, is_ne ? "1" : "0");
        e->rhs = std::make_unique<Expr>(ExprKind::Num, is_ne ? "0" : "1");
        return true;
    } else {
        bool is_ne = (e->lhs->text == "1");
        ExprPtr c = std::move(e->cond);
        e->kind = ExprKind::Binary;
        e->text = is_ne ? "!=" : "==";
        e->lhs = std::move(c);
        e->rhs = std::make_unique<Expr>(ExprKind::Num, "0");
        return true;
    }
}

// Op 20: Flip single comparison polarity (`==` <-> `!=`, `<` <-> `>=`, `>` <-> `<=`) in `if` condition
inline bool mut_ast_cond_flip(FuncAST &f, unsigned int &rng) {
    std::vector<Stmt *> ifs;
    collect_stmts_kind(f.body.get(), StmtKind::If, ifs);
    std::vector<Expr *> cands;
    for (Stmt *s : ifs) {
        if (!s->expr) continue;
        Expr *c = s->expr.get();
        while (c->kind == ExprKind::Paren) c = c->lhs.get();
        if (c->kind == ExprKind::Binary &&
            (c->text == "==" || c->text == "!=" || c->text == "<" || c->text == ">=" || c->text == ">" || c->text == "<=")) {
            cands.push_back(c);
        }
    }
    if (cands.empty()) return false;
    Expr *c = cands[rand_r(&rng) % cands.size()];
    if (c->text == "==") c->text = "!=";
    else if (c->text == "!=") c->text = "==";
    else if (c->text == "<") c->text = ">=";
    else if (c->text == ">=") c->text = "<";
    else if (c->text == ">") c->text = "<=";
    else if (c->text == "<=") c->text = ">";
    return true;
}

// Op 21: Hoist non-trivial call argument into a temp before the statement (controls jal delay-slot scheduling!)
inline bool mut_ast_call_arg_hoist(FuncAST &f, unsigned int &rng) {
    if (!f.body || f.body->decls.size() > 36) return false;
    std::vector<Stmt *> blocks;
    collect_blocks(f.body.get(), blocks);
    struct Target { Stmt *blk; size_t idx; Expr *call; size_t arg_i; };
    std::vector<Target> cands;
    for (Stmt *b : blocks) {
        for (size_t i = 0; i < b->stmts.size(); i++) {
            Stmt *st = b->stmts[i].get();
            if (st->kind != StmtKind::ExprStmt || !st->expr) continue;
            Expr *e = st->expr.get();
            if (e->kind == ExprKind::Assign && e->rhs && e->rhs->kind == ExprKind::Call) e = e->rhs.get();
            if (e->kind != ExprKind::Call) continue;
            for (size_t a = 0; a < e->args.size(); a++) {
                Expr *ae = e->args[a].get();
                if (ae && ae->kind != ExprKind::Ident && ae->kind != ExprKind::Num) {
                    cands.push_back({b, i, e, a});
                }
            }
        }
    }
    if (cands.empty()) return false;
    auto t = cands[rand_r(&rng) % cands.size()];
    std::string tname = "_arg" + std::to_string(f.body->decls.size());
    ExprPtr orig = std::move(t.call->args[t.arg_i]);
    t.call->args[t.arg_i] = std::make_unique<Expr>(ExprKind::Ident, tname);
    LocalDecl d;
    d.type_str = (orig->kind == ExprKind::Cast) ? orig->text : "s32";
    d.name = tname;
    size_t dpos = f.body->decls.empty() ? 0 : (rand_r(&rng) % (f.body->decls.size() + 1));
    f.body->decls.insert(f.body->decls.begin() + (ptrdiff_t)dpos, std::move(d));
    auto asg = std::make_unique<Expr>(ExprKind::Assign, "=");
    asg->lhs = std::make_unique<Expr>(ExprKind::Ident, tname);
    asg->rhs = std::move(orig);
    auto pre = std::make_unique<Stmt>(StmtKind::ExprStmt);
    pre->expr = std::move(asg);
    t.blk->stmts.insert(t.blk->stmts.begin() + (ptrdiff_t)t.idx, std::move(pre));
    return true;
}

// Op 22: Hoist loop upper bound (`for (...; i < expr; ...)` -> `bnd = expr; for (...; i < bnd; ...)`)
inline bool mut_ast_loop_bound_hoist(FuncAST &f, unsigned int &rng) {
    if (!f.body || f.body->decls.size() > 36) return false;
    std::vector<Stmt *> blocks;
    collect_blocks(f.body.get(), blocks);
    std::vector<std::pair<Stmt *, size_t>> cands;
    for (Stmt *b : blocks) {
        for (size_t i = 0; i < b->stmts.size(); i++) {
            Stmt *st = b->stmts[i].get();
            if ((st->kind == StmtKind::For || st->kind == StmtKind::While) && st->expr) {
                Expr *c = st->expr.get();
                while (c->kind == ExprKind::Paren) c = c->lhs.get();
                if (c->kind == ExprKind::Binary &&
                    (c->text == "<" || c->text == "<=" || c->text == "!=") &&
                    c->rhs && c->rhs->kind != ExprKind::Ident && c->rhs->kind != ExprKind::Num) {
                    cands.push_back({b, i});
                }
            }
        }
    }
    if (cands.empty()) return false;
    auto [b, idx] = cands[rand_r(&rng) % cands.size()];
    Expr *c = b->stmts[idx]->expr.get();
    while (c->kind == ExprKind::Paren) c = c->lhs.get();
    std::string tname = "_bnd" + std::to_string(f.body->decls.size());
    ExprPtr orig = std::move(c->rhs);
    c->rhs = std::make_unique<Expr>(ExprKind::Ident, tname);
    LocalDecl d;
    d.type_str = "s32";
    d.name = tname;
    size_t dpos = f.body->decls.empty() ? 0 : (rand_r(&rng) % (f.body->decls.size() + 1));
    f.body->decls.insert(f.body->decls.begin() + (ptrdiff_t)dpos, std::move(d));
    auto asg = std::make_unique<Expr>(ExprKind::Assign, "=");
    asg->lhs = std::make_unique<Expr>(ExprKind::Ident, tname);
    asg->rhs = std::move(orig);
    auto pre = std::make_unique<Stmt>(StmtKind::ExprStmt);
    pre->expr = std::move(asg);
    b->stmts.insert(b->stmts.begin() + (ptrdiff_t)idx, std::move(pre));
    return true;
}

// Op 23: Change or add pointer type cast on dereference `*(X)` <-> `*(s32 *)(X)` / `*(u32 *)(X)` / `*(s16 *)(X)` / ...
inline bool mut_ast_deref_cast(FuncAST &f, unsigned int &rng, double focus_ratio) {
    auto exprs = collect_weighted_exprs(f, focus_ratio);
    std::vector<std::pair<Expr *, int>> cands;
    for (const auto &we : exprs) {
        if (we.node->kind == ExprKind::Unary && we.node->text == "*" && we.node->lhs)
            cands.push_back({we.node, we.weight});
    }
    Expr *u = pick_weighted(cands, rng);
    if (!u || !u->lhs) return false;
    static const char *ptypes[] = {"s32 *", "u32 *", "s16 *", "u16 *", "s8 *", "u8 *", "f32 *"};
    const char *nt = ptypes[rand_r(&rng) % 7];
    Expr *inner = u->lhs.get();
    while (inner->kind == ExprKind::Paren && inner->lhs) inner = inner->lhs.get();
    if (inner->kind == ExprKind::Cast && inner->text.find('*') != std::string::npos) {
        if (inner->text == nt) return false;
        inner->text = nt;
        return true;
    }
    auto c = std::make_unique<Expr>(ExprKind::Cast, nt);
    c->lhs = std::move(u->lhs);
    u->lhs = std::move(c);
    return true;
}

// Op 24: Fix double-scaled pointer arithmetic `ptr + (idx * K)` (K multiple of 4 or 2)
// -> `ptr + (idx * (K/4))` or `ptr + idx` or `(u8 *)ptr + (idx * K)`
inline bool mut_ast_ptr_scale_fix(FuncAST &f, unsigned int &rng, double focus_ratio) {
    auto exprs = collect_weighted_exprs(f, focus_ratio);
    std::vector<std::pair<Expr *, int>> cands;
    for (const auto &we : exprs) {
        if (we.node->kind == ExprKind::Binary && we.node->text == "+" && we.node->lhs && we.node->rhs) {
            Expr *r = we.node->rhs.get();
            while (r->kind == ExprKind::Paren && r->lhs) r = r->lhs.get();
            if (r->kind == ExprKind::Binary && (r->text == "*" || r->text == "<<") &&
                r->rhs && r->rhs->kind == ExprKind::Num) {
                long long v = 0;
                try { v = std::stoll(r->rhs->text, nullptr, 0); } catch (...) { v = 0; }
                if ((r->text == "*" && v >= 2 && (v % 2 == 0)) || (r->text == "<<" && v >= 1 && v <= 4)) {
                    cands.push_back({we.node, we.weight});
                }
            }
        }
    }
    Expr *b = pick_weighted(cands, rng);
    if (!b) return false;
    Expr *r = b->rhs.get();
    while (r->kind == ExprKind::Paren && r->lhs) r = r->lhs.get();
    long long v = 0;
    try { v = std::stoll(r->rhs->text, nullptr, 0); } catch (...) { v = 0; }
    unsigned mode = rand_r(&rng) % 3;
    if (mode == 0 && r->text == "*" && v > 4 && (v % 4 == 0)) {
        r->rhs->text = std::to_string(v / 4);
    } else if (mode == 1) {
        ExprPtr base_idx = std::move(r->lhs);
        b->rhs = std::move(base_idx);
    } else {
        auto c = std::make_unique<Expr>(ExprKind::Cast, "u8 *");
        c->lhs = std::move(b->lhs);
        b->lhs = std::move(c);
    }
    return true;
}

// Op 25: Reassociate `(A + B) + C` (const C) -> `((u8 *)(A + C) + B)` or `((u8 *)(B + C) + A)`
// Flips MWCC addu rs/rt on struct-array indexing like `*(T *)((char *)(q + 0xD6) + i * 20)`.
inline bool mut_ast_add_reassoc_cast(FuncAST &f, unsigned int &rng, double focus_ratio) {
    auto exprs = collect_weighted_exprs(f, focus_ratio);
    std::vector<std::pair<Expr *, int>> cands;
    for (const auto &we : exprs) {
        Expr *e = we.node;
        if (e->kind == ExprKind::Binary && e->text == "+" && e->lhs && e->rhs) {
            Expr *l = e->lhs.get();
            while (l->kind == ExprKind::Paren && l->lhs) l = l->lhs.get();
            if (l->kind == ExprKind::Binary && l->text == "+" && e->rhs->kind == ExprKind::Num) {
                cands.push_back({e, we.weight});
            }
        }
    }
    Expr *outer = pick_weighted(cands, rng);
    if (!outer) return false;
    Expr *inner = outer->lhs.get();
    while (inner->kind == ExprKind::Paren && inner->lhs) inner = inner->lhs.get();
    if (inner->kind != ExprKind::Binary || inner->text != "+") return false;
    // Strip outer (s32)/(u8 *) casts on inner operands if present so (u8 *)(A + C) compiles cleanly
    auto unwrap_s32 = [](ExprPtr p) -> ExprPtr {
        while (p && p->kind == ExprKind::Paren && p->lhs) p = std::move(p->lhs);
        if (p && p->kind == ExprKind::Cast &&
            (p->text == "s32" || p->text == "u32" || p->text == "int" || p->text == "u8 *" || p->text == "char *") && p->lhs)
            return std::move(p->lhs);
        return p;
    };
    ExprPtr A = unwrap_s32(std::move(inner->lhs));
    ExprPtr B = unwrap_s32(std::move(inner->rhs));
    ExprPtr C = std::move(outer->rhs);
    if (rand_r(&rng) & 1) std::swap(A, B);
    auto ac = std::make_unique<Expr>(ExprKind::Binary, "+");
    ac->lhs = std::move(A);
    ac->rhs = std::move(C);
    auto cast = std::make_unique<Expr>(ExprKind::Cast, "u8 *");
    cast->lhs = std::move(ac);
    outer->lhs = std::move(cast);
    outer->rhs = std::move(B);
    return true;
}

// Op 26: Promote a local `s32`/`u32` variable holding an address to `u8 *` (or split a reused
// m2c temp inside an `if`/block into a fresh `u8 *_pN` local so arithmetic uses elsewhere keep compiling).
inline bool mut_ast_int_to_u8ptr(FuncAST &f, unsigned int &rng) {
    if (!f.body || f.body->decls.empty()) return false;
    // Mode A (50%): split `v = rhs; ... *(T *)(v + ...)` inside any block into a fresh `u8 *_pN`
    if ((rand_r(&rng) & 1) && f.body->decls.size() < 36) {
        std::vector<Stmt *> blocks;
        collect_blocks(f.body.get(), blocks);
        std::vector<std::tuple<Stmt *, size_t, std::string>> cands;
        for (Stmt *b : blocks) {
            for (size_t i = 0; i + 1 < b->stmts.size(); i++) {
                Stmt *st = b->stmts[i].get();
                if (st->kind == StmtKind::ExprStmt && st->expr &&
                    st->expr->kind == ExprKind::Assign && st->expr->text == "=" &&
                    st->expr->lhs && st->expr->lhs->kind == ExprKind::Ident) {
                    std::string vn = st->expr->lhs->text;
                    // Check if vn is an int local
                    bool is_int = false;
                    for (const auto &d : f.body->decls)
                        if (d.name == vn && (d.type_str == "s32" || d.type_str == "u32" || d.type_str == "int"))
                            is_int = true;
                    if (is_int) cands.push_back({b, i, vn});
                }
            }
        }
        if (!cands.empty()) {
            auto [b, idx, vn] = cands[rand_r(&rng) % cands.size()];
            std::string pname = "_p" + std::to_string(f.body->decls.size());
            LocalDecl nd;
            nd.type_str = "u8 *";
            nd.name = pname;
            f.body->decls.push_back(std::move(nd));
            // Replace assignment `vn = rhs` with `pname = (u8 *)(rhs)` and rename uses in following stmts of this block until reassigned
            Expr *asg = b->stmts[idx]->expr.get();
            asg->lhs->text = pname;
            auto c = std::make_unique<Expr>(ExprKind::Cast, "u8 *");
            c->lhs = std::move(asg->rhs);
            asg->rhs = std::move(c);
            std::function<void(Expr *)> ren = [&](Expr *e) {
                if (!e) return;
                if (e->kind == ExprKind::Ident && e->text == vn) e->text = pname;
                ren(e->lhs.get()); ren(e->rhs.get()); ren(e->cond.get());
                for (auto &a : e->args) ren(a.get());
            };
            for (size_t j = idx + 1; j < b->stmts.size(); j++) {
                Stmt *sj = b->stmts[j].get();
                if (sj->kind == StmtKind::ExprStmt && sj->expr &&
                    sj->expr->kind == ExprKind::Assign && sj->expr->lhs &&
                    sj->expr->lhs->kind == ExprKind::Ident && sj->expr->lhs->text == vn)
                    break;
                if (sj->expr) ren(sj->expr.get());
            }
            return true;
        }
    }
    // Mode B: whole-function promotion of a single int local to u8 *
    std::vector<size_t> idxs;
    for (size_t i = 0; i < f.body->decls.size(); i++) {
        const auto &d = f.body->decls[i];
        if (d.raw_line.empty() && (d.type_str == "s32" || d.type_str == "u32" || d.type_str == "int"))
            idxs.push_back(i);
    }
    if (idxs.empty()) return false;
    size_t pick = idxs[rand_r(&rng) % idxs.size()];
    std::string vname = f.body->decls[pick].name;
    f.body->decls[pick].type_str = "u8 *";
    if (f.body->decls[pick].init) {
        auto c = std::make_unique<Expr>(ExprKind::Cast, "u8 *");
        c->lhs = std::move(f.body->decls[pick].init);
        f.body->decls[pick].init = std::move(c);
    }
    auto exprs = collect_weighted_exprs(f, 0.0);
    for (const auto &we : exprs) {
        Expr *e = we.node;
        if (e->kind == ExprKind::Assign && e->text == "=" && e->lhs && e->rhs &&
            e->lhs->kind == ExprKind::Ident && e->lhs->text == vname) {
            auto c = std::make_unique<Expr>(ExprKind::Cast, "u8 *");
            c->lhs = std::move(e->rhs);
            e->rhs = std::move(c);
        }
    }
    return true;
}

// Op 27: Fold `r = C1; if (cond) { r = C2; } return r;` <-> `if (cond) { return C2; } return C1;`
inline bool mut_ast_if_ret_fold(FuncAST &f, unsigned int &rng) {
    std::vector<Stmt *> blocks;
    collect_blocks(f.body.get(), blocks);
    for (Stmt *b : blocks) {
        for (size_t i = 0; i + 2 < b->stmts.size(); i++) {
            Stmt *s0 = b->stmts[i].get();
            Stmt *s1 = b->stmts[i + 1].get();
            Stmt *s2 = b->stmts[i + 2].get();
            if (s0->kind == StmtKind::ExprStmt && s0->expr &&
                s0->expr->kind == ExprKind::Assign && s0->expr->text == "=" &&
                s0->expr->lhs && s0->expr->lhs->kind == ExprKind::Ident &&
                s1->kind == StmtKind::If && s1->then_br && !s1->else_br &&
                s1->then_br->stmts.size() == 1 &&
                s2->kind == StmtKind::Return && s2->expr && s2->expr->kind == ExprKind::Ident &&
                s2->expr->text == s0->expr->lhs->text) {
                Stmt *ts = s1->then_br->stmts[0].get();
                if (ts->kind == StmtKind::ExprStmt && ts->expr &&
                    ts->expr->kind == ExprKind::Assign && ts->expr->text == "=" &&
                    ts->expr->lhs && ts->expr->lhs->kind == ExprKind::Ident &&
                    ts->expr->lhs->text == s0->expr->lhs->text) {
                    // Transform to: if (cond) { return C2; } return C1;
                    auto ret2 = std::make_unique<Stmt>(StmtKind::Return);
                    ret2->expr = std::move(ts->expr->rhs);
                    s1->then_br->stmts[0] = std::move(ret2);
                    s2->expr = std::move(s0->expr->rhs);
                    b->stmts.erase(b->stmts.begin() + (ptrdiff_t)i);
                    return true;
                }
            }
        }
    }
    (void)rng;
    return false;
}

// Op 28: Sink the last statement of `if (cond) { ...; S; }` after the `if`, OR hoist the next statement into `if`
inline bool mut_ast_sink_if_tail(FuncAST &f, unsigned int &rng) {
    std::vector<Stmt *> blocks;
    collect_blocks(f.body.get(), blocks);
    bool do_hoist = (rand_r(&rng) & 1) != 0;
    std::vector<std::pair<Stmt *, size_t>> cands;
    for (Stmt *b : blocks) {
        for (size_t i = 0; i < b->stmts.size(); i++) {
            Stmt *s = b->stmts[i].get();
            if (s->kind == StmtKind::If && s->then_br && !s->else_br) {
                if (!do_hoist && s->then_br->stmts.size() >= 2) {
                    cands.push_back({b, i});
                } else if (do_hoist && i + 1 < b->stmts.size() && b->stmts[i + 1]->kind == StmtKind::ExprStmt) {
                    cands.push_back({b, i});
                }
            }
        }
    }
    if (cands.empty()) return false;
    auto [b, idx] = cands[rand_r(&rng) % cands.size()];
    Stmt *ifs = b->stmts[idx].get();
    if (!do_hoist) {
        StmtPtr tail = std::move(ifs->then_br->stmts.back());
        ifs->then_br->stmts.pop_back();
        b->stmts.insert(b->stmts.begin() + (ptrdiff_t)(idx + 1), std::move(tail));
    } else {
        StmtPtr nxt = std::move(b->stmts[idx + 1]);
        b->stmts.erase(b->stmts.begin() + (ptrdiff_t)(idx + 1));
        ifs->then_br->stmts.push_back(std::move(nxt));
    }
    return true;
}

// Op 29: Hoist the first statement of `if (cond) { S; ... }` before the `if`, OR sink the preceding statement into `if`
inline bool mut_ast_hoist_if_head(FuncAST &f, unsigned int &rng) {
    std::vector<Stmt *> blocks;
    collect_blocks(f.body.get(), blocks);
    bool do_hoist = (rand_r(&rng) & 1) != 0;
    std::vector<std::pair<Stmt *, size_t>> cands;
    for (Stmt *b : blocks) {
        for (size_t i = 0; i < b->stmts.size(); i++) {
            Stmt *s = b->stmts[i].get();
            if (s->kind == StmtKind::If && s->then_br && !s->else_br) {
                if (do_hoist && s->then_br->stmts.size() >= 2 && s->then_br->stmts[0]->kind == StmtKind::ExprStmt) {
                    cands.push_back({b, i});
                } else if (!do_hoist && i > 0 && b->stmts[i - 1]->kind == StmtKind::ExprStmt) {
                    cands.push_back({b, i});
                }
            }
        }
    }
    if (cands.empty()) return false;
    auto [b, idx] = cands[rand_r(&rng) % cands.size()];
    Stmt *ifs = b->stmts[idx].get();
    if (do_hoist) {
        StmtPtr head = std::move(ifs->then_br->stmts.front());
        ifs->then_br->stmts.erase(ifs->then_br->stmts.begin());
        b->stmts.insert(b->stmts.begin() + (ptrdiff_t)idx, std::move(head));
    } else {
        StmtPtr prev = std::move(b->stmts[idx - 1]);
        b->stmts.erase(b->stmts.begin() + (ptrdiff_t)(idx - 1));
        ifs->then_br->stmts.insert(ifs->then_br->stmts.begin(), std::move(prev));
    }
    return true;
}

// Op 30: Expand unsigned range check `(u32)(x - K) < 2` -> `(x == K || x == (K + 1))` (changes MWCC sltiu v0 vs at!)
inline bool mut_ast_range_to_eq_or(FuncAST &f, unsigned int &rng, double focus_ratio) {
    auto exprs = collect_weighted_exprs(f, focus_ratio);
    std::vector<std::pair<Expr *, int>> cands;
    for (const auto &we : exprs) {
        Expr *e = we.node;
        if (e->kind == ExprKind::Binary && e->text == "<" && e->lhs && e->rhs &&
            e->rhs->kind == ExprKind::Num && (e->rhs->text == "2" || e->rhs->text == "3")) {
            Expr *l = e->lhs.get();
            while (l->kind == ExprKind::Paren && l->lhs) l = l->lhs.get();
            if (l->kind == ExprKind::Cast && (l->text == "u32" || l->text == "unsigned int") && l->lhs) {
                Expr *sub = l->lhs.get();
                while (sub->kind == ExprKind::Paren && sub->lhs) sub = sub->lhs.get();
                if (sub->kind == ExprKind::Binary && sub->text == "-" && sub->lhs && sub->rhs && sub->rhs->kind == ExprKind::Num) {
                    cands.push_back({e, we.weight});
                }
            }
        }
    }
    Expr *e = pick_weighted(cands, rng);
    if (!e) return false;
    int cnt = std::stoi(e->rhs->text);
    Expr *l = e->lhs.get();
    while (l->kind == ExprKind::Paren && l->lhs) l = l->lhs.get();
    Expr *sub = l->lhs.get();
    while (sub->kind == ExprKind::Paren && sub->lhs) sub = sub->lhs.get();
    long long k = 0;
    try { k = std::stoll(sub->rhs->text, nullptr, 0); } catch (...) { return false; }
    ExprPtr x = std::move(sub->lhs);
    auto mk_eq = [&](long long val) {
        auto eq = std::make_unique<Expr>(ExprKind::Binary, "==");
        eq->lhs = x->clone();
        eq->rhs = std::make_unique<Expr>(ExprKind::Num, std::to_string(val));
        return eq;
    };
    ExprPtr res = mk_eq(k);
    for (int i = 1; i < cnt; i++) {
        auto lor = std::make_unique<Expr>(ExprKind::Binary, "||");
        lor->lhs = std::move(res);
        lor->rhs = mk_eq(k + i);
        res = std::move(lor);
    }
    *e = std::move(*res);
    return true;
}

// Op 31: Hoist RHS of `S1; lhs = rhs;` into a temp BEFORE S1 (`_h = rhs; S1; lhs = _h;`)
// Reschedules loads ahead of stores/copies (e.g. `lwc1` before `ld/sd` in struct copies).
inline bool mut_ast_hoist_assign_rhs(FuncAST &f, unsigned int &rng) {
    if (!f.body || f.body->decls.size() > 36) return false;
    std::vector<Stmt *> blocks;
    collect_blocks(f.body.get(), blocks);
    std::vector<std::pair<Stmt *, size_t>> cands;
    for (Stmt *b : blocks) {
        for (size_t i = 1; i < b->stmts.size(); i++) {
            Stmt *s0 = b->stmts[i - 1].get();
            Stmt *s1 = b->stmts[i].get();
            if (s0->kind == StmtKind::ExprStmt && s1->kind == StmtKind::ExprStmt &&
                s1->expr && s1->expr->kind == ExprKind::Assign && s1->expr->text == "=" &&
                s1->expr->rhs && s1->expr->rhs->kind != ExprKind::Ident && s1->expr->rhs->kind != ExprKind::Num) {
                cands.push_back({b, i});
            }
        }
    }
    if (cands.empty()) return false;
    auto [b, idx] = cands[rand_r(&rng) % cands.size()];
    Expr *asg = b->stmts[idx]->expr.get();
    std::string hname = "_hr" + std::to_string(f.body->decls.size());
    std::string rtxt = asg->rhs->print();
    bool is_flt = (rtxt.find("f32") != std::string::npos || rtxt.find("float") != std::string::npos ||
                   rtxt.find(".0f") != std::string::npos || rtxt.find("->x") != std::string::npos ||
                   rtxt.find("->y") != std::string::npos || rtxt.find("->z") != std::string::npos ||
                   rtxt.find("->w") != std::string::npos);
    bool is_64 = (rtxt.find("s64") != std::string::npos || rtxt.find("u64") != std::string::npos);
    LocalDecl d;
    d.type_str = is_64 ? "s64" : (is_flt ? "f32" : ((rand_r(&rng) % 3 == 0) ? "f32" : "s32"));
    d.name = hname;
    f.body->decls.push_back(std::move(d));
    auto pre_asg = std::make_unique<Expr>(ExprKind::Assign, "=");
    pre_asg->lhs = std::make_unique<Expr>(ExprKind::Ident, hname);
    pre_asg->rhs = std::move(asg->rhs);
    asg->rhs = std::make_unique<Expr>(ExprKind::Ident, hname);
    auto pre_st = std::make_unique<Stmt>(StmtKind::ExprStmt);
    pre_st->expr = std::move(pre_asg);
    b->stmts.insert(b->stmts.begin() + (ptrdiff_t)(idx - 1), std::move(pre_st));
    return true;
}

// Op 32: Toggle zero store between int and float (`*(f32 *)(P) = 0.0f` <-> `*(s32 *)(P) = 0`)
inline bool mut_ast_zero_float_int(FuncAST &f, unsigned int &rng, double focus_ratio) {
    auto exprs = collect_weighted_exprs(f, focus_ratio);
    std::vector<std::pair<Expr *, int>> cands;
    for (const auto &we : exprs) {
        Expr *e = we.node;
        if (e->kind == ExprKind::Assign && e->text == "=" && e->lhs && e->rhs &&
            e->rhs->kind == ExprKind::Num &&
            (e->rhs->text == "0" || e->rhs->text == "0.0f" || e->rhs->text == "0.0")) {
            Expr *l = e->lhs.get();
            while (l->kind == ExprKind::Paren && l->lhs) l = l->lhs.get();
            if (l->kind == ExprKind::Unary && l->text == "*" && l->lhs) {
                Expr *c = l->lhs.get();
                while (c->kind == ExprKind::Paren && c->lhs) c = c->lhs.get();
                if (c->kind == ExprKind::Cast && (c->text == "f32 *" || c->text == "s32 *" || c->text == "u32 *")) {
                    cands.push_back({e, we.weight});
                }
            }
        }
    }
    Expr *e = pick_weighted(cands, rng);
    if (!e) return false;
    Expr *l = e->lhs.get();
    while (l->kind == ExprKind::Paren && l->lhs) l = l->lhs.get();
    Expr *c = l->lhs.get();
    while (c->kind == ExprKind::Paren && c->lhs) c = c->lhs.get();
    if (c->text == "f32 *") {
        c->text = "s32 *";
        e->rhs->text = "0";
    } else {
        c->text = "f32 *";
        e->rhs->text = "0.0f";
    }
    return true;
}

/* ---------- Adaptive Operator Bandit (eliminates binary-split waste!) ---------- */

static constexpr int NUM_AST_OPS = 33;

struct OpBandit {
    int attempts[NUM_AST_OPS] = {};
    int compiled[NUM_AST_OPS] = {};
    int improved[NUM_AST_OPS] = {};

    int pick_op(unsigned int &rng) const {
        // Base weights emphasizing high-yield MWCC ops
        static const double base_w[NUM_AST_OPS] = {
            18.0, 9.0, 12.0, 14.0, 6.0, 7.0, 7.0, 5.0, 5.0, 6.0,
            4.0, 3.0, 3.0, 3.0, 3.0, 4.0, 3.0, 3.0, 2.0,
            6.0, 4.0, 4.0, 4.0, 6.0, 4.0, 6.0, 5.0, 4.0, 4.0, 4.0, 4.0, 4.0, 4.0
        };
        double w[NUM_AST_OPS];
        double total = 0.0;
        for (int i = 0; i < NUM_AST_OPS; i++) {
            double ok_rate = (attempts[i] >= 6) ? ((double)(compiled[i] + 1) / (double)(attempts[i] + 2)) : 1.0;
            // Strongly penalize operators that cause compile errors on THIS function!
            double penalty = (ok_rate < 0.35) ? 0.03 : (ok_rate < 0.70 ? 0.25 : 1.0);
            double boost = 1.0 + 1.5 * (double)improved[i];
            w[i] = base_w[i] * penalty * boost;
            total += w[i];
        }
        double r = ((double)(rand_r(&rng) % 100000) / 100000.0) * total;
        for (int i = 0; i < NUM_AST_OPS; i++) {
            if (r < w[i]) return i;
            r -= w[i];
        }
        return 0;
    }

    void record(int op, bool ok, bool imp) {
        if (op < 0 || op >= NUM_AST_OPS) return;
        attempts[op]++;
        if (ok) compiled[op]++;
        if (imp) improved[op]++;
    }
};

inline bool apply_op_by_id(FuncAST &cur, int op, unsigned int &rng, double focus_ratio) {
    switch (op) {
        case 0:  return mut_ast_decl_order(cur, rng, false);
        case 1:  return mut_ast_decl_order(cur, rng, true);
        case 2:  return mut_ast_int_type(cur, rng, focus_ratio);
        case 3:  return mut_ast_commute_or_addu(cur, rng, focus_ratio);
        case 4:  return mut_ast_subscript_flip(cur, rng, focus_ratio);
        case 5:  return mut_ast_stmt_swap(cur, rng);
        case 6:  return mut_ast_idioms(cur, rng, focus_ratio);
        case 7:  return mut_ast_drop_cast(cur, rng, focus_ratio);
        case 8:  return mut_ast_if_else_swap(cur, rng);
        case 9:  return mut_ast_ternary_if(cur, rng);
        case 10: return mut_ast_loop_shape(cur, rng);
        case 11: return mut_ast_switch_reorder(cur, rng);
        case 12: return mut_ast_cse_hoist(cur, rng, focus_ratio);
        case 13: return mut_ast_inline_local(cur, rng);
        case 14: return mut_ast_param_reuse(cur, rng);
        case 15: return mut_ast_cse_repeated(cur, rng);
        case 16: return mut_ast_for_to_while(cur, rng);
        case 17: return mut_ast_bool_split(cur, rng);
        case 18: return mut_ast_early_return(cur, rng);
        case 19: return mut_ast_bool_ternary(cur, rng);
        case 20: return mut_ast_cond_flip(cur, rng);
        case 21: return mut_ast_call_arg_hoist(cur, rng);
        case 22: return mut_ast_loop_bound_hoist(cur, rng);
        case 23: return mut_ast_deref_cast(cur, rng, focus_ratio);
        case 24: return mut_ast_ptr_scale_fix(cur, rng, focus_ratio);
        case 25: return mut_ast_add_reassoc_cast(cur, rng, focus_ratio);
        case 26: return mut_ast_int_to_u8ptr(cur, rng);
        case 27: return mut_ast_if_ret_fold(cur, rng);
        case 28: return mut_ast_sink_if_tail(cur, rng);
        case 29: return mut_ast_hoist_if_head(cur, rng);
        case 30: return mut_ast_range_to_eq_or(cur, rng, focus_ratio);
        case 31: return mut_ast_hoist_assign_rhs(cur, rng);
        case 32: return mut_ast_zero_float_int(cur, rng, focus_ratio);
        default: return false;
    }
}

inline FuncAST mutate_ast(const FuncAST &base, unsigned int &rng, int steps, double focus_ratio,
                          const OpBandit *bandit = nullptr, int *primary_op = nullptr) {
    FuncAST cur = base.clone();
    int first_op = -1;
    for (int st = 0; st < steps; st++) {
        bool ok = false;
        for (int tries = 0; tries < 8 && !ok; tries++) {
            int op = bandit ? bandit->pick_op(rng) : (int)(rand_r(&rng) % NUM_AST_OPS);
            ok = apply_op_by_id(cur, op, rng, focus_ratio);
            if (ok && first_op < 0) first_op = op;
        }
    }
    if (primary_op) *primary_op = first_op;
    return cur;
}

} // namespace b3ast

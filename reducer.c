typedef struct burm_state *STATEPTR_TYPE;

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "tree.h"
#include "code_gen.h"
#include "list.h"


#ifndef ALLOC
#define ALLOC(n) malloc(n)
#endif

#ifndef burm_assert
#define burm_assert(x,y) if (!(x)) { extern void abort(void); y; abort(); }
#endif

#define burm_stat_NT 1
#define burm_ret_NT 2
#define burm_assign_NT 3
#define burm_expr_NT 4
#define burm_const_NT 5
int burm_max_nt = 5;

struct burm_state {
	int op;
	STATEPTR_TYPE left, right;
	short cost[6];
	struct {
		unsigned burm_stat:2;
		unsigned burm_ret:1;
		unsigned burm_assign:4;
		unsigned burm_expr:5;
		unsigned burm_const:3;
	} rule;
};

static short burm_nts_0[] = { burm_ret_NT, 0 };
static short burm_nts_1[] = { burm_assign_NT, 0 };
static short burm_nts_2[] = { burm_expr_NT, 0 };
static short burm_nts_3[] = { burm_const_NT, 0 };
static short burm_nts_4[] = { burm_expr_NT, burm_expr_NT, 0 };
static short burm_nts_5[] = { burm_const_NT, burm_expr_NT, 0 };
static short burm_nts_6[] = { burm_expr_NT, burm_const_NT, 0 };
static short burm_nts_7[] = { 0 };
static short burm_nts_8[] = { burm_const_NT, burm_const_NT, 0 };

short *burm_nts[] = {
	0,	/* 0 */
	burm_nts_0,	/* 1 */
	burm_nts_1,	/* 2 */
	burm_nts_2,	/* 3 */
	burm_nts_3,	/* 4 */
	burm_nts_4,	/* 5 */
	burm_nts_5,	/* 6 */
	burm_nts_6,	/* 7 */
	burm_nts_4,	/* 8 */
	burm_nts_5,	/* 9 */
	burm_nts_6,	/* 10 */
	burm_nts_4,	/* 11 */
	burm_nts_5,	/* 12 */
	burm_nts_6,	/* 13 */
	burm_nts_4,	/* 14 */
	burm_nts_6,	/* 15 */
	burm_nts_5,	/* 16 */
	burm_nts_4,	/* 17 */
	burm_nts_5,	/* 18 */
	burm_nts_6,	/* 19 */
	burm_nts_4,	/* 20 */
	burm_nts_5,	/* 21 */
	burm_nts_6,	/* 22 */
	burm_nts_2,	/* 23 */
	burm_nts_7,	/* 24 */
	burm_nts_7,	/* 25 */
	burm_nts_7,	/* 26 */
	burm_nts_7,	/* 27 */
	burm_nts_3,	/* 28 */
	burm_nts_2,	/* 29 */
	burm_nts_7,	/* 30 */
	burm_nts_3,	/* 31 */
	burm_nts_2,	/* 32 */
	burm_nts_7,	/* 33 */
	burm_nts_7,	/* 34 */
	burm_nts_7,	/* 35 */
	burm_nts_3,	/* 36 */
	burm_nts_2,	/* 37 */
	burm_nts_7,	/* 38 */
	burm_nts_7,	/* 39 */
	burm_nts_8,	/* 40 */
	burm_nts_8,	/* 41 */
	burm_nts_8,	/* 42 */
	burm_nts_3,	/* 43 */
};

char burm_arity[] = {
	1,	/* 0=OP_RETURN */
	2,	/* 1=OP_ADD */
	2,	/* 2=OP_SUB */
	2,	/* 3=OP_MUL */
	2,	/* 4=OP_AND */
	2,	/* 5=OP_LESS */
	2,	/* 6=OP_EQUAL */
	0,	/* 7=OP_NUM */
	0,	/* 8=OP_THIS */
	0,	/* 9=OP_ID */
	1,	/* 10=OP_NOT */
	0,	/* 11=OP_PARAM_ID */
	0,	/* 12=OP_OBJ_VAR_ID */
	2,	/* 13=OP_ASSIGN */
};

static short burm_decode_stat[] = {
	0,
	1,
	2,
};

static short burm_decode_ret[] = {
	0,
	3,
};

static short burm_decode_assign[] = {
	0,
	28,
	29,
	30,
	31,
	32,
	33,
	34,
	35,
	36,
	37,
	38,
};

static short burm_decode_expr[] = {
	0,
	4,
	5,
	6,
	7,
	8,
	9,
	10,
	11,
	12,
	13,
	14,
	15,
	16,
	17,
	18,
	19,
	20,
	21,
	22,
	23,
	24,
	25,
	26,
	27,
};

static short burm_decode_const[] = {
	0,
	39,
	40,
	41,
	42,
	43,
};

int burm_rule(STATEPTR_TYPE state, int goalnt) {
	burm_assert(goalnt >= 1 && goalnt <= 5, PANIC("Bad goal nonterminal %d in burm_rule\n", goalnt));
	if (!state)
		return 0;
	switch (goalnt) {
	case burm_stat_NT:
		return burm_decode_stat[state->rule.burm_stat];
	case burm_ret_NT:
		return burm_decode_ret[state->rule.burm_ret];
	case burm_assign_NT:
		return burm_decode_assign[state->rule.burm_assign];
	case burm_expr_NT:
		return burm_decode_expr[state->rule.burm_expr];
	case burm_const_NT:
		return burm_decode_const[state->rule.burm_const];
	default:
		burm_assert(0, PANIC("Bad goal nonterminal %d in burm_rule\n", goalnt));
	}
	return 0;
}

static void burm_closure_ret(STATEPTR_TYPE, int);
static void burm_closure_assign(STATEPTR_TYPE, int);
static void burm_closure_const(STATEPTR_TYPE, int);

static void burm_closure_ret(STATEPTR_TYPE p, int c) {
	if (c + 0 < p->cost[burm_stat_NT]) {
		p->cost[burm_stat_NT] = c + 0;
		p->rule.burm_stat = 1;
	}
}

static void burm_closure_assign(STATEPTR_TYPE p, int c) {
	if (c + 0 < p->cost[burm_stat_NT]) {
		p->cost[burm_stat_NT] = c + 0;
		p->rule.burm_stat = 2;
	}
}

static void burm_closure_const(STATEPTR_TYPE p, int c) {
	if (c + 1 < p->cost[burm_expr_NT]) {
		p->cost[burm_expr_NT] = c + 1;
		p->rule.burm_expr = 1;
	}
}

STATEPTR_TYPE burm_state(int op, STATEPTR_TYPE left, STATEPTR_TYPE right) {
	int c;
	STATEPTR_TYPE p, l = left, r = right;

	if (burm_arity[op] > 0) {
		p = (STATEPTR_TYPE)ALLOC(sizeof *p);
		burm_assert(p, PANIC("ALLOC returned NULL in burm_state\n"));
		p->op = op;
		p->left = l;
		p->right = r;
		p->rule.burm_stat = 0;
		p->cost[1] =
		p->cost[2] =
		p->cost[3] =
		p->cost[4] =
		p->cost[5] =
			32767;
	}
	switch (op) {
	case 0: /* OP_RETURN */
		assert(l);
		{	/* ret: OP_RETURN(expr) */
			c = l->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_ret_NT]) {
				p->cost[burm_ret_NT] = c + 0;
				p->rule.burm_ret = 1;
				burm_closure_ret(p, c + 0);
			}
		}
		break;
	case 1: /* OP_ADD */
		assert(l && r);
		{	/* expr: OP_ADD(expr,const) */
			c = l->cost[burm_expr_NT] + r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 4;
			}
		}
		{	/* expr: OP_ADD(const,expr) */
			c = l->cost[burm_const_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 3;
			}
		}
		{	/* expr: OP_ADD(expr,expr) */
			c = l->cost[burm_expr_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 2;
			}
		}
		break;
	case 2: /* OP_SUB */
		assert(l && r);
		{	/* expr: OP_SUB(const,expr) */
			c = l->cost[burm_const_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 13;
			}
		}
		{	/* expr: OP_SUB(expr,const) */
			c = l->cost[burm_expr_NT] + r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 12;
			}
		}
		{	/* expr: OP_SUB(expr,expr) */
			c = l->cost[burm_expr_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 11;
			}
		}
		break;
	case 3: /* OP_MUL */
		assert(l && r);
		{	/* expr: OP_MUL(expr,const) */
			c = l->cost[burm_expr_NT] + r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 7;
			}
		}
		{	/* expr: OP_MUL(const,expr) */
			c = l->cost[burm_const_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 6;
			}
		}
		{	/* expr: OP_MUL(expr,expr) */
			c = l->cost[burm_expr_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 5;
			}
		}
		break;
	case 4: /* OP_AND */
		assert(l && r);
		{	/* const: OP_AND(const,const) */
			c = l->cost[burm_const_NT] + r->cost[burm_const_NT] + 0;
			if (c + 0 < p->cost[burm_const_NT]) {
				p->cost[burm_const_NT] = c + 0;
				p->rule.burm_const = 2;
				burm_closure_const(p, c + 0);
			}
		}
		{	/* expr: OP_AND(expr,const) */
			c = l->cost[burm_expr_NT] + r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 10;
			}
		}
		{	/* expr: OP_AND(const,expr) */
			c = l->cost[burm_const_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 9;
			}
		}
		{	/* expr: OP_AND(expr,expr) */
			c = l->cost[burm_expr_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 8;
			}
		}
		break;
	case 5: /* OP_LESS */
		assert(l && r);
		{	/* const: OP_LESS(const,const) */
			c = l->cost[burm_const_NT] + r->cost[burm_const_NT] + 0;
			if (c + 0 < p->cost[burm_const_NT]) {
				p->cost[burm_const_NT] = c + 0;
				p->rule.burm_const = 3;
				burm_closure_const(p, c + 0);
			}
		}
		{	/* expr: OP_LESS(expr,const) */
			c = l->cost[burm_expr_NT] + r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 16;
			}
		}
		{	/* expr: OP_LESS(const,expr) */
			c = l->cost[burm_const_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 15;
			}
		}
		{	/* expr: OP_LESS(expr,expr) */
			c = l->cost[burm_expr_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 14;
			}
		}
		break;
	case 6: /* OP_EQUAL */
		assert(l && r);
		{	/* const: OP_EQUAL(const,const) */
			c = l->cost[burm_const_NT] + r->cost[burm_const_NT] + 0;
			if (c + 0 < p->cost[burm_const_NT]) {
				p->cost[burm_const_NT] = c + 0;
				p->rule.burm_const = 4;
				burm_closure_const(p, c + 0);
			}
		}
		{	/* expr: OP_EQUAL(expr,const) */
			c = l->cost[burm_expr_NT] + r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 19;
			}
		}
		{	/* expr: OP_EQUAL(const,expr) */
			c = l->cost[burm_const_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 18;
			}
		}
		{	/* expr: OP_EQUAL(expr,expr) */
			c = l->cost[burm_expr_NT] + r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 17;
			}
		}
		break;
	case 7: /* OP_NUM */
		{
			static struct burm_state z = { 7, 0, 0,
				{	0,
					32767,
					32767,
					32767,
					1,	/* expr: const */
					0,	/* const: OP_NUM */
				},{
					0,
					0,
					0,
					1,	/* expr: const */
					1,	/* const: OP_NUM */
				}
			};
			return &z;
		}
	case 8: /* OP_THIS */
		{
			static struct burm_state z = { 8, 0, 0,
				{	0,
					32767,
					32767,
					32767,
					1,	/* expr: OP_THIS */
					32767,
				},{
					0,
					0,
					0,
					24,	/* expr: OP_THIS */
					0,
				}
			};
			return &z;
		}
	case 9: /* OP_ID */
		{
			static struct burm_state z = { 9, 0, 0,
				{	0,
					32767,
					32767,
					32767,
					1,	/* expr: OP_ID */
					32767,
				},{
					0,
					0,
					0,
					23,	/* expr: OP_ID */
					0,
				}
			};
			return &z;
		}
	case 10: /* OP_NOT */
		assert(l);
		{	/* const: OP_NOT(const) */
			c = l->cost[burm_const_NT] + 0;
			if (c + 0 < p->cost[burm_const_NT]) {
				p->cost[burm_const_NT] = c + 0;
				p->rule.burm_const = 5;
				burm_closure_const(p, c + 0);
			}
		}
		{	/* expr: OP_NOT(expr) */
			c = l->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_expr_NT]) {
				p->cost[burm_expr_NT] = c + 0;
				p->rule.burm_expr = 20;
			}
		}
		break;
	case 11: /* OP_PARAM_ID */
		{
			static struct burm_state z = { 11, 0, 0,
				{	0,
					32767,
					32767,
					32767,
					1,	/* expr: OP_PARAM_ID */
					32767,
				},{
					0,
					0,
					0,
					21,	/* expr: OP_PARAM_ID */
					0,
				}
			};
			return &z;
		}
	case 12: /* OP_OBJ_VAR_ID */
		{
			static struct burm_state z = { 12, 0, 0,
				{	0,
					32767,
					32767,
					32767,
					1,	/* expr: OP_OBJ_VAR_ID */
					32767,
				},{
					0,
					0,
					0,
					22,	/* expr: OP_OBJ_VAR_ID */
					0,
				}
			};
			return &z;
		}
	case 13: /* OP_ASSIGN */
		assert(l && r);
		if (	/* assign: OP_ASSIGN(OP_OBJ_VAR_ID,OP_PARAM_ID) */
			l->op == 12 && /* OP_OBJ_VAR_ID */
			r->op == 11 /* OP_PARAM_ID */
		) {
			c = 1;
			if (c + 0 < p->cost[burm_assign_NT]) {
				p->cost[burm_assign_NT] = c + 0;
				p->rule.burm_assign = 11;
				burm_closure_assign(p, c + 0);
			}
		}
		if (	/* assign: OP_ASSIGN(OP_OBJ_VAR_ID,expr) */
			l->op == 12 /* OP_OBJ_VAR_ID */
		) {
			c = r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_assign_NT]) {
				p->cost[burm_assign_NT] = c + 0;
				p->rule.burm_assign = 10;
				burm_closure_assign(p, c + 0);
			}
		}
		if (	/* assign: OP_ASSIGN(OP_OBJ_VAR_ID,const) */
			l->op == 12 /* OP_OBJ_VAR_ID */
		) {
			c = r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_assign_NT]) {
				p->cost[burm_assign_NT] = c + 0;
				p->rule.burm_assign = 9;
				burm_closure_assign(p, c + 0);
			}
		}
		if (	/* assign: OP_ASSIGN(OP_PARAM_ID,OP_OBJ_VAR_ID) */
			l->op == 11 && /* OP_PARAM_ID */
			r->op == 12 /* OP_OBJ_VAR_ID */
		) {
			c = 1;
			if (c + 0 < p->cost[burm_assign_NT]) {
				p->cost[burm_assign_NT] = c + 0;
				p->rule.burm_assign = 8;
				burm_closure_assign(p, c + 0);
			}
		}
		if (	/* assign: OP_ASSIGN(OP_PARAM_ID,OP_PARAM_ID) */
			l->op == 11 && /* OP_PARAM_ID */
			r->op == 11 /* OP_PARAM_ID */
		) {
			c = 1;
			if (c + 0 < p->cost[burm_assign_NT]) {
				p->cost[burm_assign_NT] = c + 0;
				p->rule.burm_assign = 7;
				burm_closure_assign(p, c + 0);
			}
		}
		if (	/* assign: OP_ASSIGN(OP_PARAM_ID,OP_ID) */
			l->op == 11 && /* OP_PARAM_ID */
			r->op == 9 /* OP_ID */
		) {
			c = 1;
			if (c + 0 < p->cost[burm_assign_NT]) {
				p->cost[burm_assign_NT] = c + 0;
				p->rule.burm_assign = 6;
				burm_closure_assign(p, c + 0);
			}
		}
		if (	/* assign: OP_ASSIGN(OP_PARAM_ID,expr) */
			l->op == 11 /* OP_PARAM_ID */
		) {
			c = r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_assign_NT]) {
				p->cost[burm_assign_NT] = c + 0;
				p->rule.burm_assign = 5;
				burm_closure_assign(p, c + 0);
			}
		}
		if (	/* assign: OP_ASSIGN(OP_PARAM_ID,const) */
			l->op == 11 /* OP_PARAM_ID */
		) {
			c = r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_assign_NT]) {
				p->cost[burm_assign_NT] = c + 0;
				p->rule.burm_assign = 4;
				burm_closure_assign(p, c + 0);
			}
		}
		if (	/* assign: OP_ASSIGN(OP_ID,OP_PARAM_ID) */
			l->op == 9 && /* OP_ID */
			r->op == 11 /* OP_PARAM_ID */
		) {
			c = 1;
			if (c + 0 < p->cost[burm_assign_NT]) {
				p->cost[burm_assign_NT] = c + 0;
				p->rule.burm_assign = 3;
				burm_closure_assign(p, c + 0);
			}
		}
		if (	/* assign: OP_ASSIGN(OP_ID,expr) */
			l->op == 9 /* OP_ID */
		) {
			c = r->cost[burm_expr_NT] + 1;
			if (c + 0 < p->cost[burm_assign_NT]) {
				p->cost[burm_assign_NT] = c + 0;
				p->rule.burm_assign = 2;
				burm_closure_assign(p, c + 0);
			}
		}
		if (	/* assign: OP_ASSIGN(OP_ID,const) */
			l->op == 9 /* OP_ID */
		) {
			c = r->cost[burm_const_NT] + 1;
			if (c + 0 < p->cost[burm_assign_NT]) {
				p->cost[burm_assign_NT] = c + 0;
				p->rule.burm_assign = 1;
				burm_closure_assign(p, c + 0);
			}
		}
		break;
	default:
		burm_assert(0, PANIC("Bad operator %d in burm_state\n", op));
	}
	return p;
}

#ifdef STATE_LABEL
static void burm_label1(NODEPTR_TYPE p) {
	burm_assert(p, PANIC("NULL tree in burm_label\n"));
	switch (burm_arity[OP_LABEL(p)]) {
	case 0:
		STATE_LABEL(p) = burm_state(OP_LABEL(p), 0, 0);
		break;
	case 1:
		burm_label1(LEFT_CHILD(p));
		STATE_LABEL(p) = burm_state(OP_LABEL(p),
			STATE_LABEL(LEFT_CHILD(p)), 0);
		break;
	case 2:
		burm_label1(LEFT_CHILD(p));
		burm_label1(RIGHT_CHILD(p));
		STATE_LABEL(p) = burm_state(OP_LABEL(p),
			STATE_LABEL(LEFT_CHILD(p)),
			STATE_LABEL(RIGHT_CHILD(p)));
		break;
	}
}

STATEPTR_TYPE burm_label(NODEPTR_TYPE p) {
	burm_label1(p);
	return STATE_LABEL(p)->rule.burm_stat ? STATE_LABEL(p) : 0;
}

NODEPTR_TYPE *burm_kids(NODEPTR_TYPE p, int eruleno, NODEPTR_TYPE kids[]) {
	burm_assert(p, PANIC("NULL tree in burm_kids\n"));
	burm_assert(kids, PANIC("NULL kids in burm_kids\n"));
	switch (eruleno) {
	case 4: /* expr: const */
	case 2: /* stat: assign */
	case 1: /* stat: ret */
		kids[0] = p;
		break;
	case 43: /* const: OP_NOT(const) */
	case 23: /* expr: OP_NOT(expr) */
	case 3: /* ret: OP_RETURN(expr) */
		kids[0] = LEFT_CHILD(p);
		break;
	case 42: /* const: OP_EQUAL(const,const) */
	case 41: /* const: OP_LESS(const,const) */
	case 40: /* const: OP_AND(const,const) */
	case 22: /* expr: OP_EQUAL(expr,const) */
	case 21: /* expr: OP_EQUAL(const,expr) */
	case 20: /* expr: OP_EQUAL(expr,expr) */
	case 19: /* expr: OP_LESS(expr,const) */
	case 18: /* expr: OP_LESS(const,expr) */
	case 17: /* expr: OP_LESS(expr,expr) */
	case 16: /* expr: OP_SUB(const,expr) */
	case 15: /* expr: OP_SUB(expr,const) */
	case 14: /* expr: OP_SUB(expr,expr) */
	case 13: /* expr: OP_AND(expr,const) */
	case 12: /* expr: OP_AND(const,expr) */
	case 11: /* expr: OP_AND(expr,expr) */
	case 10: /* expr: OP_MUL(expr,const) */
	case 9: /* expr: OP_MUL(const,expr) */
	case 8: /* expr: OP_MUL(expr,expr) */
	case 7: /* expr: OP_ADD(expr,const) */
	case 6: /* expr: OP_ADD(const,expr) */
	case 5: /* expr: OP_ADD(expr,expr) */
		kids[0] = LEFT_CHILD(p);
		kids[1] = RIGHT_CHILD(p);
		break;
	case 39: /* const: OP_NUM */
	case 38: /* assign: OP_ASSIGN(OP_OBJ_VAR_ID,OP_PARAM_ID) */
	case 35: /* assign: OP_ASSIGN(OP_PARAM_ID,OP_OBJ_VAR_ID) */
	case 34: /* assign: OP_ASSIGN(OP_PARAM_ID,OP_PARAM_ID) */
	case 33: /* assign: OP_ASSIGN(OP_PARAM_ID,OP_ID) */
	case 30: /* assign: OP_ASSIGN(OP_ID,OP_PARAM_ID) */
	case 27: /* expr: OP_THIS */
	case 26: /* expr: OP_ID */
	case 25: /* expr: OP_OBJ_VAR_ID */
	case 24: /* expr: OP_PARAM_ID */
		break;
	case 37: /* assign: OP_ASSIGN(OP_OBJ_VAR_ID,expr) */
	case 36: /* assign: OP_ASSIGN(OP_OBJ_VAR_ID,const) */
	case 32: /* assign: OP_ASSIGN(OP_PARAM_ID,expr) */
	case 31: /* assign: OP_ASSIGN(OP_PARAM_ID,const) */
	case 29: /* assign: OP_ASSIGN(OP_ID,expr) */
	case 28: /* assign: OP_ASSIGN(OP_ID,const) */
		kids[0] = RIGHT_CHILD(p);
		break;
	default:
		burm_assert(0, PANIC("Bad external rule number %d in burm_kids\n", eruleno));
	}
	return kids;
}

int burm_op_label(NODEPTR_TYPE p) {
	burm_assert(p, PANIC("NULL tree in burm_op_label\n"));
	return OP_LABEL(p);
}

STATEPTR_TYPE burm_state_label(NODEPTR_TYPE p) {
	burm_assert(p, PANIC("NULL tree in burm_state_label\n"));
	return STATE_LABEL(p);
}

NODEPTR_TYPE burm_child(NODEPTR_TYPE p, int index) {
	burm_assert(p, PANIC("NULL tree in burm_child\n"));
	switch (index) {
	case 0:	return LEFT_CHILD(p);
	case 1:	return RIGHT_CHILD(p);
	}
	burm_assert(0, PANIC("Bad index %d in burm_child\n", index));
	return 0;
}

#endif
void burm_reduce(NODEPTR_TYPE bnode, int goalnt)
{
  int ruleNo = burm_rule (STATE_LABEL(bnode), goalnt);
  short *nts = burm_nts[ruleNo];
  NODEPTR_TYPE kids[100];
  int i;

  if (ruleNo==0) {
    fprintf(stderr, "tree cannot be derived from start symbol");
    exit(1);
  }
  burm_kids (bnode, ruleNo, kids);
  for (i = 0; nts[i]; i++)
    burm_reduce (kids[i], nts[i]);    /* reduce kids */

#if DEBUG
  printf ("%s", burm_string[ruleNo]);  /* display rule */
#endif

  switch (ruleNo) {
  case 1:

    break;
  case 2:

    break;
  case 3:
 asm_return_val_expr(bnode->reg);
    break;
  case 4:
 asm_move_val(bnode->val, bnode->reg);
    break;
  case 5:
 asm_add(bnode->kids[1]->reg, bnode->kids[0]->reg);
    break;
  case 6:
 asm_add_val(bnode->kids[0]->val,bnode->kids[1]->reg); asm_move_from_to(bnode->kids[1]->reg, bnode->reg);
    break;
  case 7:
 asm_add_val(bnode->kids[1]->val,bnode->kids[0]->reg);
    break;
  case 8:
 asm_mul(bnode->kids[1]->reg, bnode->kids[0]->reg);
    break;
  case 9:
 asm_mul_val(bnode->kids[0]->val, bnode->kids[1]->reg); asm_move_from_to(bnode->kids[1]->reg, bnode->reg);
    break;
  case 10:
 asm_mul_val(bnode->kids[1]->val, bnode->kids[0]->reg);
    break;
  case 11:
 asm_and(bnode->kids[1]->reg, bnode->kids[0]->reg);
    break;
  case 12:
 asm_and_val(bnode->kids[0]->val, bnode->kids[1]->reg); asm_move_from_to(bnode->kids[1]->reg, bnode->reg);
    break;
  case 13:
 asm_and_val(bnode->kids[1]->val, bnode->kids[0]->reg);
    break;
  case 14:
 asm_sub(bnode->kids[1]->reg,bnode->kids[0]->reg);
    break;
  case 15:
 asm_sub_val_1(bnode->kids[1]->val, bnode->kids[0]->reg); asm_move_from_to(bnode->kids[0]->reg, bnode->reg);
    break;
  case 16:
 asm_sub_val_2(bnode->kids[1]->reg, bnode->kids[0]->val); asm_move_from_to(bnode->kids[1]->reg, bnode->reg);
    break;
  case 17:
 asm_less(bnode->kids[0]->reg, bnode->kids[1]->reg, bnode->reg);
    break;
  case 18:
 asm_less_val_1(bnode->kids[0]->val, bnode->kids[1]->reg, bnode->reg);
    break;
  case 19:
 asm_less_val_2(bnode->kids[0]->reg, bnode->kids[1]->val, bnode->reg);
    break;
  case 20:
 asm_equal(bnode->kids[0]->reg, bnode->kids[1]->reg, bnode->reg);
    break;
  case 21:
 asm_equal_val(bnode->kids[0]->val, bnode->kids[1]->reg, bnode->reg);
    break;
  case 22:
 asm_equal_val(bnode->kids[1]->val, bnode->kids[0]->reg, bnode->reg);
    break;
  case 23:
 asm_not(bnode->reg);
    break;
  case 24:
 if (bnode->index != -1) asm_move_from_to(get_parameter_reg(bnode->index), bnode->reg);
    break;
  case 25:
 if (bnode->index != -1) asm_move_from_obj_var(bnode->index, bnode->reg);
    break;
  case 26:
 if (bnode->index != -1) asm_move_from_stack(bnode->index, bnode->reg);
    break;
  case 27:
 asm_move_from_to("rdi", bnode->reg);
    break;
  case 28:
 asm_move_val_to_stack(bnode->kids[1]->val, bnode->kids[0]->index);
    break;
  case 29:
 asm_mov_reg_to_stack(bnode->kids[1]->reg, bnode->kids[0]->index);
    break;
  case 30:
 asm_mov_reg_to_stack(get_parameter_reg(bnode->kids[1]->index), bnode->kids[0]->index);
    break;
  case 31:
 asm_move_val(bnode->kids[1]->val, get_parameter_reg(bnode->kids[0]->index));
    break;
  case 32:
 asm_move_from_to(bnode->kids[1]->reg, get_parameter_reg(bnode->kids[0]->index));
    break;
  case 33:
 asm_move_from_stack(bnode->kids[1]->index, get_parameter_reg(bnode->kids[0]->index));
    break;
  case 34:
 asm_move_from_to(get_parameter_reg(bnode->kids[1]->index), get_parameter_reg(bnode->kids[0]->index));
    break;
  case 35:
 asm_move_from_obj_var(bnode->kids[1]->index, get_parameter_reg(bnode->kids[0]->index));
    break;
  case 36:
 asm_move_val_to_obj_var(bnode->kids[0]->index, bnode->kids[1]->val);
    break;
  case 37:
 asm_move_reg_to_obj_var(bnode->kids[0]->index, bnode->kids[1]->reg);
    break;
  case 38:
 asm_move_reg_to_obj_var(bnode->kids[0]->index, get_parameter_reg(bnode->kids[1]->index));
    break;
  case 39:

    break;
  case 40:
 bnode->val = bnode->kids[0]->val & bnode->kids[1]->val;
    break;
  case 41:
 bnode->val = bnode->kids[0]->val < bnode->kids[1]->val ? -1 : 0;
    break;
  case 42:
 bnode->val = bnode->kids[0]->val == bnode->kids[1]->val ? -1 : 0;
    break;
  case 43:
 bnode->val = ~bnode->kids[0]->val;
    break;
  default:    assert (0);
  }
}

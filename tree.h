#include "list.h"
typedef struct burm_state *STATEPTR_TYPE; 

typedef enum  {
    OP_RETURN = 0,
    OP_ADD,
    OP_SUB,
    OP_MUL,
    OP_AND,
    OP_LESS,
    OP_EQUAL,
    OP_NUM,
    OP_THIS,
    OP_ID,
    OP_NOT,
    OP_PARAM_ID,
    OP_OBJ_VAR_ID,
    OP_ASSIGN
} operator_t;

typedef struct tree_t
{
    int op;
    struct tree_t *kids[2];
    STATEPTR_TYPE state;

    char *identifier;
    long val;
    int index;
    char *reg;
} tree_t;

typedef tree_t *NODEPTR_TYPE;

#define OP_LABEL(p) ((p)->op)
#define LEFT_CHILD(p) ((p)->kids[0])
#define RIGHT_CHILD(p) ((p)->kids[1])
#define STATE_LABEL(p) ((p)->state)
#define PANIC printf

tree_t *new_node(operator_t op, tree_t *left, tree_t *right);
tree_t *new_leaf_id_var(node_t *list ,char *name);
tree_t *new_leaf_num(long val);
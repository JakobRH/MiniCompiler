#include <stdlib.h>
#include <stdio.h>

#include "tree.h"

tree_t *new_node(operator_t op, tree_t *left, tree_t *right) {
    tree_t *node = (tree_t *) malloc(sizeof(tree_t));

    node->op = op;
    node->kids[0] = left;
    node->kids[1] = right;    
    node->identifier = (char *) NULL;

    return node;
}

tree_t *new_leaf_id_var(node_t *list ,char *name){

    int type = get_type(list, name);

    if(type == -1) return NULL;

    tree_t *node = (tree_t *) malloc(sizeof(tree_t));


    switch(type) {
        case VARIABLE_T: 
            node->op = OP_ID;
            node->index = get_index(list, name, type);
        break;
        case OBJ_VARIABLE_T: 
            node->op = OP_OBJ_VAR_ID;
            node->index = get_index(list, name, type);
        break;
        case PARAMETER_T: 
            node->op = OP_PARAM_ID;
            node->index = 1+get_index(list, name, type);
        break;
	    
	    default: break;
    }

    node->kids[0] = (tree_t *) NULL;
    node->kids[1] = (tree_t *) NULL;    
    node->identifier = name;
    
    

    return node;

}
tree_t *new_leaf_num(long val) {
    tree_t *node = (tree_t *) malloc(sizeof(tree_t));

    node->op = OP_NUM;
    node->kids[0] = (tree_t *) NULL;
    node->kids[1] = (tree_t *) NULL;    
    node->val = val;

    return node;
}
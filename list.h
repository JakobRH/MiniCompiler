#ifndef list_h
#define list_h

#define INTERFACE_T 0
#define CLASS_T 1
#define METHOD_T 2
#define VARIABLE_T 3
#define OBJ_VARIABLE_T 4
#define PARAMETER_T 5


typedef struct node_t{
	char *name;
	short type;
	struct node_t *next;
} node_t;


node_t* new_list();
node_t* merge(node_t* list1, node_t* list2);
node_t* append(node_t* list, char* name, short labele);
void is_visible(node_t* list, char* name, short label);
void is_visible_var(node_t* list, char* name);
node_t* duplicate_list(node_t* list);
void print_list(node_t* list);
node_t* append_ignore_dup(node_t* list, char* name, short type);
int get_index(node_t *list,  char *name, int type);
int get_type(node_t *list ,char *name);
#endif
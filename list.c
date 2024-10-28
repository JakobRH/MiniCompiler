#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "list.h"

node_t *new_list() {
    return (node_t*) NULL;
}

node_t* append(node_t* list, char* name, short type){
	
	node_t *temp,*temp2;
	node_t *node;
	
	temp = list;
	temp2 = list;

	if(temp == NULL){
		temp = (node_t*) malloc (sizeof(node_t));
		temp->name = strdup(name);
		temp->type = type;
		temp->next = NULL;
		return temp;
	}

	if(strcmp(temp->name, name) == 0){
		
		fprintf(stderr, "Error in Static Analysis! \n");
		exit(3);
	}
	
	temp2 = temp->next;
		
	while(temp2 != NULL){
		if(strcmp(temp2->name, name) == 0){
			fprintf(stderr, "Error in Static Analysis! \n");
			exit(3);
			
		}
		temp = temp->next;
		temp2 = temp2->next;
	}

	node = (node_t*) malloc(sizeof(node_t));
	node->name = strdup(name);
	node->type = type;
	node->next = NULL;
	temp->next = node; 

	return list;
}

node_t* append_ignore_dup(node_t* list, char* name, short type){

	int ignore = 1;
	node_t *temp,*temp2;
	node_t *node;
	
	temp = list;
	temp2 = list;
	if(temp == NULL){
		temp = (node_t*) malloc (sizeof(node_t));
		temp->name = strdup(name);
		temp->type = type;
		temp->next = NULL;
		return temp;
	}
	temp2 = temp->next;
		
	while(temp2 != NULL){
		if(strcmp(temp2->name, name) == 0){
			ignore = 0;
			
		}
		temp = temp->next;
		temp2 = temp2->next;
	}

	if(ignore){
		node = (node_t*) malloc(sizeof(node_t));
		node->name = strdup(name);
		node->type = type;
		node->next = NULL;
		temp->next = node; 
	}
	return list;
}


node_t* merge(node_t* list1, node_t* list2){

	node_t* new_list = duplicate_list(list1);
	node_t* temp2 = list2;

	while(temp2 != NULL){

		new_list = append(new_list, temp2->name, temp2->type);
		temp2 = temp2->next;

	}
	
	return new_list;
}

void is_visible(node_t* list, char* name, short type){
	node_t * node = list;
	short error = 1;
	if(node == NULL){
		fprintf(stderr, "Error in Static Analysis! \n");
		
		exit(3);
	}
	while(node != NULL){
		if(strcmp(node->name, name) == 0 && node->type == type){
			error = 0;
		}
		node = node->next;
	}
	
	if(error != 0){
		fprintf(stderr, "Error in Static Analysis! \n");
		exit(3);
	}
}
void is_visible_var(node_t* list, char* name){
	node_t * node = list;
	short error = 1;
	if(node == NULL){
		fprintf(stderr, "Error in Static Analysis! \n");
		
		exit(3);
	}
	while(node != NULL){
		if(strcmp(node->name, name) == 0 && (node->type == VARIABLE_T || node->type == OBJ_VARIABLE_T || node->type == PARAMETER_T)){
			error = 0;
		}
		node = node->next;
	}
	
	if(error != 0){
		fprintf(stderr, "Error in Static Analysis! \n");
		exit(3);
	}
}

node_t* duplicate_list(node_t* list){

	node_t* result = new_list();
	node_t* temp = list;

	if(list == NULL){
		return result;
	}

	while(temp != NULL){

		result = append(result, temp->name, temp->type);
		temp = temp->next;
	}

	return result;
}

void print_list(node_t* list){

	node_t* temp = list;

	while(temp != NULL){
		printf("%s %d\n", temp->name,temp->type);
		temp = temp->next;
	}

	printf("=======\n");
}

int get_index(node_t * list,  char *name, int type) {
    
    node_t *temp = list;

    int index = 0;

    while (temp != NULL) {
        if (temp->type == type) {
         
            if (strcmp(temp->name, name) == 0) {
                return index;
            }

            index++;
        }

        temp = temp->next;
    }

    return -1;
}

int get_type(node_t *list ,char *name){

	node_t *temp = list;

    while (temp != NULL) {
         
            if (strcmp(temp->name, name) == 0) {
                return temp->type;
            }

        temp = temp->next;
    }

    return -1;
}

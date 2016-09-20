#include "mylist.h"

/* 
 Creates a new node with elem and adds it to head. DO NOT add a NULL 
 elem.
 DOES NOT PARSE
*/
void add_elem(void* elem, struct s_node** head){
	struct s_node* new_Node; 

	if (elem != NULL && head != NULL) {
		new_Node = new_node(elem, *head, NULL);
		add_node(new_Node, head);
	}

}
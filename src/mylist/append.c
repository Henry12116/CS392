#include "mylist.h"

/*
 Adds a node to the end of a list. DO NOT add a NULL pointer or
 a node with a NULL elem.
 Parse once
*/
void append(struct s_node* node, struct s_node** head){
	struct s_node* next_Node;
	struct s_node* prev_Node;

	if (head != NULL && node != NULL && *head != NULL){
		prev_Node = *head;
		next_Node = *head;

		while (next_Node != NULL){
			prev_Node = next_Node;
			next_Node = next_Node->next;
		}

		if (prev_Node != NULL) prev_Node->next = node;
		else (*head)->next = node;
	}
}
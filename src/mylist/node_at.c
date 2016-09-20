#include "mylist.h"

/*
 Returns a pointer to the node at index n or the last node.
 Parse once
*/
struct s_node* node_at(struct s_node* head, int n){
	struct s_node* next_Node = NULL;

	if (head != NULL){
		next_Node = head;

		while (next_Node->next != NULL && n >= 1){
			next_Node = next_Node->next;
			n--;
		}
	}
	return next_Node;
}
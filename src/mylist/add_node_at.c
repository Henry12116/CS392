#include "mylist.h"

/*
 Adds a node at index n of a list or at the end of the list if n is 
 too large.
 Parse once
*/
void add_node_at(struct s_node* node, struct s_node** head, int n){
	struct s_node* next_Node;

	if (head != NULL && node != NULL) {
		if (n == 0 || *head == NULL) add_node(node, head);
	

	else {
		next_Node = *head;
		n--;

		for ( ; n > 0 && next_Node->next != NULL; next_Node->next, n--);

		node->next = next_Node->next;
		next_Node->next = node;
		}
	}
}
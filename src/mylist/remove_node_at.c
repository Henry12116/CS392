#include "mylist.h"

/*
 Removes the node at index n or the last node.
 Parse once
*/
void* remove_node_at(struct s_node** head, int n){
	struct s_node* prev_Node;
	struct s_node* next_Node;
	void* return_Elem = NULL;

	if (head != NULL){
		if (n == 0)
			return_Elem = remove_node(head);
		else{
			next_Node = (*head)->next;

			while (n >= 1 && next_Node != NULL){
				prev_Node = next_Node;
				next_Node = next_Node->next;
				n--;
			}
			return_Elem = prev_Node->elem;
			prev_Node->next = next_Node;
		}
	}
	return return_Elem;
}
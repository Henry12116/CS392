#include "mylist.h"

/*
 Removes the last node from the list.
 Parse Once.
*/
void* remove_last(struct s_node** head){
	struct s_node* next_Node;
	void* return_Elem = NULL;

	if (head != NULL && *head != NULL){
		next_Node = *head;

		while (next_Node->next->next != NULL) next_Node = next_Node->next;

		return_Elem = next_Node->next->elem;
		next_Node->next = NULL;
	}
	return return_Elem;
}
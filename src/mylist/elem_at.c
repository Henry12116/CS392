#include "mylist.h"

/*
 Returns a pointer to the elem at index n or the last node.
 Parse once.
*/
void* elem_at(struct s_node* head, int n){
	void* return_Elem = NULL;
	struct s_node* count;

	if (head != NULL) {
		count = head;

		for( ; n > 0 && count->next != NULL; count = count->next, n--);
		return_Elem = count->elem;
	}
	return return_Elem;
}
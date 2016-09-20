#include "mylist.h"

/*
 Prints all the elems as chars separated by a space
*/
void traverse_char(struct s_node* head){
	struct s_node* next_Node = head;
	char* pntr;

	while (next_Node != NULL){
		if(next_Node->elem == NULL) my_str("NULL");
		else {
			pntr = (char*) next_Node->elem;
			my_char(*pntr);
		}
		my_str(" ");
		next_Node = next_Node->next;
	}
	my_char('\n');
}
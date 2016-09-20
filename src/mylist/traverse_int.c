#include "mylist.h"

/*
 Prints all the elems as ints separated by a space
*/
void traverse_int(struct s_node* head){
	struct s_node* next_Node = head;
	int* pntr;

	while (next_Node != NULL){
		if(next_Node->elem == NULL) my_str("NULL");
		else {
			pntr = (int*) next_Node->elem;
			my_int2(*pntr);
		}
		my_str(" ");
		next_Node = next_Node->next;
	} 
	my_char('\n');
}
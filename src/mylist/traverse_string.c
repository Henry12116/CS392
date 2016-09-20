#include "mylist.h"

/*
 Prints all the elems as strings separated by a space
*/
void traverse_string(struct s_node* head){
	struct s_node* next_Node = head;

	while (next_Node != NULL){
		if (next_Node->elem == NULL) my_str("NULL");
		else my_str(next_Node->elem);

		my_str(" ");
		next_Node = next_Node->next;
	} 
	my_char('\n');
}
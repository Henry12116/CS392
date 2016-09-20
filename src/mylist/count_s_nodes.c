#include "mylist.h"

/*
 Returns the value the length of the list
 Parse Once.
*/
int count_s_nodes(struct s_node* head){
	int n = 0;

	 if (head != NULL){
	 	struct s_node* next_Node = head;

	 	while(next_Node != NULL){
	 		next_Node = next_Node->next;
	 		n++;
	 	}
	 }
	 return n;
}
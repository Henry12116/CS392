#include "mylist.h"
/*
 Prints all the elems as ints separated by a space in the format
 (NULL <- Elem -> Next elem), ..., (Previous elem <- Elem -> NULL) 
*/
void debug_int(struct s_node* head){
    if (head){
        struct s_node* node = head;
        int first_node = 1;
        while (node){
        	if(first_node == 0) my_str(", ");

        	first_node = 0;
        	if(node->prev) print_int(node->prev);
        	else my_str("NULL");

        	my_str( " <- ");
        	if(node->elem) print_int(node);
        	else my_str("NULL");
        	
            my_str( " -> ");
        	if(node->next) print_int(node->next);
        	else my_str("NULL");

        	node = node->next;
        }
    }
}
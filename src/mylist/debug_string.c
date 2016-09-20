#include "mylist.h"
/*
 Prints all the elems as strings separated by a space in the format
 (NULL <- Elem -> Next elem), ..., (Previous elem <- Elem -> NULL) 
*/
void debug_string(struct s_node* head)
{
    if(head){
        struct s_node* node = head;
        int first_node = 1;
        while(node){
        	if(first_node==0) my_str(", ");

            my_char('(');
        	first_node = 0;
        	if(node->prev) my_str((char*) node->prev->elem);
        	else my_str("NULL");

        	my_str( " <- ");
        	if(node->elem) my_str((char*) node->elem);
        	else my_str("NULL");

        	my_str( " -> ");
        	if(node->next) my_str((char*) node->next->elem);
        	else my_str("NULL");
            my_char(')');
        	node = node->next;
        }
    }
}
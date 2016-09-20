#include "mylist.h"

/*
 Prints all the elems as strings separated by a space in the format
 (NULL <- Elem -> Next elem), ..., (Previous elem <- Elem -> NULL) 
*/
void debug_char(struct s_node* head){
    if (head){
        struct s_node* node = head;
        int first_node = 1;
        while(node){
            if(first_node == 0) my_str(", ");

            my_char('(');
            first_node = 0;
            if(node->prev) print_char(node->prev);
            else my_str("NULL");

            my_str( " <- ");
            if(node->elem) print_char(node);
            else my_str("NULL");
            my_str( " -> ");

            if(node->next) print_char(node->next);
            else my_str("NULL");
            my_char(')');

            node = node->next;
        }
    }
}
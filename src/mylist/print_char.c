#include "mylist.h"

/*
 Prints the elem of node as a char
*/
void print_char(struct s_node* node){
    if (node != NULL){	
    	if (node){
    		char* pntr = (char*) node->elem;
        	my_char(*pntr);
    	}
    }
}
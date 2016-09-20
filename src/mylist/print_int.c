#include "mylist.h"

/*
 Prints the elem of node as a int
*/
void print_int(struct s_node* node){
	if (node != NULL){
    	if (node){
    		int* pntr = (int*)node->elem;
    		my_int2(*pntr);
    	}
	}
}
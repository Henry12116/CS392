#include "mylist.h"

/* 
 Removes the first node from the list. Returns elem and frees the 
 node from memory.
 DOES NOT PARSE.
*/
void* remove_node(struct s_node** node){
	void* node_elem = NULL;
    struct s_node* head_next;

    if (node != NULL && *node != NULL){
        head_next = *node;
        node_elem = (*node)->elem;
        *node = head_next->next;
        free(head_next);
        head_next = NULL;
    }
    return node_elem;
}
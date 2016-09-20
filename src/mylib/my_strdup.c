#include "my.h"

char *my_strdup(char* x){
	//Allocates memory and copies string into that new memory; returns pointer to it
    char* dup = NULL;

    if(x != NULL){ 
        dup = malloc(my_strlen(x)); 
        my_strcpy(dup, x);
    }

    return dup;
}
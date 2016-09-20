#include "my.h"

char *my_strcat(char *a, char *b){
	//Sticks b onto the end of a, returning a; presupposes a has enough memory for both
    int i;
    int a_len = 0;
    int b_len = 0;
    
    if (a != NULL && b != NULL) { 
        a_len = my_strlen(a);
        b_len = my_strlen(b);

        for (i = 0; i < b_len; i++) {
            *(a + a_len + i) = *(b + i);
        }
    }
    return a;
}
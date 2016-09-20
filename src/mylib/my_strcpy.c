#include "my.h"

char *my_strcpy(char *a, char *b) {
    //Copies the characters from b into a (overwriting what's already in there)
    int i;
    int len;
    
    if (b != NULL && a != NULL) { 
        len = my_strlen(b);
        for (i = 0; i < len; i++) { 
            *(a + i) = *(b + i); 
        }
        *(a + i) = '\0';
    }
    return a;
}
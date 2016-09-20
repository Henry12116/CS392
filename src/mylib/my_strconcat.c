#include "my.h"

char *my_strconcat(char *a, char *b) {
    //Allocates new memory, puts concatenated strings in that new memory, and returns pointer to it
    int i;
    char* result;
    int a_len = 0;
    int b_len = 0;

    //E.C.
    if (a == NULL && b == NULL) {  
        return NULL;
    }
    if (a != NULL) {
        a_len = my_strlen(a);
    }
    if (b != NULL) {
        b_len = my_strlen(b);
    }

    result = malloc(a_len + b_len + 1);  
    for (i = 0; i < a_len; i++) {  
        *(result + i) = *(a + i);
    }
    for (; i < a_len + b_len; i++) {
        *(result + i) = *(b + i - a_len);
    }
    *(result + i) = '\0';
    return result;
}
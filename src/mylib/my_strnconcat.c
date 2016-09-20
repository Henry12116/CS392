#include "my.h"

char *my_strnconcat(char *a, char *b, unsigned int n) {
    //Allocates new memory, puts all of a and n chars of b into new memory, and returns pointer to it
    int i;
    int a_len = 0;
    int b_len = 0;
    char* result;

    //E.C.
    if (a == NULL && b == NULL) {
        return NULL;
    }
    if (a != NULL) {
        a_len = my_strlen(a);
    }
    if (b != NULL) {
        b_len = my_strlen(b);
        b_len = ((b_len < n)? b_len: n);
    }

    result = (char*) malloc(a_len + b_len + 1); 
    for (i = 0; i < a_len; i++) {
        *(result + i) = *(a + i);
    }
    for (; i < a_len + b_len; i++) {
        *(result + i) = *(b + i - a_len);
    }
    *(result + i) = '\0';
    return result;
}
#include "my.h"

int my_strcmp(char *a, char *b){
    // compares strings lexographically: if a and b are identical, return 0; if a < b lexographically, return negative number; else, return positive number
	int i;
    int min;
    int a_len;
    int b_len;
    int result;

    //E.C.
    if (a == NULL && b == NULL) {
        return 0;
    } else if (a == NULL && b != NULL) {
        return -1;
    } else if (a != NULL && b == NULL) {
        return 1;
    }


    a_len = my_strlen(a);
    b_len = my_strlen(b);
    min = ((a_len < b_len)? a_len: b_len); 
    result = 0;
    for (i = 0; i < min; i++) {
        result += *(a + i) - *(b + i);
        if (result != 0) {
            return result;
        }
    }
    if (a_len < b_len) {
        return -1;
    } else if (b_len < a_len) {
        return 1;
    } else
        return 0;
}
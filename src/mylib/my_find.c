#include "my.h"

int my_find(char* s, char c) {
/*Returns the index of a desired character within a string. Returns -1 if result is not found.*/
    int i = 0;
    if(!s) return -1;
    while (*(s + i) != '\0') {
        if (*(s + i) == c) {
            return i;
        }
        i++;
    }
    return -1;
}
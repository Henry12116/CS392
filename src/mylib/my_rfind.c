#include "my.h"

int my_rfind(char* s, char c) {
/*Returns the index of the desired character within a string from the left of the last occurance.*/
    int i = my_strlen(s) - 1;
    if(!s) return -1;
    while (i >= 0) {
        if (*(s + i) == c) {
            return i;
        }
        i--;
    }
    return -1;
}
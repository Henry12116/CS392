#include "my.h"

int my_strlen(char* str){
/*Returns the length of the string. Null strings return -1.*/
    int i = 0;

    if(!str) {
        return -1;
    }
    while(*(str + i) != '\0') {
        i++;
    }
    return i;
}
#include "my.h"

void my_str(char* s){
/*Prints a string!*/
    int i = 0;
    if(!s) return;
    while(*(s + i) != '\0'){
        my_char(*(s + i));
        i++;
    }
}
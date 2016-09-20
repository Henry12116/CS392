#include "my.h"

char* my_vect2str(char** x) {
    //Takes an array of strings; allocates a new string, copies each string from the array into new string separated by a single space, until NULL pointer to string is found; returns new string
    char* str;
    char** tmp;
    unsigned int stringlen;
    
    if (*x == NULL) {
        return "";
    }
    tmp = x;
    for (stringlen = 0; *x != NULL; x++)
        stringlen += (my_strlen(*x) + 1);
    stringlen--;
    str = (char*) malloc(stringlen * sizeof(char));
    str = "";
    for (x = tmp; *x != NULL; x++) {
        my_strcat(str, *x);
        my_strcat(str, " ");
    }
    str[stringlen] = '\0';
    return str;

}

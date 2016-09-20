#include "my.h"

char** my_str2vect(char* x) {
    //Takes a string, allocates a new array of strings, splits apart the input string x at each space character, and returns the newly allocated array of strings
    int i;
    int inst = 0;
    char** vect;
    char* tmp_str;
    int string_arr;

    if (x != NULL) {
        tmp_str = my_strdup(x);
        for (i = 0; tmp_str[i]; i++) {
            if ((tmp_str[i] == ' ' || tmp_str[i] == '\t') && i > 0 //replacing all empty spaces with null character
                    && tmp_str[i - 1] != ' ' && tmp_str[i - 1] != '\t'
                    && tmp_str[i - 1] != '\0') {
                tmp_str[i] = '\0';
                inst++;
            }
        }
        i--;
        if (tmp_str[i] != '\t' && tmp_str[i] != ' ' && tmp_str[i] != '\0') {
            inst++;
        }
        vect = (char**) malloc((inst + 1) * sizeof(char*));
        string_arr = inst - 1;
        inst = 0;
        for (i = 0; inst <= string_arr;) {
            while (tmp_str[i] == ' ' || tmp_str[i] == '\t')
                i++;
            vect[inst++] = my_strdup(tmp_str + i);
            i += (my_strlen(tmp_str + i) + 1);
        }
        vect[inst] = NULL;
        free(tmp_str);
    } else
        vect = NULL;
    return vect;
}
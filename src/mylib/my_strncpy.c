#include "my.h"

char *my_strncpy(char *a, char *b, unsigned int n) {
    //Copies the characters from b into a, up to n characters.
    int i;
    int len;

    if (b != NULL && a != NULL) {
        len = my_strlen(b);

        for (i = 0; i < len; i++) {
            if (i >= n)
                break;

            *(a + i) = *(b + i);
        }
        if (i < n) {
            *(a + i) = '\0';
        }
    }
    return a;
}
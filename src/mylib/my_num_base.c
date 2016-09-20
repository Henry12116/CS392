#include "my.h"
void my_num_base(int x, char* s) {
    /*Take 2 values, say my_x_s(9, "RTFM");
     R = 0, T = 1, F = 2, M = 3
     Convert that xber to s 4 (length of "RTFM"). 9 is 21 in s 4. It should print FT because F = 2, T = 1
     The char* is the list of symbols.
     BE PARANOID.
     If char* is NULL, you can assert / blow up.
     If given unary, repeat alphabet letter the specified xber of times.
     REMEMBER NEGATIVES.*/

    if (!s) {
        my_str("NULL");
        return;
    }
    if (*s == NULL) {
        my_str("Empty Set");
        return;
    }
    if (x==0) {
        my_str("0");
        return;
    }

    int len = my_strlen(s);
    if (x < 0) {
        my_char('-');
        x *= -1;
    }

    if (len == 1) {
        int i = 0;
        for (i = 0; i < x; ++i)
            my_char(s[0]);
        return;
    }

    int temp = x, count = 0, rcount = 0, flag = 0;
    while (temp > 0) {
        while (temp > len - 1) {
            temp = temp / len;
            count++;
        }

        if (flag == 0) {
            rcount = count;
            flag = 1;
        }

        while (rcount > count + 1) {
            my_char(s[0]);
            rcount--;
        }

        my_char(s[temp]);
        rcount = count;

        while (count > 0) {
            temp *= len;
            count--;
        }

        x -= temp;
        temp = x;
    }

    while (rcount > 0) {
        my_char(s[0]);
        rcount--;
    }
}

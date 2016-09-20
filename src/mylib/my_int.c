#include "my.h"
void my_int(int i) {
    /*Prints an integer without using recursion. Unfortunatly its not under 10 lines :-(*/
    int place_hldr = 1000000000;
    if (i < 0) {
        my_char('-');
        i = i * -1;}
    if (i == 0)
        my_char('0');
    while (place_hldr >= 1) {
        int digit = (i - (i % place_hldr)) / place_hldr % 10 + 48;
        if (place_hldr <= i)
            my_char(digit);
        place_hldr = place_hldr / 10;}
}
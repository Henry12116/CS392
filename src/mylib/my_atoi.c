#include "my.h"

int my_atoi(char* str) {
	// returns the int equivalent of the ascii string. e.g. "5" => 5
	int i;
	int neg;

	if (str != NULL) {
        while(*str == ' ') {
            str++;
        }

        i = 0;
		neg = 1;
        for ( ; *str && *str != ' ' && (*str == '+' || *str == '-' || (*str <= '9' && *str >= '0')); str++) {
			if (*str == '-') {
				neg *= -1;
			}
            else if (*str <= '9' && *str >= '0') {
				i = (i * 10) + (*str - '0');
			}
		}
		return i * neg;
	}
	return 0;
}
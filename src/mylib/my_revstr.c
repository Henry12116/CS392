#include "my.h"

int my_revstr(char *s) {
	/*Reverse the string, directly in the actual string, without creating a new string.
	 Returns length of the string.*/
	char temp;
	int last = my_strlen(s) - 1, first = 0;

	if (s != NULL && *s != ""){
		while (last >= first){
			temp = s[first];
			s[first] = s[last];
			s[last] = temp;
			first++;
			last--;
		}
	}

	return my_strlen(s);
}
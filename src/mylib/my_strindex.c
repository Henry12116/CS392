#include "my.h"

char *my_strindex(char *a, char b){
	//returns pointer to first instance of b found in string a
	int index = my_find(a, b);
	if(index < 0) return NULL;
	return (char*)(index + a); 
}

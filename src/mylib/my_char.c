#include "my.h"

void my_char(char c){
	if(c != NULL){
    write(1, &c, 1); /* write the contents of c to the file descriptor 1 */
	}
	return;
}

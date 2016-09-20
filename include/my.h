#ifndef MY_H_
#define MY_H_
#ifndef NULL
#define NULL ((void*)0)
#endif

#include <unistd.h>
#include <stdlib.h>

void my_alpha();
void my_char(char c);
void my_digits();
void my_int(int i);
void my_num_base(int x, char* c);
int my_revstr(char* c);
void my_str(char* str);
int my_find(char* str, char l);
int my_strlen(char* str);
int my_rfind(char* str, char l);
char *my_strindex(char *a, char b);
char *my_strrindex(char *a, char b);
char *my_strcat(char *a, char *b); // sticks b onto the end of a, returning a; presupposes a has enough memory for both
int my_strcmp(char *a, char *b); // compares strings lexographically: if a and b are identical, return 0; if a < b lexographically, return negative number; else, return positive number
int my_strncmp(char*a, char *b, unsigned int n); // compares strings up to n chars, lexographically: if a and b are identical, return 0; if a < b lexographically, return negative number; else, return positive number
char *my_strconcat(char *a, char *b); // allocates new memory, puts concatenated strings in that new memory, and returns pointer to it
char *my_strnconcat(char *a, char *b, unsigned int n); // allocates new memory, puts all of a and n chars of b into new memory, and returns pointer to it
char *my_strcpy(char *a, char *b); // copies the characters from b into a (overwriting what's already in there)
char *my_strncpy(char *a, char *b, unsigned int n); // copies the characters from b into a, up to n characters
char *my_strdup(char *x); // allocates memory and copies string into that new memory; returns pointer to it
char *my_vect2str(char **x); // takes an array of strings; allocates a new string, copies each string from the array into new string separated by a single space, until NULL pointer to string is found; returns new string
char **my_str2vect(char *x); // takes a string, allocates a new array of strings, splits apart the input string x at each space character, and returns the newly allocated array of strings
int my_atoi(char*); // returns the int equivalent of the ascii string. e.g. "5" => 5

#endif //my_h
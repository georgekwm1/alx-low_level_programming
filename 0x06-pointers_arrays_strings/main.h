#ifndef HOLBERTON_H_INCLUDED
#define HOLBERTON_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);

#endif

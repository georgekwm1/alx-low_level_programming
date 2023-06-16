#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "main.h"

/**
 * string_nconcat -  concatenates two strings
 * @s1: the string to concatenate
 * @s2: the string to concatenate
 * @n: number of letters in string s2 to print
 *
 * Return: String.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, i = 0;
	char *space;

	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	space = malloc(strlen(s1) + (sizeof(char) * n) + 1);
	strcpy(space, s1);
	j = (unsigned int)strlen(s1);

	while (i < n)
	{
		*(space + j + i) = (*(s2 + i));
		i++;
	}
	*(space + j + i) = '\0';
	return (space);
}

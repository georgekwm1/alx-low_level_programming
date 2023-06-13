#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Write a function that concatenates two strings.
 * @s1: the character to print
 * @s2: the character to print
 *
 * Return: String.
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int count, count2, next;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	concat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	while (count < (int)strlen(s1))
	{
		*(concat + count) = *(s1 + count);
		count++;
	}
	next = count;
	count2 = 0;

	while (next < (strlen(s1) + strlen(s2)))
	{
		*(concat + next) = *(s2 + count2);
		count2++;
		next++;
	}
	*(concat + next + 1) = '\0';
	return (concat);
}

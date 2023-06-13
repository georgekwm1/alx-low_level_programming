#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Write a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string print
 *
 * Return: String.
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	char *strcpy = malloc(sizeof(char) * (strlen(str) + 1));
	int count = 0;

	while (count < strlen(str))
	{
		*(strcpy + count) = *(str + count);
		count++;
	}
	*(strcpy + count + 1) = *(str + count + 1);
	return (strcpy);
}

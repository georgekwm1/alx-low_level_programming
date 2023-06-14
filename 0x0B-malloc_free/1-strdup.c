#include <stdio.h>
#include <string.h>
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
	char *strncpy = malloc(sizeof(char) * (strlen(str) + 1));

	if (str == NULL)
	{
		return ("NULL");
	}

	if (strncpy == NULL)
	{
		return (NULL);
	}
	strcpy(strncpy, str);

	return (strncpy);
}

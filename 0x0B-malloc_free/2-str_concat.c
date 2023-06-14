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

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	concat = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}

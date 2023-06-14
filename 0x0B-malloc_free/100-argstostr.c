#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * argstostr - Write a function that concatenates
 * all the arguments of your program.
 * array of integers.
 * @ac: arguments count.
 * @av: argument.
 *
 * Return: integer.
 */


char *argstostr(int ac, char **av)
{
	int total_length = 0;
	int i, str_size;
	int offset = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]);
	}

	str_size = total_length + ac + 1;

	str = malloc(sizeof(char) * str_size);

	if (str == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < ac; i++)
	{
		strcpy(str + offset, av[i]);
		offset += strlen(av[i]);
		str[offset++] = '\n';
	}
	str[offset] = '\0';

	return (str);
}

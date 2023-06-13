#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * @c: the character to print
 * @size: the size of the memory to print
 *
 * Return: String.
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int count = 0;

	if (size == 0)
	{
		return (NULL);
	}

	s = (char *)malloc(sizeof(char) * (size + 1));

	while (count < size)
	{
		*(s + count) = c;


		count++;
	}
	*(s + count) = '\0';

	return (s);
}

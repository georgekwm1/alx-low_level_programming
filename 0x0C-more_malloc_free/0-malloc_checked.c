#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * malloc_checked - concatenates two strings.
 * @b: memory size to allocated
 *
 * Return: String.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *point;

	point = malloc(b);
	return (point);
	if (point == NULL)
	{
		exit(98);
	}
}

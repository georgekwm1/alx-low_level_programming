#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *ch = (char *) &j;

	return (*ch);
}


#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * *_memset - prints buffer in hexa
 * @s: the address of memory to print
 * @b: constant byte
 * @n: size of memory
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

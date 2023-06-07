#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _puts_recursion -  prints a string, followed by a new line.
 *@s - String
 *
 * Return: The string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	if (*s != '\0')
		_putchar(*s);
	*(s++);
	_puts_recursion(s);
}

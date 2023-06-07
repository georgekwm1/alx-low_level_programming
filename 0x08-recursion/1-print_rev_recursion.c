#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion -  prints a string in reverse.
 *@s - String
 *
 * Return: The string.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}


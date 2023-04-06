#include "main.h"

/**
 * _puts_recursion - Write a function that prints a string, then a new line.
 *@s : Character
 *
 *
 *
 * Return: Always 0.
 */

void _puts_recursion(char *s)
{
if (*s)
{
_putchar(*s);
_puts_recursions(s + 1);
}
else
_putchar('\n');
}

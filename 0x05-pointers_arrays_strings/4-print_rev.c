#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _rev - Returns the length of a string
 * @s : Variable
 *
 * Return: Always 0 (Success)
 */
void _rev(char *s)
{
while (*s != '\0')
{
putchar(*s--);
}
putchar('\n');
}

#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _puts - Returns the length of a string
 * @str : Variable
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str++);
}
putchar('\n');
}

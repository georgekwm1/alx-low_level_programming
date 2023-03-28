#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _rev - Returns the length of a string
 * @s : string
 *
 * Return: 0
 */
void _rev(char *s)
{
int longi = 0;
int o;
while (*s != '\0')
{
longi++;
s++;
}
s--;
for (o = longi; o > 0; o--)
{
putchar(*s);
s--;
}

putchar('\n');
}

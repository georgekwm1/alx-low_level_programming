#include "main.h"
#include <stdio.h>

/**
 * _strcmp - Writes a function that compares two strings.
 *
 * Description: 'the program's description'
 * @s1: 1st String
 * @s2: 2nd String
 *
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
int i;

i = 0;
while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
i++;
}
return (0);
}


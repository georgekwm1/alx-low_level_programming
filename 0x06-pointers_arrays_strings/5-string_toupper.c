#include "main.h"
#include <stdio.h>

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase.
 *
 * Description: 'the program's description'
 * @n: source pointer
 * @: destination pointer
 *
 * Return: n
 */
char *string_toupper(char *n)
{
int i;

i = 0;
while (n[i] != '\0')
{
if (n[i] >= 'a' && n[i] <= 'z')
n[i] = n[i] - 32;
i++;
}
return (n);
}


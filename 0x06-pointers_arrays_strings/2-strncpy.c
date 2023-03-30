#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - Writes a function that copies a string.
 *
 * Description: 'the program's description'
 * @src: source pointer
 * @dest: destination pointer
 * @n: integer
 *
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
dest = (char *)malloc(sizeof(char) * (n+1));
strcpy(dest, src);
free(dest);
return (0);

}

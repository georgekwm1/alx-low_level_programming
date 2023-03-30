#include "main.h"
#include <stdio.h>

/**
 * *_strncat - Write a function that concatenates two strings.
 *
 * Description: 'the program's description'
 * @src: source pointer
 * @dest: destination pointer
 * @n: integer
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
*src = malloc(sizeof(char) + (n + 1));
strcat(dest, src);
free(src);
return (dest);

}

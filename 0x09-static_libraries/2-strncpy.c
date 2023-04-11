#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - Write a function that concatenates two strings.
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

strncpy(dest, src, n);
return (dest);
}

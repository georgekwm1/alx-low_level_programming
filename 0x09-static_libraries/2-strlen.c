#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - Returns the length of a string
 * @s : Variable
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
	longi++;
	s++;
	}

	return (longi);
}

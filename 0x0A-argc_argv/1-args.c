#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - print arguments
 *@argc : argument count
 *@argv : argument array
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int count = 1;

	while (count <= argc)
	{
		count++;
		if (count == argc)
		{
			printf("%d\n", count);
		}
	}
	return (0);
}

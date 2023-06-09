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

int main(int argc, char *argv[])
{
	int count = 1;
	while (count < argc)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);
}

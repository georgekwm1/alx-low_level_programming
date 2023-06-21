#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "3-calc.h"

/**
 * main - print arguments
 *@argc : argument count
 *@argv : argument array
 * Return: always 0
 */

int main(int argc, char *argv[])
{

	int action;
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{

		printf("Error\n");
		return (100);

	}

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	action = get_op_func(argv[2])(a, b);

	printf("%d\n", action);
	return (0);
}


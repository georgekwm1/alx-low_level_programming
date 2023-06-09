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
	int addtn = 0;
	int count = 0;
	long int num;
	char *i, *j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	else
	{

		while (count < argc - 1)
		{

			i = (argv[count + 1]);
			num = strtol(i, &j, 10);

			if (*j != '\0')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				addtn = addtn + (int)num;
				count++;
			}
		}
		printf("%d\n", addtn);
	}

	return (0);
}


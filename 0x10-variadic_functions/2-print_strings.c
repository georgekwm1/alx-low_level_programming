#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - check if a number is equal to 98
 * @separator: separator
 * @n: number of variables
 *
 * Return: Nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;

	va_list nameList;

	va_start(nameList, n);

	while (count < n)
	{
		char *name = va_arg(nameList, char*);

		if (separator == NULL)
		{
			printf("%s ", name);
		}


		else
		{
			if (count < n - 1)
			{
				printf("%s%s", name, separator);
			}
			if (count == n - 1)
			{
				printf("%s", name);
			}
		}
		count++;
	}
	va_end(nameList);
	printf("\n");
}

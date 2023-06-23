#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - check if a number is equal to 98
 * @separator: separator
 * @n: number of variables
 *
 * Return: 0 if false, something else otherwise.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int count = 0;

	va_list nameList;

	va_start(nameList, n);

	while (count < n)
	{
		int num = va_arg(nameList, int);

		if (separator == NULL)
		{
			printf("%d", num);
		}
		else
		{
			if (count < n - 1)
			{
				printf("%d%s", num, separator);
			}
			if (count == n - 1)
			{
				printf("%d", num);
			}
		}
		count++;
	}
	va_end(nameList);
	printf("\n");
}

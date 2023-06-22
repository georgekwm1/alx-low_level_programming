#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check if a number is equal to 98
 * @n: number of variables
 *
 * Return: Integer.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int count;
	int addAll;

	va_list addtn;

	va_start(addtn, n);

	count = 0;

	addAll = 0;

	if (n == 0)
	{
		return (0);
	}


	while (count < n)
	{
		addAll += va_arg(addtn, int);
		count++;

	}

	va_end(addtn);
	return (addAll);


}

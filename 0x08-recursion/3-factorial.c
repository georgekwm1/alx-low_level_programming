#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 *@n: integer
 *
 * Return: The integer.
 */

int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	if (n <= 0)
	{
		return (-1);
	}
	n * factorial(n - 1);
}


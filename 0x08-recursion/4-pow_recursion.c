#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _pow_recursion - Write a function that returns the value of x raised to the power of y
 *@x: integer
 *@y: power
 *
 * Return: The integer.
 */

int _pow_recursion(int x, int y)
{
	int newX;
	if (y == 0)
	{
		return (1);
	}

	if (y < 0)
	{
		return (-1);
	}

	newX = x * 1;
	y--;
	return (newX * _pow_recursion(x, y));
}


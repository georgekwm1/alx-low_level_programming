#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  executes a function given as a
 *  parameter on each element of an array.
 * @array: array
 * @size: array size
 * @cmp: pointer to the function
 *
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (size == 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		int i = 0;

		while (i < size)
		{
			cmp(array[i]);
			i++;
			if (cmp(array[i]))
				return (i);
		}
	}
	return (0);
}

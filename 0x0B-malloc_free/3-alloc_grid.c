#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * **alloc_grid - Write a function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: the width of array.
 * @height: the height of array.
 *
 * Return: integer.
 */

int **alloc_grid(int width, int height)
{
	int **matric, counti, countj;

	matric = (int **)malloc(sizeof(int *) * height);
	counti = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}


	while (counti < height)
	{
		matric[counti] = (int *)malloc(sizeof(int) * width);
		countj = 0;
		while (countj < width)
		{

			matric[counti][countj] = 0;

			countj++;
		}
		counti++;

	}

	return (matric);
}

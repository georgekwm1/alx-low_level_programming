#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search -  function that searches for a value in a sorted array of integers
 *  using the Binary search algorithm
 *
 * @size:  number of elements
 * @array: pointer to the first element of the array to search in
 * @value:  value to search for
 * Return: i if successful 0 if not
 */

int binary_search(int *array, size_t size, int value)
{

	size_t i, left = 0, right = size - 1, mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");

		for (i = left; i < right; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		mid = (left + right) / 2;
		
    		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;

		else
			right = mid - 1;
    }
	return (-1);
}

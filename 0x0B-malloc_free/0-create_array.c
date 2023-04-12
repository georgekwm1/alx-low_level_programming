#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
char *array = malloc(size * sizeof(char));
unsigned int i = 0;

if (size == 0)
{
printf("failed to allocate memory");
return (NULL);
}
if (array == NULL)
return (NULL);

while (i < size)
{
array[i] = c;
i++;

}
return (array);
free(array);
}

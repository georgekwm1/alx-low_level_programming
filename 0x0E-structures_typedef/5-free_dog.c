#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - frees dog'
 *@d : pointer
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	free(d);
}

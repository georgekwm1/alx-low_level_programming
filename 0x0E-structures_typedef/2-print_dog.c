#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code
 *@d : dog pointer
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if ((*d).name == NULL)
	{
		printf("nil");
	}

	if ((*d).owner == NULL)
	{
		printf("nil");
	}
	if (d == NULL)
	{

	}
	else{
		printf("Name: %s\n", (*d).name);
		printf("Age: %f\n", (*d).age);
		printf("Owner: %s", (*d).owner);
	}
}

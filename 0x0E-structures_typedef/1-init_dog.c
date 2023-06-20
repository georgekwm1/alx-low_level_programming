#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d : pointer
 * @name : dog's name
 * @age : dog's age
 * @owner : dog's owner
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog major;
	major.name = name;
	major.age = age;
	major.owner = owner;
	*d = major;
}

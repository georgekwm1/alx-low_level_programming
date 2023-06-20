#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"


/**
 * init_dog - creates a new dog.
 * @name : dog's name
 * @age : dog's age
 * @owner : dog's owner
 * Return: dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *anthDog = malloc(sizeof(dog_t));

	anthDog->name = strdup(name);
	anthDog->owner = strdup(owner);

	anthDog->age = age;

	return anthDog;

}

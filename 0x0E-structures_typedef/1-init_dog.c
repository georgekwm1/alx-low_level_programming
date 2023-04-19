#include <stdio.h>
#include "dog.h"

/**
 * init_dog - writes a function that initializes var of type struct dog
 *
 * @d: structure pointer
 * @name: describe the parameter
 * @age: age
 * @owner: char
 *
 * Return: Always 0 (Success)
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;

}

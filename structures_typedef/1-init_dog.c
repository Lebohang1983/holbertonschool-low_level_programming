#include "dog.h"
#include <stddef.h>
/**
 * init_dog - function that initialises a variable of type struct dog
 * @d: pointer to the variable struct dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


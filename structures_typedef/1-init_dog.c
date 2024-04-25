#include "dog.h"

/**
 * init_dog - function that initialises a variable of type struct dog
 * *d: pointer to the variable struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog user;

	d = user;
	user->name = "Poppy";
	user->age = 3.5;
	user->owner = "Bob";
}


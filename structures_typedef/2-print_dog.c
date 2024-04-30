#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog - funtion that prints struct dog
 * @d: pointer to the variable struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("NULL ponter\n");
		return;
	}

	if(Name == NULL || Age == NULL || Owner == NULL)
	{
		printf("Name: (nil)\n")
		printf("Age: (nil)\n")
		printf("Owner: (nil)\n")
	}

	printf("Name: %s\n", d->name);
	printf("Age; %f\n", d->age);
	printf("Owner: %s\n",d->owner);

}

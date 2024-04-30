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
	d->name;
	d->age;
	d->owner;

	if(name == NULL || age == NULL || owner == NULL)
	{
		printf("name: (nil)\n");
		printf("age: (nil)\n");
		printf("owner: (nil)\n");
	}

	printf("Name: %s\n", d->name);
	printf("Age; %f\n", d->age);
	printf("Owner: %s\n",d->owner);

}

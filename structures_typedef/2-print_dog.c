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
		return;
	}
	if (d->name == NULL)
	{
		 printf("name: (nil)\n");
		 printf("age; %f\n", d->age);
        	 printf("owner: %s\n",d->owner);
	}

	if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
                printf("Age; %f\n", d->age);
		printf("owner: (nil)\n");
	
	}
	
	if (d->age < 0)

	{
		
                printf("Name: %s\n", d->name);
		printf("age: (nil)\n");
		printf("Owner: %s\n",d->owner);
	}
	else {
		printf("Name: %s\n", d->name);
        	printf("Age; %f\n", d->age);
       		printf("Owner: %s\n",d->owner);
	}

	
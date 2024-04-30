#include "dog.h"
#include <stdlib.h>
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
		 printf("Name: (nil)\n");
		 printf("Age; %f\n", d->age);
        	 printf("Owner: %s\n",d->owner);
		
	}

	if (d->age < 0)

        {

                printf("Name: %s\n", d->name);
                printf("Age: (nil)\n");
                printf("Owner: %s\n",d->owner);
                
        }

	if (d->owner == NULL)
	{
		printf("Name: %s\n", d->name);
                printf("Age; %f\n", d->age);
		printf("Owner: (nil)\n");
		
	}
	else 
	{
		printf("Name: %s\n", d->name);
        	printf("Age; %f\n", d->age);
       		printf("Owner: %s\n",d->owner);
	}
}
	
	

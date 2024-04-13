#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - fuction that allocates memory
 * @b: size of memory to allocate.
 * Return: pointer to memory, Else if return exit status 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}


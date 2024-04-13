#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/** 
 *void *malloc_checked- function that allocates memory
 *@ptr- returned pointer
 *@i- size of string
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


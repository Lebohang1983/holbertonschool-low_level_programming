#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/** 
 *void *malloc_checked- function that allocates memory
 *@ptr- returned pointer
 *@i- size of string
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == Null)
	       exit 98;
	_putchar(ptr);
	free(ptr);

}

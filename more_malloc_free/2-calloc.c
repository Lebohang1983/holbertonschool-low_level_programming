#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *void *_calloc- allocates memory for an array
 *@nmemb: number of elements in the array to be allocated memory
 * @i: size of array
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
   unsighned int i;
   unsigned int *ptr;

   if (nmemb == 0 || i == 0)
	   return (NULL);
   ptr = malloc(nmemb * size);
   if (ptr == NULL)
	   return (NULL);
   for (i = 0; i < nmemb; i++)
   return (ptr);
}
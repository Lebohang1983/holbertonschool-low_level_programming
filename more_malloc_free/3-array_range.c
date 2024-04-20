#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *int *array_range: Creates an array of intergers
 *@min: all minimum values
 *@max: all maximum values
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int size = max - min + 1;
	int *ptr = malloc(size * sizeof(int));

	if (min > max)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (int i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	
	}
	return (ptr);
}

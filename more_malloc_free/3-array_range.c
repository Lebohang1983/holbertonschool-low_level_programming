#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - creates an array of intergers
 *@min: all minimum values
 *@max: all maximum values
 *Return: integer
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
	{
		ptr[i] = min;
	}
	return (ptr);
}

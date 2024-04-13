#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat- function that concatenates two strings
 * @s1: character to be concatenated
 * @s2: character to be concatenated
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	if (n >= sizeof(s2))
	{
		ptr = malloc(sizeof(s1) + sizeof(s2) + 1);
	}
	else 
	{
		ptr = malloc(sizeof(s1) + ((sizeof(char) * n)) + 1);
	}

	if (ptr == NULL)
	{
		return (NULL);
	}

	return (0);
}


#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *string_nconcat- function that concatenates two strings
 * @s1: character to be concatenated
 * @s2: character to be concatenated
 * @n: amount of s2 to copy
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, a, b;

	a = b = 0;
	if (s1)
		for (; s1[a]; a++)
			;
	if (s2)
		for (; s2[b]; b++)
			;
	if (!(n >= b))
		b = n;

	str = malloc(sizeof(char) * (a + b) + 1);
	if (!str)
		return (NULL);

	for (i = 0; i < (a + b); i++)
	{
		if (i < a)
			str[i] = s1[i];
		else
			str[i] = s2[i - a];
	}

	str[i] = '\0';

	return (str);
}

#include "main.h"

/**
  * rev_string - reverse a string.
  * @s: string to reverse
  * return: void
  */

void rev_string(char *s)
{
	int a, b, c;
	char h;

	for (a = 0; s[a] != '\0'; a++)
		;
	c = a;
	for (a--, b = 0; b < c / 2; a--, b++)
	{
		h = s[b];
		s[b] = s[a];
		s[a] = h;
	}
}

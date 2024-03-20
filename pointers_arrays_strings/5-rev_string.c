#include "main.h"

/**
  * rev_string - reverse a string.
  * @s: string to reverse
  */

void rev_string(char *s)
{
	int start;
	int end = 0;

	while (*s)
	{
		end++;
	}
	end -= 1;
	start = 0;
	while (*s)
	{
		start++;
		end--;
	}
}


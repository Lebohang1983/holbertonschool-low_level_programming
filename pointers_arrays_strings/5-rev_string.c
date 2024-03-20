#include "main.h"

/**
  * rev_string - reverse a string.
  * @s: string to reverse
  */

void rev_string(char *s)
{
	int start;
	char *temp;
	int end = 0;

	while (*s)
	{
		end++;
	}
	end -= 1;
	start = 0;
	while (*s)
	{
		temp[start] = s[start];
		s[start] = temp[end];
		start++;
		end--;
	}
}


#include "main.h"

/**
  * rev_string - reverse a string.
  * @s: string to reverse
  */
void rev_string(char *s)
{
	char *temp;
	int end = 0;
	int start;
	while (*s)
	{
		end++;
	}
	end -= 1;
	start = 0;
	while (*s)
	{
		temp[start] = s[end];
		end--;
		start++;
	}
}

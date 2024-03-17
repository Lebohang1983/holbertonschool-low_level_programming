#include "main.h"

/*
 * print_rev - print a string in reverse followed by a new line
 * @s:pointer char
 * return:void
 */
void print_rev(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	n = i - 1;
	for (i = n; i >= 0 ; i--)
	{
		print_rev(s[i]);
	}
print_rev('\n');
return;
}

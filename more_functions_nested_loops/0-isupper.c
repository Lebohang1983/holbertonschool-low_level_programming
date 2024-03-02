#include "main.h"

/**
 *_isupper - Checks for uppercase
 *@c: char variable
 *Returns: 1 if c is uppercase and 0 otherwise
 *Decription: Return is not void
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

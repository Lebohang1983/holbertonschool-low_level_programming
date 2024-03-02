#include "main.h"

/**
 *_isupper - Checks for uppercase
 *@c: char variable
 *Returns: 1 if c is uppercase and 0 otherwise
 *Decription - End of loop at 1 for uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

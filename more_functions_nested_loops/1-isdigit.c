#include "main.h"

/**
 *_isdigit - Checks for a digit
 *@c: char variable
 *Returns: 1 if c is a digit and 0 otherwise
 *Decription: Return is not void
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

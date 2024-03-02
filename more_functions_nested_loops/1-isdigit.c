#include "main.h"

/**
 *_isdigit - Checks for a digit
 *@c: char variable
 *Return value of '_isdigit': 1 if c is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

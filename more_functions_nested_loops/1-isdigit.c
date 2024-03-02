#include "main.h"

/**
 *_isdigit - Checks for a digit 
 *@c: char character
 *Return: value to be returned
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

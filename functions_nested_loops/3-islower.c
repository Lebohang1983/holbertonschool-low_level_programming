#include "main.h"
/**
 * _islower - check if the given character is lower case
 * @c: integer returned if character is lowercase.
 * Return: 1 (True) else 0 (False)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}

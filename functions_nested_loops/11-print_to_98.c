#include "main.h"

/**
 * print_to_98 - count the natural numbers from n to 98.
 * @n: value to count from.
 */
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		_putchar("98");
	}
	else if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			_putchar("%d", i);
			if (i < 98)
				_putchar(", ");
		}
	}
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			_putchar("%d", i);
			if (i > 98)
				_putchar(", ");
		}
	}
	_putchar("\n");
}

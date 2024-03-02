#include "main.h"

/**
 *print_numbers - Function that prints numbers
 *Return: void
 */
void print_numbers(void)
{
	int Num;

	for (Num = 0; Num <= 9; Num++)
	{
		_putchar(Num  + '0');
	}
	_putchar('\n');
}

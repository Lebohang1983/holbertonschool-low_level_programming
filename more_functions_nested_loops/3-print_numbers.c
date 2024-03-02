#include "main.h"

/**
 *print numbers - Function that prints numbers from 0 to 9, followed by a new line
 *Return: void
 */
void print_numbers(void)
{
	int Num;

	for ( Num >= '0'; Num <= '9'; Num++)
	       _putchar(Num);
	_putchar('\n');
}

#include "main.h"

/**
 * _puts - minic the stdio version of puts
 * @str: the value to process to the stdout.
 */
void _puts(char *str)
{
        int i
	for (i = 0; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}

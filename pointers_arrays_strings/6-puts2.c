#include "main.h"

/**
  * puts2 - function that prints every character of a string
  * @str: string characters to print starting from the first character
  * return: void
  */

void puts2(char *str)
{
	int i ;
	
	for (i = 0; str[i] != '\0'; i++)
	  {
		 _putchar(str);
	  }
}

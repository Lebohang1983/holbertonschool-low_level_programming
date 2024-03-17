#ifndef MAIN_H
#define MAIN_H
 /**
  * reset_to_98 - set a pointer to 98.
  * @n: pointer to change
  */
void reset_to_98(int *n);

/**
 * swap_int - a function that swaps the values of two integers
 * @a: one of two points to be swaped
 * @b: two of two points to be swapped
 */
void swap_int(int *a, int *b);

/**
  * _strlen - return the lenth of the string as an int value
  * @s: the string to measure.
  * Return: Int value of the lenth.
  */
int _strlen(char *s);

/**
 * _puts - minic the stdio version of puts
 * @str: the value to process to the stdout.
 */
void _puts(char *str);

/**
 * print_rev - minic the stdio version of puts
 * @s: the value to process to the stdout in reverse.
 */
void print_rev(char *s);

#endif

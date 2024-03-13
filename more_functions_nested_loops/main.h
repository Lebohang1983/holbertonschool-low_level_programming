#ifndef MAIN
#define MAIN
/**
 * _isupper - Function that checks for uppercase character
 * @c: variable of type char
 * Return: 1 if c is uppercase and 0 otherwise
 * Decription: return is not void
 */
int _isupper(int c);

/**
 * _isdigit - Function that checks for a digit
 * @c: variable of type char
 * Return: 1 if c is digit and 0 otherwise
 * Decription: return is not void
 */
int _isdigit(int c);

/**
 * mul - Function that multiplies two integers
 * @d: variable of type int
 * Return: product of two integers
 */
int mul(int a, int b);

/**
 * print_numbers - Function that prints numbers followed by a new line
 * @d: variable of type int
 * Return: void
 */
void print_numbers(void);

/**
 * _putchar - Function that prints characters
 * @c: variable of type char
 */

int _putchar(char c);

/**
 * print_most_numbers - prints 0 to 9 excluding 2 and 4
 */
void print_most_numbers(void);

/**
 * more_numbers - prints 0 to 14 on one line ten times.
 */
void more_numbers(void);

/**
 * print_line - prints a line to a given lenght.
 * @n: length of the line.
 */
void print_line(int n);

/**
 * print_diagonal - print a diagonal line to a given lenth.
 * @n: length to print to.
 */
void print_diagonal(int n);

/**
 * print_square - print a square to a given size.
 * @size: size square to print
 */
void print_square(int size);

/**
 * main - Entry point
 * Return: always 0 (sucess)
 */
void print_triangle(int size);

  /*
 * int i: for iteration in for loop also use as a way to subtract.
 * int margin: will recored the amount of whitesapce ill need to print.
 * int dis"tance": is used to offset size.
 * int to_print: is used to tell how many '#' will need to be print per-line
 */

  /*
 * we set the margin to Zero every iteration. since we're try to only print
 * the right amount of white space. we do some math to dis to set the stopping
 * point
 */

#endif

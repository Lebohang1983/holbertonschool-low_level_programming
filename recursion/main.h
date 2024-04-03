#ifndef MAIN_H
#define MAIN_H
/**
 * _puts_recursion - prints a string follow by a new line. recursively.
 * @s: string in which to print.
 * Return: Nothing
 */
void _puts_recursion(char *s);
int _putchar(char c);

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s: string to print in reverse.
 * Return: Nothing
 */
void _print_rev_recursion(char *s);

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string to measure.
 * Return: Length of the string as INT.
 */
int _strlen_recursion(char *s);

/**
 * factorial - desciption
 * @n: number to find the factorial for.
 * Return: Factorial (INT)
 */
int factorial(int n);


/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: value to be manipulated.
 * @y: manipulator
 * Return: Sum as Int
 */

int _pow_recursion(int x, int y);

/**                                                                            
 * sqrt_rec_odd - helper to deal with odd numbers and primes         
 * @start: the odd or prime number to check for sqrt.                          
 * @n: number to find the square root of.                                 
 * Return: the sqrt as a Int.           
 */

int sqrt_rec_odd(int start, int n);
/**
 * _sqrt_recursion - find the square root of a given number.
 * @n: number to find the square root of.
 * Return: the sqrt as a Int.
 */

int _sqrt_recursion(int n);

/**
 * prime_number - help fuction function for is_prime_number.
 * @n: Original number to be tested.
 * @i: Original number to test with.
 * Return: 1 if a Prime else 0
 */
int prime_number(int n, int i);

/**
 * is_prime_number - fuction the check if a number is a prime.
 * @n: number to be tested.
 * Return: 1 if a Prime else 0
 */
int is_prime_number(int n);

#endif

#ifndef MAIN_H
#define MAIN_H

/**
 *prints a variable
 *c is the variable
 */
int _putchar(char c);

/**
 *prints the alphabet in lowercase followed by a new line
 *c is the variable that contains the lower case alphabet
 */
void print_alphabet(void);

/**
 *prints 10 times the alphabet in lowercase followed by a new line
 *c is the variable that contains the lower case alphabet
 *i is the interger that shows the number of times the alphabet will be printed
 */
void print_alphabet_x10(void);

/**
 * _islower - check if the given character is lower case.
 * @c: integer returned if character is lowercase.
 * Return: 1 if character is lowercase and 0 otherwise
 */
int _islower(int c);

/**                       
 * _isalpha - checks for alphabetic character                                                                      
 * @c: integer returned if character is letter,lowercase or uppercase
 * Return: 1 if character is a letter,lowercase or uppercase and 0 otherwise
 */
int _isalpha(int c);

/**
 * print_sign - prints the sign of the given number +/-
 * @n: Number to be tested
 * Return: 1 if positive and greater than zero, 0 if is Zero, and -1 if neg.
 */
int print_sign(int n);

#endif

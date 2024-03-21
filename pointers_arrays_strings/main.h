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
  * _puts - Prints a string                                                               
  * @str: The string to print                                                             
  * Return: void
  */
void _puts(char *str);
int _putchar(char c);

/**
  * print_rev - Prints a string in reverse
  * @s: The string to print
  * Return: void 
  */
void print_rev(char *s);   
 
/**
  * rev_string - reverse a string.
  * @s: string to reverse
  * Return = void
  */
void rev_string(char *s);

#include "main.h"

/**  
  * puts2 - function that prints every other character
  * @str: string characters to print starting from the first character
  * return: void
  */
void puts2(char *str)

#endif

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

/**                                                                                       
 * puts2 - every other char
 * @str: string to process
 */
void puts2(char *str);

/**
 * print_array - prints an aray a number of times.
 * @a: an array.
 * @n: the number of elements to print.
 */
void print_array(int *a, int n);


/**
 * _strcpy - fuction copies the string pointed
 * @dest: pointer to copy the string to.
 * @src: the string to copy to the destination.
 * Return: a copy of the src.
 */
char *_strcpy(char *dest, char *src);

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value of the converted string.
 */
int _atoi(char *s);

/**
 * _strcat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 * Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @dest.
 * @n: copy up to poistion 'n'
 * Return: a pointer to @dest
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - this fuction will concatenates two strings
 * @dest: the string that will modified.
 * @src: the string that ill be concatenated to @des.
 * @n: how much to copy from src into dest.
 * Return: a pointer to @des
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compare to strings
 * @s1: the string to compare agenst.
 * @s2: the string to compare.
 * Return: a int value.
 */
int _strcmp(char *s1, char *s2);

#endif

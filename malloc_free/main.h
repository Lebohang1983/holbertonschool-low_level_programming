#ifndef MAIN_H
#define MAIN_H

/**
 * create_array - creates an array of a spacific size and fill with a char.
 * @size : the Size of the array to make.
 * @c: characture to fill the array with.
 * Return: An array of charactures.
 */
char *create_array(unsigned int size, char c);

/**
 * _strdup - function that returns a pointer to a newly allocated string.
 * @str: string to allocate memory for.
 * Return: Pointer to string in memory.
 */
char *_strdup(char *str);

#endif
